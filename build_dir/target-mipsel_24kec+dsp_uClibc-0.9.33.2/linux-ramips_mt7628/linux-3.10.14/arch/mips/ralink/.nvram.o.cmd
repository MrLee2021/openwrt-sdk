cmd_arch/mips/ralink/nvram.o := mipsel-openwrt-linux-uclibc-gcc -Wp,-MD,arch/mips/ralink/.nvram.o.d  -nostdinc -isystem /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include -I/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include -Iarch/mips/include/generated  -Iinclude -I/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi -Iarch/mips/include/generated/uapi -I/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi -Iinclude/generated/uapi -include /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/linux/kconfig.h -D__KERNEL__ -DVMLINUX_LOAD_ADDRESS=0xffffffff80000000 -DDATAOFFSET=0 -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized -mno-check-zero-division -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -msoft-float -ffreestanding -march=mips32r2 -Wa,-mips32r2 -Wa,--trap -I/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/mach-ralink -I/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/mach-generic -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO -Werror -Werror    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(nvram)"  -D"KBUILD_MODNAME=KBUILD_STR(nvram)" -c -o arch/mips/ralink/nvram.o arch/mips/ralink/nvram.c

source_arch/mips/ralink/nvram.o := arch/mips/ralink/nvram.c

deps_arch/mips/ralink/nvram.o := \
    $(wildcard include/config/devfs/fs.h) \
    $(wildcard include/config/config/shrink.h) \
    $(wildcard include/config/shrink.h) \
    $(wildcard include/config/arch/mt7623.h) \
    $(wildcard include/config/dual/image.h) \
    $(wildcard include/config/extend/nvram.h) \
    $(wildcard include/config/wapi/support.h) \
  include/generated/uapi/linux/version.h \
  include/linux/autoconf.h \
  include/linux/../generated/autoconf.h \
    $(wildcard include/config/scsi/dma.h) \
    $(wildcard include/config/rt2880/rootfs/in/flash.h) \
    $(wildcard include/config/serial/8250/rt288x.h) \
    $(wildcard include/config/ip/nf/target/redirect.h) \
    $(wildcard include/config/crc32.h) \
    $(wildcard include/config/vlan/8021q.h) \
    $(wildcard include/config/ip/multiple/tables.h) \
    $(wildcard include/config/inotify/user.h) \
    $(wildcard include/config/network/filesystems.h) \
    $(wildcard include/config/arch/suspend/possible.h) \
    $(wildcard include/config/inline/write/unlock/irq.h) \
    $(wildcard include/config/ssb/possible.h) \
    $(wildcard include/config/mtd/cmdline/parts.h) \
    $(wildcard include/config/usb/ohci/little/endian.h) \
    $(wildcard include/config/fsnotify.h) \
    $(wildcard include/config/stp.h) \
    $(wildcard include/config/arch/flatmem/enable.h) \
    $(wildcard include/config/inet6/tunnel.h) \
    $(wildcard include/config/crypto/manager/disable/tests.h) \
    $(wildcard include/config/arch/want/ipc/parse/version.h) \
    $(wildcard include/config/generic/smp/idle/thread.h) \
    $(wildcard include/config/default/security/dac.h) \
    $(wildcard include/config/fib/rules.h) \
    $(wildcard include/config/ip6/nf/mangle.h) \
    $(wildcard include/config/ipv6.h) \
    $(wildcard include/config/crypto/aead.h) \
    $(wildcard include/config/bql.h) \
    $(wildcard include/config/default/tcp/cong.h) \
    $(wildcard include/config/uevent/helper/path.h) \
    $(wildcard include/config/ip6/nf/target/reject.h) \
    $(wildcard include/config/wan/at/p4.h) \
    $(wildcard include/config/wlan.h) \
    $(wildcard include/config/default/message/loglevel.h) \
    $(wildcard include/config/ralink/ram/size.h) \
    $(wildcard include/config/legacy/ptys.h) \
    $(wildcard include/config/xfrm/ipcomp.h) \
    $(wildcard include/config/crypto/rng2.h) \
    $(wildcard include/config/tun.h) \
    $(wildcard include/config/cfg80211.h) \
    $(wildcard include/config/serial/8250.h) \
    $(wildcard include/config/usb.h) \
    $(wildcard include/config/crypto/hmac.h) \
    $(wildcard include/config/ethernet.h) \
    $(wildcard include/config/sched/omit/frame/pointer.h) \
    $(wildcard include/config/mips/mt/disabled.h) \
    $(wildcard include/config/dql.h) \
    $(wildcard include/config/mtd/split/firmware.h) \
    $(wildcard include/config/coredump.h) \
    $(wildcard include/config/jffs2/compression/options.h) \
    $(wildcard include/config/bcma/possible.h) \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/modules/use/elf/rel.h) \
    $(wildcard include/config/net/ipgre/demux.h) \
    $(wildcard include/config/rt/3052/esw.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/timerfd.h) \
    $(wildcard include/config/uidgid/strict/type/checks.h) \
    $(wildcard include/config/cpu/has/prefetch.h) \
    $(wildcard include/config/mtd/cfi/i2.h) \
    $(wildcard include/config/crypto/authenc.h) \
    $(wildcard include/config/shmem.h) \
    $(wildcard include/config/mtd.h) \
    $(wildcard include/config/have/arch/jump/label.h) \
    $(wildcard include/config/nls/codepage/850.h) \
    $(wildcard include/config/ralink/gpio.h) \
    $(wildcard include/config/crypto/des.h) \
    $(wildcard include/config/nls/codepage/437.h) \
    $(wildcard include/config/blk/dev/initrd.h) \
    $(wildcard include/config/zlib/inflate.h) \
    $(wildcard include/config/ralink/gpio/led.h) \
    $(wildcard include/config/ralink/rdm.h) \
    $(wildcard include/config/usb/phy.h) \
    $(wildcard include/config/page/size/4kb.h) \
    $(wildcard include/config/stacktrace/support.h) \
    $(wildcard include/config/reset/controller.h) \
    $(wildcard include/config/jffs2/fs.h) \
    $(wildcard include/config/cpu/has/sync.h) \
    $(wildcard include/config/mtd/cfi/util.h) \
    $(wildcard include/config/hw/has/pci.h) \
    $(wildcard include/config/usb/storage.h) \
    $(wildcard include/config/standalone.h) \
    $(wildcard include/config/mips.h) \
    $(wildcard include/config/watchdog/core.h) \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/have/ide.h) \
    $(wildcard include/config/init/env/arg/limit.h) \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/mac80211/has/rc.h) \
    $(wildcard include/config/spi.h) \
    $(wildcard include/config/nf/conntrack/irc.h) \
    $(wildcard include/config/rt2880/dram/128m.h) \
    $(wildcard include/config/strip/asm/syms.h) \
    $(wildcard include/config/split/ptlock/cpus.h) \
    $(wildcard include/config/cpu/r4k/fpu.h) \
    $(wildcard include/config/wext/core.h) \
    $(wildcard include/config/nls.h) \
    $(wildcard include/config/pppoe.h) \
    $(wildcard include/config/mtd/spi/ralink.h) \
    $(wildcard include/config/syn/cookies.h) \
    $(wildcard include/config/mt7628/asic.h) \
    $(wildcard include/config/irq/work.h) \
    $(wildcard include/config/ip/advanced/router.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/usb/ehci/pci.h) \
    $(wildcard include/config/usb/common.h) \
    $(wildcard include/config/task/xacct.h) \
    $(wildcard include/config/ip6/nf/iptables.h) \
    $(wildcard include/config/nl80211/testmode.h) \
    $(wildcard include/config/inet/ipcomp.h) \
    $(wildcard include/config/jffs2/fs/xattr.h) \
    $(wildcard include/config/sys/supports/little/endian.h) \
    $(wildcard include/config/nls/iso8859/1.h) \
    $(wildcard include/config/crypto/workqueue.h) \
    $(wildcard include/config/usb/ehci/hcd.h) \
    $(wildcard include/config/nat/linux.h) \
    $(wildcard include/config/ppp/mppe.h) \
    $(wildcard include/config/netdevices.h) \
    $(wildcard include/config/net/key.h) \
    $(wildcard include/config/eventfd.h) \
    $(wildcard include/config/xfrm.h) \
    $(wildcard include/config/defconfig/list.h) \
    $(wildcard include/config/list.h) \
    $(wildcard include/config/serial/8250/console.h) \
    $(wildcard include/config/ipv6/multiple/tables.h) \
    $(wildcard include/config/ip/nf/target/masquerade.h) \
    $(wildcard include/config/cc/optimize/for/size.h) \
    $(wildcard include/config/nf/defrag/ipv4.h) \
    $(wildcard include/config/inet/xfrm/mode/beet.h) \
    $(wildcard include/config/netfilter/advanced.h) \
    $(wildcard include/config/crypto/deflate.h) \
    $(wildcard include/config/mtd/cfi.h) \
    $(wildcard include/config/jffs2/fs/debug.h) \
    $(wildcard include/config/have/dynamic/ftrace.h) \
    $(wildcard include/config/magic/sysrq.h) \
    $(wildcard include/config/cevt/r4k.h) \
    $(wildcard include/config/mac80211/rc/default/minstrel.h) \
    $(wildcard include/config/ip/nf/mangle.h) \
    $(wildcard include/config/inet6/xfrm/mode/tunnel.h) \
    $(wildcard include/config/ip/nf/filter.h) \
    $(wildcard include/config/mtd/split/firmware/name.h) \
    $(wildcard include/config/fat/fs.h) \
    $(wildcard include/config/ip6/nf/raw.h) \
    $(wildcard include/config/sys/has/cpu/mips32/r1.h) \
    $(wildcard include/config/inet/tunnel.h) \
    $(wildcard include/config/netfilter/xt/target/notrack.h) \
    $(wildcard include/config/generic/clockevents.h) \
    $(wildcard include/config/esw/double/vlan/tag.h) \
    $(wildcard include/config/usb/ohci/hcd.h) \
    $(wildcard include/config/module/force/load.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
    $(wildcard include/config/mtd/physmap.h) \
    $(wildcard include/config/tcp/cong/advanced.h) \
    $(wildcard include/config/hardware/watchpoints.h) \
    $(wildcard include/config/rd/gzip.h) \
    $(wildcard include/config/inet/xfrm/mode/transport.h) \
    $(wildcard include/config/crypto/md5.h) \
    $(wildcard include/config/have/kvm.h) \
    $(wildcard include/config/have/generic/hardirqs.h) \
    $(wildcard include/config/binfmt/elf.h) \
    $(wildcard include/config/scsi/proc/fs.h) \
    $(wildcard include/config/hotplug.h) \
    $(wildcard include/config/no/generic/pci/ioport/map.h) \
    $(wildcard include/config/inet6/ah.h) \
    $(wildcard include/config/inet/xfrm/tunnel.h) \
    $(wildcard include/config/netfilter/xt/mark.h) \
    $(wildcard include/config/netfilter/xtables.h) \
    $(wildcard include/config/mtk/mmc.h) \
    $(wildcard include/config/slabinfo.h) \
    $(wildcard include/config/pppopptp.h) \
    $(wildcard include/config/crypto/user/api/hash.h) \
    $(wildcard include/config/mac80211/rc/minstrel/ht.h) \
    $(wildcard include/config/jffs2/fs/writebuffer.h) \
    $(wildcard include/config/spi/master.h) \
    $(wildcard include/config/generic/calibrate/delay.h) \
    $(wildcard include/config/hz/periodic.h) \
    $(wildcard include/config/broken/on/smp.h) \
    $(wildcard include/config/tmpfs.h) \
    $(wildcard include/config/anon/inodes.h) \
    $(wildcard include/config/usb/ohci/hcd/platform.h) \
    $(wildcard include/config/futex.h) \
    $(wildcard include/config/cpu/supports/32bit/kernel.h) \
    $(wildcard include/config/crypto/user/api.h) \
    $(wildcard include/config/serial/core/console.h) \
    $(wildcard include/config/sys/has/cpu/mips32/r2.h) \
    $(wildcard include/config/ra/network/tasklet/bh.h) \
    $(wildcard include/config/raeth/skb/recycle/2k.h) \
    $(wildcard include/config/sysvipc.h) \
    $(wildcard include/config/crypto/pcomp2.h) \
    $(wildcard include/config/have/debug/kmemleak.h) \
    $(wildcard include/config/nf/conntrack/ftp.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/raeth.h) \
    $(wildcard include/config/arch/hibernation/possible.h) \
    $(wildcard include/config/unix.h) \
    $(wildcard include/config/crypto/hash2.h) \
    $(wildcard include/config/default/hostname.h) \
    $(wildcard include/config/inet/esp.h) \
    $(wildcard include/config/nf/conntrack/ipv6.h) \
    $(wildcard include/config/crypto/algapi.h) \
    $(wildcard include/config/bridge.h) \
    $(wildcard include/config/have/memblock/node/map.h) \
    $(wildcard include/config/mtd/cfi/i1.h) \
    $(wildcard include/config/nf/nat.h) \
    $(wildcard include/config/arch/has/atomic64/dec/if/positive.h) \
    $(wildcard include/config/crypto/hash.h) \
    $(wildcard include/config/efi/partition.h) \
    $(wildcard include/config/log/buf/shift.h) \
    $(wildcard include/config/extra/firmware.h) \
    $(wildcard include/config/ipv6/mroute.h) \
    $(wildcard include/config/virt/to/bus.h) \
    $(wildcard include/config/vfat/fs.h) \
    $(wildcard include/config/crc32/sliceby8.h) \
    $(wildcard include/config/nf/nat/irc.h) \
    $(wildcard include/config/trad/signals.h) \
    $(wildcard include/config/crypto/cbc.h) \
    $(wildcard include/config/serial/8250/runtime/uarts.h) \
    $(wildcard include/config/tmpfs/xattr.h) \
    $(wildcard include/config/cmdline/bool.h) \
    $(wildcard include/config/have/function/tracer.h) \
    $(wildcard include/config/netfilter/xt/match/multiport.h) \
    $(wildcard include/config/netfilter/xt/target/redirect.h) \
    $(wildcard include/config/crypto/manager2.h) \
    $(wildcard include/config/serial/8250/deprecated/options.h) \
    $(wildcard include/config/generic/pci/iomap.h) \
    $(wildcard include/config/netfilter/xt/target/log.h) \
    $(wildcard include/config/binfmt/script.h) \
    $(wildcard include/config/tick/cpu/accounting.h) \
    $(wildcard include/config/vm/event/counters.h) \
    $(wildcard include/config/crypto/ecb.h) \
    $(wildcard include/config/debug/fs.h) \
    $(wildcard include/config/base/full.h) \
    $(wildcard include/config/zlib/deflate.h) \
    $(wildcard include/config/arch/discard/memblock.h) \
    $(wildcard include/config/mtd/rootfs/split.h) \
    $(wildcard include/config/fw/loader.h) \
    $(wildcard include/config/kallsyms.h) \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/generic/atomic64.h) \
    $(wildcard include/config/ra/nat/none.h) \
    $(wildcard include/config/pci/quirks.h) \
    $(wildcard include/config/signalfd.h) \
    $(wildcard include/config/net/core.h) \
    $(wildcard include/config/uidgid/converted.h) \
    $(wildcard include/config/crypto/sha1.h) \
    $(wildcard include/config/ipv6/privacy.h) \
    $(wildcard include/config/csrc/r4k.h) \
    $(wildcard include/config/xz/dec.h) \
    $(wildcard include/config/watchdog.h) \
    $(wildcard include/config/has/iomem.h) \
    $(wildcard include/config/gpio/devres.h) \
    $(wildcard include/config/generic/irq/probe.h) \
    $(wildcard include/config/cpu/mips32/r2.h) \
    $(wildcard include/config/mtd/map/bank/width/1.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/have/net/dsa.h) \
    $(wildcard include/config/cpu/supports/highmem.h) \
    $(wildcard include/config/netfilter/xt/match/comment.h) \
    $(wildcard include/config/net.h) \
    $(wildcard include/config/netfilter/xt/target/tcpmss.h) \
    $(wildcard include/config/netfilter/xt/match/conntrack.h) \
    $(wildcard include/config/fw/loader/user/helper.h) \
    $(wildcard include/config/mtd/gen/probe.h) \
    $(wildcard include/config/packet.h) \
    $(wildcard include/config/arch/binfmt/elf/randomize/pie.h) \
    $(wildcard include/config/xfrm/algo.h) \
    $(wildcard include/config/inet.h) \
    $(wildcard include/config/prevent/firmware/build.h) \
    $(wildcard include/config/pci/domains.h) \
    $(wildcard include/config/rtc/lib.h) \
    $(wildcard include/config/netfilter/xt/match/policy.h) \
    $(wildcard include/config/have/kprobes.h) \
    $(wildcard include/config/crypto/aes.h) \
    $(wildcard include/config/netfilter.h) \
    $(wildcard include/config/mtd/kernel/part/siz.h) \
    $(wildcard include/config/clone/backwards.h) \
    $(wildcard include/config/ip/mroute.h) \
    $(wildcard include/config/inet/xfrm/mode/tunnel.h) \
    $(wildcard include/config/nf/nat/needed.h) \
    $(wildcard include/config/32bit.h) \
    $(wildcard include/config/lockdep/support.h) \
    $(wildcard include/config/lzma/compress.h) \
    $(wildcard include/config/usb/arch/has/ehci.h) \
    $(wildcard include/config/mtd/blkdevs.h) \
    $(wildcard include/config/nls/iso8859/15.h) \
    $(wildcard include/config/inet6/esp.h) \
    $(wildcard include/config/jffs2/cmode/priority.h) \
    $(wildcard include/config/taskstats.h) \
    $(wildcard include/config/ip6/nf/filter.h) \
    $(wildcard include/config/need/dma/map/state.h) \
    $(wildcard include/config/cfg80211/default/ps.h) \
    $(wildcard include/config/preempt/none.h) \
    $(wildcard include/config/tty.h) \
    $(wildcard include/config/netfilter/xt/match/time.h) \
    $(wildcard include/config/cpu/generic/dump/tlb.h) \
    $(wildcard include/config/netfilter/xt/match/mac.h) \
    $(wildcard include/config/need/per/cpu/km.h) \
    $(wildcard include/config/l2tp.h) \
    $(wildcard include/config/generic/io.h) \
    $(wildcard include/config/have/ftrace/mcount/record.h) \
    $(wildcard include/config/iosched/noop.h) \
    $(wildcard include/config/cpu/r4k/cache/tlb.h) \
    $(wildcard include/config/debug/kernel.h) \
    $(wildcard include/config/localversion.h) \
    $(wildcard include/config/mac80211/mesh.h) \
    $(wildcard include/config/crypto.h) \
    $(wildcard include/config/default/mmap/min/addr.h) \
    $(wildcard include/config/ip/nf/iptables.h) \
    $(wildcard include/config/cmdline.h) \
    $(wildcard include/config/ralink/i2c.h) \
    $(wildcard include/config/have/dma/api/debug.h) \
    $(wildcard include/config/default/cubic.h) \
    $(wildcard include/config/usb/arch/has/hcd.h) \
    $(wildcard include/config/generic/irq/show.h) \
    $(wildcard include/config/panic/on/oops/value.h) \
    $(wildcard include/config/scsi/mod.h) \
    $(wildcard include/config/serial/core.h) \
    $(wildcard include/config/buildtime/extable/sort.h) \
    $(wildcard include/config/embedded.h) \
    $(wildcard include/config/boot/raw.h) \
    $(wildcard include/config/have/kretprobes.h) \
    $(wildcard include/config/nf/defrag/ipv6.h) \
    $(wildcard include/config/inline/read/unlock.h) \
    $(wildcard include/config/has/dma.h) \
    $(wildcard include/config/lan/wan/support.h) \
    $(wildcard include/config/scsi.h) \
    $(wildcard include/config/mtd/rootfs/root/dev.h) \
    $(wildcard include/config/squashfs/fragment/cache/size.h) \
    $(wildcard include/config/inet6/ipcomp.h) \
    $(wildcard include/config/jffs2/rtime.h) \
    $(wildcard include/config/misc/filesystems.h) \
    $(wildcard include/config/ip/nf/raw.h) \
    $(wildcard include/config/pppol2tp.h) \
    $(wildcard include/config/jffs2/summary.h) \
    $(wildcard include/config/inline/read/unlock/irq.h) \
    $(wildcard include/config/netfilter/xt/match/esp.h) \
    $(wildcard include/config/ip/route/multipath.h) \
    $(wildcard include/config/chr/dev/sg.h) \
    $(wildcard include/config/l2tp/v3.h) \
    $(wildcard include/config/inet6/xfrm/mode/transport.h) \
    $(wildcard include/config/mtd/uimage/split.h) \
    $(wildcard include/config/crypto/arc4.h) \
    $(wildcard include/config/slhc.h) \
    $(wildcard include/config/crypto/manager.h) \
    $(wildcard include/config/rt/mutexes.h) \
    $(wildcard include/config/ipv6/subtrees.h) \
    $(wildcard include/config/expert.h) \
    $(wildcard include/config/wireless.h) \
    $(wildcard include/config/wext/proc.h) \
    $(wildcard include/config/squashfs.h) \
    $(wildcard include/config/hz/250.h) \
    $(wildcard include/config/perf/use/vmalloc.h) \
    $(wildcard include/config/task/io/accounting.h) \
    $(wildcard include/config/fat/default/iocharset.h) \
    $(wildcard include/config/frame/warn.h) \
    $(wildcard include/config/cfg80211/reg/debug.h) \
    $(wildcard include/config/generic/hweight.h) \
    $(wildcard include/config/initramfs/source.h) \
    $(wildcard include/config/mmc.h) \
    $(wildcard include/config/has/ioport.h) \
    $(wildcard include/config/hz.h) \
    $(wildcard include/config/inline/spin/unlock/irq.h) \
    $(wildcard include/config/serial/8250/nr/uarts.h) \
    $(wildcard include/config/inet/ah.h) \
    $(wildcard include/config/cpu/mips32.h) \
    $(wildcard include/config/default/iosched.h) \
    $(wildcard include/config/nlattr.h) \
    $(wildcard include/config/tcp/cong/cubic.h) \
    $(wildcard include/config/ip/mroute/multiple/tables.h) \
    $(wildcard include/config/sysfs.h) \
    $(wildcard include/config/usb/default/persist.h) \
    $(wildcard include/config/have/function/trace/mcount/test.h) \
    $(wildcard include/config/ip/nf/match/ah.h) \
    $(wildcard include/config/arpd.h) \
    $(wildcard include/config/usb/ehci/hcd/platform.h) \
    $(wildcard include/config/netfilter/xt/match/limit.h) \
    $(wildcard include/config/mtd/physmap/len.h) \
    $(wildcard include/config/cpu/mipsr2.h) \
    $(wildcard include/config/mtd/complex/mappings.h) \
    $(wildcard include/config/msdos/partition.h) \
    $(wildcard include/config/have/oprofile.h) \
    $(wildcard include/config/have/generic/dma/coherent.h) \
    $(wildcard include/config/arch/have/custom/gpio/h.h) \
    $(wildcard include/config/have/arch/kgdb.h) \
    $(wildcard include/config/usb/arch/has/ohci.h) \
    $(wildcard include/config/nf/conntrack/ipv4.h) \
    $(wildcard include/config/zone/dma/flag.h) \
    $(wildcard include/config/inet6/xfrm/tunnel.h) \
    $(wildcard include/config/legacy/pty/count.h) \
    $(wildcard include/config/mtd/map/bank/width/2.h) \
    $(wildcard include/config/overlayfs/fs.h) \
    $(wildcard include/config/ip/multicast.h) \
    $(wildcard include/config/squashfs/xz.h) \
    $(wildcard include/config/generic/cmos/update.h) \
    $(wildcard include/config/default/security.h) \
    $(wildcard include/config/wireless/ext.h) \
    $(wildcard include/config/tiny/rcu.h) \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
    $(wildcard include/config/have/dma/attrs.h) \
    $(wildcard include/config/default/noop.h) \
    $(wildcard include/config/nf/nat/ipv4.h) \
    $(wildcard include/config/have/function/graph/tracer.h) \
    $(wildcard include/config/ntfs/fs.h) \
    $(wildcard include/config/mips/l1/cache/shift.h) \
    $(wildcard include/config/base/small.h) \
    $(wildcard include/config/crypto/blkcipher2.h) \
    $(wildcard include/config/devpts/multiple/instances.h) \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/mtd/block.h) \
    $(wildcard include/config/wext/priv.h) \
    $(wildcard include/config/scsi/lowlevel.h) \
    $(wildcard include/config/sys/supports/arbit/hz.h) \
    $(wildcard include/config/irq/forced/threading.h) \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/pageflags/extended.h) \
    $(wildcard include/config/lzma/decompress.h) \
    $(wildcard include/config/kernel/nvram.h) \
    $(wildcard include/config/sysctl.h) \
    $(wildcard include/config/bridge/igmp/snooping.h) \
    $(wildcard include/config/have/c/recordmcount.h) \
    $(wildcard include/config/ralink/timer/wdg/reset/output.h) \
    $(wildcard include/config/xfrm/user.h) \
    $(wildcard include/config/have/perf/events.h) \
    $(wildcard include/config/ppp/async.h) \
    $(wildcard include/config/slab.h) \
    $(wildcard include/config/crypto/user/api/skcipher.h) \
    $(wildcard include/config/usb/ehci/tt/newsched.h) \
    $(wildcard include/config/fat/default/codepage.h) \
    $(wildcard include/config/blk/dev.h) \
    $(wildcard include/config/mac80211/rc/default.h) \
    $(wildcard include/config/tracing/support.h) \
    $(wildcard include/config/unix98/ptys.h) \
    $(wildcard include/config/printk/time.h) \
    $(wildcard include/config/ppp.h) \
    $(wildcard include/config/nf/nat/ftp.h) \
    $(wildcard include/config/mac80211/rc/minstrel.h) \
    $(wildcard include/config/elf/core.h) \
    $(wildcard include/config/dma/noncoherent.h) \
    $(wildcard include/config/usb/support.h) \
    $(wildcard include/config/mtd/physmap/buswidth.h) \
    $(wildcard include/config/ralink/mt7628.h) \
    $(wildcard include/config/inet/lro.h) \
    $(wildcard include/config/swap/io/space.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/cpu/supports/hr/sched/clock.h) \
    $(wildcard include/config/cfg80211/wext.h) \
    $(wildcard include/config/netfilter/xt/match/state.h) \
    $(wildcard include/config/inet6/xfrm/mode/beet.h) \
    $(wildcard include/config/irq/cpu.h) \
    $(wildcard include/config/generic/clockevents/build.h) \
    $(wildcard include/config/sys/supports/32bit/kernel.h) \
    $(wildcard include/config/ralink/watchdog.h) \
    $(wildcard include/config/sysvipc/sysctl.h) \
    $(wildcard include/config/decompress/gzip.h) \
    $(wildcard include/config/mtd/physmap/start.h) \
    $(wildcard include/config/mtd/split.h) \
    $(wildcard include/config/llc.h) \
    $(wildcard include/config/cross/compile.h) \
    $(wildcard include/config/nls/utf8.h) \
    $(wildcard include/config/jffs2/lzma.h) \
    $(wildcard include/config/have/mod/arch/specific.h) \
    $(wildcard include/config/support/openwrt.h) \
    $(wildcard include/config/scsi/multi/lun.h) \
    $(wildcard include/config/swap.h) \
    $(wildcard include/config/mac80211.h) \
    $(wildcard include/config/crc/ccitt.h) \
    $(wildcard include/config/blk/dev/sd.h) \
    $(wildcard include/config/module/unload.h) \
    $(wildcard include/config/average.h) \
    $(wildcard include/config/usb/arch/has/xhci.h) \
    $(wildcard include/config/bitreverse.h) \
    $(wildcard include/config/devport.h) \
    $(wildcard include/config/crypto/blkcipher.h) \
    $(wildcard include/config/nf/conntrack.h) \
    $(wildcard include/config/file/locking.h) \
    $(wildcard include/config/ip/nf/target/reject.h) \
    $(wildcard include/config/generic/hardirqs.h) \
    $(wildcard include/config/mtd/map/bank/width/4.h) \
    $(wildcard include/config/cpu/little/endian.h) \
    $(wildcard include/config/nls/default.h) \
    $(wildcard include/config/crypto/aead2.h) \
    $(wildcard include/config/debug/info.h) \
    $(wildcard include/config/crypto/algapi2.h) \
    $(wildcard include/config/wext/spy.h) \
    $(wildcard include/config/have/memblock.h) \
    $(wildcard include/config/proc/sysctl.h) \
    $(wildcard include/config/netfilter/xt/target/ct.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/inline/write/unlock.h) \
  include/linux/module.h \
    $(wildcard include/config/unused/symbols.h) \
    $(wildcard include/config/module/sig.h) \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/tracepoints.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/event/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
    $(wildcard include/config/constructors.h) \
    $(wildcard include/config/debug/set/module/ronx.h) \
  include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/types.h \
    $(wildcard include/config/64bit/phys/addr.h) \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/types.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/posix_types.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/sgidefs.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi/asm-generic/posix_types.h \
  include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi/linux/const.h \
  include/linux/stat.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/stat.h \
  include/uapi/linux/stat.h \
  include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
  include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/ring/buffer.h) \
  /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stdarg.h \
  include/linux/linkage.h \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modversions.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/linkage.h \
  include/linux/bitops.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/bitops.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/barrier.h \
    $(wildcard include/config/cpu/cavium/octeon.h) \
    $(wildcard include/config/sgi/ip28.h) \
    $(wildcard include/config/cpu/has/wb.h) \
    $(wildcard include/config/weak/ordering.h) \
    $(wildcard include/config/weak/reordering/beyond/llsc.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/addrspace.h \
    $(wildcard include/config/cpu/r8000.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/mach-generic/spaces.h \
    $(wildcard include/config/kvm/guest.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/uapi/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  include/uapi/linux/swab.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/swab.h \
  include/linux/byteorder/generic.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/cpu-features.h \
    $(wildcard include/config/sys/supports/micromips.h) \
    $(wildcard include/config/cpu/mipsr2/irq/vi.h) \
    $(wildcard include/config/cpu/mipsr2/irq/ei.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/cpu.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/cpu-info.h \
    $(wildcard include/config/mips/mt/smp.h) \
    $(wildcard include/config/mips/mt/smtc.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/cache.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/mach-generic/kmalloc.h \
    $(wildcard include/config/dma/coherent.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/mach-generic/cpu-feature-overrides.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/war.h \
    $(wildcard include/config/cpu/r4000/workarounds.h) \
    $(wildcard include/config/cpu/r4400/workarounds.h) \
    $(wildcard include/config/cpu/daddi/workarounds.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/mach-ralink/war.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/ffz.h \
  include/asm-generic/bitops/find.h \
    $(wildcard include/config/generic/find/first/bit.h) \
  include/asm-generic/bitops/sched.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/arch_hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/le.h \
  include/asm-generic/bitops/ext2-atomic.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/typecheck.h \
  include/linux/printk.h \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
  include/linux/kern_levels.h \
  include/linux/dynamic_debug.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  include/uapi/linux/string.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/string.h \
    $(wildcard include/config/cpu/r3000.h) \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/errno.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/errno.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi/asm-generic/errno-base.h \
  include/uapi/linux/kernel.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi/linux/sysinfo.h \
  include/linux/seqlock.h \
  include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/context/tracking.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  include/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  include/linux/bug.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/bug.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/break.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/break.h \
  include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
    $(wildcard include/config/debug/bugverbose.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/thread_info.h \
    $(wildcard include/config/page/size/8kb.h) \
    $(wildcard include/config/page/size/16kb.h) \
    $(wildcard include/config/page/size/32kb.h) \
    $(wildcard include/config/page/size/64kb.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/processor.h \
    $(wildcard include/config/cavium/octeon/cvmseg/size.h) \
    $(wildcard include/config/mips/mt/fpaff.h) \
  include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
    $(wildcard include/config/disable/obsolete/cpumask/functions.h) \
  include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
  include/linux/bitmap.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/cachectl.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/mipsregs.h \
    $(wildcard include/config/cpu/vr41xx.h) \
    $(wildcard include/config/mips/huge/tlb/support.h) \
    $(wildcard include/config/cpu/micromips.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/hazards.h \
    $(wildcard include/config/cpu/mipsr1.h) \
    $(wildcard include/config/mips/alchemy.h) \
    $(wildcard include/config/cpu/bmips.h) \
    $(wildcard include/config/cpu/loongson2.h) \
    $(wildcard include/config/cpu/r10000.h) \
    $(wildcard include/config/cpu/r5500.h) \
    $(wildcard include/config/cpu/xlr.h) \
    $(wildcard include/config/cpu/sb1.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/prefetch.h \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/irqflags.h \
  include/linux/bottom_half.h \
  include/linux/spinlock_types.h \
  include/linux/spinlock_types_up.h \
  include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/prove/rcu.h) \
  include/linux/rwlock_types.h \
  include/linux/spinlock_up.h \
  include/linux/rwlock.h \
  include/linux/spinlock_api_up.h \
  include/linux/atomic.h \
    $(wildcard include/config/arch/has/atomic/or.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/atomic.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/cmpxchg.h \
  include/asm-generic/cmpxchg-local.h \
  include/asm-generic/atomic-long.h \
  include/asm-generic/atomic64.h \
  include/linux/math64.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/div64.h \
  include/asm-generic/div64.h \
  include/uapi/linux/time.h \
  include/linux/uidgid.h \
    $(wildcard include/config/user/ns.h) \
  include/linux/highuid.h \
  include/linux/kmod.h \
  include/linux/gfp.h \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/pm/sleep.h) \
    $(wildcard include/config/cma.h) \
  include/linux/mmzone.h \
    $(wildcard include/config/memory/isolation.h) \
    $(wildcard include/config/memcg.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/no/bootmem.h) \
    $(wildcard include/config/numa/balancing.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
    $(wildcard include/config/arch/has/holes/memorymodel.h) \
  include/linux/wait.h \
  arch/mips/include/generated/asm/current.h \
  include/asm-generic/current.h \
  include/uapi/linux/wait.h \
  include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
  include/linux/nodemask.h \
    $(wildcard include/config/movable/node.h) \
  include/linux/pageblock-flags.h \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/hugetlb/page/size/variable.h) \
  include/linux/page-flags-layout.h \
    $(wildcard include/config/sparsemem/vmemmap.h) \
  include/generated/bounds.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/page.h \
  include/linux/pfn.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/io.h \
  include/asm-generic/iomap.h \
    $(wildcard include/config/generic/iomap.h) \
  include/asm-generic/pci_iomap.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/pgtable-bits.h \
    $(wildcard include/config/cpu/tx39xx.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/mach-generic/ioremap.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/mach-generic/mangle-port.h \
  include/asm-generic/memory_model.h \
  include/asm-generic/getorder.h \
  include/linux/memory_hotplug.h \
    $(wildcard include/config/memory/hotremove.h) \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
    $(wildcard include/config/have/bootmem/info/node.h) \
  include/linux/notifier.h \
  include/linux/mutex.h \
    $(wildcard include/config/debug/mutexes.h) \
    $(wildcard include/config/mutex/spin/on/owner.h) \
    $(wildcard include/config/have/arch/mutex/cpu/relax.h) \
  include/linux/rwsem.h \
  include/linux/rwsem-spinlock.h \
  include/linux/srcu.h \
  include/linux/rcupdate.h \
    $(wildcard include/config/rcu/torture/test.h) \
    $(wildcard include/config/tree/rcu.h) \
    $(wildcard include/config/tree/preempt/rcu.h) \
    $(wildcard include/config/rcu/trace.h) \
    $(wildcard include/config/preempt/rcu.h) \
    $(wildcard include/config/rcu/user/qs.h) \
    $(wildcard include/config/tiny/preempt/rcu.h) \
    $(wildcard include/config/debug/objects/rcu/head.h) \
    $(wildcard include/config/rcu/nocb/cpu.h) \
  include/linux/completion.h \
  include/linux/debugobjects.h \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/debug/objects/free.h) \
  include/linux/rcutiny.h \
  include/linux/workqueue.h \
    $(wildcard include/config/debug/objects/work.h) \
    $(wildcard include/config/freezer.h) \
  include/linux/timer.h \
    $(wildcard include/config/timer/stats.h) \
    $(wildcard include/config/debug/objects/timers.h) \
  include/linux/ktime.h \
    $(wildcard include/config/ktime/scalar.h) \
  include/linux/jiffies.h \
  include/linux/timex.h \
  include/uapi/linux/timex.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi/linux/param.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/param.h \
  include/asm-generic/param.h \
  include/uapi/asm-generic/param.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/timex.h \
  include/linux/topology.h \
    $(wildcard include/config/sched/smt.h) \
    $(wildcard include/config/sched/mc.h) \
    $(wildcard include/config/sched/book.h) \
    $(wildcard include/config/use/percpu/numa/node/id.h) \
  include/linux/smp.h \
    $(wildcard include/config/use/generic/smp/helpers.h) \
  include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  arch/mips/include/generated/asm/percpu.h \
  include/asm-generic/percpu.h \
  include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/topology.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/mach-generic/topology.h \
  include/asm-generic/topology.h \
  include/linux/mmdebug.h \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/debug/virtual.h) \
  include/linux/sysctl.h \
  include/linux/rbtree.h \
  include/uapi/linux/sysctl.h \
  include/linux/elf.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/elf.h \
    $(wildcard include/config/mips32/n32.h) \
    $(wildcard include/config/mips32/o32.h) \
    $(wildcard include/config/mips32/compat.h) \
  include/uapi/linux/elf.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi/linux/elf-em.h \
  include/linux/kobject.h \
  include/linux/sysfs.h \
  include/linux/kobject_ns.h \
  include/linux/kref.h \
  include/linux/moduleparam.h \
    $(wildcard include/config/alpha.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/ppc64.h) \
  include/linux/tracepoint.h \
  include/linux/static_key.h \
  include/linux/jump_label.h \
    $(wildcard include/config/jump/label.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/module.h \
    $(wildcard include/config/cpu/mips32/r1.h) \
    $(wildcard include/config/cpu/mips64/r1.h) \
    $(wildcard include/config/cpu/mips64/r2.h) \
    $(wildcard include/config/cpu/r4300.h) \
    $(wildcard include/config/cpu/r4x00.h) \
    $(wildcard include/config/cpu/tx49xx.h) \
    $(wildcard include/config/cpu/r5000.h) \
    $(wildcard include/config/cpu/r5432.h) \
    $(wildcard include/config/cpu/r6000.h) \
    $(wildcard include/config/cpu/nevada.h) \
    $(wildcard include/config/cpu/rm7000.h) \
    $(wildcard include/config/cpu/loongson1.h) \
    $(wildcard include/config/cpu/xlp.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/uaccess.h \
    $(wildcard include/config/eva.h) \
  include/linux/fs.h \
    $(wildcard include/config/splice/net/support.h) \
    $(wildcard include/config/fs/posix/acl.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/ima.h) \
    $(wildcard include/config/debug/writecount.h) \
    $(wildcard include/config/auditsyscall.h) \
    $(wildcard include/config/fs/xip.h) \
    $(wildcard include/config/migration.h) \
  include/linux/kdev_t.h \
  include/uapi/linux/kdev_t.h \
  include/linux/dcache.h \
  include/linux/rculist.h \
  include/linux/rculist_bl.h \
  include/linux/list_bl.h \
  include/linux/bit_spinlock.h \
  include/linux/path.h \
  include/linux/radix-tree.h \
  include/linux/pid.h \
  include/linux/capability.h \
  include/uapi/linux/capability.h \
  include/linux/semaphore.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi/linux/fiemap.h \
  include/linux/shrinker.h \
  include/linux/migrate_mode.h \
  include/linux/percpu-rwsem.h \
  include/linux/blk_types.h \
    $(wildcard include/config/blk/cgroup.h) \
    $(wildcard include/config/blk/dev/integrity.h) \
  include/uapi/linux/fs.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi/linux/limits.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi/linux/ioctl.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/ioctl.h \
  include/asm-generic/ioctl.h \
  include/uapi/asm-generic/ioctl.h \
  include/linux/quota.h \
    $(wildcard include/config/quota/netlink/interface.h) \
  include/linux/percpu_counter.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi/linux/dqblk_xfs.h \
  include/linux/dqblk_v1.h \
  include/linux/dqblk_v2.h \
  include/linux/dqblk_qtree.h \
  include/linux/projid.h \
  include/uapi/linux/quota.h \
  include/linux/nfs_fs_i.h \
  include/linux/fcntl.h \
  include/uapi/linux/fcntl.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/fcntl.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi/asm-generic/fcntl.h \
  include/linux/err.h \
  include/linux/uaccess.h \
  include/linux/slab.h \
    $(wildcard include/config/slab/debug.h) \
    $(wildcard include/config/kmemcheck.h) \
    $(wildcard include/config/failslab.h) \
    $(wildcard include/config/slob.h) \
    $(wildcard include/config/slub.h) \
    $(wildcard include/config/debug/slab.h) \
  include/linux/slab_def.h \
    $(wildcard include/config/memcg/kmem.h) \
  arch/mips/ralink/nvram.h \

arch/mips/ralink/nvram.o: $(deps_arch/mips/ralink/nvram.o)

$(deps_arch/mips/ralink/nvram.o):
