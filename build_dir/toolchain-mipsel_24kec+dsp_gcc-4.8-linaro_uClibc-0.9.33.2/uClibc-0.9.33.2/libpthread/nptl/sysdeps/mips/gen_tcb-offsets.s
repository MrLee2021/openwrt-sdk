	.section .mdebug.abi32
	.previous
	.gnu_attribute 4, 3
	.abicalls
	.option	pic0
	.text
$Ltext0:
	.cfi_sections	.debug_frame
	.section	.text.dummy,"ax",@progbits
	.align	2
	.globl	dummy
$LFB12 = .
	.file 1 "libpthread/nptl/sysdeps/mips/gen_tcb-offsets.c"
	.loc 1 4 0
	.cfi_startproc
	.set	nomips16
	.ent	dummy
	.type	dummy, @function
dummy:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.loc 1 6 0
#APP
 # 6 "libpthread/nptl/sysdeps/mips/gen_tcb-offsets.c" 1
	@@@name@@@MULTIPLE_THREADS_OFFSET@@@value@@@-29760@@@end@@@
 # 0 "" 2
	.loc 1 7 0
 # 7 "libpthread/nptl/sysdeps/mips/gen_tcb-offsets.c" 1
	@@@name@@@PID_OFFSET@@@value@@@-29652@@@end@@@
 # 0 "" 2
	.loc 1 8 0
 # 8 "libpthread/nptl/sysdeps/mips/gen_tcb-offsets.c" 1
	@@@name@@@TID_OFFSET@@@value@@@-29656@@@end@@@
 # 0 "" 2
#NO_APP
	j	$31
	.end	dummy
	.cfi_endproc
$LFE12:
	.size	dummy, .-dummy
	.text
$Letext0:
	.file 2 "./include/stdint.h"
	.file 3 "./include/netinet/in.h"
	.section	.debug_info,"",@progbits
$Ldebug_info0:
	.4byte	0x13d
	.2byte	0x4
	.4byte	$Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	$LASF19
	.byte	0x1
	.4byte	$LASF20
	.4byte	$LASF21
	.4byte	$Ldebug_ranges0+0
	.4byte	0
	.4byte	$Ldebug_line0
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	$LASF0
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.ascii	"int\000"
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.4byte	$LASF1
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.4byte	$LASF2
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.4byte	$LASF3
	.uleb128 0x4
	.4byte	$LASF5
	.byte	0x2
	.byte	0x33
	.4byte	0x53
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	$LASF4
	.uleb128 0x4
	.4byte	$LASF6
	.byte	0x2
	.byte	0x34
	.4byte	0x65
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.4byte	$LASF7
	.uleb128 0x4
	.4byte	$LASF8
	.byte	0x2
	.byte	0x36
	.4byte	0x25
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.4byte	$LASF9
	.uleb128 0x2
	.byte	0x1
	.byte	0x2
	.4byte	$LASF10
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	$LASF11
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.4byte	$LASF12
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	$LASF13
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	$LASF14
	.uleb128 0x2
	.byte	0x8
	.byte	0x4
	.4byte	$LASF15
	.uleb128 0x5
	.byte	0x10
	.byte	0x3
	.byte	0xc9
	.4byte	0xd2
	.uleb128 0x6
	.4byte	$LASF16
	.byte	0x3
	.byte	0xcb
	.4byte	0xd2
	.uleb128 0x6
	.4byte	$LASF17
	.byte	0x3
	.byte	0xcd
	.4byte	0xe2
	.uleb128 0x6
	.4byte	$LASF18
	.byte	0x3
	.byte	0xce
	.4byte	0xf2
	.byte	0
	.uleb128 0x7
	.4byte	0x48
	.4byte	0xe2
	.uleb128 0x8
	.4byte	0x9a
	.byte	0xf
	.byte	0
	.uleb128 0x7
	.4byte	0x5a
	.4byte	0xf2
	.uleb128 0x8
	.4byte	0x9a
	.byte	0x7
	.byte	0
	.uleb128 0x7
	.4byte	0x6c
	.4byte	0x102
	.uleb128 0x8
	.4byte	0x9a
	.byte	0x3
	.byte	0
	.uleb128 0x9
	.4byte	$LASF22
	.byte	0x10
	.byte	0x3
	.byte	0xc7
	.4byte	0x11b
	.uleb128 0xa
	.4byte	$LASF23
	.byte	0x3
	.byte	0xd0
	.4byte	0xa8
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	$LASF24
	.byte	0x1
	.byte	0x4
	.4byte	$LFB12
	.4byte	$LFE12-$LFB12
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xc
	.4byte	$LASF25
	.byte	0x3
	.byte	0xe1
	.4byte	$LASF26
	.4byte	0x13b
	.uleb128 0xd
	.4byte	0x102
	.byte	0
	.section	.debug_abbrev,"",@progbits
$Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x17
	.byte	0x1
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x6e
	.uleb128 0xe
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.4byte	0x1c
	.2byte	0x2
	.4byte	$Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	$LFB12
	.4byte	$LFE12-$LFB12
	.4byte	0
	.4byte	0
	.section	.debug_ranges,"",@progbits
$Ldebug_ranges0:
	.4byte	$LFB12
	.4byte	$LFE12
	.4byte	0
	.4byte	0
	.section	.debug_line,"",@progbits
$Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
$LASF3:
	.ascii	"long long int\000"
$LASF16:
	.ascii	"__u6_addr8\000"
$LASF0:
	.ascii	"unsigned int\000"
$LASF20:
	.ascii	"libpthread/nptl/sysdeps/mips/gen_tcb-offsets.c\000"
$LASF26:
	.ascii	"__GI_in6addr_loopback\000"
$LASF11:
	.ascii	"long unsigned int\000"
$LASF24:
	.ascii	"dummy\000"
$LASF9:
	.ascii	"long long unsigned int\000"
$LASF17:
	.ascii	"__u6_addr16\000"
$LASF25:
	.ascii	"in6addr_loopback\000"
$LASF5:
	.ascii	"uint8_t\000"
$LASF4:
	.ascii	"unsigned char\000"
$LASF13:
	.ascii	"char\000"
$LASF8:
	.ascii	"uint32_t\000"
$LASF12:
	.ascii	"long int\000"
$LASF15:
	.ascii	"double\000"
$LASF10:
	.ascii	"_Bool\000"
$LASF7:
	.ascii	"short unsigned int\000"
$LASF19:
	.ascii	"GNU C 4.8.3 -mno-branch-likely -mips32r2 -mtune=24kec -m"
	.ascii	"dsp -msoft-float -mno-split-addresses -mllsc -mplt -mno-"
	.ascii	"shared -ggdb -Os -Os -std=gnu99 -funsigned-char -fno-bui"
	.ascii	"ltin -fno-asm -ffunction-sections -fdata-sections -fno-c"
	.ascii	"aller-saves -fhonour-copts -fno-stack-protector -funit-a"
	.ascii	"t-a-time -fmerge-all-constants -fstrict-aliasing -fno-tr"
	.ascii	"ee-loop-optimize -fno-tree-dominator-opts\000"
$LASF21:
	.ascii	"/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24ke"
	.ascii	"c+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/uClibc-0.9.33.2\000"
$LASF1:
	.ascii	"signed char\000"
$LASF23:
	.ascii	"__in6_u\000"
$LASF6:
	.ascii	"uint16_t\000"
$LASF22:
	.ascii	"in6_addr\000"
$LASF18:
	.ascii	"__u6_addr32\000"
$LASF2:
	.ascii	"short int\000"
$LASF14:
	.ascii	"sizetype\000"
	.ident	"GCC: (OpenWrt/Linaro GCC 4.8-2014.04 unknown) 4.8.3"
