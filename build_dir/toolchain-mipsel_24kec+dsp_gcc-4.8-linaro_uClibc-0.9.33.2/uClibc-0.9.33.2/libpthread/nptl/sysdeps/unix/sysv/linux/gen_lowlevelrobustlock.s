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
$LFB13 = .
	.file 1 "libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrobustlock.c"
	.loc 1 4 0
	.cfi_startproc
	.set	nomips16
	.ent	dummy
	.type	dummy, @function
dummy:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.loc 1 5 0
#APP
 # 5 "libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrobustlock.c" 1
	@@@name@@@TID@@@value@@@104@@@end@@@
 # 0 "" 2
#NO_APP
	j	$31
	.end	dummy
	.cfi_endproc
$LFE13:
	.size	dummy, .-dummy
	.text
$Letext0:
	.file 2 "./libpthread/nptl/sysdeps/pthread/list.h"
	.file 3 "./include/stdint.h"
	.file 4 "./libpthread/nptl/sysdeps/unix/sysv/linux/internaltypes.h"
	.file 5 "./libpthread/nptl/pthreadP.h"
	.section	.debug_info,"",@progbits
$Ldebug_info0:
	.4byte	0x13d
	.2byte	0x4
	.4byte	$Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	$LASF24
	.byte	0x1
	.4byte	$LASF25
	.4byte	$LASF26
	.4byte	$Ldebug_ranges0+0
	.4byte	0
	.4byte	$Ldebug_line0
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.ascii	"int\000"
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.4byte	$LASF0
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.4byte	$LASF1
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.4byte	$LASF2
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.4byte	$LASF3
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.4byte	$LASF4
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.4byte	$LASF5
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.4byte	$LASF6
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.4byte	$LASF7
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.4byte	$LASF8
	.uleb128 0x3
	.byte	0x2
	.byte	0x5
	.4byte	$LASF9
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.4byte	$LASF10
	.uleb128 0x4
	.byte	0x4
	.uleb128 0x3
	.byte	0x8
	.byte	0x4
	.4byte	$LASF11
	.uleb128 0x5
	.4byte	0x8d
	.uleb128 0x6
	.4byte	0x79
	.byte	0
	.uleb128 0x7
	.byte	0x4
	.4byte	0x82
	.uleb128 0x8
	.4byte	$LASF17
	.byte	0x8
	.byte	0x2
	.byte	0x1d
	.4byte	0xb8
	.uleb128 0x9
	.4byte	$LASF12
	.byte	0x2
	.byte	0x1f
	.4byte	0xb8
	.byte	0
	.uleb128 0x9
	.4byte	$LASF13
	.byte	0x2
	.byte	0x20
	.4byte	0xb8
	.byte	0x4
	.byte	0
	.uleb128 0x7
	.byte	0x4
	.4byte	0x93
	.uleb128 0xa
	.4byte	$LASF14
	.byte	0x2
	.byte	0x21
	.4byte	0x93
	.uleb128 0xa
	.4byte	$LASF15
	.byte	0x3
	.byte	0x83
	.4byte	0x2c
	.uleb128 0x3
	.byte	0x1
	.byte	0x2
	.4byte	$LASF16
	.uleb128 0x8
	.4byte	$LASF18
	.byte	0x8
	.byte	0x4
	.byte	0x71
	.4byte	0x100
	.uleb128 0xb
	.ascii	"seq\000"
	.byte	0x4
	.byte	0x77
	.4byte	0xc9
	.byte	0
	.uleb128 0x9
	.4byte	$LASF19
	.byte	0x4
	.byte	0x7a
	.4byte	0x8d
	.byte	0x4
	.byte	0
	.uleb128 0xc
	.4byte	$LASF27
	.byte	0x1
	.byte	0x4
	.4byte	$LFB13
	.4byte	$LFE13-$LFB13
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xd
	.4byte	$LASF20
	.byte	0x5
	.byte	0xa3
	.4byte	$LASF22
	.4byte	0xbe
	.uleb128 0xe
	.4byte	0xdb
	.4byte	0x131
	.uleb128 0xf
	.4byte	0x56
	.2byte	0x3ff
	.byte	0
	.uleb128 0xd
	.4byte	$LASF21
	.byte	0x5
	.byte	0xb3
	.4byte	$LASF23
	.4byte	0x120
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
	.uleb128 0x8
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
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x15
	.byte	0x1
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
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
	.uleb128 0x9
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
	.uleb128 0xa
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
	.uleb128 0xb
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
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
	.uleb128 0xc
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
	.uleb128 0xd
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
	.uleb128 0xe
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x5
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
	.4byte	$LFB13
	.4byte	$LFE13-$LFB13
	.4byte	0
	.4byte	0
	.section	.debug_ranges,"",@progbits
$Ldebug_ranges0:
	.4byte	$LFB13
	.4byte	$LFE13
	.4byte	0
	.4byte	0
	.section	.debug_line,"",@progbits
$Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
$LASF4:
	.ascii	"short unsigned int\000"
$LASF0:
	.ascii	"unsigned int\000"
$LASF21:
	.ascii	"__pthread_keys\000"
$LASF20:
	.ascii	"__stack_user\000"
$LASF25:
	.ascii	"libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrobu"
	.ascii	"stlock.c\000"
$LASF15:
	.ascii	"uintptr_t\000"
$LASF1:
	.ascii	"long unsigned int\000"
$LASF27:
	.ascii	"dummy\000"
$LASF10:
	.ascii	"long long unsigned int\000"
$LASF22:
	.ascii	"__GI___stack_user\000"
$LASF7:
	.ascii	"unsigned char\000"
$LASF3:
	.ascii	"char\000"
$LASF2:
	.ascii	"long int\000"
$LASF11:
	.ascii	"double\000"
$LASF18:
	.ascii	"pthread_key_struct\000"
$LASF16:
	.ascii	"_Bool\000"
$LASF5:
	.ascii	"long long int\000"
$LASF14:
	.ascii	"list_t\000"
$LASF26:
	.ascii	"/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24ke"
	.ascii	"c+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/uClibc-0.9.33.2\000"
$LASF8:
	.ascii	"signed char\000"
$LASF19:
	.ascii	"destr\000"
$LASF12:
	.ascii	"next\000"
$LASF17:
	.ascii	"list_head\000"
$LASF23:
	.ascii	"__GI___pthread_keys\000"
$LASF9:
	.ascii	"short int\000"
$LASF13:
	.ascii	"prev\000"
$LASF6:
	.ascii	"sizetype\000"
$LASF24:
	.ascii	"GNU C 4.8.3 -mno-branch-likely -mips32r2 -mtune=24kec -m"
	.ascii	"dsp -msoft-float -mno-split-addresses -mllsc -mplt -mno-"
	.ascii	"shared -ggdb -Os -Os -std=gnu99 -funsigned-char -fno-bui"
	.ascii	"ltin -fno-asm -ffunction-sections -fdata-sections -fno-c"
	.ascii	"aller-saves -fhonour-copts -fno-stack-protector -funit-a"
	.ascii	"t-a-time -fmerge-all-constants -fstrict-aliasing -fno-tr"
	.ascii	"ee-loop-optimize -fno-tree-dominator-opts\000"
	.ident	"GCC: (OpenWrt/Linaro GCC 4.8-2014.04 unknown) 4.8.3"
