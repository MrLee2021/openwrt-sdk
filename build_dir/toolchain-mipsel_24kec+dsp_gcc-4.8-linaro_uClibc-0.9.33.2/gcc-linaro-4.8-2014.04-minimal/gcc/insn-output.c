/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char *
output_1 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 108 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md"
{ gcc_unreachable (); }
}

static const char *
output_2 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 119 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md"
{ gcc_unreachable (); }
}

static const char *
output_3 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 130 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md"
{ gcc_unreachable (); }
}

static const char *
output_4 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 141 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md"
{ gcc_unreachable (); }
}

static const char *
output_5 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1068 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (ISA_HAS_COND_TRAP)
    return "teq\t$0,$0";
  else if (TARGET_MIPS16)
    return "break 0";
  else
    return "break";
}
}

static const char * const output_11[] = {
  "addu\t%0,%1,%2",
  "addiu\t%0,%1,%2",
};

static const char * const output_12[] = {
  "daddu\t%0,%1,%2",
  "daddiu\t%0,%1,%2",
};

static const char * const output_13[] = {
  "addiu\t%0,%2",
  "addiu\t%0,%1,%2",
  "addiu\t%0,%2",
  "addiu\t%0,%1,%2",
  "addu\t%0,%1,%2",
};

static const char * const output_14[] = {
  "daddiu\t%0,%2",
  "daddiu\t%0,%1,%2",
  "daddiu\t%0,%2",
  "daddiu\t%0,%1,%2",
  "daddu\t%0,%1,%2",
};

static const char * const output_15[] = {
  "addu\t%0,%1,%2",
  "addiu\t%0,%1,%2",
};

static const char *
output_32 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1493 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_LOONGSON_2EF)
    return "multu.g\t%0,%1,%2";
  else
    return "gsmultu\t%0,%1,%2";
}
}

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1493 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_LOONGSON_2EF)
    return "dmultu.g\t%0,%1,%2";
  else
    return "gsdmultu\t%0,%1,%2";
}
}

static const char *
output_34 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1508 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (which_alternative == 1)
    return "mult\t%1,%2";
  if (SImode == SImode && TARGET_MIPS3900)
    return "mult\t%0,%1,%2";
  return "mul\t%0,%1,%2";
}
}

static const char *
output_35 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1508 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (which_alternative == 1)
    return "dmult\t%1,%2";
  if (DImode == SImode && TARGET_MIPS3900)
    return "mult\t%0,%1,%2";
  return "dmul\t%0,%1,%2";
}
}

static const char * const output_40[] = {
  "madd\t%1,%2",
  "#",
};

static const char * const output_41[] = {
  "madd\t%1,%2",
  "madd\t%0,%1,%2",
  "#",
};

static const char *
output_42 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (which_alternative == 1)
    return "macc\t%0,%1,%2";
  else if (TARGET_MIPS5500)
    return "madd\t%1,%2";
  else
    /* The VR4130 assumes that there is a two-cycle latency between a macc
       that "writes" to $0 and an instruction that reads from it.  We avoid
       this by assigning to $1 instead.  */
    return "%[macc\t%@,%1,%2%]";
}
}

static const char *
output_43 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1685 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (which_alternative == 1)
    return "msac\t%0,%2,%3";
  else if (TARGET_MIPS5500)
    return "msub\t%2,%3";
  else
    return "msac\t$0,%2,%3";
}
}

static const char * const output_47[] = {
  "msub\t%2,%3",
  "#",
};

static const char * const output_48[] = {
  "muls\t$0,%1,%2",
  "muls\t%0,%1,%2",
};

static const char *
output_49 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1918 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (ISA_HAS_DSP_MULT)
    return "mult\t%q0,%1,%2";
  else
    return "mult\t%1,%2";
}
}

static const char *
output_50 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1918 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (ISA_HAS_DSP_MULT)
    return "multu\t%q0,%1,%2";
  else
    return "multu\t%1,%2";
}
}

static const char *
output_60 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2054 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (ISA_HAS_DSP_MULT)
    return "msub\t%q0,%1,%2";
  else if (TARGET_MIPS5500 || GENERATE_MADD_MSUB)
    return "msub\t%1,%2";
  else
    return "msac\t$0,%1,%2";
}
}

static const char *
output_61 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2054 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (ISA_HAS_DSP_MULT)
    return "msubu\t%q0,%1,%2";
  else if (TARGET_MIPS5500 || GENERATE_MADD_MSUB)
    return "msubu\t%1,%2";
  else
    return "msacu\t$0,%1,%2";
}
}

static const char *
output_62 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2099 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return TARGET_FIX_R4000 ? "mult\t%1,%2\n\tmfhi\t%0" : "#"; }
}

static const char *
output_63 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2099 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return TARGET_FIX_R4000 ? "multu\t%1,%2\n\tmfhi\t%0" : "#"; }
}

static const char *
output_68 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2198 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return TARGET_FIX_R4000 ? "dmult\t%1,%2\n\tmfhi\t%0" : "#"; }
}

static const char *
output_69 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2198 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return TARGET_FIX_R4000 ? "dmultu\t%1,%2\n\tmfhi\t%0" : "#"; }
}

static const char *
output_75 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2297 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MAD)
    return "mad\t%1,%2";
  else if (ISA_HAS_DSP_MULT)
    return "madd\t%q0,%1,%2";
  else if (GENERATE_MADD_MSUB || TARGET_MIPS5500)
    return "madd\t%1,%2";
  else
    /* See comment in *macc.  */
    return "%[macc\t%@,%1,%2%]";
}
}

static const char *
output_76 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2297 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MAD)
    return "madu\t%1,%2";
  else if (ISA_HAS_DSP_MULT)
    return "maddu\t%q0,%1,%2";
  else if (GENERATE_MADD_MSUB || TARGET_MIPS5500)
    return "maddu\t%1,%2";
  else
    /* See comment in *macc.  */
    return "%[maccu\t%@,%1,%2%]";
}
}

static const char *
output_113 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2514 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "div.s\t%0,%1,%2\n\tmov.s\t%0,%0";
  else
    return "div.s\t%0,%1,%2";
}
}

static const char *
output_114 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2514 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "div.d\t%0,%1,%2\n\tmov.d\t%0,%0";
  else
    return "div.d\t%0,%1,%2";
}
}

static const char *
output_115 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2514 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "div.ps\t%0,%1,%2\n\tmov.ps\t%0,%0";
  else
    return "div.ps\t%0,%1,%2";
}
}

static const char *
output_116 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2532 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "recip.s\t%0,%2\n\tmov.s\t%0,%0";
  else
    return "recip.s\t%0,%2";
}
}

static const char *
output_117 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2532 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "recip.d\t%0,%2\n\tmov.d\t%0,%0";
  else
    return "recip.d\t%0,%2";
}
}

static const char *
output_118 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2532 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "recip.ps\t%0,%2\n\tmov.ps\t%0,%0";
  else
    return "recip.ps\t%0,%2";
}
}

static const char *
output_123 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_division ("div\t%.,%1,%2", operands); }
}

static const char *
output_124 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_division ("divu\t%.,%1,%2", operands); }
}

static const char *
output_125 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_division ("div\t%.,%1,%2", operands); }
}

static const char *
output_126 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_division ("divu\t%.,%1,%2", operands); }
}

static const char *
output_127 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_division ("ddiv\t%.,%1,%2", operands); }
}

static const char *
output_128 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_division ("ddivu\t%.,%1,%2", operands); }
}

static const char *
output_129 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2677 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "sqrt.s\t%0,%1\n\tmov.s\t%0,%0";
  else
    return "sqrt.s\t%0,%1";
}
}

static const char *
output_130 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2677 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "sqrt.d\t%0,%1\n\tmov.d\t%0,%0";
  else
    return "sqrt.d\t%0,%1";
}
}

static const char *
output_131 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2677 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "sqrt.ps\t%0,%1\n\tmov.ps\t%0,%0";
  else
    return "sqrt.ps\t%0,%1";
}
}

static const char *
output_132 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2695 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "rsqrt.s\t%0,%2\n\tmov.s\t%0,%0";
  else
    return "rsqrt.s\t%0,%2";
}
}

static const char *
output_133 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2695 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "rsqrt.d\t%0,%2\n\tmov.d\t%0,%0";
  else
    return "rsqrt.d\t%0,%2";
}
}

static const char *
output_134 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2695 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "rsqrt.ps\t%0,%2\n\tmov.ps\t%0,%0";
  else
    return "rsqrt.ps\t%0,%2";
}
}

static const char *
output_135 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2713 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "rsqrt.s\t%0,%2\n\tmov.s\t%0,%0";
  else
    return "rsqrt.s\t%0,%2";
}
}

static const char *
output_136 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2713 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "rsqrt.d\t%0,%2\n\tmov.d\t%0,%0";
  else
    return "rsqrt.d\t%0,%2";
}
}

static const char *
output_137 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2713 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "rsqrt.ps\t%0,%2\n\tmov.ps\t%0,%0";
  else
    return "rsqrt.ps\t%0,%2";
}
}

static const char *
output_146 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2801 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    return "neg\t%0,%1";
  else
    return "subu\t%0,%.,%1";
}
}

static const char *
output_151 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2834 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    return "not\t%0,%1";
  else
    return "nor\t%0,%.,%1";
}
}

static const char *
output_152 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2834 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    return "not\t%0,%1";
  else
    return "nor\t%0,%.,%1";
}
}

static const char *
output_153 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2885 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  int len;

  switch (which_alternative)
    {
    case 0:
      operands[1] = gen_lowpart (QImode, operands[1]);
      return "lbu\t%0,%1";
    case 1:
      operands[1] = gen_lowpart (HImode, operands[1]);
      return "lhu\t%0,%1";
    case 2:
      operands[1] = gen_lowpart (SImode, operands[1]);
      return "lwu\t%0,%1";
    case 3:
      return "andi\t%0,%1,%x2";
    case 4:
      len = low_bitmask_len (SImode, INTVAL (operands[2]));
      operands[2] = GEN_INT (len);
      return "ext\t%0,%1,0,%2";
    case 5:
      return "#";
    case 6:
      return "and\t%0,%1,%2";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_154 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2885 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  int len;

  switch (which_alternative)
    {
    case 0:
      operands[1] = gen_lowpart (QImode, operands[1]);
      return "lbu\t%0,%1";
    case 1:
      operands[1] = gen_lowpart (HImode, operands[1]);
      return "lhu\t%0,%1";
    case 2:
      operands[1] = gen_lowpart (SImode, operands[1]);
      return "lwu\t%0,%1";
    case 3:
      return "andi\t%0,%1,%x2";
    case 4:
      len = low_bitmask_len (DImode, INTVAL (operands[2]));
      operands[2] = GEN_INT (len);
      return "dext\t%0,%1,0,%2";
    case 5:
      return "#";
    case 6:
      return "and\t%0,%1,%2";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_155 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2921 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  switch (which_alternative)
    {
    case 0:
      operands[1] = gen_lowpart (QImode, operands[1]);
      return "lbu\t%0,%1";
    case 1:
      operands[1] = gen_lowpart (HImode, operands[1]);
      return "lhu\t%0,%1";
    case 2:
      operands[1] = gen_lowpart (SImode, operands[1]);
      return "lwu\t%0,%1";
    case 3:
      return "#";
    case 4:
      return "and\t%0,%2";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_156 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2921 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  switch (which_alternative)
    {
    case 0:
      operands[1] = gen_lowpart (QImode, operands[1]);
      return "lbu\t%0,%1";
    case 1:
      operands[1] = gen_lowpart (HImode, operands[1]);
      return "lhu\t%0,%1";
    case 2:
      operands[1] = gen_lowpart (SImode, operands[1]);
      return "lwu\t%0,%1";
    case 3:
      return "#";
    case 4:
      return "and\t%0,%2";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_157[] = {
  "or\t%0,%1,%2",
  "ori\t%0,%1,%x2",
};

static const char * const output_158[] = {
  "or\t%0,%1,%2",
  "ori\t%0,%1,%x2",
};

static const char * const output_161[] = {
  "xor\t%0,%1,%2",
  "xori\t%0,%1,%x2",
};

static const char * const output_162[] = {
  "xor\t%0,%1,%2",
  "xori\t%0,%1,%x2",
};

static const char * const output_163[] = {
  "xor\t%0,%2",
  "cmpi\t%1,%2",
  "cmp\t%1,%2",
};

static const char * const output_164[] = {
  "xor\t%0,%2",
  "cmpi\t%1,%2",
  "cmp\t%1,%2",
};

static const char * const output_168[] = {
  "sll\t%0,%1,0",
  "sb\t%1,%0",
};

static const char * const output_169[] = {
  "sll\t%0,%1,0",
  "sh\t%1,%0",
};

static const char * const output_170[] = {
  "sll\t%0,%1,0",
  "sw\t%1,%0",
};

static const char * const output_183[] = {
  "#",
  "lwu\t%0,%1",
};

static const char * const output_184[] = {
  "dext\t%0,%1,0,32",
  "lwu\t%0,%1",
};

static const char * const output_185[] = {
  "andi\t%0,%1,0x00ff",
  "lbu\t%0,%1",
};

static const char * const output_186[] = {
  "andi\t%0,%1,0x00ff",
  "lbu\t%0,%1",
};

static const char * const output_187[] = {
  "andi\t%0,%1,0xffff",
  "lhu\t%0,%1",
};

static const char * const output_188[] = {
  "andi\t%0,%1,0xffff",
  "lhu\t%0,%1",
};

static const char * const output_197[] = {
  "andi\t%0,%1,0x00ff",
  "lbu\t%0,%1",
};

static const char *
output_199 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3230 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (GET_MODE_MASK (QImode));
  return "andi\t%0,%1,%x2";
}
}

static const char *
output_200 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3230 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (GET_MODE_MASK (QImode));
  return "andi\t%0,%1,%x2";
}
}

static const char *
output_201 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3230 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (GET_MODE_MASK (HImode));
  return "andi\t%0,%1,%x2";
}
}

static const char *
output_202 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3230 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (GET_MODE_MASK (HImode));
  return "andi\t%0,%1,%x2";
}
}

static const char * const output_204[] = {
  "#",
  "#",
  "lw\t%0,%1",
};

static const char * const output_205[] = {
  "seb\t%0",
  "lb\t%0,%1",
};

static const char * const output_206[] = {
  "seb\t%0",
  "lb\t%0,%1",
};

static const char * const output_207[] = {
  "seh\t%0",
  "lh\t%0,%1",
};

static const char * const output_208[] = {
  "seh\t%0",
  "lh\t%0,%1",
};

static const char * const output_209[] = {
  "#",
  "lb\t%0,%1",
};

static const char * const output_210[] = {
  "#",
  "lb\t%0,%1",
};

static const char * const output_211[] = {
  "#",
  "lh\t%0,%1",
};

static const char * const output_212[] = {
  "#",
  "lh\t%0,%1",
};

static const char * const output_213[] = {
  "seb\t%0,%1",
  "lb\t%0,%1",
};

static const char * const output_214[] = {
  "seb\t%0,%1",
  "lb\t%0,%1",
};

static const char * const output_215[] = {
  "seh\t%0,%1",
  "lh\t%0,%1",
};

static const char * const output_216[] = {
  "seh\t%0,%1",
  "lh\t%0,%1",
};

static const char * const output_217[] = {
  "seb\t%0",
  "lb\t%0,%1",
};

static const char * const output_218[] = {
  "#",
  "lb\t%0,%1",
};

static const char * const output_219[] = {
  "seb\t%0,%1",
  "lb\t%0,%1",
};

static const char *
output_225 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3444 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (GET_MODE_BITSIZE (QImode));
  return "exts\t%0,%1,0,%m2";
}
}

static const char *
output_226 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3444 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (GET_MODE_BITSIZE (QImode));
  return "exts\t%0,%1,0,%m2";
}
}

static const char *
output_227 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3444 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (GET_MODE_BITSIZE (HImode));
  return "exts\t%0,%1,0,%m2";
}
}

static const char *
output_228 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3444 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (GET_MODE_BITSIZE (HImode));
  return "exts\t%0,%1,0,%m2";
}
}

static const char *
output_232 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3502 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_nomacro.nesting_level > 0)
    return ".set\tmacro\n\ttrunc.w.d %0,%1,%2\n\t.set\tnomacro";
  else
    return "trunc.w.d %0,%1,%2";
}
}

static const char *
output_234 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3539 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_nomacro.nesting_level > 0)
    return ".set\tmacro\n\ttrunc.w.s %0,%1,%2\n\t.set\tnomacro";
  else
    return "trunc.w.s %0,%1,%2";
}
}

static const char *
output_248 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3934 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[3] =
    GEN_INT (mask_low_and_shift_len (SImode, operands[3], operands[2]));
  return "cins\t%0,%1,%2,%m3";
}
}

static const char *
output_249 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3934 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[3] =
    GEN_INT (mask_low_and_shift_len (DImode, operands[3], operands[2]));
  return "cins\t%0,%1,%2,%m3";
}
}

static const char *
output_278 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4269 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_279 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4282 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_280 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4292 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_281 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4302 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_282 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_283 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_284 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_285 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_286 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_287 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_288 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_289 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_290 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4370 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_291 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4380 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_292 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4380 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_293 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4380 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_294 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4380 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_295 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4380 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_296 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4380 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_297 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4380 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_298 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4380 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_299 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4380 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_330 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4510 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_331 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4520 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_332 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4585 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_333 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4595 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_334 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4643 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_335 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4653 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_336 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_337 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4684 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_338 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4694 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_339 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4704 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_340 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_344 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4831 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_345 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4846 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return ISA_HAS_MACCHI ? "macchi\t%0,%.,%." : "mfhi\t%0"; }
}

static const char *
output_346 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4846 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return ISA_HAS_MACCHI ? "macchi\t%0,%.,%." : "mfhi\t%0"; }
}

static const char *
output_347 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4846 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return ISA_HAS_MACCHI ? "dmacchi\t%0,%.,%." : "mfhi\t%0"; }
}

static const char *
output_351 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4904 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_352 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4904 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_353 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4904 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_354 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4904 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_355 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4904 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_356 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4904 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_357 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4904 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_358 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4919 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_359 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4919 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_360 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4919 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_361 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4919 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_362 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4919 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_363 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4919 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_364 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4919 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_365 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4934 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_366 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4934 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_367 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4934 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_368 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4934 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_369 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4934 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_370 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4934 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_371 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4934 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_386 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4977 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_must_initialize_gp_p () ? "#" : ""; }
}

static const char *
output_387 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4977 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_must_initialize_gp_p () ? "#" : ""; }
}

static const char *
output_388 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4994 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_must_initialize_gp_p () ? "#" : ""; }
}

static const char *
output_389 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4994 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_must_initialize_gp_p () ? "#" : ""; }
}

static const char *
output_391 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5020 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_must_initialize_gp_p () ? "#" : ""; }
}

static const char *
output_392 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5020 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_must_initialize_gp_p () ? "#" : ""; }
}

static const char *
output_393 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5041 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_must_initialize_gp_p () ? "#" : ""; }
}

static const char *
output_394 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5041 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_must_initialize_gp_p () ? "#" : ""; }
}

static const char *
output_395 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5060 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_must_initialize_gp_p () ? "#" : ""; }
}

static const char *
output_396 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5060 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_must_initialize_gp_p () ? "#" : ""; }
}

static const char *
output_397 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5081 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_nomacro.nesting_level > 0 && which_alternative == 1)
    return ".set\tmacro\n\t.cprestore\t%1\n\t.set\tnomacro";
  else
    return ".cprestore\t%1";
}
}

static const char *
output_398 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5081 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_nomacro.nesting_level > 0 && which_alternative == 1)
    return ".set\tmacro\n\t.cprestore\t%1\n\t.set\tnomacro";
  else
    return ".cprestore\t%1";
}
}

static const char *
output_401 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5123 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_sync (); }
}

static const char *
output_405 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5142 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return "%(%<bal\t1f\n"
         "\tnop\n"
         "1:\taddiu\t$31,$31,12\n"
         "\tjr.hb\t$31\n"
         "\tnop%>%)";
}
}

static const char *
output_406 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5142 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return "%(%<bal\t1f\n"
         "\tnop\n"
         "1:\tdaddiu\t$31,$31,12\n"
         "\tjr.hb\t$31\n"
         "\tnop%>%)";
}
}

static const char *
output_409 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5232 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (CONST_INT_P (operands[2]))
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (SImode) - 1));

  return "sll\t%0,%1,%2";
}
}

static const char *
output_410 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5232 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (CONST_INT_P (operands[2]))
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (SImode) - 1));

  return "sra\t%0,%1,%2";
}
}

static const char *
output_411 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5232 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (CONST_INT_P (operands[2]))
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (SImode) - 1));

  return "srl\t%0,%1,%2";
}
}

static const char *
output_412 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5232 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (CONST_INT_P (operands[2]))
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (DImode) - 1));

  return "dsll\t%0,%1,%2";
}
}

static const char *
output_413 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5232 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (CONST_INT_P (operands[2]))
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (DImode) - 1));

  return "dsra\t%0,%1,%2";
}
}

static const char *
output_414 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5232 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (CONST_INT_P (operands[2]))
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (DImode) - 1));

  return "dsrl\t%0,%1,%2";
}
}

static const char *
output_415 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5248 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (CONST_INT_P (operands[2]))
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "sll\t%0,%1,%2";
}
}

static const char *
output_416 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5248 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (CONST_INT_P (operands[2]))
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "sra\t%0,%1,%2";
}
}

static const char *
output_417 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5248 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (CONST_INT_P (operands[2]))
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "srl\t%0,%1,%2";
}
}

static const char *
output_418 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5262 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (which_alternative == 0)
    return "sll\t%0,%2";

  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "sll\t%0,%1,%2";
}
}

static const char *
output_419 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5262 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (which_alternative == 0)
    return "sra\t%0,%2";

  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "sra\t%0,%1,%2";
}
}

static const char *
output_420 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5262 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (which_alternative == 0)
    return "srl\t%0,%2";

  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "srl\t%0,%1,%2";
}
}

static const char *
output_421 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5284 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (which_alternative == 0)
    return "dsll\t%0,%2";

  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);
  return "dsll\t%0,%1,%2";
}
}

static const char *
output_422 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5304 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (CONST_INT_P (operands[2]))
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsra\t%0,%2";
}
}

static const char *
output_423 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5323 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (CONST_INT_P (operands[2]))
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsrl\t%0,%2";
}
}

static const char *
output_425 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5378 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (CONST_INT_P (operands[2]))
    gcc_assert (INTVAL (operands[2]) >= 0
		&& INTVAL (operands[2]) < GET_MODE_BITSIZE (SImode));

  return "ror\t%0,%1,%2";
}
}

static const char *
output_426 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5378 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (CONST_INT_P (operands[2]))
    gcc_assert (INTVAL (operands[2]) >= 0
		&& INTVAL (operands[2]) < GET_MODE_BITSIZE (DImode));

  return "dror\t%0,%1,%2";
}
}

static const char *
output_433 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5456 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%F1", "%Z2%0"),
					 MIPS_BRANCH ("b%W1", "%Z2%0"));
}
}

static const char *
output_434 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5472 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%W1", "%Z2%0"),
					 MIPS_BRANCH ("b%F1", "%Z2%0"));
}
}

static const char *
output_435 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5490 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_order_conditional_branch (insn, operands, false); }
}

static const char *
output_436 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5490 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_order_conditional_branch (insn, operands, false); }
}

static const char *
output_437 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5502 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_order_conditional_branch (insn, operands, true); }
}

static const char *
output_438 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5502 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_order_conditional_branch (insn, operands, true); }
}

static const char *
output_439 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5516 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%C1", "%2,%z3,%0"),
					 MIPS_BRANCH ("b%N1", "%2,%z3,%0"));
}
}

static const char *
output_440 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5516 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%C1", "%2,%z3,%0"),
					 MIPS_BRANCH ("b%N1", "%2,%z3,%0"));
}
}

static const char *
output_441 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5532 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%N1", "%2,%z3,%0"),
					 MIPS_BRANCH ("b%C1", "%2,%z3,%0"));
}
}

static const char *
output_442 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5532 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%N1", "%2,%z3,%0"),
					 MIPS_BRANCH ("b%C1", "%2,%z3,%0"));
}
}

static const char * const output_443[] = {
  "b%C1z\t%2,%0",
  "bt%C1z\t%0",
};

static const char * const output_444[] = {
  "b%C1z\t%2,%0",
  "bt%C1z\t%0",
};

static const char * const output_445[] = {
  "b%N1z\t%2,%0",
  "bt%N1z\t%0",
};

static const char * const output_446[] = {
  "b%N1z\t%2,%0",
  "bt%N1z\t%0",
};

static const char *
output_447 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5615 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit0", "%1,%2,%0"),
				    MIPS_BRANCH ("bbit1", "%1,%2,%0"));
}
}

static const char *
output_448 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5615 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit1", "%1,%2,%0"),
				    MIPS_BRANCH ("bbit0", "%1,%2,%0"));
}
}

static const char *
output_449 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5615 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit0", "%1,%2,%0"),
				    MIPS_BRANCH ("bbit1", "%1,%2,%0"));
}
}

static const char *
output_450 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5615 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit1", "%1,%2,%0"),
				    MIPS_BRANCH ("bbit0", "%1,%2,%0"));
}
}

static const char *
output_451 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5635 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit1", "%1,%2,%0"),
				    MIPS_BRANCH ("bbit0", "%1,%2,%0"));
}
}

static const char *
output_452 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5635 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit0", "%1,%2,%0"),
				    MIPS_BRANCH ("bbit1", "%1,%2,%0"));
}
}

static const char *
output_453 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5635 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit1", "%1,%2,%0"),
				    MIPS_BRANCH ("bbit0", "%1,%2,%0"));
}
}

static const char *
output_454 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5635 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit0", "%1,%2,%0"),
				    MIPS_BRANCH ("bbit1", "%1,%2,%0"));
}
}

static const char * const output_463[] = {
  "seq\t%0,%1,%2",
  "sltiu\t%0,%1,1",
  "seqi\t%0,%1,%2",
};

static const char * const output_464[] = {
  "seq\t%0,%1,%2",
  "sltiu\t%0,%1,1",
  "seqi\t%0,%1,%2",
};

static const char * const output_465[] = {
  "seq\t%0,%1,%2",
  "sltiu\t%0,%1,1",
  "seqi\t%0,%1,%2",
};

static const char * const output_466[] = {
  "seq\t%0,%1,%2",
  "sltiu\t%0,%1,1",
  "seqi\t%0,%1,%2",
};

static const char * const output_471[] = {
  "sne\t%0,%1,%2",
  "sltu\t%0,%.,%1",
  "snei\t%0,%1,%2",
};

static const char * const output_472[] = {
  "sne\t%0,%1,%2",
  "sltu\t%0,%.,%1",
  "snei\t%0,%1,%2",
};

static const char * const output_473[] = {
  "sne\t%0,%1,%2",
  "sltu\t%0,%.,%1",
  "snei\t%0,%1,%2",
};

static const char * const output_474[] = {
  "sne\t%0,%1,%2",
  "sltu\t%0,%.,%1",
  "snei\t%0,%1,%2",
};

static const char *
output_515 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5772 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%0,%1,%2";
}
}

static const char *
output_516 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5772 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%0,%1,%2";
}
}

static const char *
output_517 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5772 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%0,%1,%2";
}
}

static const char *
output_518 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5772 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%0,%1,%2";
}
}

static const char *
output_519 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5772 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%0,%1,%2";
}
}

static const char *
output_520 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5772 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%0,%1,%2";
}
}

static const char *
output_521 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5772 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%0,%1,%2";
}
}

static const char *
output_522 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5772 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%0,%1,%2";
}
}

static const char *
output_523 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5784 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%1,%2";
}
}

static const char *
output_524 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5784 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%1,%2";
}
}

static const char *
output_525 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5784 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%1,%2";
}
}

static const char *
output_526 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5784 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%1,%2";
}
}

static const char *
output_527 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5784 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%1,%2";
}
}

static const char *
output_528 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5784 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%1,%2";
}
}

static const char *
output_529 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5784 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%1,%2";
}
}

static const char *
output_530 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5784 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%1,%2";
}
}

static const char *
output_553 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5836 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return MIPS_ABSOLUTE_JUMP ("%*j\t%l0%/"); }
}

static const char *
output_554 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5843 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (get_attr_length (insn) <= 8)
    return "%*b\t%l0%/";
  else
    {
      mips_output_load_label (operands[0]);
      return "%*jr\t%@%/%]";
    }
}
}

static const char *
output_562 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6001 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx diff_vec = PATTERN (next_real_insn (operands[2]));

  gcc_assert (GET_CODE (diff_vec) == ADDR_DIFF_VEC);
  
  output_asm_insn ("sltu\t%0, %1", operands);
  output_asm_insn ("bteqz\t%3", operands);
  
  switch (GET_MODE (diff_vec))
    {
    case HImode:
      output_asm_insn ("sll\t%5, %0, 1", operands);
      output_asm_insn ("la\t%4, %2", operands);
      output_asm_insn ("addu\t%5, %4, %5", operands);
      output_asm_insn ("lh\t%5, 0(%5)", operands);
      break;
    
    case SImode:
      output_asm_insn ("sll\t%5, %0, 2", operands);
      output_asm_insn ("la\t%4, %2", operands);
      output_asm_insn ("addu\t%5, %4, %5", operands);
      output_asm_insn ("lw\t%5, 0(%5)", operands);
      break;

    default:
      gcc_unreachable ();
    }
  
  output_asm_insn ("addu\t%4, %4, %5", operands);
  
  return "j\t%4";
}
}

static const char *
output_563 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6001 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx diff_vec = PATTERN (next_real_insn (operands[2]));

  gcc_assert (GET_CODE (diff_vec) == ADDR_DIFF_VEC);
  
  output_asm_insn ("sltu\t%0, %1", operands);
  output_asm_insn ("bteqz\t%3", operands);
  
  switch (GET_MODE (diff_vec))
    {
    case HImode:
      output_asm_insn ("sll\t%5, %0, 1", operands);
      output_asm_insn ("la\t%4, %2", operands);
      output_asm_insn ("daddu\t%5, %4, %5", operands);
      output_asm_insn ("lh\t%5, 0(%5)", operands);
      break;
    
    case SImode:
      output_asm_insn ("sll\t%5, %0, 2", operands);
      output_asm_insn ("la\t%4, %2", operands);
      output_asm_insn ("daddu\t%5, %4, %5", operands);
      output_asm_insn ("lw\t%5, 0(%5)", operands);
      break;

    default:
      gcc_unreachable ();
    }
  
  output_asm_insn ("addu\t%4, %4, %5", operands);
  
  return "j\t%4";
}
}

static const char *
output_565 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6117 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_probe_stack_range (operands[0], operands[2]); }
}

static const char *
output_566 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6117 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_probe_stack_range (operands[0], operands[2]); }
}

static const char *
output_576 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6218 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_581 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6307 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_must_initialize_gp_p () ? "#" : ""; }
}

static const char *
output_582 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6307 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_must_initialize_gp_p () ? "#" : ""; }
}

static const char *
output_587 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6420 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return MIPS_CALL ("j", operands, 0, 1); }
}

static const char *
output_588 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6441 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return MIPS_CALL ("j", operands, 1, 2); }
}

static const char *
output_589 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6453 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return MIPS_CALL ("j", operands, 1, 2); }
}

static const char *
output_590 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6509 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return TARGET_SPLIT_CALLS ? "#" : MIPS_CALL ("jal", operands, 0, 1); }
}

static const char *
output_591 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6524 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return MIPS_CALL ("jal", operands, 0, 1); }
}

static const char *
output_592 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6538 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return TARGET_SPLIT_CALLS ? "#" : MIPS_CALL ("jal", operands, 0, -1); }
}

static const char *
output_593 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6555 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return MIPS_CALL ("jal", operands, 0, -1); }
}

static const char *
output_594 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6578 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return TARGET_SPLIT_CALLS ? "#" : MIPS_CALL ("jal", operands, 1, 2); }
}

static const char *
output_595 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6596 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return MIPS_CALL ("jal", operands, 1, 2); }
}

static const char *
output_596 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return TARGET_SPLIT_CALLS ? "#" : MIPS_CALL ("jal", operands, 1, -1); }
}

static const char *
output_597 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6627 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return MIPS_CALL ("jal", operands, 1, -1); }
}

static const char *
output_598 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6641 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return TARGET_SPLIT_CALLS ? "#" : MIPS_CALL ("jal", operands, 1, 2); }
}

static const char *
output_599 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6662 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return MIPS_CALL ("jal", operands, 1, 2); }
}

static const char *
output_600 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6703 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A)
    /* Loongson 2[ef] and Loongson 3a use load to $0 to perform prefetching.  */
    return "ld\t$0,%a0";
  operands[1] = mips_prefetch_cookie (operands[1], operands[2]);
  return "pref\t%1,%a0";
}
}

static const char *
output_601 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6718 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = mips_prefetch_cookie (operands[2], operands[3]);
  return "prefx\t%2,%1(%0)";
}
}

static const char *
output_602 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6718 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = mips_prefetch_cookie (operands[2], operands[3]);
  return "prefx\t%2,%1(%0)";
}
}

static const char *
output_604 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6735 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
    if (mips_noreorder.nesting_level > 0)
      return "nop";
    else
      return "#nop";
  }
}

static const char * const output_605[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_606[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_607[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_608[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_609[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_610[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_611[] = {
  "mov%T4.s\t%0,%2,%1",
  "mov%t4.s\t%0,%3,%1",
};

static const char * const output_612[] = {
  "mov%T4.s\t%0,%2,%1",
  "mov%t4.s\t%0,%3,%1",
};

static const char * const output_613[] = {
  "mov%T4.s\t%0,%2,%1",
  "mov%t4.s\t%0,%3,%1",
};

static const char * const output_614[] = {
  "mov%T4.d\t%0,%2,%1",
  "mov%t4.d\t%0,%3,%1",
};

static const char * const output_615[] = {
  "mov%T4.d\t%0,%2,%1",
  "mov%t4.d\t%0,%3,%1",
};

static const char * const output_616[] = {
  "mov%T4.d\t%0,%2,%1",
  "mov%t4.d\t%0,%3,%1",
};

static const char *
output_617 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6814 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips_output_tls_reloc_directive (&operands[0]); }
}

static const char *
output_618 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6822 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  assemble_integer (mips_strip_unspec_address (operands[0]),
		    INTVAL (operands[1]),
		    BITS_PER_UNIT * INTVAL (operands[1]), 1);
  return "";
}
}

static const char *
output_619 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6834 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  REAL_VALUE_TYPE d;

  gcc_assert (GET_CODE (operands[0]) == CONST_DOUBLE);
  REAL_VALUE_FROM_CONST_DOUBLE (d, operands[0]);
  assemble_real (d, GET_MODE (operands[0]),
		 GET_MODE_BITSIZE (GET_MODE (operands[0])));
  return "";
}
}

static const char *
output_621 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6873 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return mips16e_output_save_restore (operands[0], INTVAL (operands[2])); }
}

static const char *
output_628 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6958 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return MIPS_CALL ("jal", operands, 0, -1); }
}

static const char *
output_629 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6958 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ return MIPS_CALL ("jal", operands, 0, -1); }
}

static const char *
output_630 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 57 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync (); }
}

static const char *
output_631 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 68 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_632 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 68 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_633 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 100 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_634 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 115 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_635 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 115 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_636 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 146 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_637 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 146 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_638 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 146 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_639 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 146 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_640 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 146 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_641 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 187 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_642 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 187 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_643 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 187 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_644 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 187 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_645 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 187 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_646 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 233 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_647 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 233 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_648 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 233 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_649 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 233 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_650 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 233 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_651 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 269 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_652 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 308 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_653 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 352 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_654 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 369 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_655 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 369 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_656 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 384 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_657 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 384 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_658 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 399 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_659 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 399 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_660 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 414 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_661 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 414 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_662 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_663 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 430 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_664 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 444 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_665 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 444 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_666 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 444 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_667 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 444 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_668 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 444 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_669 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 444 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_670 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_671 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_672 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_673 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_674 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_675 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_676 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 473 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_677 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 473 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_678 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 473 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_679 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 473 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_680 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 473 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_681 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 473 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_682 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 485 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_683 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 485 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_684 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 498 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_685 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 498 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_686 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 512 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_687 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 512 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_688 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 527 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_689 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 527 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_690 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 556 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_691 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 595 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_692 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 595 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_693 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 640 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_694 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 640 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_697 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 697 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char *
output_698 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 697 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{ return mips_output_sync_loop (insn, operands); }
}

static const char * const output_701[] = {
  "mov%T4.ps\t%0,%2,%1",
  "mov%t4.ps\t%0,%3,%1",
};

static const char * const output_702[] = {
  "mov%T4.ps\t%0,%2,%1",
  "mov%t4.ps\t%0,%3,%1",
};

static const char * const output_703[] = {
  "movt.ps\t%0,%1,%3",
  "movf.ps\t%0,%2,%3",
};

static const char *
output_704 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 101 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  /* Let <op>L be the lower part of operand <op> and <op>U be the upper part.
     The P[UL][UL].PS instruction always specifies the upper part of the
     result first, so the instruction is:

	P<aUL><bUL>.PS %0,<aop>,<bop>

     where 0U == <aop><aUL> and 0L == <bop><bUL>.

     GCC's vector indices are specified in memory order, which means
     that vector element 0 is the lower part (L) on little-endian targets
     and the upper part (U) on big-endian targets.  vec_concat likewise
     concatenates in memory order, which means that operand 3 (being
     0 or 1) selects part of operand 1 and operand 4 (being 2 or 3)
     selects part of operand 2.

     Let:

	I3 = INTVAL (operands[3])
	I4 = INTVAL (operands[4]) - 2

     Taking the two endiannesses in turn:

     Little-endian:

        The semantics of the RTL pattern are:

	{ 0L, 0U } = { X[I3], X[I4 + 2] }, where X = { 1L, 1U, 2L, 2U }

	so: 0L = { 1L, 1U }[I3] (= <bop><bUL>)
	    0U = { 2L, 2U }[I4] (= <aop><aUL>)

	    <aop> = 2, <aUL> = I4 ? U : L
	    <bop> = 1, <bUL> = I3 ? U : L

	    [LL] !I4 && !I3   [UL] I4 && !I3
	    [LU] !I4 && I3    [UU] I4 && I3

     Big-endian:

        The semantics of the RTL pattern are:

	{ 0U, 0L } = { X[I3], X[I4 + 2] }, where X = { 1U, 1L, 2U, 2L }

	so: 0U = { 1U, 1L }[I3] (= <aop><aUL>)
	    0L = { 2U, 2L }[I4] (= <bop><bUL>)

	    <aop> = 1, <aUL> = I3 ? L : U
	    <bop> = 2, <bUL> = I4 ? L : U

	    [UU] !I3 && !I4   [UL] !I3 && I4
	    [LU] I3 && !I4    [LL] I3 && I4.  */

  static const char * const mnemonics[2][4] = {
    /* LE */ { "pll.ps\t%0,%2,%1", "pul.ps\t%0,%2,%1",
	       "plu.ps\t%0,%2,%1", "puu.ps\t%0,%2,%1" },
    /* BE */ { "puu.ps\t%0,%1,%2", "pul.ps\t%0,%1,%2",
	       "plu.ps\t%0,%1,%2", "pll.ps\t%0,%1,%2" },
  };

  unsigned mask = INTVAL (operands[3]) * 2 + (INTVAL (operands[4]) - 2);
  return mnemonics[BYTES_BIG_ENDIAN][mask];
}
}

static const char *
output_705 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 272 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  if (BYTES_BIG_ENDIAN)
    return "cvt.ps.s\t%0,%1,%2";
  else
    return "cvt.ps.s\t%0,%2,%1";
}
}

static const char *
output_706 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 291 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  if (INTVAL (operands[2]) == !BYTES_BIG_ENDIAN)
    return "cvt.s.pu\t%0,%1";
  else
    return "cvt.s.pl\t%0,%1";
}
}

static const char *
output_735 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 639 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  operands[2]
    = gen_rtx_REG (CCmode, REGNO (operands[2]) + INTVAL (operands[3]));
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%F1", "%2,%0"),
					 MIPS_BRANCH ("b%W1", "%2,%0"));
}
}

static const char *
output_736 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 660 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  operands[2]
    = gen_rtx_REG (CCmode, REGNO (operands[2]) + INTVAL (operands[3]));
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%W1", "%2,%0"),
					 MIPS_BRANCH ("b%F1", "%2,%0"));
}
}

static const char *
output_779 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 396 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2])
	  & ~(unsigned HOST_WIDE_INT) 0xf)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0xf);
      return "shll.ph\t%0,%1,%2";
    }
  return "shllv.ph\t%0,%1,%2";
}
}

static const char *
output_780 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 396 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2])
	  & ~(unsigned HOST_WIDE_INT) 0x7)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x7);
      return "shll.qb\t%0,%1,%2";
    }
  return "shllv.qb\t%0,%1,%2";
}
}

static const char *
output_781 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 418 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2])
          & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "shll_s.w\t%0,%1,%2";
    }
  return "shllv_s.w\t%0,%1,%2";
}
}

static const char *
output_782 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 418 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2])
          & ~(unsigned HOST_WIDE_INT) 0xf)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0xf);
      return "shll_s.ph\t%0,%1,%2";
    }
  return "shllv_s.ph\t%0,%1,%2";
}
}

static const char *
output_783 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 438 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x7)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x7);
      return "shrl.qb\t%0,%1,%2";
    }
  return "shrlv.qb\t%0,%1,%2";
}
}

static const char *
output_784 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 457 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0xf)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0xf);
      return "shra.ph\t%0,%1,%2";
    }
  return "shrav.ph\t%0,%1,%2";
}
}

static const char *
output_785 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 475 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2])
	  & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "shra_r.w\t%0,%1,%2";
    }
  return "shrav_r.w\t%0,%1,%2";
}
}

static const char *
output_786 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 475 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2])
	  & ~(unsigned HOST_WIDE_INT) 0xf)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0xf);
      return "shra_r.ph\t%0,%1,%2";
    }
  return "shrav_r.ph\t%0,%1,%2";
}
}

static const char *
output_807 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 793 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[1]) & ~(unsigned HOST_WIDE_INT) 0xff)
	operands[1] = GEN_INT (INTVAL (operands[1]) & 0xff);
      return "repl.qb\t%0,%1";
    }
  return "replv.qb\t%0,%1";
}
}

static const char * const output_808[] = {
  "repl.ph\t%0,%1",
  "replv.ph\t%0,%1",
};

static const char *
output_821 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 915 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "extr.w\t%0,%q1,%2";
    }
  return "extrv.w\t%0,%q1,%2";
}
}

static const char *
output_822 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 936 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "extr_r.w\t%0,%q1,%2";
    }
  return "extrv_r.w\t%0,%q1,%2";
}
}

static const char *
output_823 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 957 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "extr_rs.w\t%0,%q1,%2";
    }
  return "extrv_rs.w\t%0,%q1,%2";
}
}

static const char *
output_824 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 979 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "extr_s.h\t%0,%q1,%2";
    }
  return "extrv_s.h\t%0,%q1,%2";
}
}

static const char *
output_825 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1002 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "extp\t%0,%q1,%2";
    }
  return "extpv\t%0,%q1,%2";
}
}

static const char *
output_826 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1027 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "extpdp\t%0,%q1,%2";
    }
  return "extpdpv\t%0,%q1,%2";
}
}

static const char *
output_827 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1046 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) < -32 || INTVAL (operands[2]) > 31)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);
      return "shilo\t%q0,%2";
    }
  return "shilov\t%q0,%2";
}
}

static const char *
output_861 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 137 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md"
{
  if (INTVAL (operands[3]) & ~(unsigned HOST_WIDE_INT) 31)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 31);
  return "append\t%0,%z2,%3";
}
}

static const char *
output_862 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 152 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md"
{
  if (INTVAL (operands[3]) & ~(unsigned HOST_WIDE_INT) 3)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 3);
  return "balign\t%0,%z2,%3";
}
}

static const char *
output_875 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 327 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md"
{
  if (INTVAL (operands[3]) & ~(unsigned HOST_WIDE_INT) 31)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 31);
  return "precr_sra.ph.w\t%0,%z2,%3";
}
}

static const char *
output_876 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 342 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md"
{
  if (INTVAL (operands[3]) & ~(unsigned HOST_WIDE_INT) 31)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 31);
  return "precr_sra_r.ph.w\t%0,%z2,%3";
}
}

static const char *
output_877 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 357 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md"
{
  if (INTVAL (operands[3]) & ~(unsigned HOST_WIDE_INT) 31)
    operands[3] = GEN_INT (INTVAL (operands[3]) & 31);
  return "prepend\t%0,%z2,%3";
}
}

static const char *
output_878 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 371 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 7)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 7);
      return "shra.qb\t%0,%z1,%2";
    }
  return "shrav.qb\t%0,%z1,%2";
}
}

static const char *
output_879 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 390 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 7)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 7);
      return "shra_r.qb\t%0,%z1,%2";
    }
  return "shrav_r.qb\t%0,%z1,%2";
}
}

static const char *
output_880 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 408 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 15)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 15);
      return "shrl.ph\t%0,%z1,%2";
    }
  return "shrlv.ph\t%0,%z1,%2";
}
}

static const char *
output_956 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 116 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_957 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 116 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_958 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 116 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_1055 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 918 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
    if (TARGET_LOONGSON_2EF)
      return mips_output_division ("div.g\t%0,%1,%2", operands);
    else
      return mips_output_division ("gsdiv\t%0,%1,%2", operands);
  }
}

static const char *
output_1056 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 918 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
    if (TARGET_LOONGSON_2EF)
      return mips_output_division ("divu.g\t%0,%1,%2", operands);
    else
      return mips_output_division ("gsdivu\t%0,%1,%2", operands);
  }
}

static const char *
output_1057 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 918 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
    if (TARGET_LOONGSON_2EF)
      return mips_output_division ("ddiv.g\t%0,%1,%2", operands);
    else
      return mips_output_division ("gsddiv\t%0,%1,%2", operands);
  }
}

static const char *
output_1058 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 918 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
    if (TARGET_LOONGSON_2EF)
      return mips_output_division ("ddivu.g\t%0,%1,%2", operands);
    else
      return mips_output_division ("gsddivu\t%0,%1,%2", operands);
  }
}

static const char *
output_1059 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 932 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
    if (TARGET_LOONGSON_2EF)
      return mips_output_division ("mod.g\t%0,%1,%2", operands);
    else
      return mips_output_division ("gsmod\t%0,%1,%2", operands);
  }
}

static const char *
output_1060 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 932 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
    if (TARGET_LOONGSON_2EF)
      return mips_output_division ("modu.g\t%0,%1,%2", operands);
    else
      return mips_output_division ("gsmodu\t%0,%1,%2", operands);
  }
}

static const char *
output_1061 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 932 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
    if (TARGET_LOONGSON_2EF)
      return mips_output_division ("dmod.g\t%0,%1,%2", operands);
    else
      return mips_output_division ("gsdmod\t%0,%1,%2", operands);
  }
}

static const char *
output_1062 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 932 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
    if (TARGET_LOONGSON_2EF)
      return mips_output_division ("dmodu.g\t%0,%1,%2", operands);
    else
      return mips_output_division ("gsdmodu\t%0,%1,%2", operands);
  }
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    trap_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    trap_comparison_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "dI",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "d,Q",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "d,Q",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=ks,d,d,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "ks,ks,0,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "Q,Q,Q,O,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=ks,d,d,d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "ks,ks,0,d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "Q,Q,Q,O,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "d,Q",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "Q,O,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=d,l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l,X",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    muldiv_target_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    muldiv_target_operand,
    "=l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=l*?*?,d?",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,&d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=l*?*?,d*?,d?",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,l,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,3,l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,&d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=l,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,3",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=l,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,1",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=d,d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    muldiv_target_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l*?*?,d?",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,&d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=l,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    muldiv_target_operand,
    "=ka",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x",
    TImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=d",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    muldiv_target_operand,
    "=x",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    muldiv_target_operand,
    "=x",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    muldiv_target_operand,
    "=ka",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    muldiv_target_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    muldiv_target_operand,
    "=x",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x",
    TImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "+l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_1_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_1_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_1_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    muldiv_target_operand,
    "=l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d,d,d,d,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "o,o,W,d,d,d,d",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    and_operand,
    "Yb,Yh,Yw,K,Yx,Yw,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d,d,d,d,d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "o,o,W,d,d,d,d",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    and_operand,
    "Yb,Yh,Yw,K,Yx,Yw,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d,d,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%W,W,W,d,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    and_operand,
    "Yb,Yh,Yw,Yw,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d,d,d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%W,W,W,d,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    and_operand,
    "Yb,Yh,Yw,Yw,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    uns_arith_operand,
    "d,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    uns_arith_operand,
    "d,K",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,t,t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    uns_arith_operand,
    "d,K,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,t,t",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    uns_arith_operand,
    "d,K,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=d,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=d,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_arith_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_arith_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_arith_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "d,W",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "d,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "d,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "d,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "d,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d,d",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "d,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d,l,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,0,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d,d",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=d",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=d",
    SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "+m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "+m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&d",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    d_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    symbolic_operand_with_high,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    symbolic_operand_with_high,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    got_disp_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    got_disp_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    got_disp_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    got_disp_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    got_page_ofst_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    got_page_ofst_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    stack_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    stack_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*a,*a,*d,*f,*f,*d,*m,*B*C*D,*B*C*D,*d,*m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,i,m,d,*J,*d,*a,*J*d,*m,*f,*f,*d,*m,*B*C*D,*B*C*D",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m,*d",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,m,d,*x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*a,*d,*B*C*D,*B*C*D,*d,*m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V2HImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V2HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V4QImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V4QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V2HQmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V2HQmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V2UHQmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V2UHQmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V2HAmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V2HAmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V2UHAmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V2UHAmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V4QQmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V4QQmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V4UQQmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V4UQQmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V2HImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V2HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V4QImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V4QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V2HQmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V2HQmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V2UHQmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V2UHQmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V2HAmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V2HAmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V2UHAmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V2UHAmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V4QQmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V4QQmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V4UQQmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V4UQQmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*a,*d",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,I,m,dJ,*d*J,*a",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m,*d",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,m,d,*a",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*a,*d",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,I,m,dJ,*d*J,*a",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m,*d",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,m,d,*a",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,m,*f,*d,*d,*d,*m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "f,G,m,f,G,*d,*f,*G*d,*m,*d",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "Gd,m,d",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,m,d",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,m,*f,*d,*d,*d,*m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "f,G,m,f,G,*d,*f,*d*G,*m,*d",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "dG,m,dG",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,m,d",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*a,*a,*d",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,i,m,dJ,*J,*d,*a",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m,*d",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,m,d,*a",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,m,f,d,f,m",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "dG,m,dG,dG,f,m,f",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,m",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "d,d,y,m,d",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,m,*f,*d,*d,*d,*m",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "f,YG,m,f,YG,*d,*f,*d*YG,*m,*d",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    hilo_operand,
    "x",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    hilo_operand,
    "x",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    hilo_operand,
    "x",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "dJ,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=d,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    symbol_ref_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    symbol_ref_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    symbol_ref_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    symbol_ref_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    cprestore_save_slot_operand,
    "=X,X",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "I,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cprestore_save_slot_operand,
    "=X,X",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "I,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,&d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    cprestore_load_slot_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    cprestore_load_slot_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    pmode_register_operand,
    "d",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    address_operand,
    "p",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "z",
    CCmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    order_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    order_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "d,t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "d,t",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%d,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_imm10_operand,
    "d,J,YB",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%d,d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_imm10_operand,
    "d,J,YB",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%d,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_imm10_operand,
    "d,J,YB",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%d,d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_imm10_operand,
    "d,J,YB",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "dI",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "dI",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t,t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t,t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "d,I",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t,t",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t,t",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "d,I",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sle_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    sle_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sle_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    sle_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sle_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    sle_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sle_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    sle_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=d",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=d",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    pmode_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=B,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,B",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&d",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "m,d",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "m,d",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    call_insn_operand,
    "j,S",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "j,S",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "c,S",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_call_insn_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_call_insn_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "c,S",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    address_operand,
    "p",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "0,dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "0,dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "0,dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "0,dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "0,dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    CCmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "0,dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    CCmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    CCmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    CCmode,
    0,
    1,
    0,
    0
  },
  {
    tls_reloc_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    consttable_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "dS",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "dS",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    BLKmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "dJ,dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d,&d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "dJ,dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "I,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ,dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "d,J",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arith_operand,
    "I,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "+R",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d,&d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arith_operand,
    "I,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    uns_arith_operand,
    "K,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    uns_arith_operand,
    "K,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    uns_arith_operand,
    "K,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d,&d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    uns_arith_operand,
    "K,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "dJ,dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d,&d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d,&d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "dJ,dJ",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "I,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d,&d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+R,R",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arith_operand,
    "I,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+ZR",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+ZR",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z,z",
    CCV2mode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_or_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_2_or_3_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_or_1_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=z",
    CCV4mode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=z",
    CCV2mode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z",
    CCV4mode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z",
    CCV2mode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "z",
    CCV2mode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_imm10_operand,
    "YB,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a,a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a,a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_uimm6_operand,
    "YA",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_uimm6_operand,
    "YA",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG,dYG",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "dYG,dYG",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    UDQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    UDQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    UDQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    UDAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    UDAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    UDAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=d",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=a",
    DQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DQmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=m,f,d,f,d,m,d",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "f,m,f,dYG,dYG,dYG,m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,f,d,f,d,m,d",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "f,m,f,dYG,dYG,dYG,m",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,f,d,f,d,m,d",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "f,m,f,dYG,dYG,dYG,m",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "Jd",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "Jd",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    reg_or_0_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    reg_or_0_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    lo_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    lo_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    lo_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    macc_msac_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    lo_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    macc_msac_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    lo_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    macc_msac_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    TImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_1_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_1_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_1_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    muldiv_target_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    muldiv_target_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    and_reg_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    and_reg_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    uns_arith_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    uns_arith_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "d",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    d_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    symbolic_operand_with_high,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    symbolic_operand_with_high,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    got_disp_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    got_disp_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    got_disp_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    got_disp_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    got_page_ofst_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    got_page_ofst_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    splittable_const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    splittable_const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    d_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    d_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    symbol_ref_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    symbol_ref_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    symbol_ref_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    symbol_ref_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    cprestore_save_slot_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cprestore_save_slot_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    pmode_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    pmode_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mips_cstore_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mips_cstore_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    small_data_pattern,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_or_1_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    CCV4mode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    CCV2mode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    pmode_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    pmode_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data_d insn_data[] = 
{
  /* <internal>:0 */
  {
    "*placeholder_for_nothing",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md:105 */
  {
    "ls2_alu1_turn_enabled_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_1 },
#else
    { 0, 0, output_1 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ls2_alu1_turn_enabled_insn },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md:116 */
  {
    "ls2_alu2_turn_enabled_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_2 },
#else
    { 0, 0, output_2 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ls2_alu2_turn_enabled_insn },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md:127 */
  {
    "ls2_falu1_turn_enabled_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_3 },
#else
    { 0, 0, output_3 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ls2_falu1_turn_enabled_insn },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md:138 */
  {
    "ls2_falu2_turn_enabled_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_4 },
#else
    { 0, 0, output_4 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ls2_falu2_turn_enabled_insn },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1065 */
  {
    "trap",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_5 },
#else
    { 0, 0, output_5 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_trap },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1089 */
  {
    "*conditional_trapsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "t%C0\t%z1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1089 */
  {
    "*conditional_trapdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "t%C0\t%z1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1106 */
  {
    "addsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsf3 },
    &operand_data[7],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1106 */
  {
    "adddf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adddf3 },
    &operand_data[10],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1106 */
  {
    "addv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addv2sf3 },
    &operand_data[13],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1121 */
  {
    "*addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_11 },
#else
    { 0, output_11, 0 },
#endif
    { 0 },
    &operand_data[16],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1121 */
  {
    "*adddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_12 },
#else
    { 0, output_12, 0 },
#endif
    { 0 },
    &operand_data[19],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1132 */
  {
    "*addsi3_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_13 },
#else
    { 0, output_13, 0 },
#endif
    { 0 },
    &operand_data[22],
    3,
    3,
    0,
    5,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1132 */
  {
    "*adddi3_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_14 },
#else
    { 0, output_14, 0 },
#endif
    { 0 },
    &operand_data[25],
    3,
    3,
    0,
    5,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1272 */
  {
    "*addsi3_extended",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_15 },
#else
    { 0, output_15, 0 },
#endif
    { 0 },
    &operand_data[28],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1286 */
  {
    "*addsi3_extended_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[31],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1302 */
  {
    "*baddu_si_eb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "baddu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[34],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1312 */
  {
    "*baddu_si_el",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "baddu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[34],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1322 */
  {
    "*baddu_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "baddu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1322 */
  {
    "*baddu_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "baddu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[40],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1340 */
  {
    "subsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsf3 },
    &operand_data[7],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1340 */
  {
    "subdf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subdf3 },
    &operand_data[10],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1340 */
  {
    "subv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subv2sf3 },
    &operand_data[13],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1349 */
  {
    "subsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3 },
    &operand_data[34],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1349 */
  {
    "subdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subdi3 },
    &operand_data[40],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1358 */
  {
    "*subsi3_extended",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[43],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1383 */
  {
    "*mulsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1383 */
  {
    "*muldf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[10],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1396 */
  {
    "*mulsf3_r4300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.s\t%0,%1,%2\n\tnop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1396 */
  {
    "*muldf3_r4300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.d\t%0,%1,%2\n\tnop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[10],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1406 */
  {
    "mulv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulv2sf3 },
    &operand_data[13],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1488 */
  {
    "mulsi3_mul3_loongson",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_32 },
#else
    { 0, 0, output_32 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3_mul3_loongson },
    &operand_data[34],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1488 */
  {
    "muldi3_mul3_loongson",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_muldi3_mul3_loongson },
    &operand_data[40],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1502 */
  {
    "mulsi3_mul3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_34 },
#else
    { 0, 0, output_34 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3_mul3 },
    &operand_data[46],
    3,
    4,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1502 */
  {
    "muldi3_mul3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_35 },
#else
    { 0, 0, output_35 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_muldi3_mul3 },
    &operand_data[50],
    3,
    4,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1541 */
  {
    "mulsi3_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3_internal },
    &operand_data[54],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1541 */
  {
    "muldi3_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_muldi3_internal },
    &operand_data[57],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1550 */
  {
    "mulsi3_r4000",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2\n\tmflo\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3_r4000 },
    &operand_data[60],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1550 */
  {
    "muldi3_r4000",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%1,%2\n\tmflo\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_muldi3_r4000 },
    &operand_data[64],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1605 */
  {
    "*mul_acc_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_40 },
#else
    { 0, output_40, 0 },
#endif
    { 0 },
    &operand_data[68],
    4,
    6,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1623 */
  {
    "*mul_acc_si_r3900",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_41 },
#else
    { 0, output_41, 0 },
#endif
    { 0 },
    &operand_data[74],
    4,
    6,
    0,
    3,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1656 */
  {
    "*macc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_42 },
#else
    { 0, 0, output_42 },
#endif
    { 0 },
    &operand_data[80],
    4,
    5,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1678 */
  {
    "*msac",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_43 },
#else
    { 0, 0, output_43 },
#endif
    { 0 },
    &operand_data[85],
    4,
    5,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1698 */
  {
    "*msac_using_macc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[85],
    4,
    6,
    0,
    2,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1723 */
  {
    "*macc2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "macc\t%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[91],
    4,
    4,
    4,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1738 */
  {
    "*msac2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msac\t%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[91],
    4,
    4,
    4,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1841 */
  {
    "*mul_sub_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_47 },
#else
    { 0, output_47, 0 },
#endif
    { 0 },
    &operand_data[95],
    4,
    6,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1873 */
  {
    "*muls",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_48 },
#else
    { 0, output_48, 0 },
#endif
    { 0 },
    &operand_data[101],
    3,
    4,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1913 */
  {
    "mulsidi3_32bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_49 },
#else
    { 0, 0, output_49 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsidi3_32bit },
    &operand_data[105],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1913 */
  {
    "umulsidi3_32bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_50 },
#else
    { 0, 0, output_50 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsidi3_32bit },
    &operand_data[105],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1927 */
  {
    "mulsidi3_32bit_r4000",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2\n\tmflo\t%L0\n\tmfhi\t%M0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsidi3_32bit_r4000 },
    &operand_data[108],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1927 */
  {
    "umulsidi3_32bit_r4000",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "multu\t%1,%2\n\tmflo\t%L0\n\tmfhi\t%M0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsidi3_32bit_r4000 },
    &operand_data[108],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1938 */
  {
    "mulsidi3_64bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsidi3_64bit },
    &operand_data[112],
    3,
    5,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1938 */
  {
    "umulsidi3_64bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsidi3_64bit },
    &operand_data[112],
    3,
    5,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2004 */
  {
    "mulsidi3_64bit_hilo",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsidi3_64bit_hilo },
    &operand_data[117],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2004 */
  {
    "umulsidi3_64bit_hilo",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "multu\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsidi3_64bit_hilo },
    &operand_data[117],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2017 */
  {
    "mulsidi3_64bit_dmul",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmul\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsidi3_64bit_dmul },
    &operand_data[120],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2028 */
  {
    "*muls_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls\t$0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[124],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2028 */
  {
    "*mulsu_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsu\t$0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[124],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2046 */
  {
    "msubsidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_60 },
#else
    { 0, 0, output_60 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_msubsidi4 },
    &operand_data[127],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2046 */
  {
    "umsubsidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_61 },
#else
    { 0, 0, output_61 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umsubsidi4 },
    &operand_data[127],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2090 */
  {
    "smulsi3_highpart_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_62 },
#else
    { 0, 0, output_62 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulsi3_highpart_internal },
    &operand_data[60],
    3,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2090 */
  {
    "umulsi3_highpart_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_63 },
#else
    { 0, 0, output_63 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsi3_highpart_internal },
    &operand_data[60],
    3,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2137 */
  {
    "smulsi3_highpart_mulhi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhi\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulsi3_highpart_mulhi_internal },
    &operand_data[60],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2137 */
  {
    "umulsi3_highpart_mulhi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhiu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsi3_highpart_mulhi_internal },
    &operand_data[60],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2151 */
  {
    "*smulsi3_highpart_neg_mulhi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulshi\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[60],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2151 */
  {
    "*umulsi3_highpart_neg_mulhi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulshiu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[60],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2187 */
  {
    "smuldi3_highpart_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_68 },
#else
    { 0, 0, output_68 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smuldi3_highpart_internal },
    &operand_data[64],
    3,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2187 */
  {
    "umuldi3_highpart_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_69 },
#else
    { 0, 0, output_69 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umuldi3_highpart_internal },
    &operand_data[64],
    3,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2249 */
  {
    "mulditi3_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulditi3_internal },
    &operand_data[131],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2249 */
  {
    "umulditi3_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmultu\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulditi3_internal },
    &operand_data[131],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2260 */
  {
    "mulditi3_r4000",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%1,%2\n\tmflo\t%L0\n\tmfhi\t%M0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulditi3_r4000 },
    &operand_data[134],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2260 */
  {
    "umulditi3_r4000",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmultu\t%1,%2\n\tmflo\t%L0\n\tmfhi\t%M0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulditi3_r4000 },
    &operand_data[134],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2276 */
  {
    "madsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mad\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_madsi },
    &operand_data[138],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2289 */
  {
    "maddsidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_75 },
#else
    { 0, 0, output_75 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maddsidi4 },
    &operand_data[127],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2289 */
  {
    "umaddsidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_76 },
#else
    { 0, 0, output_76 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaddsidi4 },
    &operand_data[127],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2314 */
  {
    "*madd4sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[141],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2314 */
  {
    "*madd4df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[145],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2314 */
  {
    "*madd4v2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.ps\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[149],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2325 */
  {
    "*madd3sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[153],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2325 */
  {
    "*madd3df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[157],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2325 */
  {
    "*madd3v2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[161],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2336 */
  {
    "*msub4sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[141],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2336 */
  {
    "*msub4df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[145],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2336 */
  {
    "*msub4v2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.ps\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[149],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2347 */
  {
    "*msub3sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[153],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2347 */
  {
    "*msub3df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[157],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2347 */
  {
    "*msub3v2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[161],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2358 */
  {
    "*nmadd4sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[141],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2358 */
  {
    "*nmadd4df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[145],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2358 */
  {
    "*nmadd4v2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.ps\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[149],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2373 */
  {
    "*nmadd3sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[153],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2373 */
  {
    "*nmadd3df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[157],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2373 */
  {
    "*nmadd3v2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[161],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2388 */
  {
    "*nmadd4sf_fastmath",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[141],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2388 */
  {
    "*nmadd4df_fastmath",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[145],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2388 */
  {
    "*nmadd4v2sf_fastmath",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.ps\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[149],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2403 */
  {
    "*nmadd3sf_fastmath",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[153],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2403 */
  {
    "*nmadd3df_fastmath",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[157],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2403 */
  {
    "*nmadd3v2sf_fastmath",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[161],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2418 */
  {
    "*nmsub4sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[141],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2418 */
  {
    "*nmsub4df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[145],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2418 */
  {
    "*nmsub4v2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.ps\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[149],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2433 */
  {
    "*nmsub3sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[165],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2433 */
  {
    "*nmsub3df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[169],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2433 */
  {
    "*nmsub3v2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[173],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2448 */
  {
    "*nmsub4sf_fastmath",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[141],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2448 */
  {
    "*nmsub4df_fastmath",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[145],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2448 */
  {
    "*nmsub4v2sf_fastmath",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.ps\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[149],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2463 */
  {
    "*nmsub3sf_fastmath",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[153],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2463 */
  {
    "*nmsub3df_fastmath",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[157],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2463 */
  {
    "*nmsub3v2sf_fastmath",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[161],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2509 */
  {
    "*divsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_113 },
#else
    { 0, 0, output_113 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2509 */
  {
    "*divdf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_114 },
#else
    { 0, 0, output_114 },
#endif
    { 0 },
    &operand_data[10],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2509 */
  {
    "*divv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_115 },
#else
    { 0, 0, output_115 },
#endif
    { 0 },
    &operand_data[13],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2527 */
  {
    "*recipsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_116 },
#else
    { 0, 0, output_116 },
#endif
    { 0 },
    &operand_data[177],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2527 */
  {
    "*recipdf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_117 },
#else
    { 0, 0, output_117 },
#endif
    { 0 },
    &operand_data[180],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2527 */
  {
    "*recipv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_118 },
#else
    { 0, 0, output_118 },
#endif
    { 0 },
    &operand_data[183],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2568 */
  {
    "divmodsi4_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divmodsi4_internal },
    &operand_data[91],
    4,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2568 */
  {
    "divmoddi4_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divmoddi4_internal },
    &operand_data[186],
    4,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2608 */
  {
    "udivmodsi4_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivmodsi4_internal },
    &operand_data[91],
    4,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2608 */
  {
    "udivmoddi4_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivmoddi4_internal },
    &operand_data[186],
    4,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2652 */
  {
    "divmodsi4_hilo_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_123 },
#else
    { 0, 0, output_123 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divmodsi4_hilo_di },
    &operand_data[124],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2652 */
  {
    "udivmodsi4_hilo_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_124 },
#else
    { 0, 0, output_124 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivmodsi4_hilo_di },
    &operand_data[124],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2652 */
  {
    "divmodsi4_hilo_ti",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_125 },
#else
    { 0, 0, output_125 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divmodsi4_hilo_ti },
    &operand_data[117],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2652 */
  {
    "udivmodsi4_hilo_ti",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_126 },
#else
    { 0, 0, output_126 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivmodsi4_hilo_ti },
    &operand_data[117],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2652 */
  {
    "divmoddi4_hilo_ti",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_127 },
#else
    { 0, 0, output_127 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divmoddi4_hilo_ti },
    &operand_data[131],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2652 */
  {
    "udivmoddi4_hilo_ti",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_128 },
#else
    { 0, 0, output_128 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivmoddi4_hilo_ti },
    &operand_data[131],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2673 */
  {
    "sqrtsf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_129 },
#else
    { 0, 0, output_129 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sqrtsf2 },
    &operand_data[7],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2673 */
  {
    "sqrtdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_130 },
#else
    { 0, 0, output_130 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sqrtdf2 },
    &operand_data[10],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2673 */
  {
    "sqrtv2sf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_131 },
#else
    { 0, 0, output_131 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sqrtv2sf2 },
    &operand_data[13],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2690 */
  {
    "*rsqrtsfa",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_132 },
#else
    { 0, 0, output_132 },
#endif
    { 0 },
    &operand_data[177],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2690 */
  {
    "*rsqrtdfa",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_133 },
#else
    { 0, 0, output_133 },
#endif
    { 0 },
    &operand_data[180],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2690 */
  {
    "*rsqrtv2sfa",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_134 },
#else
    { 0, 0, output_134 },
#endif
    { 0 },
    &operand_data[183],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2708 */
  {
    "*rsqrtsfb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_135 },
#else
    { 0, 0, output_135 },
#endif
    { 0 },
    &operand_data[177],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2708 */
  {
    "*rsqrtdfb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_136 },
#else
    { 0, 0, output_136 },
#endif
    { 0 },
    &operand_data[180],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2708 */
  {
    "*rsqrtv2sfb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_137 },
#else
    { 0, 0, output_137 },
#endif
    { 0 },
    &operand_data[183],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2740 */
  {
    "abssf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs.s\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_abssf2 },
    &operand_data[7],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2740 */
  {
    "absdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs.d\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_absdf2 },
    &operand_data[10],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2740 */
  {
    "absv2sf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs.ps\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_absv2sf2 },
    &operand_data[13],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2756 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clzsi2 },
    &operand_data[34],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2756 */
  {
    "clzdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dclz\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clzdi2 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2772 */
  {
    "popcountsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_popcountsi2 },
    &operand_data[34],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2772 */
  {
    "popcountdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpop\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_popcountdi2 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2782 */
  {
    "*popcountdi2_trunc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2797 */
  {
    "negsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_146 },
#else
    { 0, 0, output_146 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negsi2 },
    &operand_data[34],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2810 */
  {
    "negdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%.,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negdi2 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2822 */
  {
    "negsf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg.s\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negsf2 },
    &operand_data[7],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2822 */
  {
    "negdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg.d\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negdf2 },
    &operand_data[10],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2822 */
  {
    "negv2sf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg.ps\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negv2sf2 },
    &operand_data[13],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2830 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_151 },
#else
    { 0, 0, output_151 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmplsi2 },
    &operand_data[34],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2830 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_152 },
#else
    { 0, 0, output_152 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmpldi2 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2880 */
  {
    "*andsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_153 },
#else
    { 0, 0, output_153 },
#endif
    { 0 },
    &operand_data[190],
    3,
    3,
    0,
    7,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2880 */
  {
    "*anddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_154 },
#else
    { 0, 0, output_154 },
#endif
    { 0 },
    &operand_data[193],
    3,
    3,
    0,
    7,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2916 */
  {
    "*andsi3_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_155 },
#else
    { 0, 0, output_155 },
#endif
    { 0 },
    &operand_data[196],
    3,
    3,
    0,
    5,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2916 */
  {
    "*anddi3_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_156 },
#else
    { 0, 0, output_156 },
#endif
    { 0 },
    &operand_data[199],
    3,
    3,
    0,
    5,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2954 */
  {
    "*iorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_157 },
#else
    { 0, output_157, 0 },
#endif
    { 0 },
    &operand_data[202],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2954 */
  {
    "*iordi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_158 },
#else
    { 0, output_158, 0 },
#endif
    { 0 },
    &operand_data[205],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2965 */
  {
    "*iorsi3_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[208],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2965 */
  {
    "*iordi3_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[211],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2981 */
  {
    "*mips.md:2981",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_161 },
#else
    { 0, output_161, 0 },
#endif
    { 0 },
    &operand_data[202],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2981 */
  {
    "*mips.md:2981",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_162 },
#else
    { 0, output_162, 0 },
#endif
    { 0 },
    &operand_data[205],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2992 */
  {
    "*mips.md:2992",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_163 },
#else
    { 0, output_163, 0 },
#endif
    { 0 },
    &operand_data[214],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2992 */
  {
    "*mips.md:2992",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_164 },
#else
    { 0, output_164, 0 },
#endif
    { 0 },
    &operand_data[217],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3010 */
  {
    "*norsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[34],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3010 */
  {
    "*nordi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[40],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3028 */
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.s.d\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_truncdfsf2 },
    &operand_data[220],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3050 */
  {
    "truncdiqi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_168 },
#else
    { 0, output_168, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_truncdiqi2 },
    &operand_data[222],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3050 */
  {
    "truncdihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_169 },
#else
    { 0, output_169, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_truncdihi2 },
    &operand_data[224],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3050 */
  {
    "truncdisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_170 },
#else
    { 0, output_170, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_truncdisi2 },
    &operand_data[226],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3062 */
  {
    "*ashr_truncqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[228],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3062 */
  {
    "*ashr_trunchi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[231],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3062 */
  {
    "*ashr_truncsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[234],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3072 */
  {
    "*lshr32_truncqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[228],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3072 */
  {
    "*lshr32_trunchi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[231],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3072 */
  {
    "*lshr32_truncsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3085 */
  {
    "*ashr_truncqi_exts",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%2,31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[228],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3085 */
  {
    "*lshr_truncqi_exts",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%2,31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[228],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3085 */
  {
    "*ashr_trunchi_exts",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%2,31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[231],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3085 */
  {
    "*lshr_trunchi_exts",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%2,31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[231],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3085 */
  {
    "*ashr_truncsi_exts",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%2,31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[234],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3085 */
  {
    "*lshr_truncsi_exts",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%2,31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[234],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3109 */
  {
    "*zero_extendsidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_183 },
#else
    { 0, output_183, 0 },
#endif
    { 0 },
    &operand_data[237],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3125 */
  {
    "*zero_extendsidi2_dext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_184 },
#else
    { 0, output_184, 0 },
#endif
    { 0 },
    &operand_data[237],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3164 */
  {
    "*zero_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_185 },
#else
    { 0, output_185, 0 },
#endif
    { 0 },
    &operand_data[239],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3164 */
  {
    "*zero_extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_186 },
#else
    { 0, output_186, 0 },
#endif
    { 0 },
    &operand_data[241],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3164 */
  {
    "*zero_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_187 },
#else
    { 0, output_187, 0 },
#endif
    { 0 },
    &operand_data[243],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3164 */
  {
    "*zero_extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_188 },
#else
    { 0, output_188, 0 },
#endif
    { 0 },
    &operand_data[245],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3175 */
  {
    "*zero_extendqisi2_mips16e",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zeb\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[247],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3175 */
  {
    "*zero_extendqidi2_mips16e",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zeb\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[249],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3175 */
  {
    "*zero_extendhisi2_mips16e",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zeh\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[251],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3175 */
  {
    "*zero_extendhidi2_mips16e",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zeh\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[253],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3184 */
  {
    "*zero_extendqisi2_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[255],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3184 */
  {
    "*zero_extendqidi2_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[257],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3184 */
  {
    "*zero_extendhisi2_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[259],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3184 */
  {
    "*zero_extendhidi2_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[261],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3205 */
  {
    "*zero_extendqihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_197 },
#else
    { 0, output_197, 0 },
#endif
    { 0 },
    &operand_data[263],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3215 */
  {
    "*zero_extendqihi2_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[265],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3225 */
  {
    "*zero_extendsi_truncqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_199 },
#else
    { 0, 0, output_199 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3225 */
  {
    "*zero_extenddi_truncqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_200 },
#else
    { 0, 0, output_200 },
#endif
    { 0 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3225 */
  {
    "*zero_extendsi_trunchi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_201 },
#else
    { 0, 0, output_201 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3225 */
  {
    "*zero_extenddi_trunchi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_202 },
#else
    { 0, 0, output_202 },
#endif
    { 0 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3237 */
  {
    "*zero_extendhi_truncqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "andi\t%0,%1,0xff",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[231],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3269 */
  {
    "extendsidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_204 },
#else
    { 0, output_204, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendsidi2 },
    &operand_data[267],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3291 */
  {
    "*extendqisi2_mips16e",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_205 },
#else
    { 0, output_205, 0 },
#endif
    { 0 },
    &operand_data[269],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3291 */
  {
    "*extendqidi2_mips16e",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_206 },
#else
    { 0, output_206, 0 },
#endif
    { 0 },
    &operand_data[271],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3291 */
  {
    "*extendhisi2_mips16e",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_207 },
#else
    { 0, output_207, 0 },
#endif
    { 0 },
    &operand_data[273],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3291 */
  {
    "*extendhidi2_mips16e",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_208 },
#else
    { 0, output_208, 0 },
#endif
    { 0 },
    &operand_data[275],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3301 */
  {
    "*extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_209 },
#else
    { 0, output_209, 0 },
#endif
    { 0 },
    &operand_data[239],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3301 */
  {
    "*extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_210 },
#else
    { 0, output_210, 0 },
#endif
    { 0 },
    &operand_data[241],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3301 */
  {
    "*extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_211 },
#else
    { 0, output_211, 0 },
#endif
    { 0 },
    &operand_data[243],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3301 */
  {
    "*extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_212 },
#else
    { 0, output_212, 0 },
#endif
    { 0 },
    &operand_data[245],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3320 */
  {
    "*extendqisi2_seb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_213 },
#else
    { 0, output_213, 0 },
#endif
    { 0 },
    &operand_data[239],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3320 */
  {
    "*extendqidi2_seb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_214 },
#else
    { 0, output_214, 0 },
#endif
    { 0 },
    &operand_data[241],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3320 */
  {
    "*extendhisi2_seh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_215 },
#else
    { 0, output_215, 0 },
#endif
    { 0 },
    &operand_data[243],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3320 */
  {
    "*extendhidi2_seh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_216 },
#else
    { 0, output_216, 0 },
#endif
    { 0 },
    &operand_data[245],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3336 */
  {
    "*extendqihi2_mips16e",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_217 },
#else
    { 0, output_217, 0 },
#endif
    { 0 },
    &operand_data[277],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3346 */
  {
    "*extendqihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_218 },
#else
    { 0, output_218, 0 },
#endif
    { 0 },
    &operand_data[263],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3366 */
  {
    "*extendqihi2_seb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_219 },
#else
    { 0, output_219, 0 },
#endif
    { 0 },
    &operand_data[263],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3380 */
  {
    "*extenddi_truncateqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3380 */
  {
    "*extenddi_truncatehi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3400 */
  {
    "*extendsi_truncateqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3400 */
  {
    "*extendsi_truncatehi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3420 */
  {
    "*extendhi_truncateqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[231],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3439 */
  {
    "*extendsi_truncateqi_exts",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_225 },
#else
    { 0, 0, output_225 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3439 */
  {
    "*extenddi_truncateqi_exts",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_226 },
#else
    { 0, 0, output_226 },
#endif
    { 0 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3439 */
  {
    "*extendsi_truncatehi_exts",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_227 },
#else
    { 0, 0, output_227 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3439 */
  {
    "*extenddi_truncatehi_exts",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_228 },
#else
    { 0, 0, output_228 },
#endif
    { 0 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3451 */
  {
    "*extendhi_truncateqi_exts",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,0,7",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[231],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3460 */
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.d.s\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendsfdf2 },
    &operand_data[279],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3488 */
  {
    "fix_truncdfsi2_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.w.d %0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdfsi2_insn },
    &operand_data[281],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3497 */
  {
    "fix_truncdfsi2_macro",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_232 },
#else
    { 0, 0, output_232 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdfsi2_macro },
    &operand_data[281],
    2,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3525 */
  {
    "fix_truncsfsi2_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.w.s %0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsfsi2_insn },
    &operand_data[284],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3534 */
  {
    "fix_truncsfsi2_macro",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_234 },
#else
    { 0, 0, output_234 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsfsi2_macro },
    &operand_data[284],
    2,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3551 */
  {
    "fix_truncdfdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.l.d %0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdfdi2 },
    &operand_data[287],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3561 */
  {
    "fix_truncsfdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.l.s %0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsfdi2 },
    &operand_data[289],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3571 */
  {
    "floatsidf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.d.w\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatsidf2 },
    &operand_data[291],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3581 */
  {
    "floatdidf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.d.l\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatdidf2 },
    &operand_data[293],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3591 */
  {
    "floatsisf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.s.w\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatsisf2 },
    &operand_data[295],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3601 */
  {
    "floatdisf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.s.l\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatdisf2 },
    &operand_data[297],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3821 */
  {
    "*extvsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%3,%m2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[299],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3821 */
  {
    "*extvdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%3,%m2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[303],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3859 */
  {
    "*extzvsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ext\t%0,%1,%3,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[299],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3859 */
  {
    "*extzvdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dext\t%0,%1,%3,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[303],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3870 */
  {
    "*extzv_truncsi_exts",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%3,31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[307],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3909 */
  {
    "*insvsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ins\t%0,%z3,%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[311],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3909 */
  {
    "*insvdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dins\t%0,%z3,%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[315],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3926 */
  {
    "*cinssi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_248 },
#else
    { 0, 0, output_248 },
#endif
    { 0 },
    &operand_data[319],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3926 */
  {
    "*cinsdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_249 },
#else
    { 0, 0, output_249 },
#endif
    { 0 },
    &operand_data[323],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3954 */
  {
    "mov_lwl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwl\t%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mov_lwl },
    &operand_data[327],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3954 */
  {
    "mov_ldl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldl\t%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mov_ldl },
    &operand_data[330],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3964 */
  {
    "mov_lwr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwr\t%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mov_lwr },
    &operand_data[333],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3964 */
  {
    "mov_ldr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr\t%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mov_ldr },
    &operand_data[337],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3975 */
  {
    "mov_swl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "swl\t%z1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mov_swl },
    &operand_data[341],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3975 */
  {
    "mov_sdl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdl\t%z1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mov_sdl },
    &operand_data[344],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3985 */
  {
    "mov_swr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "swr\t%z1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mov_swr },
    &operand_data[347],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3985 */
  {
    "mov_sdr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdr\t%z1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mov_sdr },
    &operand_data[350],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4011 */
  {
    "*lea_high64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[353],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4064 */
  {
    "*lea64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[353],
    2,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4096 */
  {
    "*unshifted_high",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "li\t%0,%h1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[356],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4096 */
  {
    "*unshifted_high",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "li\t%0,%h1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[358],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4106 */
  {
    "*xgot_hisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[360],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4106 */
  {
    "*xgot_hidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[362],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4121 */
  {
    "*xgot_losi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[364],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4121 */
  {
    "*xgot_lodi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[367],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4136 */
  {
    "*got_dispsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[360],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4136 */
  {
    "*got_dispdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[362],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4149 */
  {
    "*got_pagesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[370],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4149 */
  {
    "*got_pagedi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[372],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4169 */
  {
    "load_gotsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%0,%R2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_gotsi },
    &operand_data[374],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4169 */
  {
    "load_gotdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t%0,%R2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_gotdi },
    &operand_data[377],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4183 */
  {
    "*lowsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addiu\t%0,%1,%R2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[374],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4183 */
  {
    "*lowdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddiu\t%0,%1,%R2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[377],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4192 */
  {
    "*lowsi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addiu\t%0,%R2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[380],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4192 */
  {
    "*lowdi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddiu\t%0,%R2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[383],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4255 */
  {
    "*movsi_ra",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sw\t$31,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[386],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4255 */
  {
    "*movdi_ra",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sd\t$31,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[387],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4263 */
  {
    "*movdi_32bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_278 },
#else
    { 0, 0, output_278 },
#endif
    { 0 },
    &operand_data[388],
    2,
    2,
    0,
    15,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4276 */
  {
    "*movdi_32bit_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_279 },
#else
    { 0, 0, output_279 },
#endif
    { 0 },
    &operand_data[390],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4286 */
  {
    "*movdi_64bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_280 },
#else
    { 0, 0, output_280 },
#endif
    { 0 },
    &operand_data[392],
    2,
    2,
    0,
    15,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4296 */
  {
    "*movdi_64bit_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_281 },
#else
    { 0, 0, output_281 },
#endif
    { 0 },
    &operand_data[394],
    2,
    2,
    0,
    10,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4364 */
  {
    "*movsi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_282 },
#else
    { 0, 0, output_282 },
#endif
    { 0 },
    &operand_data[396],
    2,
    2,
    0,
    17,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4364 */
  {
    "*movv2hi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_283 },
#else
    { 0, 0, output_283 },
#endif
    { 0 },
    &operand_data[398],
    2,
    2,
    0,
    17,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4364 */
  {
    "*movv4qi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_284 },
#else
    { 0, 0, output_284 },
#endif
    { 0 },
    &operand_data[400],
    2,
    2,
    0,
    17,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4364 */
  {
    "*movv2hq_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_285 },
#else
    { 0, 0, output_285 },
#endif
    { 0 },
    &operand_data[402],
    2,
    2,
    0,
    17,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4364 */
  {
    "*movv2uhq_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_286 },
#else
    { 0, 0, output_286 },
#endif
    { 0 },
    &operand_data[404],
    2,
    2,
    0,
    17,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4364 */
  {
    "*movv2ha_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_287 },
#else
    { 0, 0, output_287 },
#endif
    { 0 },
    &operand_data[406],
    2,
    2,
    0,
    17,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4364 */
  {
    "*movv2uha_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_288 },
#else
    { 0, 0, output_288 },
#endif
    { 0 },
    &operand_data[408],
    2,
    2,
    0,
    17,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4364 */
  {
    "*movv4qq_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_289 },
#else
    { 0, 0, output_289 },
#endif
    { 0 },
    &operand_data[410],
    2,
    2,
    0,
    17,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4364 */
  {
    "*movv4uqq_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_290 },
#else
    { 0, 0, output_290 },
#endif
    { 0 },
    &operand_data[412],
    2,
    2,
    0,
    17,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4374 */
  {
    "*movsi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_291 },
#else
    { 0, 0, output_291 },
#endif
    { 0 },
    &operand_data[414],
    2,
    2,
    0,
    10,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4374 */
  {
    "*movv2hi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_292 },
#else
    { 0, 0, output_292 },
#endif
    { 0 },
    &operand_data[416],
    2,
    2,
    0,
    10,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4374 */
  {
    "*movv4qi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_293 },
#else
    { 0, 0, output_293 },
#endif
    { 0 },
    &operand_data[418],
    2,
    2,
    0,
    10,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4374 */
  {
    "*movv2hq_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_294 },
#else
    { 0, 0, output_294 },
#endif
    { 0 },
    &operand_data[420],
    2,
    2,
    0,
    10,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4374 */
  {
    "*movv2uhq_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_295 },
#else
    { 0, 0, output_295 },
#endif
    { 0 },
    &operand_data[422],
    2,
    2,
    0,
    10,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4374 */
  {
    "*movv2ha_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_296 },
#else
    { 0, 0, output_296 },
#endif
    { 0 },
    &operand_data[424],
    2,
    2,
    0,
    10,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4374 */
  {
    "*movv2uha_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_297 },
#else
    { 0, 0, output_297 },
#endif
    { 0 },
    &operand_data[426],
    2,
    2,
    0,
    10,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4374 */
  {
    "*movv4qq_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_298 },
#else
    { 0, 0, output_298 },
#endif
    { 0 },
    &operand_data[428],
    2,
    2,
    0,
    10,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4374 */
  {
    "*movv4uqq_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_299 },
#else
    { 0, 0, output_299 },
#endif
    { 0 },
    &operand_data[430],
    2,
    2,
    0,
    10,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4455 */
  {
    "*lwxc1_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[432],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4455 */
  {
    "*ldxc1_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[435],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4455 */
  {
    "*ldxc1_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[438],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4455 */
  {
    "*lwxc1_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[441],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4455 */
  {
    "*ldxc1_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[444],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4455 */
  {
    "*ldxc1_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[447],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4464 */
  {
    "*swxc1_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "swxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[450],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4464 */
  {
    "*sdxc1_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[453],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4464 */
  {
    "*sdxc1_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[456],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4464 */
  {
    "*swxc1_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "swxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[459],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4464 */
  {
    "*sdxc1_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[462],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4464 */
  {
    "*sdxc1_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[465],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[34],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[468],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[471],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[474],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[477],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[480],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[483],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[486],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[489],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[492],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[495],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[498],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[501],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[504],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[507],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[510],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4477 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[513],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4504 */
  {
    "*movhi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_330 },
#else
    { 0, 0, output_330 },
#endif
    { 0 },
    &operand_data[516],
    2,
    2,
    0,
    6,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4514 */
  {
    "*movhi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_331 },
#else
    { 0, 0, output_331 },
#endif
    { 0 },
    &operand_data[518],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4579 */
  {
    "*movqi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_332 },
#else
    { 0, 0, output_332 },
#endif
    { 0 },
    &operand_data[520],
    2,
    2,
    0,
    6,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4589 */
  {
    "*movqi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_333 },
#else
    { 0, 0, output_333 },
#endif
    { 0 },
    &operand_data[522],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4637 */
  {
    "*movsf_hardfloat",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_334 },
#else
    { 0, 0, output_334 },
#endif
    { 0 },
    &operand_data[524],
    2,
    2,
    0,
    10,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4647 */
  {
    "*movsf_softfloat",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_335 },
#else
    { 0, 0, output_335 },
#endif
    { 0 },
    &operand_data[526],
    2,
    2,
    0,
    3,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4657 */
  {
    "*movsf_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_336 },
#else
    { 0, 0, output_336 },
#endif
    { 0 },
    &operand_data[528],
    2,
    2,
    0,
    5,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4678 */
  {
    "*movdf_hardfloat",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_337 },
#else
    { 0, 0, output_337 },
#endif
    { 0 },
    &operand_data[530],
    2,
    2,
    0,
    10,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4688 */
  {
    "*movdf_softfloat",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_338 },
#else
    { 0, 0, output_338 },
#endif
    { 0 },
    &operand_data[532],
    2,
    2,
    0,
    3,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4698 */
  {
    "*movdf_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_339 },
#else
    { 0, 0, output_339 },
#endif
    { 0 },
    &operand_data[534],
    2,
    2,
    0,
    5,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4719 */
  {
    "*movti",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_340 },
#else
    { 0, 0, output_340 },
#endif
    { 0 },
    &operand_data[536],
    2,
    2,
    0,
    7,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4733 */
  {
    "*movti_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[538],
    2,
    2,
    0,
    8,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4756 */
  {
    "*movtf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[540],
    2,
    2,
    0,
    7,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4767 */
  {
    "*movtf_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[542],
    2,
    2,
    0,
    5,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4824 */
  {
    "*movv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_344 },
#else
    { 0, 0, output_344 },
#endif
    { 0 },
    &operand_data[544],
    2,
    2,
    0,
    10,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4841 */
  {
    "mfhisi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_345 },
#else
    { 0, 0, output_345 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mfhisi_di },
    &operand_data[546],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4841 */
  {
    "mfhisi_ti",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_346 },
#else
    { 0, 0, output_346 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mfhisi_ti },
    &operand_data[548],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4841 */
  {
    "mfhidi_ti",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_347 },
#else
    { 0, 0, output_347 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mfhidi_ti },
    &operand_data[550],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4853 */
  {
    "mthisi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthi\t%z1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mthisi_di },
    &operand_data[552],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4853 */
  {
    "mthisi_ti",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthi\t%z1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mthisi_ti },
    &operand_data[555],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4853 */
  {
    "mthidi_ti",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthi\t%z1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mthidi_ti },
    &operand_data[558],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
  {
    "load_lowdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_351 },
#else
    { 0, 0, output_351 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_lowdf },
    &operand_data[561],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
  {
    "load_lowdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_352 },
#else
    { 0, 0, output_352 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_lowdi },
    &operand_data[563],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
  {
    "load_lowv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_353 },
#else
    { 0, 0, output_353 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_lowv2sf },
    &operand_data[565],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
  {
    "load_lowv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_354 },
#else
    { 0, 0, output_354 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_lowv2si },
    &operand_data[567],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
  {
    "load_lowv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_355 },
#else
    { 0, 0, output_355 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_lowv4hi },
    &operand_data[569],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
  {
    "load_lowv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_356 },
#else
    { 0, 0, output_356 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_lowv8qi },
    &operand_data[571],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
  {
    "load_lowtf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_357 },
#else
    { 0, 0, output_357 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_lowtf },
    &operand_data[573],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
  {
    "load_highdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_358 },
#else
    { 0, 0, output_358 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_highdf },
    &operand_data[575],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
  {
    "load_highdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_359 },
#else
    { 0, 0, output_359 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_highdi },
    &operand_data[578],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
  {
    "load_highv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_360 },
#else
    { 0, 0, output_360 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_highv2sf },
    &operand_data[581],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
  {
    "load_highv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_361 },
#else
    { 0, 0, output_361 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_highv2si },
    &operand_data[584],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
  {
    "load_highv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_362 },
#else
    { 0, 0, output_362 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_highv4hi },
    &operand_data[587],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
  {
    "load_highv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_363 },
#else
    { 0, 0, output_363 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_highv8qi },
    &operand_data[590],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
  {
    "load_hightf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_364 },
#else
    { 0, 0, output_364 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_hightf },
    &operand_data[593],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
  {
    "store_worddf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_365 },
#else
    { 0, 0, output_365 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_store_worddf },
    &operand_data[596],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
  {
    "store_worddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_366 },
#else
    { 0, 0, output_366 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_store_worddi },
    &operand_data[599],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
  {
    "store_wordv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_367 },
#else
    { 0, 0, output_367 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_store_wordv2sf },
    &operand_data[602],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
  {
    "store_wordv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_368 },
#else
    { 0, 0, output_368 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_store_wordv2si },
    &operand_data[605],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
  {
    "store_wordv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_369 },
#else
    { 0, 0, output_369 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_store_wordv4hi },
    &operand_data[608],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
  {
    "store_wordv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_370 },
#else
    { 0, 0, output_370 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_store_wordv8qi },
    &operand_data[611],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
  {
    "store_wordtf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_371 },
#else
    { 0, 0, output_371 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_store_wordtf },
    &operand_data[614],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
  {
    "mthc1df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mthc1df },
    &operand_data[617],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
  {
    "mthc1di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mthc1di },
    &operand_data[620],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
  {
    "mthc1v2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mthc1v2sf },
    &operand_data[623],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
  {
    "mthc1v2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mthc1v2si },
    &operand_data[626],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
  {
    "mthc1v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mthc1v4hi },
    &operand_data[629],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
  {
    "mthc1v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mthc1v8qi },
    &operand_data[632],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
  {
    "mthc1tf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mthc1tf },
    &operand_data[635],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
  {
    "mfhc1df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mfhc1df },
    &operand_data[638],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
  {
    "mfhc1di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mfhc1di },
    &operand_data[640],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
  {
    "mfhc1v2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mfhc1v2sf },
    &operand_data[642],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
  {
    "mfhc1v2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mfhc1v2si },
    &operand_data[644],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
  {
    "mfhc1v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mfhc1v4hi },
    &operand_data[646],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
  {
    "mfhc1v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mfhc1v8qi },
    &operand_data[648],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
  {
    "mfhc1tf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mfhc1tf },
    &operand_data[650],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4971 */
  {
    "loadgp_newabi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_386 },
#else
    { 0, 0, output_386 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loadgp_newabi_si },
    &operand_data[652],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4971 */
  {
    "loadgp_newabi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_387 },
#else
    { 0, 0, output_387 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loadgp_newabi_di },
    &operand_data[655],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4990 */
  {
    "loadgp_absolute_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_388 },
#else
    { 0, 0, output_388 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loadgp_absolute_si },
    &operand_data[658],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4990 */
  {
    "loadgp_absolute_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_389 },
#else
    { 0, 0, output_389 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loadgp_absolute_di },
    &operand_data[660],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5006 */
  {
    "loadgp_blockage",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loadgp_blockage },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5014 */
  {
    "loadgp_rtp_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_391 },
#else
    { 0, 0, output_391 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loadgp_rtp_si },
    &operand_data[662],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5014 */
  {
    "loadgp_rtp_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_392 },
#else
    { 0, 0, output_392 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loadgp_rtp_di },
    &operand_data[665],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5036 */
  {
    "copygp_mips16_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_393 },
#else
    { 0, 0, output_393 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_copygp_mips16_si },
    &operand_data[668],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5036 */
  {
    "copygp_mips16_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_394 },
#else
    { 0, 0, output_394 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_copygp_mips16_di },
    &operand_data[670],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5053 */
  {
    "potential_cprestore_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_395 },
#else
    { 0, 0, output_395 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_potential_cprestore_si },
    &operand_data[672],
    4,
    4,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5053 */
  {
    "potential_cprestore_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_396 },
#else
    { 0, 0, output_396 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_potential_cprestore_di },
    &operand_data[676],
    4,
    4,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5075 */
  {
    "cprestore_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_397 },
#else
    { 0, 0, output_397 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cprestore_si },
    &operand_data[672],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5075 */
  {
    "cprestore_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_398 },
#else
    { 0, 0, output_398 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cprestore_di },
    &operand_data[676],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5090 */
  {
    "use_cprestore_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_use_cprestore_si },
    &operand_data[680],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5090 */
  {
    "use_cprestore_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_use_cprestore_di },
    &operand_data[681],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5120 */
  {
    "sync",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_401 },
#else
    { 0, 0, output_401 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5125 */
  {
    "synci",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "synci\t0(%0)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_synci },
    &operand_data[682],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5131 */
  {
    "rdhwr_synci_step_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdhwr\t%0,$1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rdhwr_synci_step_si },
    &operand_data[34],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5131 */
  {
    "rdhwr_synci_step_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdhwr\t%0,$1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rdhwr_synci_step_di },
    &operand_data[40],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5138 */
  {
    "clear_hazard_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_405 },
#else
    { 0, 0, output_405 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clear_hazard_si },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5138 */
  {
    "clear_hazard_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_406 },
#else
    { 0, 0, output_406 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clear_hazard_di },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5152 */
  {
    "mips_cache",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cache\t%X0,%a1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cache },
    &operand_data[683],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5164 */
  {
    "r10k_cache_barrier",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cache\t0x14,0(%$)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_r10k_cache_barrier },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5227 */
  {
    "*ashlsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_409 },
#else
    { 0, 0, output_409 },
#endif
    { 0 },
    &operand_data[685],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5227 */
  {
    "*ashrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_410 },
#else
    { 0, 0, output_410 },
#endif
    { 0 },
    &operand_data[685],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5227 */
  {
    "*lshrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_411 },
#else
    { 0, 0, output_411 },
#endif
    { 0 },
    &operand_data[685],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5227 */
  {
    "*ashldi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_412 },
#else
    { 0, 0, output_412 },
#endif
    { 0 },
    &operand_data[688],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5227 */
  {
    "*ashrdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_413 },
#else
    { 0, 0, output_413 },
#endif
    { 0 },
    &operand_data[688],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5227 */
  {
    "*lshrdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_414 },
#else
    { 0, 0, output_414 },
#endif
    { 0 },
    &operand_data[688],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5242 */
  {
    "*ashlsi3_extend",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_415 },
#else
    { 0, 0, output_415 },
#endif
    { 0 },
    &operand_data[691],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5242 */
  {
    "*ashrsi3_extend",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_416 },
#else
    { 0, 0, output_416 },
#endif
    { 0 },
    &operand_data[691],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5242 */
  {
    "*lshrsi3_extend",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_417 },
#else
    { 0, 0, output_417 },
#endif
    { 0 },
    &operand_data[691],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5257 */
  {
    "*ashlsi3_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_418 },
#else
    { 0, 0, output_418 },
#endif
    { 0 },
    &operand_data[694],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5257 */
  {
    "*ashrsi3_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_419 },
#else
    { 0, 0, output_419 },
#endif
    { 0 },
    &operand_data[694],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5257 */
  {
    "*lshrsi3_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_420 },
#else
    { 0, 0, output_420 },
#endif
    { 0 },
    &operand_data[694],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5279 */
  {
    "*ashldi3_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_421 },
#else
    { 0, 0, output_421 },
#endif
    { 0 },
    &operand_data[697],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5299 */
  {
    "*ashrdi3_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_422 },
#else
    { 0, 0, output_422 },
#endif
    { 0 },
    &operand_data[700],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5318 */
  {
    "*lshrdi3_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_423 },
#else
    { 0, 0, output_423 },
#endif
    { 0 },
    &operand_data[700],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5359 */
  {
    "*mips.md:5359",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[703],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5373 */
  {
    "rotrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_425 },
#else
    { 0, 0, output_425 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rotrsi3 },
    &operand_data[685],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5373 */
  {
    "rotrdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_426 },
#else
    { 0, 0, output_426 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rotrdi3 },
    &operand_data[688],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5388 */
  {
    "bswaphi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsbh\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bswaphi2 },
    &operand_data[706],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5395 */
  {
    "bswapsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bswapsi2 },
    &operand_data[34],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5406 */
  {
    "bswapdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bswapdi2 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5417 */
  {
    "wsbh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsbh\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_wsbh },
    &operand_data[34],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5424 */
  {
    "dsbh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsbh\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_dsbh },
    &operand_data[40],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5431 */
  {
    "dshd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dshd\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_dshd },
    &operand_data[40],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5447 */
  {
    "*branch_fp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_433 },
#else
    { 0, 0, output_433 },
#endif
    { 0 },
    &operand_data[708],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5463 */
  {
    "*branch_fp_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_434 },
#else
    { 0, 0, output_434 },
#endif
    { 0 },
    &operand_data[708],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5481 */
  {
    "*branch_ordersi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_435 },
#else
    { 0, 0, output_435 },
#endif
    { 0 },
    &operand_data[711],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5481 */
  {
    "*branch_orderdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_436 },
#else
    { 0, 0, output_436 },
#endif
    { 0 },
    &operand_data[714],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5493 */
  {
    "*branch_ordersi_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_437 },
#else
    { 0, 0, output_437 },
#endif
    { 0 },
    &operand_data[711],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5493 */
  {
    "*branch_orderdi_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_438 },
#else
    { 0, 0, output_438 },
#endif
    { 0 },
    &operand_data[714],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5507 */
  {
    "*branch_equalitysi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_439 },
#else
    { 0, 0, output_439 },
#endif
    { 0 },
    &operand_data[717],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5507 */
  {
    "*branch_equalitydi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_440 },
#else
    { 0, 0, output_440 },
#endif
    { 0 },
    &operand_data[721],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5523 */
  {
    "*branch_equalitysi_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_441 },
#else
    { 0, 0, output_441 },
#endif
    { 0 },
    &operand_data[717],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5523 */
  {
    "*branch_equalitydi_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_442 },
#else
    { 0, 0, output_442 },
#endif
    { 0 },
    &operand_data[721],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5541 */
  {
    "*branch_equalitysi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_443 },
#else
    { 0, output_443, 0 },
#endif
    { 0 },
    &operand_data[725],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5541 */
  {
    "*branch_equalitydi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_444 },
#else
    { 0, output_444, 0 },
#endif
    { 0 },
    &operand_data[728],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5555 */
  {
    "*branch_equalitysi_mips16_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_445 },
#else
    { 0, output_445, 0 },
#endif
    { 0 },
    &operand_data[725],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5555 */
  {
    "*branch_equalitydi_mips16_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_446 },
#else
    { 0, output_446, 0 },
#endif
    { 0 },
    &operand_data[728],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5604 */
  {
    "*branch_bit0si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_447 },
#else
    { 0, 0, output_447 },
#endif
    { 0 },
    &operand_data[731],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5604 */
  {
    "*branch_bit1si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_448 },
#else
    { 0, 0, output_448 },
#endif
    { 0 },
    &operand_data[731],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5604 */
  {
    "*branch_bit0di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_449 },
#else
    { 0, 0, output_449 },
#endif
    { 0 },
    &operand_data[734],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5604 */
  {
    "*branch_bit1di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_450 },
#else
    { 0, 0, output_450 },
#endif
    { 0 },
    &operand_data[734],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5624 */
  {
    "*branch_bit0si_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_451 },
#else
    { 0, 0, output_451 },
#endif
    { 0 },
    &operand_data[731],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5624 */
  {
    "*branch_bit1si_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_452 },
#else
    { 0, 0, output_452 },
#endif
    { 0 },
    &operand_data[731],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5624 */
  {
    "*branch_bit0di_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_453 },
#else
    { 0, 0, output_453 },
#endif
    { 0 },
    &operand_data[734],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5624 */
  {
    "*branch_bit1di_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_454 },
#else
    { 0, 0, output_454 },
#endif
    { 0 },
    &operand_data[734],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5664 */
  {
    "*seq_zero_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[34],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5664 */
  {
    "*seq_zero_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5664 */
  {
    "*seq_zero_sidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[43],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5664 */
  {
    "*seq_zero_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5673 */
  {
    "*seq_zero_sisi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[737],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5673 */
  {
    "*seq_zero_disi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[739],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5673 */
  {
    "*seq_zero_sidi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[741],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5673 */
  {
    "*seq_zero_didi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[743],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5683 */
  {
    "*seq_sisi_seq",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_463 },
#else
    { 0, output_463, 0 },
#endif
    { 0 },
    &operand_data[745],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5683 */
  {
    "*seq_disi_seq",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_464 },
#else
    { 0, output_464, 0 },
#endif
    { 0 },
    &operand_data[748],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5683 */
  {
    "*seq_sidi_seq",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_465 },
#else
    { 0, output_465, 0 },
#endif
    { 0 },
    &operand_data[751],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5683 */
  {
    "*seq_didi_seq",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_466 },
#else
    { 0, output_466, 0 },
#endif
    { 0 },
    &operand_data[754],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5695 */
  {
    "*sne_zero_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[34],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5695 */
  {
    "*sne_zero_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5695 */
  {
    "*sne_zero_sidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[43],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5695 */
  {
    "*sne_zero_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5705 */
  {
    "*sne_sisi_sne",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_471 },
#else
    { 0, output_471, 0 },
#endif
    { 0 },
    &operand_data[745],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5705 */
  {
    "*sne_disi_sne",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_472 },
#else
    { 0, output_472, 0 },
#endif
    { 0 },
    &operand_data[748],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5705 */
  {
    "*sne_sidi_sne",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_473 },
#else
    { 0, output_473, 0 },
#endif
    { 0 },
    &operand_data[751],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5705 */
  {
    "*sne_didi_sne",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_474 },
#else
    { 0, output_474, 0 },
#endif
    { 0 },
    &operand_data[754],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5717 */
  {
    "*sgt_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[757],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5717 */
  {
    "*sgtu_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[757],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5717 */
  {
    "*sgt_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[760],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5717 */
  {
    "*sgtu_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[760],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5717 */
  {
    "*sgt_sidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[763],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5717 */
  {
    "*sgtu_sidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[763],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5717 */
  {
    "*sgt_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[766],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5717 */
  {
    "*sgtu_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[766],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5726 */
  {
    "*sgt_sisi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[769],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5726 */
  {
    "*sgtu_sisi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[769],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5726 */
  {
    "*sgt_disi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[772],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5726 */
  {
    "*sgtu_disi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[772],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5726 */
  {
    "*sgt_sidi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[775],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5726 */
  {
    "*sgtu_sidi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[775],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5726 */
  {
    "*sgt_didi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[778],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5726 */
  {
    "*sgtu_didi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[778],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5735 */
  {
    "*sge_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%.,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[34],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5735 */
  {
    "*sgeu_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[34],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5735 */
  {
    "*sge_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%.,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5735 */
  {
    "*sgeu_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5735 */
  {
    "*sge_sidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%.,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[43],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5735 */
  {
    "*sgeu_sidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[43],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5735 */
  {
    "*sge_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%.,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5735 */
  {
    "*sgeu_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[40],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5744 */
  {
    "*slt_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[685],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5744 */
  {
    "*sltu_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[685],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5744 */
  {
    "*slt_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[781],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5744 */
  {
    "*sltu_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[781],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5744 */
  {
    "*slt_sidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[691],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5744 */
  {
    "*sltu_sidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[691],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5744 */
  {
    "*slt_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[784],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5744 */
  {
    "*sltu_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[784],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5753 */
  {
    "*slt_sisi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[787],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5753 */
  {
    "*sltu_sisi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[787],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5753 */
  {
    "*slt_disi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[790],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5753 */
  {
    "*sltu_disi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[790],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5753 */
  {
    "*slt_sidi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[793],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5753 */
  {
    "*sltu_sidi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[793],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5753 */
  {
    "*slt_didi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[796],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5753 */
  {
    "*sltu_didi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[796],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5767 */
  {
    "*sle_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_515 },
#else
    { 0, 0, output_515 },
#endif
    { 0 },
    &operand_data[799],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5767 */
  {
    "*sleu_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_516 },
#else
    { 0, 0, output_516 },
#endif
    { 0 },
    &operand_data[799],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5767 */
  {
    "*sle_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_517 },
#else
    { 0, 0, output_517 },
#endif
    { 0 },
    &operand_data[802],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5767 */
  {
    "*sleu_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_518 },
#else
    { 0, 0, output_518 },
#endif
    { 0 },
    &operand_data[802],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5767 */
  {
    "*sle_sidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_519 },
#else
    { 0, 0, output_519 },
#endif
    { 0 },
    &operand_data[805],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5767 */
  {
    "*sleu_sidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_520 },
#else
    { 0, 0, output_520 },
#endif
    { 0 },
    &operand_data[805],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5767 */
  {
    "*sle_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_521 },
#else
    { 0, 0, output_521 },
#endif
    { 0 },
    &operand_data[808],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5767 */
  {
    "*sleu_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_522 },
#else
    { 0, 0, output_522 },
#endif
    { 0 },
    &operand_data[808],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5779 */
  {
    "*sle_sisi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_523 },
#else
    { 0, 0, output_523 },
#endif
    { 0 },
    &operand_data[811],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5779 */
  {
    "*sleu_sisi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_524 },
#else
    { 0, 0, output_524 },
#endif
    { 0 },
    &operand_data[811],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5779 */
  {
    "*sle_disi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_525 },
#else
    { 0, 0, output_525 },
#endif
    { 0 },
    &operand_data[814],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5779 */
  {
    "*sleu_disi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_526 },
#else
    { 0, 0, output_526 },
#endif
    { 0 },
    &operand_data[814],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5779 */
  {
    "*sle_sidi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_527 },
#else
    { 0, 0, output_527 },
#endif
    { 0 },
    &operand_data[817],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5779 */
  {
    "*sleu_sidi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_528 },
#else
    { 0, 0, output_528 },
#endif
    { 0 },
    &operand_data[817],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5779 */
  {
    "*sle_didi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_529 },
#else
    { 0, 0, output_529 },
#endif
    { 0 },
    &operand_data[820],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5779 */
  {
    "*sleu_didi_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_530 },
#else
    { 0, 0, output_530 },
#endif
    { 0 },
    &operand_data[820],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "sunordered_sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.un.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunordered_sf },
    &operand_data[823],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "suneq_sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ueq.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_suneq_sf },
    &operand_data[823],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "sunlt_sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunlt_sf },
    &operand_data[823],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "sunle_sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunle_sf },
    &operand_data[823],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "seq_sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.eq.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_seq_sf },
    &operand_data[823],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "slt_sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_slt_sf },
    &operand_data[823],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "sle_sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sle_sf },
    &operand_data[823],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "sunordered_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.un.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunordered_df },
    &operand_data[826],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "suneq_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ueq.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_suneq_df },
    &operand_data[826],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "sunlt_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunlt_df },
    &operand_data[826],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "sunle_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunle_df },
    &operand_data[826],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "seq_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.eq.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_seq_df },
    &operand_data[826],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "slt_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_slt_df },
    &operand_data[826],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
  {
    "sle_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sle_df },
    &operand_data[826],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
  {
    "sge_sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sge_sf },
    &operand_data[823],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
  {
    "sgt_sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sgt_sf },
    &operand_data[823],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
  {
    "sunge_sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunge_sf },
    &operand_data[823],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
  {
    "sungt_sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sungt_sf },
    &operand_data[823],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
  {
    "sge_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sge_df },
    &operand_data[826],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
  {
    "sgt_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sgt_df },
    &operand_data[826],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
  {
    "sunge_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunge_df },
    &operand_data[826],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
  {
    "sungt_df",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sungt_df },
    &operand_data[826],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5832 */
  {
    "*jump_absolute",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_553 },
#else
    { 0, 0, output_553 },
#endif
    { 0 },
    &operand_data[708],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5839 */
  {
    "*jump_pic",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_554 },
#else
    { 0, 0, output_554 },
#endif
    { 0 },
    &operand_data[708],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5857 */
  {
    "*jump_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "b\t%l0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[708],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5896 */
  {
    "indirect_jump_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_indirect_jump_si },
    &operand_data[35],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5896 */
  {
    "indirect_jump_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_indirect_jump_di },
    &operand_data[38],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5906 */
  {
    "indirect_jump_and_restore_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%(%<jr\t%1\n\tmove\t%0,%2%>%)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_indirect_jump_and_restore_si },
    &operand_data[829],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5906 */
  {
    "indirect_jump_and_restore_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%(%<jr\t%1\n\tmove\t%0,%2%>%)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_indirect_jump_and_restore_di },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5938 */
  {
    "tablejump_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tablejump_si },
    &operand_data[713],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5938 */
  {
    "tablejump_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tablejump_di },
    &operand_data[716],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5987 */
  {
    "casesi_internal_mips16_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_562 },
#else
    { 0, 0, output_562 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_casesi_internal_mips16_si },
    &operand_data[835],
    4,
    6,
    1,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5987 */
  {
    "casesi_internal_mips16_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_563 },
#else
    { 0, 0, output_563 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_casesi_internal_mips16_di },
    &operand_data[841],
    4,
    6,
    1,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6104 */
  {
    "blockage",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_blockage },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6111 */
  {
    "probe_stack_range_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_565 },
#else
    { 0, 0, output_565 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_probe_stack_range_si },
    &operand_data[847],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6111 */
  {
    "probe_stack_range_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_566 },
#else
    { 0, 0, output_566 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_probe_stack_range_di },
    &operand_data[850],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6151 */
  {
    "*return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t$31%/",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6151 */
  {
    "*simple_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t$31%/",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6160 */
  {
    "return_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_return_internal },
    &operand_data[853],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6160 */
  {
    "simple_return_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_simple_return_internal },
    &operand_data[853],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6169 */
  {
    "mips_eret",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "eret",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_eret },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6178 */
  {
    "mips_deret",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "deret",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_deret },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6187 */
  {
    "mips_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_di },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6195 */
  {
    "mips_ehb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ehb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_ehb },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6203 */
  {
    "mips_rdpgpr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdpgpr\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_rdpgpr },
    &operand_data[34],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6213 */
  {
    "cop0_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_576 },
#else
    { 0, 0, output_576 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cop0_move },
    &operand_data[854],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6239 */
  {
    "eh_set_lr_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eh_set_lr_si },
    &operand_data[856],
    1,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6245 */
  {
    "eh_set_lr_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eh_set_lr_di },
    &operand_data[858],
    1,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6287 */
  {
    "restore_gp_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_restore_gp_si },
    &operand_data[857],
    0,
    1,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6287 */
  {
    "restore_gp_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_restore_gp_di },
    &operand_data[355],
    0,
    1,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6302 */
  {
    "move_gpsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_581 },
#else
    { 0, 0, output_581 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_move_gpsi },
    &operand_data[860],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6302 */
  {
    "move_gpdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_582 },
#else
    { 0, 0, output_582 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_move_gpdi },
    &operand_data[862],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6367 */
  {
    "load_callsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%0,%R2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_callsi },
    &operand_data[374],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6367 */
  {
    "load_calldi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t%0,%R2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_calldi },
    &operand_data[377],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6377 */
  {
    "set_got_version",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_set_got_version },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6384 */
  {
    "update_got_version",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_update_got_version },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6416 */
  {
    "sibcall_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_587 },
#else
    { 0, 0, output_587 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_internal },
    &operand_data[864],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6436 */
  {
    "sibcall_value_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_588 },
#else
    { 0, 0, output_588 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_value_internal },
    &operand_data[866],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6445 */
  {
    "sibcall_value_multiple_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_589 },
#else
    { 0, 0, output_589 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_value_multiple_internal },
    &operand_data[866],
    4,
    4,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6504 */
  {
    "call_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_590 },
#else
    { 0, 0, output_590 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_internal },
    &operand_data[870],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6518 */
  {
    "call_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_591 },
#else
    { 0, 0, output_591 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_split },
    &operand_data[870],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6532 */
  {
    "call_internal_direct",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_592 },
#else
    { 0, 0, output_592 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_internal_direct },
    &operand_data[872],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6548 */
  {
    "call_direct_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_593 },
#else
    { 0, 0, output_593 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_direct_split },
    &operand_data[872],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6572 */
  {
    "call_value_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_594 },
#else
    { 0, 0, output_594 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value_internal },
    &operand_data[869],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6589 */
  {
    "call_value_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_595 },
#else
    { 0, 0, output_595 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value_split },
    &operand_data[869],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6601 */
  {
    "call_value_internal_direct",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_596 },
#else
    { 0, 0, output_596 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value_internal_direct },
    &operand_data[874],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6619 */
  {
    "call_value_direct_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_597 },
#else
    { 0, 0, output_597 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value_direct_split },
    &operand_data[874],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6632 */
  {
    "call_value_multiple_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_598 },
#else
    { 0, 0, output_598 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value_multiple_internal },
    &operand_data[877],
    4,
    4,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6652 */
  {
    "call_value_multiple_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_599 },
#else
    { 0, 0, output_599 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value_multiple_split },
    &operand_data[877],
    4,
    4,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6698 */
  {
    "prefetch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_600 },
#else
    { 0, 0, output_600 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_prefetch },
    &operand_data[881],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6712 */
  {
    "*prefetch_indexed_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_601 },
#else
    { 0, 0, output_601 },
#endif
    { 0 },
    &operand_data[884],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6712 */
  {
    "*prefetch_indexed_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_602 },
#else
    { 0, 0, output_602 },
#endif
    { 0 },
    &operand_data[888],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6724 */
  {
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%(nop%)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_nop },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6732 */
  {
    "hazard_nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_604 },
#else
    { 0, 0, output_604 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_hazard_nop },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6745 */
  {
    "*movsi_on_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_605 },
#else
    { 0, output_605, 0 },
#endif
    { 0 },
    &operand_data[892],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6745 */
  {
    "*movdi_on_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_606 },
#else
    { 0, output_606, 0 },
#endif
    { 0 },
    &operand_data[897],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6745 */
  {
    "*movsi_on_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_607 },
#else
    { 0, output_607, 0 },
#endif
    { 0 },
    &operand_data[902],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6745 */
  {
    "*movdi_on_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_608 },
#else
    { 0, output_608, 0 },
#endif
    { 0 },
    &operand_data[907],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6745 */
  {
    "*movsi_on_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_609 },
#else
    { 0, output_609, 0 },
#endif
    { 0 },
    &operand_data[912],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6745 */
  {
    "*movdi_on_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_610 },
#else
    { 0, output_610, 0 },
#endif
    { 0 },
    &operand_data[917],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6760 */
  {
    "*movsf_on_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_611 },
#else
    { 0, output_611, 0 },
#endif
    { 0 },
    &operand_data[922],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6760 */
  {
    "*movsf_on_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_612 },
#else
    { 0, output_612, 0 },
#endif
    { 0 },
    &operand_data[927],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6760 */
  {
    "*movsf_on_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_613 },
#else
    { 0, output_613, 0 },
#endif
    { 0 },
    &operand_data[932],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6760 */
  {
    "*movdf_on_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_614 },
#else
    { 0, output_614, 0 },
#endif
    { 0 },
    &operand_data[937],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6760 */
  {
    "*movdf_on_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_615 },
#else
    { 0, output_615, 0 },
#endif
    { 0 },
    &operand_data[942],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6760 */
  {
    "*movdf_on_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_616 },
#else
    { 0, output_616, 0 },
#endif
    { 0 },
    &operand_data[947],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6809 */
  {
    "consttable_tls_reloc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_617 },
#else
    { 0, 0, output_617 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_tls_reloc },
    &operand_data[952],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6817 */
  {
    "consttable_int",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_618 },
#else
    { 0, 0, output_618 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_int },
    &operand_data[954],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6830 */
  {
    "consttable_float",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_619 },
#else
    { 0, 0, output_619 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_float },
    &operand_data[954],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6846 */
  {
    "align",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    ".align\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_align },
    &operand_data[301],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6866 */
  {
    "*mips16e_save_restore",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_621 },
#else
    { 0, 0, output_621 },
#endif
    { 0 },
    &operand_data[956],
    3,
    3,
    1,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6892 */
  {
    "tls_get_tp_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tls_get_tp_si },
    &operand_data[34],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6892 */
  {
    "tls_get_tp_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tls_get_tp_di },
    &operand_data[40],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6910 */
  {
    "*tls_get_tp_si_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    ".set\tpush\n\t.set\tmips32r2\t\n\trdhwr\t$3,$29\n\t.set\tpop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6910 */
  {
    "*tls_get_tp_di_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    ".set\tpush\n\t.set\tmips32r2\t\n\trdhwr\t$3,$29\n\t.set\tpop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6931 */
  {
    "tls_get_tp_mips16_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tls_get_tp_mips16_si },
    &operand_data[959],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6931 */
  {
    "tls_get_tp_mips16_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tls_get_tp_mips16_di },
    &operand_data[961],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6951 */
  {
    "*tls_get_tp_mips16_call_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_628 },
#else
    { 0, 0, output_628 },
#endif
    { 0 },
    &operand_data[960],
    1,
    1,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6951 */
  {
    "*tls_get_tp_mips16_call_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_629 },
#else
    { 0, 0, output_629 },
#endif
    { 0 },
    &operand_data[962],
    1,
    1,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:53 */
  {
    "*memory_barrier",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_630 },
#else
    { 0, 0, output_630 },
#endif
    { 0 },
    &operand_data[963],
    1,
    1,
    1,
    0,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:60 */
  {
    "sync_compare_and_swapsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_631 },
#else
    { 0, 0, output_631 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_compare_and_swapsi },
    &operand_data[964],
    4,
    4,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:60 */
  {
    "sync_compare_and_swapdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_632 },
#else
    { 0, 0, output_632 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_compare_and_swapdi },
    &operand_data[968],
    4,
    4,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:90 */
  {
    "compare_and_swap_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_633 },
#else
    { 0, 0, output_633 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_compare_and_swap_12 },
    &operand_data[972],
    6,
    6,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:108 */
  {
    "sync_addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_634 },
#else
    { 0, 0, output_634 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_addsi },
    &operand_data[978],
    2,
    2,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:108 */
  {
    "sync_adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_635 },
#else
    { 0, 0, output_635 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_adddi },
    &operand_data[980],
    2,
    2,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:136 */
  {
    "sync_add_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_636 },
#else
    { 0, 0, output_636 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_add_12 },
    &operand_data[982],
    4,
    5,
    1,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:136 */
  {
    "sync_sub_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_637 },
#else
    { 0, 0, output_637 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_sub_12 },
    &operand_data[982],
    4,
    5,
    1,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:136 */
  {
    "sync_ior_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_638 },
#else
    { 0, 0, output_638 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_ior_12 },
    &operand_data[982],
    4,
    5,
    1,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:136 */
  {
    "sync_xor_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_639 },
#else
    { 0, 0, output_639 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_xor_12 },
    &operand_data[982],
    4,
    5,
    1,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:136 */
  {
    "sync_and_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_640 },
#else
    { 0, 0, output_640 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_and_12 },
    &operand_data[982],
    4,
    5,
    1,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:175 */
  {
    "sync_old_add_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_641 },
#else
    { 0, 0, output_641 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_add_12 },
    &operand_data[987],
    5,
    6,
    2,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:175 */
  {
    "sync_old_sub_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_642 },
#else
    { 0, 0, output_642 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_sub_12 },
    &operand_data[987],
    5,
    6,
    2,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:175 */
  {
    "sync_old_ior_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_643 },
#else
    { 0, 0, output_643 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_ior_12 },
    &operand_data[987],
    5,
    6,
    2,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:175 */
  {
    "sync_old_xor_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_644 },
#else
    { 0, 0, output_644 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_xor_12 },
    &operand_data[987],
    5,
    6,
    2,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:175 */
  {
    "sync_old_and_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_645 },
#else
    { 0, 0, output_645 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_and_12 },
    &operand_data[987],
    5,
    6,
    2,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:217 */
  {
    "sync_new_add_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_646 },
#else
    { 0, 0, output_646 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_add_12 },
    &operand_data[987],
    5,
    5,
    6,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:217 */
  {
    "sync_new_sub_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_647 },
#else
    { 0, 0, output_647 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_sub_12 },
    &operand_data[987],
    5,
    5,
    6,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:217 */
  {
    "sync_new_ior_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_648 },
#else
    { 0, 0, output_648 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_ior_12 },
    &operand_data[987],
    5,
    5,
    6,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:217 */
  {
    "sync_new_xor_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_649 },
#else
    { 0, 0, output_649 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_xor_12 },
    &operand_data[987],
    5,
    5,
    6,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:217 */
  {
    "sync_new_and_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_650 },
#else
    { 0, 0, output_650 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_and_12 },
    &operand_data[987],
    5,
    5,
    6,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:259 */
  {
    "sync_nand_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_651 },
#else
    { 0, 0, output_651 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_nand_12 },
    &operand_data[982],
    4,
    5,
    1,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:297 */
  {
    "sync_old_nand_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_652 },
#else
    { 0, 0, output_652 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_nand_12 },
    &operand_data[987],
    5,
    6,
    1,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:337 */
  {
    "sync_new_nand_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_653 },
#else
    { 0, 0, output_653 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_nand_12 },
    &operand_data[987],
    5,
    5,
    5,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:362 */
  {
    "sync_subsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_654 },
#else
    { 0, 0, output_654 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_subsi },
    &operand_data[982],
    2,
    2,
    1,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:362 */
  {
    "sync_subdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_655 },
#else
    { 0, 0, output_655 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_subdi },
    &operand_data[993],
    2,
    2,
    1,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:375 */
  {
    "sync_old_addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_656 },
#else
    { 0, 0, output_656 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_addsi },
    &operand_data[995],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:375 */
  {
    "sync_old_adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_657 },
#else
    { 0, 0, output_657 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_adddi },
    &operand_data[998],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:390 */
  {
    "sync_old_subsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_658 },
#else
    { 0, 0, output_658 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_subsi },
    &operand_data[987],
    3,
    3,
    2,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:390 */
  {
    "sync_old_subdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_659 },
#else
    { 0, 0, output_659 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_subdi },
    &operand_data[1001],
    3,
    3,
    2,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:405 */
  {
    "sync_new_addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_660 },
#else
    { 0, 0, output_660 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_addsi },
    &operand_data[995],
    3,
    3,
    3,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:405 */
  {
    "sync_new_adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_661 },
#else
    { 0, 0, output_661 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_adddi },
    &operand_data[998],
    3,
    3,
    3,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:421 */
  {
    "sync_new_subsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_662 },
#else
    { 0, 0, output_662 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_subsi },
    &operand_data[987],
    3,
    3,
    3,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:421 */
  {
    "sync_new_subdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_663 },
#else
    { 0, 0, output_663 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_subdi },
    &operand_data[1001],
    3,
    3,
    3,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:437 */
  {
    "sync_iorsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_664 },
#else
    { 0, 0, output_664 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_iorsi },
    &operand_data[1004],
    2,
    2,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:437 */
  {
    "sync_xorsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_665 },
#else
    { 0, 0, output_665 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_xorsi },
    &operand_data[1004],
    2,
    2,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:437 */
  {
    "sync_andsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_666 },
#else
    { 0, 0, output_666 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_andsi },
    &operand_data[1004],
    2,
    2,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:437 */
  {
    "sync_iordi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_667 },
#else
    { 0, 0, output_667 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_iordi },
    &operand_data[1006],
    2,
    2,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:437 */
  {
    "sync_xordi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_668 },
#else
    { 0, 0, output_668 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_xordi },
    &operand_data[1006],
    2,
    2,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:437 */
  {
    "sync_anddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_669 },
#else
    { 0, 0, output_669 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_anddi },
    &operand_data[1006],
    2,
    2,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:449 */
  {
    "sync_old_iorsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_670 },
#else
    { 0, 0, output_670 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_iorsi },
    &operand_data[1008],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:449 */
  {
    "sync_old_xorsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_671 },
#else
    { 0, 0, output_671 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_xorsi },
    &operand_data[1008],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:449 */
  {
    "sync_old_andsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_672 },
#else
    { 0, 0, output_672 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_andsi },
    &operand_data[1008],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:449 */
  {
    "sync_old_iordi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_673 },
#else
    { 0, 0, output_673 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_iordi },
    &operand_data[1011],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:449 */
  {
    "sync_old_xordi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_674 },
#else
    { 0, 0, output_674 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_xordi },
    &operand_data[1011],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:449 */
  {
    "sync_old_anddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_675 },
#else
    { 0, 0, output_675 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_anddi },
    &operand_data[1011],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:464 */
  {
    "sync_new_iorsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_676 },
#else
    { 0, 0, output_676 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_iorsi },
    &operand_data[1008],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:464 */
  {
    "sync_new_xorsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_677 },
#else
    { 0, 0, output_677 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_xorsi },
    &operand_data[1008],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:464 */
  {
    "sync_new_andsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_678 },
#else
    { 0, 0, output_678 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_andsi },
    &operand_data[1008],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:464 */
  {
    "sync_new_iordi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_679 },
#else
    { 0, 0, output_679 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_iordi },
    &operand_data[1011],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:464 */
  {
    "sync_new_xordi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_680 },
#else
    { 0, 0, output_680 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_xordi },
    &operand_data[1011],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:464 */
  {
    "sync_new_anddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_681 },
#else
    { 0, 0, output_681 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_anddi },
    &operand_data[1011],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:480 */
  {
    "sync_nandsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_682 },
#else
    { 0, 0, output_682 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_nandsi },
    &operand_data[1004],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:480 */
  {
    "sync_nanddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_683 },
#else
    { 0, 0, output_683 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_nanddi },
    &operand_data[1006],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:491 */
  {
    "sync_old_nandsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_684 },
#else
    { 0, 0, output_684 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_nandsi },
    &operand_data[1008],
    3,
    3,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:491 */
  {
    "sync_old_nanddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_685 },
#else
    { 0, 0, output_685 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_nanddi },
    &operand_data[1011],
    3,
    3,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:505 */
  {
    "sync_new_nandsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_686 },
#else
    { 0, 0, output_686 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_nandsi },
    &operand_data[1008],
    3,
    3,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:505 */
  {
    "sync_new_nanddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_687 },
#else
    { 0, 0, output_687 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_nanddi },
    &operand_data[1011],
    3,
    3,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:520 */
  {
    "sync_lock_test_and_setsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_688 },
#else
    { 0, 0, output_688 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_lock_test_and_setsi },
    &operand_data[995],
    3,
    3,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:520 */
  {
    "sync_lock_test_and_setdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_689 },
#else
    { 0, 0, output_689 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_lock_test_and_setdi },
    &operand_data[998],
    3,
    3,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:547 */
  {
    "test_and_set_12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_690 },
#else
    { 0, 0, output_690 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_test_and_set_12 },
    &operand_data[987],
    5,
    5,
    1,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:566 */
  {
    "atomic_compare_and_swapsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_691 },
#else
    { 0, 0, output_691 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_compare_and_swapsi },
    &operand_data[1014],
    8,
    8,
    4,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:566 */
  {
    "atomic_compare_and_swapdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_692 },
#else
    { 0, 0, output_692 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_compare_and_swapdi },
    &operand_data[1022],
    8,
    8,
    4,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:630 */
  {
    "atomic_exchangesi_llsc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_693 },
#else
    { 0, 0, output_693 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangesi_llsc },
    &operand_data[1030],
    4,
    4,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:630 */
  {
    "atomic_exchangedi_llsc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_694 },
#else
    { 0, 0, output_694 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangedi_llsc },
    &operand_data[1034],
    4,
    4,
    1,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:648 */
  {
    "atomic_exchangesi_swap",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "swapw\t%0,%b1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangesi_swap },
    &operand_data[1038],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:648 */
  {
    "atomic_exchangedi_swap",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "swapd\t%0,%b1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangedi_swap },
    &operand_data[1041],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:685 */
  {
    "atomic_fetch_addsi_llsc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_697 },
#else
    { 0, 0, output_697 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_addsi_llsc },
    &operand_data[1030],
    4,
    4,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:685 */
  {
    "atomic_fetch_adddi_llsc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_698 },
#else
    { 0, 0, output_698 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_adddi_llsc },
    &operand_data[1034],
    4,
    4,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:705 */
  {
    "atomic_fetch_addsi_ldadd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldaddw\t%0,%b1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_addsi_ldadd },
    &operand_data[1038],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:705 */
  {
    "atomic_fetch_adddi_ldadd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldaddd\t%0,%b1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_adddi_ldadd },
    &operand_data[1041],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:44 */
  {
    "*movcc_v2sf_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_701 },
#else
    { 0, output_701, 0 },
#endif
    { 0 },
    &operand_data[1044],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:44 */
  {
    "*movcc_v2sf_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_702 },
#else
    { 0, output_702, 0 },
#endif
    { 0 },
    &operand_data[1049],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:59 */
  {
    "mips_cond_move_tf_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_703 },
#else
    { 0, output_703, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cond_move_tf_ps },
    &operand_data[1054],
    4,
    4,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:92 */
  {
    "vec_perm_const_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_704 },
#else
    { 0, 0, output_704 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_perm_const_ps },
    &operand_data[1058],
    5,
    5,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:266 */
  {
    "vec_concatv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_705 },
#else
    { 0, 0, output_705 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_concatv2sf },
    &operand_data[1063],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:285 */
  {
    "vec_extractv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_706 },
#else
    { 0, 0, output_706 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_extractv2sf },
    &operand_data[1066],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:352 */
  {
    "mips_alnv_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "alnv.ps\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_alnv_ps },
    &operand_data[1069],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:364 */
  {
    "mips_addr_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addr.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_addr_ps },
    &operand_data[13],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:374 */
  {
    "reduc_splus_v2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_splus_v2sf },
    &operand_data[13],
    2,
    2,
    1,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:383 */
  {
    "mips_cvt_pw_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.pw.ps\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cvt_pw_ps },
    &operand_data[13],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:393 */
  {
    "mips_cvt_ps_pw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.ps.pw\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cvt_ps_pw },
    &operand_data[13],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:403 */
  {
    "mips_mulr_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulr.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_mulr_ps },
    &operand_data[13],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:429 */
  {
    "*mips_abs_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs.ps\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[13],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:442 */
  {
    "mips_cabs_cond_s",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cabs.%Y3.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cabs_cond_s },
    &operand_data[1073],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:442 */
  {
    "mips_cabs_cond_d",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cabs.%Y3.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cabs_cond_d },
    &operand_data[1077],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:458 */
  {
    "mips_c_cond_4s",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_c_cond_4s },
    &operand_data[1081],
    6,
    6,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:487 */
  {
    "mips_cabs_cond_4s",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cabs_cond_4s },
    &operand_data[1081],
    6,
    6,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:521 */
  {
    "mips_c_cond_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.%Y3.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_c_cond_ps },
    &operand_data[1087],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:532 */
  {
    "mips_cabs_cond_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cabs.%Y3.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cabs_cond_ps },
    &operand_data[1087],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
  {
    "sunordered_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.un.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunordered_ps },
    &operand_data[1087],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
  {
    "suneq_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ueq.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_suneq_ps },
    &operand_data[1087],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
  {
    "sunlt_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunlt_ps },
    &operand_data[1087],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
  {
    "sunle_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunle_ps },
    &operand_data[1087],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
  {
    "seq_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.eq.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_seq_ps },
    &operand_data[1087],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
  {
    "slt_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_slt_ps },
    &operand_data[1087],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
  {
    "sle_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sle_ps },
    &operand_data[1087],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:559 */
  {
    "sge_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.ps\t%0,%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sge_ps },
    &operand_data[1087],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:559 */
  {
    "sgt_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.ps\t%0,%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sgt_ps },
    &operand_data[1087],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:559 */
  {
    "sunge_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.ps\t%0,%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunge_ps },
    &operand_data[1087],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:559 */
  {
    "sungt_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.ps\t%0,%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sungt_ps },
    &operand_data[1087],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:575 */
  {
    "bc1any4t",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bc1any4t\t%1,%0%/",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bc1any4t },
    &operand_data[1091],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:586 */
  {
    "bc1any4f",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bc1any4f\t%1,%0%/",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bc1any4f },
    &operand_data[1091],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:597 */
  {
    "bc1any2t",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bc1any2t\t%1,%0%/",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bc1any2t },
    &operand_data[1093],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:608 */
  {
    "bc1any2f",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bc1any2f\t%1,%0%/",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bc1any2f },
    &operand_data[1093],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:628 */
  {
    "*branch_upper_lower",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_735 },
#else
    { 0, 0, output_735 },
#endif
    { 0 },
    &operand_data[1095],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:649 */
  {
    "*branch_upper_lower_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_736 },
#else
    { 0, 0, output_736 },
#endif
    { 0 },
    &operand_data[1095],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:673 */
  {
    "mips_rsqrt1_s",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt1.s\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_rsqrt1_s },
    &operand_data[7],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:673 */
  {
    "mips_rsqrt1_d",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt1.d\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_rsqrt1_d },
    &operand_data[10],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:673 */
  {
    "mips_rsqrt1_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt1.ps\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_rsqrt1_ps },
    &operand_data[13],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:682 */
  {
    "mips_rsqrt2_s",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt2.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_rsqrt2_s },
    &operand_data[7],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:682 */
  {
    "mips_rsqrt2_d",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt2.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_rsqrt2_d },
    &operand_data[10],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:682 */
  {
    "mips_rsqrt2_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt2.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_rsqrt2_ps },
    &operand_data[13],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:692 */
  {
    "mips_recip1_s",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip1.s\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_recip1_s },
    &operand_data[7],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:692 */
  {
    "mips_recip1_d",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip1.d\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_recip1_d },
    &operand_data[10],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:692 */
  {
    "mips_recip1_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip1.ps\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_recip1_ps },
    &operand_data[13],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:701 */
  {
    "mips_recip2_s",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip2.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_recip2_s },
    &operand_data[7],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:701 */
  {
    "mips_recip2_d",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip2.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_recip2_d },
    &operand_data[10],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:701 */
  {
    "mips_recip2_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip2.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_recip2_ps },
    &operand_data[13],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:128 */
  {
    "addv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addv2hi3 },
    &operand_data[1099],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:128 */
  {
    "addv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addv4qi3 },
    &operand_data[1102],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:140 */
  {
    "mips_addq_s_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_addq_s_w },
    &operand_data[34],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:140 */
  {
    "mips_addq_s_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_addq_s_ph },
    &operand_data[1099],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:140 */
  {
    "mips_addu_s_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_addu_s_qb },
    &operand_data[1102],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:154 */
  {
    "subv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subv2hi3 },
    &operand_data[1099],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:154 */
  {
    "subv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subv4qi3 },
    &operand_data[1102],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:166 */
  {
    "mips_subq_s_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_subq_s_w },
    &operand_data[34],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:166 */
  {
    "mips_subq_s_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_subq_s_ph },
    &operand_data[1099],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:166 */
  {
    "mips_subu_s_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_subu_s_qb },
    &operand_data[1102],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:180 */
  {
    "mips_addsc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsc\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_addsc },
    &operand_data[34],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:194 */
  {
    "mips_addwc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addwc\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_addwc },
    &operand_data[34],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:209 */
  {
    "mips_modsub",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "modsub\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_modsub },
    &operand_data[34],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:220 */
  {
    "mips_raddu_w_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "raddu.w.qb\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_raddu_w_qb },
    &operand_data[1105],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:230 */
  {
    "mips_absq_s_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "absq_s.w\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_absq_s_w },
    &operand_data[34],
    2,
    2,
    1,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:230 */
  {
    "mips_absq_s_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "absq_s.ph\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_absq_s_ph },
    &operand_data[1099],
    2,
    2,
    1,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:243 */
  {
    "mips_precrq_qb_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "precrq.qb.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_precrq_qb_ph },
    &operand_data[1107],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:253 */
  {
    "mips_precrq_ph_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "precrq.ph.w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_precrq_ph_w },
    &operand_data[468],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:263 */
  {
    "mips_precrq_rs_ph_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "precrq_rs.ph.w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_precrq_rs_ph_w },
    &operand_data[468],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:278 */
  {
    "mips_precrqu_s_qb_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "precrqu_s.qb.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_precrqu_s_qb_ph },
    &operand_data[1107],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:293 */
  {
    "mips_preceq_w_phl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "preceq.w.phl\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_preceq_w_phl },
    &operand_data[1110],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:302 */
  {
    "mips_preceq_w_phr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "preceq.w.phr\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_preceq_w_phr },
    &operand_data[1110],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:312 */
  {
    "mips_precequ_ph_qbl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "precequ.ph.qbl\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_precequ_ph_qbl },
    &operand_data[1112],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:321 */
  {
    "mips_precequ_ph_qbr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "precequ.ph.qbr\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_precequ_ph_qbr },
    &operand_data[1112],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:330 */
  {
    "mips_precequ_ph_qbla",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "precequ.ph.qbla\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_precequ_ph_qbla },
    &operand_data[1112],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:339 */
  {
    "mips_precequ_ph_qbra",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "precequ.ph.qbra\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_precequ_ph_qbra },
    &operand_data[1112],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:349 */
  {
    "mips_preceu_ph_qbl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "preceu.ph.qbl\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_preceu_ph_qbl },
    &operand_data[1112],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:358 */
  {
    "mips_preceu_ph_qbr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "preceu.ph.qbr\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_preceu_ph_qbr },
    &operand_data[1112],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:367 */
  {
    "mips_preceu_ph_qbla",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "preceu.ph.qbla\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_preceu_ph_qbla },
    &operand_data[1112],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:376 */
  {
    "mips_preceu_ph_qbra",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "preceu.ph.qbra\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_preceu_ph_qbra },
    &operand_data[1112],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:387 */
  {
    "mips_shll_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_779 },
#else
    { 0, 0, output_779 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_shll_ph },
    &operand_data[1114],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:387 */
  {
    "mips_shll_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_780 },
#else
    { 0, 0, output_780 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_shll_qb },
    &operand_data[1117],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:409 */
  {
    "mips_shll_s_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_781 },
#else
    { 0, 0, output_781 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_shll_s_w },
    &operand_data[1120],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:409 */
  {
    "mips_shll_s_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_782 },
#else
    { 0, 0, output_782 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_shll_s_ph },
    &operand_data[1114],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:432 */
  {
    "mips_shrl_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_783 },
#else
    { 0, 0, output_783 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_shrl_qb },
    &operand_data[1117],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:451 */
  {
    "mips_shra_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_784 },
#else
    { 0, 0, output_784 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_shra_ph },
    &operand_data[1114],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:469 */
  {
    "mips_shra_r_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_785 },
#else
    { 0, 0, output_785 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_shra_r_w },
    &operand_data[1120],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:469 */
  {
    "mips_shra_r_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_786 },
#else
    { 0, 0, output_786 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_shra_r_ph },
    &operand_data[1114],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:490 */
  {
    "mips_muleu_s_ph_qbl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "muleu_s.ph.qbl\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_muleu_s_ph_qbl },
    &operand_data[1123],
    3,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:504 */
  {
    "mips_muleu_s_ph_qbr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "muleu_s.ph.qbr\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_muleu_s_ph_qbr },
    &operand_data[1123],
    3,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:519 */
  {
    "mips_mulq_rs_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_rs.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_mulq_rs_ph },
    &operand_data[1127],
    3,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:534 */
  {
    "mips_muleq_s_w_phl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "muleq_s.w.phl\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_muleq_s_w_phl },
    &operand_data[1131],
    3,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:548 */
  {
    "mips_muleq_s_w_phr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "muleq_s.w.phr\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_muleq_s_w_phr },
    &operand_data[1131],
    3,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:563 */
  {
    "mips_dpau_h_qbl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpau.h.qbl\t%q0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpau_h_qbl },
    &operand_data[1135],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:575 */
  {
    "mips_dpau_h_qbr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpau.h.qbr\t%q0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpau_h_qbr },
    &operand_data[1135],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:588 */
  {
    "mips_dpsu_h_qbl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsu.h.qbl\t%q0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpsu_h_qbl },
    &operand_data[1135],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:600 */
  {
    "mips_dpsu_h_qbr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsu.h.qbr\t%q0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpsu_h_qbr },
    &operand_data[1135],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:613 */
  {
    "mips_dpaq_s_w_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpaq_s.w.ph\t%q0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpaq_s_w_ph },
    &operand_data[1139],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:630 */
  {
    "mips_dpsq_s_w_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsq_s.w.ph\t%q0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpsq_s_w_ph },
    &operand_data[1139],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:647 */
  {
    "mips_mulsaq_s_w_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsaq_s.w.ph\t%q0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_mulsaq_s_w_ph },
    &operand_data[1139],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:664 */
  {
    "mips_dpaq_sa_l_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpaq_sa.l.w\t%q0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpaq_sa_l_w },
    &operand_data[1143],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:681 */
  {
    "mips_dpsq_sa_l_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsq_sa.l.w\t%q0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpsq_sa_l_w },
    &operand_data[1143],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:698 */
  {
    "mips_maq_s_w_phl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "maq_s.w.phl\t%q0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_maq_s_w_phl },
    &operand_data[1139],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:714 */
  {
    "mips_maq_s_w_phr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "maq_s.w.phr\t%q0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_maq_s_w_phr },
    &operand_data[1139],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:731 */
  {
    "mips_maq_sa_w_phl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "maq_sa.w.phl\t%q0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_maq_sa_w_phl },
    &operand_data[1139],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:747 */
  {
    "mips_maq_sa_w_phr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "maq_sa.w.phr\t%q0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_maq_sa_w_phr },
    &operand_data[1139],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:765 */
  {
    "mips_bitrev",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bitrev\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_bitrev },
    &operand_data[34],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:775 */
  {
    "mips_insv",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "insv\t%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_insv },
    &operand_data[847],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:788 */
  {
    "mips_repl_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_807 },
#else
    { 0, 0, output_807 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_repl_qb },
    &operand_data[1147],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:805 */
  {
    "mips_repl_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_808 },
#else
    { 0, output_808, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_repl_ph },
    &operand_data[1149],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:818 */
  {
    "mips_cmp_eq_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp.eq.ph\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cmp_eq_ph },
    &operand_data[1100],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:818 */
  {
    "mips_cmpu_eq_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpu.eq.qb\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cmpu_eq_qb },
    &operand_data[1103],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:829 */
  {
    "mips_cmp_lt_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp.lt.ph\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cmp_lt_ph },
    &operand_data[1100],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:829 */
  {
    "mips_cmpu_lt_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpu.lt.qb\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cmpu_lt_qb },
    &operand_data[1103],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:840 */
  {
    "mips_cmp_le_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp.le.ph\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cmp_le_ph },
    &operand_data[1100],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:840 */
  {
    "mips_cmpu_le_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpu.le.qb\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cmpu_le_qb },
    &operand_data[1103],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:851 */
  {
    "mips_cmpgu_eq_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpgu.eq.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cmpgu_eq_qb },
    &operand_data[1151],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:861 */
  {
    "mips_cmpgu_lt_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpgu.lt.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cmpgu_lt_qb },
    &operand_data[1151],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:871 */
  {
    "mips_cmpgu_le_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpgu.le.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cmpgu_le_qb },
    &operand_data[1151],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:882 */
  {
    "mips_pick_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pick.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_pick_ph },
    &operand_data[1099],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:882 */
  {
    "mips_pick_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pick.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_pick_qb },
    &operand_data[1102],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:894 */
  {
    "mips_packrl_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "packrl.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_packrl_ph },
    &operand_data[1099],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:906 */
  {
    "mips_extr_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_821 },
#else
    { 0, 0, output_821 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_extr_w },
    &operand_data[1154],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:927 */
  {
    "mips_extr_r_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_822 },
#else
    { 0, 0, output_822 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_extr_r_w },
    &operand_data[1154],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:948 */
  {
    "mips_extr_rs_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_823 },
#else
    { 0, 0, output_823 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_extr_rs_w },
    &operand_data[1154],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:970 */
  {
    "mips_extr_s_h",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_824 },
#else
    { 0, 0, output_824 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_extr_s_h },
    &operand_data[1154],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:992 */
  {
    "mips_extp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_825 },
#else
    { 0, 0, output_825 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_extp },
    &operand_data[1154],
    3,
    3,
    2,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1014 */
  {
    "mips_extpdp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_826 },
#else
    { 0, 0, output_826 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_extpdp },
    &operand_data[1154],
    3,
    3,
    4,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1040 */
  {
    "mips_shilo",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_827 },
#else
    { 0, 0, output_827 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_shilo },
    &operand_data[1157],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1059 */
  {
    "mips_mthlip",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthlip\t%2,%q0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_mthlip },
    &operand_data[1143],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1075 */
  {
    "mips_wrdsp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrdsp\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_wrdsp },
    &operand_data[1160],
    2,
    2,
    10,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1097 */
  {
    "mips_rddsp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rddsp\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_rddsp },
    &operand_data[1162],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lbx_extsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lbx_extsi_si },
    &operand_data[34],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lbux_extsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbux\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lbux_extsi_si },
    &operand_data[34],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lbx_extdi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lbx_extdi_si },
    &operand_data[43],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lbux_extdi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbux\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lbux_extdi_si },
    &operand_data[43],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lhx_extsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lhx_extsi_si },
    &operand_data[34],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lhux_extsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhux\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lhux_extsi_si },
    &operand_data[34],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lhx_extdi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lhx_extdi_si },
    &operand_data[43],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lhux_extdi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhux\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lhux_extdi_si },
    &operand_data[43],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lbx_extsi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lbx_extsi_di },
    &operand_data[37],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lbux_extsi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbux\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lbux_extsi_di },
    &operand_data[37],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lbx_extdi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lbx_extdi_di },
    &operand_data[40],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lbux_extdi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbux\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lbux_extdi_di },
    &operand_data[40],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lhx_extsi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lhx_extsi_di },
    &operand_data[37],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lhux_extsi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhux\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lhux_extsi_di },
    &operand_data[37],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lhx_extdi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lhx_extdi_di },
    &operand_data[40],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
  {
    "mips_lhux_extdi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhux\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lhux_extdi_di },
    &operand_data[40],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1161 */
  {
    "mips_lwx_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lwx_si },
    &operand_data[34],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1161 */
  {
    "mips_ldx_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_ldx_si },
    &operand_data[43],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1161 */
  {
    "mips_lwx_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lwx_di },
    &operand_data[37],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1161 */
  {
    "mips_ldx_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_ldx_di },
    &operand_data[40],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1171 */
  {
    "*mips_lwx_si_ext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[43],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1171 */
  {
    "*mips_lwux_si_ext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwux\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[43],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1171 */
  {
    "*mips_lwx_di_ext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwx\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[40],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1171 */
  {
    "*mips_lwux_di_ext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwux\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[40],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1184 */
  {
    "mips_bposge",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bposge%1\t%0%/",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_bposge },
    &operand_data[1164],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:73 */
  {
    "mips_absq_s_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "absq_s.qb\t%0,%z1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_absq_s_qb },
    &operand_data[1166],
    2,
    2,
    1,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:85 */
  {
    "mips_addu_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_addu_ph },
    &operand_data[1168],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:97 */
  {
    "mips_addu_s_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_addu_s_ph },
    &operand_data[1168],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:110 */
  {
    "mips_adduh_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adduh.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_adduh_qb },
    &operand_data[1171],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:120 */
  {
    "mips_adduh_r_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adduh_r.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_adduh_r_qb },
    &operand_data[1171],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:130 */
  {
    "mips_append",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_861 },
#else
    { 0, 0, output_861 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_append },
    &operand_data[1174],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:145 */
  {
    "mips_balign",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_862 },
#else
    { 0, 0, output_862 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_balign },
    &operand_data[1174],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:160 */
  {
    "mips_cmpgdu_eq_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpgdu.eq.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cmpgdu_eq_qb },
    &operand_data[1178],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:175 */
  {
    "mips_cmpgdu_lt_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpgdu.lt.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cmpgdu_lt_qb },
    &operand_data[1178],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:190 */
  {
    "mips_cmpgdu_le_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpgdu.le.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cmpgdu_le_qb },
    &operand_data[1178],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:205 */
  {
    "mips_dpa_w_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpa.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpa_w_ph },
    &operand_data[1181],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:217 */
  {
    "mips_dps_w_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dps.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dps_w_ph },
    &operand_data[1181],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:229 */
  {
    "mulv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulv2hi3 },
    &operand_data[1127],
    3,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:242 */
  {
    "mips_mul_s_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul_s.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_mul_s_ph },
    &operand_data[1185],
    3,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:256 */
  {
    "mips_mulq_rs_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_rs.w\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_mulq_rs_w },
    &operand_data[1189],
    3,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:270 */
  {
    "mips_mulq_s_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_s.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_mulq_s_ph },
    &operand_data[1185],
    3,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:284 */
  {
    "mips_mulq_s_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_s.w\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_mulq_s_w },
    &operand_data[1189],
    3,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:298 */
  {
    "mips_mulsa_w_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsa.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_mulsa_w_ph },
    &operand_data[1181],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:310 */
  {
    "mips_precr_qb_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "precr.qb.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_precr_qb_ph },
    &operand_data[1193],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:320 */
  {
    "mips_precr_sra_ph_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_875 },
#else
    { 0, 0, output_875 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_precr_sra_ph_w },
    &operand_data[1196],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:335 */
  {
    "mips_precr_sra_r_ph_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_876 },
#else
    { 0, 0, output_876 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_precr_sra_r_ph_w },
    &operand_data[1196],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:350 */
  {
    "mips_prepend",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_877 },
#else
    { 0, 0, output_877 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_prepend },
    &operand_data[1174],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:365 */
  {
    "mips_shra_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_878 },
#else
    { 0, 0, output_878 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_shra_qb },
    &operand_data[1200],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:384 */
  {
    "mips_shra_r_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_879 },
#else
    { 0, 0, output_879 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_shra_r_qb },
    &operand_data[1200],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:402 */
  {
    "mips_shrl_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_880 },
#else
    { 0, 0, output_880 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_shrl_ph },
    &operand_data[1203],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:420 */
  {
    "mips_subu_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_subu_ph },
    &operand_data[1168],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:433 */
  {
    "mips_subu_s_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_subu_s_ph },
    &operand_data[1168],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:446 */
  {
    "mips_subuh_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subuh.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_subuh_qb },
    &operand_data[1171],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:456 */
  {
    "mips_subuh_r_qb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subuh_r.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_subuh_r_qb },
    &operand_data[1171],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:466 */
  {
    "mips_addqh_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addqh.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_addqh_ph },
    &operand_data[1168],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:476 */
  {
    "mips_addqh_r_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addqh_r.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_addqh_r_ph },
    &operand_data[1168],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:486 */
  {
    "mips_addqh_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addqh.w\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_addqh_w },
    &operand_data[1189],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:496 */
  {
    "mips_addqh_r_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addqh_r.w\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_addqh_r_w },
    &operand_data[1189],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:506 */
  {
    "mips_subqh_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subqh.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_subqh_ph },
    &operand_data[1168],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:516 */
  {
    "mips_subqh_r_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subqh_r.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_subqh_r_ph },
    &operand_data[1168],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:526 */
  {
    "mips_subqh_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subqh.w\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_subqh_w },
    &operand_data[1189],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:536 */
  {
    "mips_subqh_r_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subqh_r.w\t%0,%z1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_subqh_r_w },
    &operand_data[1189],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:546 */
  {
    "mips_dpax_w_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpax.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpax_w_ph },
    &operand_data[1181],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:558 */
  {
    "mips_dpsx_w_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsx.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpsx_w_ph },
    &operand_data[1181],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:570 */
  {
    "mips_dpaqx_s_w_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpaqx_s.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpaqx_s_w_ph },
    &operand_data[1181],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:586 */
  {
    "mips_dpaqx_sa_w_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpaqx_sa.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpaqx_sa_w_ph },
    &operand_data[1181],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:602 */
  {
    "mips_dpsqx_s_w_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsqx_s.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpsqx_s_w_ph },
    &operand_data[1181],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:618 */
  {
    "mips_dpsqx_sa_w_ph",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsqx_sa.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_dpsqx_sa_w_ph },
    &operand_data[1181],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "addqq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addqq3 },
    &operand_data[1206],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "addhq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addhq3 },
    &operand_data[1209],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "addsq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsq3 },
    &operand_data[1212],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "adddq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adddq3 },
    &operand_data[1215],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "adduqq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adduqq3 },
    &operand_data[1218],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "adduhq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adduhq3 },
    &operand_data[1221],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "addusq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addusq3 },
    &operand_data[1224],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "addudq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addudq3 },
    &operand_data[1227],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "addha3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addha3 },
    &operand_data[1230],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "addsa3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsa3 },
    &operand_data[1233],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "addda3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addda3 },
    &operand_data[1236],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "adduha3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adduha3 },
    &operand_data[1239],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "addusa3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addusa3 },
    &operand_data[1242],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
  {
    "adduda3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adduda3 },
    &operand_data[1245],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:54 */
  {
    "usadduqq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usadduqq3 },
    &operand_data[1218],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:54 */
  {
    "usadduhq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usadduhq3 },
    &operand_data[1221],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:54 */
  {
    "usadduha3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usadduha3 },
    &operand_data[1239],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:54 */
  {
    "usaddv4uqq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usaddv4uqq3 },
    &operand_data[1248],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:54 */
  {
    "usaddv2uhq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usaddv2uhq3 },
    &operand_data[1251],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:54 */
  {
    "usaddv2uha3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usaddv2uha3 },
    &operand_data[1254],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:66 */
  {
    "ssaddhq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddhq3 },
    &operand_data[1209],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:66 */
  {
    "ssaddsq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddsq3 },
    &operand_data[1212],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:66 */
  {
    "ssaddha3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddha3 },
    &operand_data[1230],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:66 */
  {
    "ssaddsa3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddsa3 },
    &operand_data[1233],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:66 */
  {
    "ssaddv2hq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddv2hq3 },
    &operand_data[1257],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:66 */
  {
    "ssaddv2ha3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddv2ha3 },
    &operand_data[1260],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subqq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subqq3 },
    &operand_data[1206],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subhq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subhq3 },
    &operand_data[1209],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subsq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsq3 },
    &operand_data[1212],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subdq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subdq3 },
    &operand_data[1215],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subuqq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subuqq3 },
    &operand_data[1218],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subuhq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subuhq3 },
    &operand_data[1221],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subusq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subusq3 },
    &operand_data[1224],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subudq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subudq3 },
    &operand_data[1227],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subha3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subha3 },
    &operand_data[1230],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subsa3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsa3 },
    &operand_data[1233],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subda3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subda3 },
    &operand_data[1236],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subuha3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subuha3 },
    &operand_data[1239],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subusa3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subusa3 },
    &operand_data[1242],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
  {
    "subuda3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subuda3 },
    &operand_data[1245],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:87 */
  {
    "ussubuqq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubuqq3 },
    &operand_data[1218],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:87 */
  {
    "ussubuhq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubuhq3 },
    &operand_data[1221],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:87 */
  {
    "ussubuha3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubuha3 },
    &operand_data[1239],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:87 */
  {
    "ussubv4uqq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubv4uqq3 },
    &operand_data[1248],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:87 */
  {
    "ussubv2uhq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubv2uhq3 },
    &operand_data[1251],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:87 */
  {
    "ussubv2uha3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubv2uha3 },
    &operand_data[1254],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:99 */
  {
    "sssubhq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubhq3 },
    &operand_data[1209],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:99 */
  {
    "sssubsq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubsq3 },
    &operand_data[1212],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:99 */
  {
    "sssubha3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubha3 },
    &operand_data[1230],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:99 */
  {
    "sssubsa3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubsa3 },
    &operand_data[1233],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:99 */
  {
    "sssubv2hq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubv2hq3 },
    &operand_data[1257],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:99 */
  {
    "sssubv2ha3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubv2ha3 },
    &operand_data[1260],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:111 */
  {
    "ssmulv2hq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_rs.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssmulv2hq3 },
    &operand_data[1263],
    3,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:111 */
  {
    "ssmulhq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_rs.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssmulhq3 },
    &operand_data[1267],
    3,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:111 */
  {
    "ssmulsq3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_rs.w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssmulsq3 },
    &operand_data[1271],
    3,
    4,
    2,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:124 */
  {
    "ssmaddsqdq4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpaq_sa.l.w\t%q0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssmaddsqdq4 },
    &operand_data[1275],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:141 */
  {
    "ssmsubsqdq4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsq_sa.l.w\t%q0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssmsubsqdq4 },
    &operand_data[1275],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:112 */
  {
    "movv2si_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_956 },
#else
    { 0, 0, output_956 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2si_internal },
    &operand_data[1279],
    2,
    2,
    0,
    7,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:112 */
  {
    "movv4hi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_957 },
#else
    { 0, 0, output_957 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv4hi_internal },
    &operand_data[1281],
    2,
    2,
    0,
    7,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:112 */
  {
    "movv8qi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_958 },
#else
    { 0, 0, output_958 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv8qi_internal },
    &operand_data[1283],
    2,
    2,
    0,
    7,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:133 */
  {
    "loongson_vec_init1_v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmtc1\t%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_vec_init1_v4hi },
    &operand_data[1285],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:133 */
  {
    "loongson_vec_init1_v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmtc1\t%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_vec_init1_v8qi },
    &operand_data[1287],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:144 */
  {
    "*vec_concatv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklwd\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1289],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:156 */
  {
    "vec_pack_ssat_v2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "packsswh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_pack_ssat_v2si },
    &operand_data[1292],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:156 */
  {
    "vec_pack_ssat_v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "packsshb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_pack_ssat_v4hi },
    &operand_data[1295],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:168 */
  {
    "vec_pack_usat_v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "packushb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_pack_usat_v4hi },
    &operand_data[1295],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:180 */
  {
    "addv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addv2si3 },
    &operand_data[1298],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:180 */
  {
    "addv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addv4hi3 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:180 */
  {
    "addv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addv8qi3 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:194 */
  {
    "loongson_paddd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddd\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_paddd },
    &operand_data[1307],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:204 */
  {
    "ssaddv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddv4hi3 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:204 */
  {
    "ssaddv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddv8qi3 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:213 */
  {
    "usaddv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddush\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usaddv4hi3 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:213 */
  {
    "usaddv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usaddv8qi3 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:222 */
  {
    "loongson_pandn_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pandn_w },
    &operand_data[1298],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:222 */
  {
    "loongson_pandn_h",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pandn_h },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:222 */
  {
    "loongson_pandn_b",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pandn_b },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:222 */
  {
    "loongson_pandn_d",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pandn_d },
    &operand_data[1307],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:232 */
  {
    "andv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andv2si3 },
    &operand_data[1298],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:232 */
  {
    "andv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andv4hi3 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:232 */
  {
    "andv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andv8qi3 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:241 */
  {
    "iorv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorv2si3 },
    &operand_data[1298],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:241 */
  {
    "iorv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorv4hi3 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:241 */
  {
    "iorv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorv8qi3 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:250 */
  {
    "xorv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xorv2si3 },
    &operand_data[1298],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:250 */
  {
    "xorv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xorv4hi3 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:250 */
  {
    "xorv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xorv8qi3 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:259 */
  {
    "*loongson_nor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1298],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:259 */
  {
    "*loongson_nor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:259 */
  {
    "*loongson_nor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:269 */
  {
    "one_cmplv2si2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%1,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmplv2si2 },
    &operand_data[1298],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:269 */
  {
    "one_cmplv4hi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%1,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmplv4hi2 },
    &operand_data[1301],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:269 */
  {
    "one_cmplv8qi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%1,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmplv8qi2 },
    &operand_data[1304],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:277 */
  {
    "loongson_pavgh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pavgh },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:277 */
  {
    "loongson_pavgb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pavgb },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:287 */
  {
    "loongson_pcmpeqw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pcmpeqw },
    &operand_data[1298],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:287 */
  {
    "loongson_pcmpeqh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pcmpeqh },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:287 */
  {
    "loongson_pcmpeqb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pcmpeqb },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:297 */
  {
    "loongson_pcmpgtw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pcmpgtw },
    &operand_data[1298],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:297 */
  {
    "loongson_pcmpgth",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgth\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pcmpgth },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:297 */
  {
    "loongson_pcmpgtb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pcmpgtb },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:307 */
  {
    "loongson_pextrh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pextrh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pextrh },
    &operand_data[1310],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:317 */
  {
    "loongson_pinsrh_0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pinsrh_0\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pinsrh_0 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:329 */
  {
    "loongson_pinsrh_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pinsrh_1\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pinsrh_1 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:341 */
  {
    "loongson_pinsrh_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pinsrh_2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pinsrh_2 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:353 */
  {
    "loongson_pinsrh_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pinsrh_3\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pinsrh_3 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:365 */
  {
    "*vec_setv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pinsrh_%3\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1310],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:389 */
  {
    "loongson_pmaddhw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddhw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pmaddhw },
    &operand_data[1314],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:412 */
  {
    "smaxv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxv4hi3 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:432 */
  {
    "umaxv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxub\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaxv8qi3 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:441 */
  {
    "sminv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminv4hi3 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:461 */
  {
    "uminv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminub\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uminv8qi3 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:470 */
  {
    "loongson_pmovmskb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovmskb\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pmovmskb },
    &operand_data[1304],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:479 */
  {
    "umulv4hi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhuh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulv4hi3_highpart },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:489 */
  {
    "smulv4hi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulv4hi3_highpart },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:499 */
  {
    "mulv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmullh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulv4hi3 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:508 */
  {
    "loongson_pmuluw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuluw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pmuluw },
    &operand_data[1317],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:518 */
  {
    "loongson_pasubub",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pasubub\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pasubub },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:528 */
  {
    "loongson_biadd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "biadd\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_biadd },
    &operand_data[1320],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:536 */
  {
    "reduc_uplus_v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "biadd\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_uplus_v8qi },
    &operand_data[1304],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:545 */
  {
    "loongson_psadbh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pasubub\t%0,%1,%2;biadd\t%0,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_psadbh },
    &operand_data[1320],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:555 */
  {
    "loongson_pshufh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshufh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_pshufh },
    &operand_data[1310],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:565 */
  {
    "ashlv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlv2si3 },
    &operand_data[1323],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:565 */
  {
    "ashlv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlv4hi3 },
    &operand_data[1310],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:574 */
  {
    "ashrv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psraw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrv2si3 },
    &operand_data[1323],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:574 */
  {
    "ashrv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrah\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrv4hi3 },
    &operand_data[1310],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:583 */
  {
    "lshrv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrv2si3 },
    &operand_data[1323],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:583 */
  {
    "lshrv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrv4hi3 },
    &operand_data[1310],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:592 */
  {
    "subv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subv2si3 },
    &operand_data[1298],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:592 */
  {
    "subv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subv4hi3 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:592 */
  {
    "subv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subv8qi3 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:604 */
  {
    "loongson_psubd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubd\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_psubd },
    &operand_data[1307],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:614 */
  {
    "sssubv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubv4hi3 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:614 */
  {
    "sssubv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubv8qi3 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:623 */
  {
    "ussubv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubush\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubv4hi3 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:623 */
  {
    "ussubv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusb\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubv8qi3 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:632 */
  {
    "loongson_punpckhbh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhbh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_punpckhbh },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:646 */
  {
    "loongson_punpckhhw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhhw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_punpckhhw },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:658 */
  {
    "loongson_punpckhhw_qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhhw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_punpckhhw_qi },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:672 */
  {
    "loongson_punpckhwd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhwd\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_punpckhwd },
    &operand_data[1298],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:683 */
  {
    "loongson_punpckhwd_qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhwd\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_punpckhwd_qi },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:697 */
  {
    "loongson_punpckhwd_hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhwd\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_punpckhwd_hi },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:710 */
  {
    "loongson_punpcklbh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklbh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_punpcklbh },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:724 */
  {
    "loongson_punpcklhw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklhw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_punpcklhw },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:736 */
  {
    "*loongson_punpcklhw_qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklhw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:750 */
  {
    "loongson_punpcklwd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklwd\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_loongson_punpcklwd },
    &operand_data[1298],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:761 */
  {
    "*loongson_punpcklwd_qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklwd\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:775 */
  {
    "*loongson_punpcklwd_hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklwd\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1301],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:837 */
  {
    "vec_shl_v2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsll\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_shl_v2si },
    &operand_data[1323],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:837 */
  {
    "vec_shl_v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsll\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_shl_v4hi },
    &operand_data[1310],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:837 */
  {
    "vec_shl_v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsll\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_shl_v8qi },
    &operand_data[1326],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:837 */
  {
    "vec_shl_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsll\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_shl_di },
    &operand_data[1329],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:846 */
  {
    "vec_shr_v2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsrl\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_shr_v2si },
    &operand_data[1323],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:846 */
  {
    "vec_shr_v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsrl\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_shr_v4hi },
    &operand_data[1310],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:846 */
  {
    "vec_shr_v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsrl\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_shr_v8qi },
    &operand_data[1326],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:846 */
  {
    "vec_shr_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsrl\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_shr_di },
    &operand_data[1329],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:913 */
  {
    "divsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_1055 },
#else
    { 0, 0, output_1055 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsi3 },
    &operand_data[1332],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:913 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_1056 },
#else
    { 0, 0, output_1056 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivsi3 },
    &operand_data[1332],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:913 */
  {
    "divdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_1057 },
#else
    { 0, 0, output_1057 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divdi3 },
    &operand_data[1335],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:913 */
  {
    "udivdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_1058 },
#else
    { 0, 0, output_1058 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivdi3 },
    &operand_data[1335],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:927 */
  {
    "modsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_1059 },
#else
    { 0, 0, output_1059 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_modsi3 },
    &operand_data[1332],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:927 */
  {
    "umodsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_1060 },
#else
    { 0, 0, output_1060 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umodsi3 },
    &operand_data[1332],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:927 */
  {
    "moddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_1061 },
#else
    { 0, 0, output_1061 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_moddi3 },
    &operand_data[1335],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:927 */
  {
    "umoddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_1062 },
#else
    { 0, 0, output_1062 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umoddi3 },
    &operand_data[1335],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1078 */
  {
    "ctrapsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ctrapsi4 },
    &operand_data[1338],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1078 */
  {
    "ctrapdi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ctrapdi4 },
    &operand_data[1342],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1115 */
  {
    "addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3 },
    &operand_data[1346],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1115 */
  {
    "adddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adddi3 },
    &operand_data[1349],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1166 */
  {
    "adddi3+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1352],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1192 */
  {
    "adddi3+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1354],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1219 */
  {
    "adddi3+3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1357],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1245 */
  {
    "mulsf3-2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1359],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1286 */
  {
    "mulsf3-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1362],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1376 */
  {
    "mulsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsf3 },
    &operand_data[1365],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1376 */
  {
    "muldf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_muldf3 },
    &operand_data[1368],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1461 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3 },
    &operand_data[1371],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1461 */
  {
    "muldi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_muldi3 },
    &operand_data[1374],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1526 */
  {
    "muldi3+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1377],
    0,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1569 */
  {
    "muldi3+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1377],
    0,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1642 */
  {
    "muldi3+3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1378],
    0,
    6,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1698 */
  {
    "muldi3+4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1384],
    0,
    6,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1759 */
  {
    "mulsidi3-4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1390],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1786 */
  {
    "mulsidi3-3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1393],
    0,
    5,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1816 */
  {
    "mulsidi3-2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1398],
    0,
    5,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1859 */
  {
    "mulsidi3-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1378],
    0,
    6,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1885 */
  {
    "mulsidi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsidi3 },
    &operand_data[1403],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1885 */
  {
    "umulsidi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsidi3 },
    &operand_data[1403],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1896 */
  {
    "mulsidi3_32bit_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsidi3_32bit_mips16 },
    &operand_data[1403],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1896 */
  {
    "umulsidi3_32bit_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsidi3_32bit_mips16 },
    &operand_data[1403],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1938 */
  {
    "umulsidi3_32bit_mips16+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1403],
    0,
    5,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1938 */
  {
    "mulsidi3_64bit_mips16-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1403],
    0,
    5,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1960 */
  {
    "mulsidi3_64bit_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsidi3_64bit_mips16 },
    &operand_data[1403],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1960 */
  {
    "umulsidi3_64bit_mips16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsidi3_64bit_mips16 },
    &operand_data[1403],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1971 */
  {
    "mulsidi3_64bit_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsidi3_64bit_split },
    &operand_data[1408],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1971 */
  {
    "umulsidi3_64bit_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsidi3_64bit_split },
    &operand_data[1408],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2068 */
  {
    "smulsi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulsi3_highpart },
    &operand_data[1371],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2068 */
  {
    "umulsi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsi3_highpart },
    &operand_data[1371],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2090 */
  {
    "umulsi3_highpart+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1385],
    0,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2090 */
  {
    "smulsi3_highpart_split-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1385],
    0,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2111 */
  {
    "smulsi3_highpart_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulsi3_highpart_split },
    &operand_data[1371],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2111 */
  {
    "umulsi3_highpart_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsi3_highpart_split },
    &operand_data[1371],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2169 */
  {
    "smuldi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smuldi3_highpart },
    &operand_data[1374],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2169 */
  {
    "umuldi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umuldi3_highpart },
    &operand_data[1374],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2187 */
  {
    "umuldi3_highpart+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1411],
    0,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2187 */
  {
    "smuldi3_highpart_split-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1411],
    0,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2210 */
  {
    "smuldi3_highpart_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smuldi3_highpart_split },
    &operand_data[1374],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2210 */
  {
    "umuldi3_highpart_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umuldi3_highpart_split },
    &operand_data[1374],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2227 */
  {
    "mulditi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulditi3 },
    &operand_data[1415],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2227 */
  {
    "umulditi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulditi3 },
    &operand_data[1415],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2486 */
  {
    "divsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsf3 },
    &operand_data[1418],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2486 */
  {
    "divdf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divdf3 },
    &operand_data[1421],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2486 */
  {
    "divv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divv2sf3 },
    &operand_data[1424],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2547 */
  {
    "divmodsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divmodsi4 },
    &operand_data[1384],
    4,
    4,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2547 */
  {
    "divmoddi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divmoddi4 },
    &operand_data[1427],
    4,
    4,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2568 */
  {
    "divmoddi4+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1431],
    0,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2568 */
  {
    "udivmodsi4-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1435],
    0,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2587 */
  {
    "udivmodsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivmodsi4 },
    &operand_data[1384],
    4,
    4,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2587 */
  {
    "udivmoddi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivmoddi4 },
    &operand_data[1427],
    4,
    4,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2608 */
  {
    "udivmoddi4+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1431],
    0,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2608 */
  {
    "divmodsi4_split-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1435],
    0,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2627 */
  {
    "divmodsi4_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divmodsi4_split },
    &operand_data[1371],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2627 */
  {
    "udivmodsi4_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivmodsi4_split },
    &operand_data[1371],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2627 */
  {
    "divmoddi4_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divmoddi4_split },
    &operand_data[1374],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2627 */
  {
    "udivmoddi4_split",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivmoddi4_split },
    &operand_data[1374],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2854 */
  {
    "andsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi3 },
    &operand_data[1439],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2854 */
  {
    "anddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_anddi3 },
    &operand_data[1442],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2944 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorsi3 },
    &operand_data[1445],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2944 */
  {
    "iordi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iordi3 },
    &operand_data[1448],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2974 */
  {
    "xorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xorsi3 },
    &operand_data[1445],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2974 */
  {
    "xordi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xordi3 },
    &operand_data[1448],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3104 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendsidi2 },
    &operand_data[1451],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3109 */
  {
    "zero_extendsidi2+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1451],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3138 */
  {
    "zero_extendqisi2-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1349],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3148 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqisi2 },
    &operand_data[1453],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3148 */
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqidi2 },
    &operand_data[1455],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3148 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendhisi2 },
    &operand_data[1457],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3148 */
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendhidi2 },
    &operand_data[1459],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3192 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqihi2 },
    &operand_data[1461],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3269 */
  {
    "zero_extendqihi2+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1451],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3286 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqisi2 },
    &operand_data[1453],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3286 */
  {
    "extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqidi2 },
    &operand_data[1455],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3286 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhisi2 },
    &operand_data[1457],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3286 */
  {
    "extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhidi2 },
    &operand_data[1459],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3301 */
  {
    "extendhidi2+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1453],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3301 */
  {
    "extendhidi2+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1455],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3301 */
  {
    "extendqihi2-2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1457],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3301 */
  {
    "extendqihi2-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1459],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3331 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqihi2 },
    &operand_data[1461],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3346 */
  {
    "extendqihi2+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1461],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3380 */
  {
    "extendqihi2+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1349],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3380 */
  {
    "extendqihi2+3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1349],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3400 */
  {
    "fix_truncdfsi2-3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1373],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3400 */
  {
    "fix_truncdfsi2-2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1373],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3420 */
  {
    "fix_truncdfsi2-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1463],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3476 */
  {
    "fix_truncdfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdfsi2 },
    &operand_data[1465],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3513 */
  {
    "fix_truncsfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsfsi2 },
    &operand_data[1467],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3611 */
  {
    "fixuns_truncdfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fixuns_truncdfsi2 },
    &operand_data[1465],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3657 */
  {
    "fixuns_truncdfdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fixuns_truncdfdi2 },
    &operand_data[1469],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3700 */
  {
    "fixuns_truncsfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fixuns_truncsfsi2 },
    &operand_data[1467],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3743 */
  {
    "fixuns_truncsfdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fixuns_truncsfdi2 },
    &operand_data[1417],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3794 */
  {
    "extvmisalignsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extvmisalignsi },
    &operand_data[1471],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3794 */
  {
    "extvmisaligndi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extvmisaligndi },
    &operand_data[1475],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3810 */
  {
    "extvsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extvsi },
    &operand_data[1479],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3810 */
  {
    "extvdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extvdi },
    &operand_data[1483],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3831 */
  {
    "extzvmisalignsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extzvmisalignsi },
    &operand_data[1471],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3831 */
  {
    "extzvmisaligndi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extzvmisaligndi },
    &operand_data[1475],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3847 */
  {
    "extzvsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extzvsi },
    &operand_data[1479],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3847 */
  {
    "extzvdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extzvdi },
    &operand_data[1483],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3882 */
  {
    "insvmisalignsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insvmisalignsi },
    &operand_data[1487],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3882 */
  {
    "insvmisaligndi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insvmisaligndi },
    &operand_data[1491],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3897 */
  {
    "insvsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insvsi },
    &operand_data[1495],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3897 */
  {
    "insvdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insvdi },
    &operand_data[1499],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4011 */
  {
    "insvdi+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1503],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4036 */
  {
    "insvdi+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1505],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4064 */
  {
    "insvdi+3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1508],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4089 */
  {
    "insvdi+4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1511],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4089 */
  {
    "insvdi+5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1513],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4106 */
  {
    "insvdi+6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1515],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4106 */
  {
    "insvdi+7",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1517],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4121 */
  {
    "unspec_got_si-6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1519],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4121 */
  {
    "unspec_got_si-5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1522],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4136 */
  {
    "unspec_got_si-4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1515],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4136 */
  {
    "unspec_got_si-3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1517],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4149 */
  {
    "unspec_got_si-2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1525],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4149 */
  {
    "unspec_got_si-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1527],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4161 */
  {
    "unspec_got_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unspec_got_si },
    &operand_data[1529],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4161 */
  {
    "unspec_got_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unspec_got_di },
    &operand_data[1531],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4204 */
  {
    "unspec_got_di+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1352],
    0,
    1,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4204 */
  {
    "unspec_got_di+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1357],
    0,
    1,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4213 */
  {
    "unspec_got_di+3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1533],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4213 */
  {
    "movdi-3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1536],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4225 */
  {
    "movdi-2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1539],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4225 */
  {
    "movdi-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1542],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4242 */
  {
    "movdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdi },
    &operand_data[1531],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4310 */
  {
    "movdi+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1357],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
  {
    "movsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsi },
    &operand_data[1529],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
  {
    "movv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2hi },
    &operand_data[1545],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
  {
    "movv4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv4qi },
    &operand_data[1547],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
  {
    "movv2hq",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2hq },
    &operand_data[1549],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
  {
    "movv2uhq",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2uhq },
    &operand_data[1551],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
  {
    "movv2ha",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2ha },
    &operand_data[1553],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
  {
    "movv2uha",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2uha },
    &operand_data[1555],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
  {
    "movv4qq",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv4qq },
    &operand_data[1557],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
  {
    "movv4uqq",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv4uqq },
    &operand_data[1559],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4388 */
  {
    "movv4uqq+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1352],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4427 */
  {
    "movhi-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1352],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4495 */
  {
    "movhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movhi },
    &operand_data[1561],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4528 */
  {
    "movhi+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1563],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4570 */
  {
    "movqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movqi },
    &operand_data[1565],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4603 */
  {
    "movqi+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1567],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4628 */
  {
    "movsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsf },
    &operand_data[1569],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4669 */
  {
    "movdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdf },
    &operand_data[1571],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4710 */
  {
    "movti",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movti },
    &operand_data[1573],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4746 */
  {
    "movtf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movtf },
    &operand_data[1575],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4778 */
  {
    "movtf+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1577],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4778 */
  {
    "movtf+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1579],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4778 */
  {
    "movtf+3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1581],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4778 */
  {
    "movtf+4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1583],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4778 */
  {
    "movtf+5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1585],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4778 */
  {
    "movv2sf-4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1587],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4788 */
  {
    "movv2sf-3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1589],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4788 */
  {
    "movv2sf-2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1591],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4800 */
  {
    "movv2sf-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1593],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4815 */
  {
    "movv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2sf },
    &operand_data[1595],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
  {
    "move_doubleword_fprdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_move_doubleword_fprdf },
    &operand_data[1571],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
  {
    "move_doubleword_fprdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_move_doubleword_fprdi },
    &operand_data[1531],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
  {
    "move_doubleword_fprv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_move_doubleword_fprv2sf },
    &operand_data[1595],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
  {
    "move_doubleword_fprv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_move_doubleword_fprv2si },
    &operand_data[1597],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
  {
    "move_doubleword_fprv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_move_doubleword_fprv4hi },
    &operand_data[1599],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
  {
    "move_doubleword_fprv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_move_doubleword_fprv8qi },
    &operand_data[1601],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
  {
    "move_doubleword_fprtf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_move_doubleword_fprtf },
    &operand_data[1575],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4964 */
  {
    "load_const_gp_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_const_gp_si },
    &operand_data[34],
    1,
    1,
    0,
    1,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4964 */
  {
    "load_const_gp_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_const_gp_di },
    &operand_data[40],
    1,
    1,
    0,
    1,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4971 */
  {
    "load_const_gp_di+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1539],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4971 */
  {
    "load_const_gp_di+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1542],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4990 */
  {
    "load_const_gp_di+3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1539],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4990 */
  {
    "load_const_gp_di+4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1542],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5014 */
  {
    "load_const_gp_di+5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1603],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5014 */
  {
    "clear_cache-5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1606],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5036 */
  {
    "clear_cache-4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1346],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5036 */
  {
    "clear_cache-3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1349],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5053 */
  {
    "clear_cache-2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1609],
    0,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5053 */
  {
    "clear_cache-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1613],
    0,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5099 */
  {
    "clear_cache",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clear_cache },
    &operand_data[1617],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5177 */
  {
    "movmemsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movmemsi },
    &operand_data[1619],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5197 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlsi3 },
    &operand_data[1346],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5197 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrsi3 },
    &operand_data[1346],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5197 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrsi3 },
    &operand_data[1346],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5197 */
  {
    "ashldi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashldi3 },
    &operand_data[1623],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5197 */
  {
    "ashrdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrdi3 },
    &operand_data[1623],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5197 */
  {
    "lshrdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrdi3 },
    &operand_data[1623],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5339 */
  {
    "lshrdi3+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1354],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5339 */
  {
    "lshrdi3+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1354],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5339 */
  {
    "lshrdi3+3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1354],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5339 */
  {
    "lshrdi3+4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1359],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5339 */
  {
    "lshrdi3+5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1359],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5339 */
  {
    "cbranchsi4-4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1359],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5359 */
  {
    "cbranchsi4-3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1626],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5395 */
  {
    "cbranchsi4-2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1346],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5406 */
  {
    "cbranchsi4-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1349],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5569 */
  {
    "cbranchsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsi4 },
    &operand_data[1629],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5569 */
  {
    "cbranchdi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchdi4 },
    &operand_data[1633],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5582 */
  {
    "cbranchsf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsf4 },
    &operand_data[1637],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5582 */
  {
    "cbranchdf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchdf4 },
    &operand_data[1641],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5596 */
  {
    "condjump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_condjump },
    &operand_data[837],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5653 */
  {
    "cstoresi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoresi4 },
    &operand_data[1645],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5653 */
  {
    "cstoredi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoredi4 },
    &operand_data[1649],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5828 */
  {
    "jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_jump },
    &operand_data[708],
    1,
    1,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5887 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_indirect_jump },
    &operand_data[866],
    1,
    1,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5915 */
  {
    "tablejump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tablejump },
    &operand_data[1653],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5955 */
  {
    "casesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_casesi },
    &operand_data[1655],
    5,
    5,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6040 */
  {
    "builtin_setjmp_setup",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_builtin_setjmp_setup },
    &operand_data[866],
    1,
    1,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6055 */
  {
    "builtin_longjmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_builtin_longjmp },
    &operand_data[866],
    1,
    1,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6092 */
  {
    "prologue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_prologue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6122 */
  {
    "epilogue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_epilogue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6130 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_epilogue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6141 */
  {
    "return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_return },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6146 */
  {
    "simple_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_simple_return },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6223 */
  {
    "eh_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eh_return },
    &operand_data[1660],
    1,
    1,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6251 */
  {
    "eh_return+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1661],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6261 */
  {
    "exception_receiver",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_exception_receiver },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6276 */
  {
    "nonlocal_goto_receiver",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_nonlocal_goto_receiver },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6287 */
  {
    "nonlocal_goto_receiver+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1388],
    0,
    1,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6287 */
  {
    "nonlocal_goto_receiver+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1407],
    0,
    1,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6302 */
  {
    "sibcall-2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1663],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6302 */
  {
    "sibcall-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1577],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6404 */
  {
    "sibcall",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall },
    &operand_data[1665],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6424 */
  {
    "sibcall_value",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_value },
    &operand_data[1665],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6457 */
  {
    "call",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call },
    &operand_data[1665],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6504 */
  {
    "call+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1669],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6532 */
  {
    "call_value-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[872],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6559 */
  {
    "call_value",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value },
    &operand_data[1665],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6572 */
  {
    "call_value+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1671],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6601 */
  {
    "call_value+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[874],
    0,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6632 */
  {
    "untyped_call-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1671],
    0,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6668 */
  {
    "untyped_call",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_untyped_call },
    &operand_data[1665],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6777 */
  {
    "movsicc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsicc },
    &operand_data[1675],
    4,
    4,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6777 */
  {
    "movdicc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdicc },
    &operand_data[1679],
    4,
    4,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6789 */
  {
    "movsfcc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsfcc },
    &operand_data[1683],
    4,
    4,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6789 */
  {
    "movdfcc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdfcc },
    &operand_data[1687],
    4,
    4,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6852 */
  {
    "movdfcc+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1691],
    0,
    1,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6892 */
  {
    "movdfcc+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[957],
    0,
    1,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6892 */
  {
    "movdfcc+3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1349],
    0,
    1,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6931 */
  {
    "get_thread_pointersi-2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1692],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6931 */
  {
    "get_thread_pointersi-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1694],
    0,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6964 */
  {
    "get_thread_pointersi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_get_thread_pointersi },
    &operand_data[34],
    1,
    1,
    0,
    1,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6964 */
  {
    "get_thread_pointerdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_get_thread_pointerdi },
    &operand_data[40],
    1,
    1,
    0,
    1,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:44 */
  {
    "memory_barrier",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_memory_barrier },
    &operand_data[0],
    0,
    0,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:75 */
  {
    "sync_compare_and_swapqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_compare_and_swapqi },
    &operand_data[1696],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:75 */
  {
    "sync_compare_and_swaphi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_compare_and_swaphi },
    &operand_data[1700],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
  {
    "sync_addqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_addqi },
    &operand_data[1697],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
  {
    "sync_subqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_subqi },
    &operand_data[1697],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
  {
    "sync_iorqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_iorqi },
    &operand_data[1697],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
  {
    "sync_xorqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_xorqi },
    &operand_data[1697],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
  {
    "sync_andqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_andqi },
    &operand_data[1697],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
  {
    "sync_addhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_addhi },
    &operand_data[1701],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
  {
    "sync_subhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_subhi },
    &operand_data[1701],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
  {
    "sync_iorhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_iorhi },
    &operand_data[1701],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
  {
    "sync_xorhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_xorhi },
    &operand_data[1701],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
  {
    "sync_andhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_andhi },
    &operand_data[1701],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
  {
    "sync_old_addqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_addqi },
    &operand_data[1696],
    3,
    3,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
  {
    "sync_old_subqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_subqi },
    &operand_data[1696],
    3,
    3,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
  {
    "sync_old_iorqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_iorqi },
    &operand_data[1696],
    3,
    3,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
  {
    "sync_old_xorqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_xorqi },
    &operand_data[1696],
    3,
    3,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
  {
    "sync_old_andqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_andqi },
    &operand_data[1696],
    3,
    3,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
  {
    "sync_old_addhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_addhi },
    &operand_data[1700],
    3,
    3,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
  {
    "sync_old_subhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_subhi },
    &operand_data[1700],
    3,
    3,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
  {
    "sync_old_iorhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_iorhi },
    &operand_data[1700],
    3,
    3,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
  {
    "sync_old_xorhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_xorhi },
    &operand_data[1700],
    3,
    3,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
  {
    "sync_old_andhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_andhi },
    &operand_data[1700],
    3,
    3,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
  {
    "sync_new_addqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_addqi },
    &operand_data[1696],
    3,
    3,
    3,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
  {
    "sync_new_subqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_subqi },
    &operand_data[1696],
    3,
    3,
    3,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
  {
    "sync_new_iorqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_iorqi },
    &operand_data[1696],
    3,
    3,
    3,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
  {
    "sync_new_xorqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_xorqi },
    &operand_data[1696],
    3,
    3,
    3,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
  {
    "sync_new_andqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_andqi },
    &operand_data[1696],
    3,
    3,
    3,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
  {
    "sync_new_addhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_addhi },
    &operand_data[1700],
    3,
    3,
    3,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
  {
    "sync_new_subhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_subhi },
    &operand_data[1700],
    3,
    3,
    3,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
  {
    "sync_new_iorhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_iorhi },
    &operand_data[1700],
    3,
    3,
    3,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
  {
    "sync_new_xorhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_xorhi },
    &operand_data[1700],
    3,
    3,
    3,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
  {
    "sync_new_andhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_andhi },
    &operand_data[1700],
    3,
    3,
    3,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:243 */
  {
    "sync_nandqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_nandqi },
    &operand_data[1697],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:243 */
  {
    "sync_nandhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_nandhi },
    &operand_data[1701],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:279 */
  {
    "sync_old_nandqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_nandqi },
    &operand_data[1696],
    3,
    3,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:279 */
  {
    "sync_old_nandhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_old_nandhi },
    &operand_data[1700],
    3,
    3,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:318 */
  {
    "sync_new_nandqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_nandqi },
    &operand_data[1696],
    3,
    3,
    3,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:318 */
  {
    "sync_new_nandhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_new_nandhi },
    &operand_data[1700],
    3,
    3,
    3,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:534 */
  {
    "sync_lock_test_and_setqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_lock_test_and_setqi },
    &operand_data[1696],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:534 */
  {
    "sync_lock_test_and_sethi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_lock_test_and_sethi },
    &operand_data[1700],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:604 */
  {
    "atomic_exchangesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangesi },
    &operand_data[1704],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:604 */
  {
    "atomic_exchangedi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangedi },
    &operand_data[1708],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:659 */
  {
    "atomic_fetch_addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_addsi },
    &operand_data[1704],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:659 */
  {
    "atomic_fetch_adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_adddi },
    &operand_data[1708],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:72 */
  {
    "movv2sfcc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2sfcc },
    &operand_data[1712],
    4,
    4,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:167 */
  {
    "vec_perm_constv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_perm_constv2sf },
    &operand_data[1714],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:196 */
  {
    "mips_puu_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_puu_ps },
    &operand_data[1714],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:211 */
  {
    "mips_pul_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_pul_ps },
    &operand_data[1714],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:226 */
  {
    "mips_plu_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_plu_ps },
    &operand_data[1714],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:241 */
  {
    "mips_pll_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_pll_ps },
    &operand_data[1714],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:257 */
  {
    "vec_initv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_initv2sf },
    &operand_data[1718],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:303 */
  {
    "vec_setv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_setv2sf },
    &operand_data[1720],
    3,
    3,
    2,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:322 */
  {
    "mips_cvt_ps_s",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cvt_ps_s },
    &operand_data[1723],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:336 */
  {
    "mips_cvt_s_pl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cvt_s_pl },
    &operand_data[1725],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:344 */
  {
    "mips_cvt_s_pu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_cvt_s_pu },
    &operand_data[1725],
    2,
    2,
    1,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:414 */
  {
    "mips_abs_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_abs_ps },
    &operand_data[1714],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:458 */
  {
    "mips_abs_ps+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1727],
    0,
    6,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:487 */
  {
    "scc_ps-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[1727],
    0,
    6,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:544 */
  {
    "scc_ps",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_scc_ps },
    &operand_data[1733],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:620 */
  {
    "single_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_single_cc },
    &operand_data[837],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:711 */
  {
    "vcondv2sfv2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vcondv2sfv2sf },
    &operand_data[1735],
    6,
    6,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:726 */
  {
    "sminv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminv2sf3 },
    &operand_data[1714],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:737 */
  {
    "smaxv2sf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxv2sf3 },
    &operand_data[1714],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:748 */
  {
    "reduc_smin_v2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_smin_v2sf },
    &operand_data[1714],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:757 */
  {
    "reduc_smax_v2sf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_smax_v2sf },
    &operand_data[1714],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1114 */
  {
    "mips_lbux",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lbux },
    &operand_data[1741],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1137 */
  {
    "mips_lhx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lhx },
    &operand_data[1741],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1149 */
  {
    "mips_lwx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_lwx },
    &operand_data[1741],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1149 */
  {
    "mips_ldx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_ldx },
    &operand_data[1744],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1194 */
  {
    "mips_madd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_madd },
    &operand_data[1437],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1194 */
  {
    "mips_maddu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_maddu },
    &operand_data[1437],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1202 */
  {
    "mips_msub",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_msub },
    &operand_data[1437],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1202 */
  {
    "mips_msubu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mips_msubu },
    &operand_data[1437],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:102 */
  {
    "movv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2si },
    &operand_data[1597],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:102 */
  {
    "movv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv4hi },
    &operand_data[1599],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:102 */
  {
    "movv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv8qi },
    &operand_data[1601],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:122 */
  {
    "vec_initv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_initv2si },
    &operand_data[1747],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:122 */
  {
    "vec_initv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_initv4hi },
    &operand_data[1749],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:122 */
  {
    "vec_initv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_initv8qi },
    &operand_data[1751],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:375 */
  {
    "vec_setv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_setv4hi },
    &operand_data[1753],
    4,
    4,
    0,
    1,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:398 */
  {
    "sdot_prodv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sdot_prodv4hi },
    &operand_data[1757],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:420 */
  {
    "smaxv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxv2si3 },
    &operand_data[1760],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:420 */
  {
    "smaxv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxv8qi3 },
    &operand_data[1763],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:449 */
  {
    "sminv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminv2si3 },
    &operand_data[1760],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:449 */
  {
    "sminv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminv8qi3 },
    &operand_data[1763],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:787 */
  {
    "vec_perm_constv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_perm_constv2si },
    &operand_data[1766],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:787 */
  {
    "vec_perm_constv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_perm_constv4hi },
    &operand_data[1770],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:787 */
  {
    "vec_perm_constv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_perm_constv8qi },
    &operand_data[1774],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:800 */
  {
    "vec_unpacks_lo_v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_unpacks_lo_v4hi },
    &operand_data[1757],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:800 */
  {
    "vec_unpacks_lo_v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_unpacks_lo_v8qi },
    &operand_data[1778],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:809 */
  {
    "vec_unpacks_hi_v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_unpacks_hi_v4hi },
    &operand_data[1757],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:809 */
  {
    "vec_unpacks_hi_v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_unpacks_hi_v8qi },
    &operand_data[1778],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:818 */
  {
    "vec_unpacku_lo_v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_unpacku_lo_v4hi },
    &operand_data[1757],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:818 */
  {
    "vec_unpacku_lo_v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_unpacku_lo_v8qi },
    &operand_data[1778],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:827 */
  {
    "vec_unpacku_hi_v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_unpacku_hi_v4hi },
    &operand_data[1757],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:827 */
  {
    "vec_unpacku_hi_v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_unpacku_hi_v8qi },
    &operand_data[1778],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:855 */
  {
    "reduc_uplus_v2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_uplus_v2si },
    &operand_data[1760],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:855 */
  {
    "reduc_uplus_v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_uplus_v4hi },
    &operand_data[1758],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:866 */
  {
    "reduc_splus_v2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_splus_v2si },
    &operand_data[1760],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:866 */
  {
    "reduc_splus_v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_splus_v4hi },
    &operand_data[1758],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:866 */
  {
    "reduc_splus_v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_splus_v8qi },
    &operand_data[1763],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:875 */
  {
    "reduc_smax_v2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_smax_v2si },
    &operand_data[1760],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:875 */
  {
    "reduc_smax_v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_smax_v4hi },
    &operand_data[1758],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:875 */
  {
    "reduc_smax_v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_smax_v8qi },
    &operand_data[1763],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:884 */
  {
    "reduc_smin_v2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_smin_v2si },
    &operand_data[1760],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:884 */
  {
    "reduc_smin_v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_smin_v4hi },
    &operand_data[1758],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:884 */
  {
    "reduc_smin_v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_smin_v8qi },
    &operand_data[1763],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:893 */
  {
    "reduc_umax_v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_umax_v8qi },
    &operand_data[1763],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:902 */
  {
    "reduc_umin_v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reduc_umin_v8qi },
    &operand_data[1763],
    2,
    2,
    0,
    0,
    0
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}
