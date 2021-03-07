/*
 * Copyright (C) 2015 Hua Shao <nossiac@163.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License version 2.1
 * as published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <sys/mount.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <asm/byteorder.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <mtd/mtd-user.h>

#include "libfstools.h"

#include "volume.h"

#define PATH_MAX		256

struct emmc_priv {
	int	fd;
	int	idx;
	char *chr;
};

static struct driver emmc_driver;

static int emmc_open(const char * partition)
{
	int flags = O_RDWR | O_SYNC;

	return open(partition, flags);
}

static void emmc_partition_close(struct volume *v)
{
	struct emmc_priv *p = (struct emmc_priv*) v->priv;

    //fprintf(stderr, "%s(%s)\n", __FUNCTION__, v->name);
	if (!p->fd)
		return;

	close(p->fd);
	p->fd = 0;
}

static int emmc_partition_load(struct volume *v)
{
	struct emmc_priv *p = (struct emmc_priv*) v->priv;

    //fprintf(stderr, "%s(%s)\n", __FUNCTION__, v->name);
	if (p->fd)
		return 0;

	p->fd = emmc_open(p->chr);
	if (p->fd < 0) {
		p->fd = 0;
		//fprintf(stderr, "Could not open emmc device: %s\n", p->chr);
		return -1;
	}

	v->size = 0; // TODO
	v->block_size = -1; // TODO
    v->type = EMMC;

	return 0;
}


static int emmc_partition_find(struct volume *v, char *name)
{
	struct emmc_priv *p;

    //fprintf(stderr, "%s(%p, %s)\n", __FUNCTION__, v, name);
	p = calloc(1, sizeof(struct emmc_priv));
	if (!p)
		return -1;

	p->idx = -1;
	p->chr = name;

	v->priv = p;
	v->name = strdup(name);
	v->drv = &emmc_driver;
	v->blk = name;

	if (emmc_partition_load(v)) {
		//fprintf(stderr, "reading %s failed\n", v->name);
		return -1;
	}

	return 0;
}

static int emmc_partition_identify(struct volume *v)
{
	struct emmc_priv *p = (struct emmc_priv*) v->priv;
	__u32 deadc0de;
	__u16 ext4;
	size_t sz;

    //fprintf(stderr, "%s(%s)\n", __FUNCTION__, v->name);
	if (emmc_partition_load(v)) {
		//fprintf(stderr, "reading %s failed\n", v->name);
		return -1;
	}

	sz = read(p->fd, &deadc0de, sizeof(deadc0de));

	if (sz != sizeof(deadc0de)) {
		fprintf(stderr, "reading %s failed: %s\n", v->name, strerror(errno));
		return -1;
	}

	deadc0de = __be32_to_cpu(deadc0de);
	if (deadc0de == 0xdeadc0de) {
		fprintf(stderr, "ext4 is not ready - marker found\n");
		return FS_DEADCODE;
	}

    /* 0x400 -> super block offset in partition
       0x38  -> magic offset in superblock
     */
    lseek(p->fd, 0x438, SEEK_SET);
	sz = read(p->fd, &deadc0de, sizeof(deadc0de));
	if (sz != sizeof(deadc0de)) {
		fprintf(stderr, "reading %s failed: %s\n", v->name, strerror(errno));
		return -1;
	}

	ext4 = __be16_to_cpu(deadc0de >> 16);
	if (ext4 == 0x53EF) {
		fprintf(stderr, "ext4 is ready\n");
		return FS_EXT4;
	}

	fprintf(stderr, "No ext4 magic was found\n");

	return FS_NONE;
}

static int emmc_partition_erase(struct volume *v, int offset, int len)
{
    //fprintf(stderr, "%s(%s, %d, %d)\n", __FUNCTION__, v->name, offset, len);
	return 0;
}

static int emmc_partition_erase_all(struct volume *v)
{
	emmc_partition_erase(v, 0, v->size);
	emmc_partition_close(v);

	return 0;
}

static int emmc_partition_init(struct volume *v)
{
    //fprintf(stderr, "%s(%s)\n", __FUNCTION__, v->name);
	return 0;
}

static int emmc_partition_read(struct volume *v, void *buf, int offset, int length)
{
	struct emmc_priv *p = (struct emmc_priv*) v->priv;

    //fprintf(stderr, "%s(%s, %p, %d, %d)\n", __FUNCTION__, v->name, buf, offset, length);
	if (emmc_partition_load(v))
		return -1;

	if (lseek(p->fd, offset, SEEK_SET) == (off_t) -1) {
		fprintf(stderr, "lseek/read failed\n");
		return -1;
	}

	if (read(p->fd, buf, length) == -1) {
		fprintf(stderr, "read failed\n");
		return -1;
	}

	return 0;
}

static int emmc_partition_write(struct volume *v, void *buf, int offset, int length)
{
	struct emmc_priv *p = (struct emmc_priv*) v->priv;

    //fprintf(stderr, "%s(%s, %p, %d, %d)\n", __FUNCTION__, v->name, buf, offset, length);
	if (emmc_partition_load(v))
		return -1;

	if (lseek(p->fd, offset, SEEK_SET) == (off_t) -1) {
		fprintf(stderr, "lseek/write failed at offset %d\n", offset);
		perror("lseek");
		return -1;
	}

	if (write(p->fd, buf, length) == -1) {
		fprintf(stderr, "write failed\n");
		return -1;
	}

	return 0;
}

static struct driver emmc_driver = {
	.name = "emmc",
	.find = emmc_partition_find,
	.init = emmc_partition_init,
	.erase = emmc_partition_erase,
	.erase_all = emmc_partition_erase_all,
	.read = emmc_partition_read,
	.write = emmc_partition_write,
	.identify = emmc_partition_identify,
};
DRIVER(emmc_driver);
