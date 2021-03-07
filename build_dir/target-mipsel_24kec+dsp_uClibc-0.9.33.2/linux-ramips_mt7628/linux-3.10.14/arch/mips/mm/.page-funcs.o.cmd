cmd_arch/mips/mm/page-funcs.o := mipsel-openwrt-linux-uclibc-gcc -Wp,-MD,arch/mips/mm/.page-funcs.o.d  -nostdinc -isystem /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include -I/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include -Iarch/mips/include/generated  -Iinclude -I/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi -Iarch/mips/include/generated/uapi -I/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/uapi -Iinclude/generated/uapi -include /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/include/linux/kconfig.h -D__KERNEL__ -DVMLINUX_LOAD_ADDRESS=0xffffffff80000000 -DDATAOFFSET=0  -D__ASSEMBLY__  -mno-check-zero-division -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -msoft-float -ffreestanding  -march=mips32r2 -Wa,-mips32r2 -Wa,--trap -I/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/mach-ralink -I/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/mach-generic -gdwarf-2          -c -o arch/mips/mm/page-funcs.o arch/mips/mm/page-funcs.S

source_arch/mips/mm/page-funcs.o := arch/mips/mm/page-funcs.S

deps_arch/mips/mm/page-funcs.o := \
    $(wildcard include/config/sibyte/dma/pageops.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/asm.h \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/cpu/has/prefetch.h) \
    $(wildcard include/config/eva.h) \
    $(wildcard include/config/sgi/ip28.h) \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/uapi/asm/sgidefs.h \
  /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7628/linux-3.10.14/arch/mips/include/asm/regdef.h \

arch/mips/mm/page-funcs.o: $(deps_arch/mips/mm/page-funcs.o)

$(deps_arch/mips/mm/page-funcs.o):
