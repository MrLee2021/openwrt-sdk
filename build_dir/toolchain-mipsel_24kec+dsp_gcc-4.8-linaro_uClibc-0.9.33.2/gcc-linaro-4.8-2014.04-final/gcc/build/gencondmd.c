/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

  { "(ISA_HAS_FP4) && ((((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 4459 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    ? (int) (
#line 4459 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    : -1 },
  { "(ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 6795 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 6795 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(TARGET_FIX_R4000) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1555 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1555 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 4582 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || reg_or_0_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 4582 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode)))
    ? (int) 
#line 4582 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode)))
    : -1 },
#line 4068 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected",
    __builtin_constant_p 
#line 4068 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
    ? (int) 
#line 4068 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_RTP) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5019 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5019 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_LBX) && (Pmode == DImode)",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_SB1 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2712 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2712 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "((HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 6896 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 6898 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 6896 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 6898 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(!TARGET_MIPS16 && and_operands_ok (DImode, operands[1], operands[2])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2884 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && and_operands_ok (DImode, operands[1], operands[2])) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2884 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && and_operands_ok (DImode, operands[1], operands[2])) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 2265 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && TARGET_FIX_R4000\n\
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2265 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2265 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 4266 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 4266 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    ? (int) 
#line 4266 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    : -1 },
  { "(!TARGET_FIX_VR4120 && !TARGET_MIPS16) && ( reload_completed)",
    __builtin_constant_p (
#line 2575 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120 && !TARGET_MIPS16) && 
#line 2577 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 2575 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120 && !TARGET_MIPS16) && 
#line 2577 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3826 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3826 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_CALL_CLOBBERED_GP) && (Pmode == DImode)",
    __builtin_constant_p (
#line 6291 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 6291 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_MIPS3D) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 706 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 706 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V2UHAmode)\n\
       || reg_or_0_operand (operands[1], V2UHAmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || reg_or_0_operand (operands[1], V2UHAmode))) && 
#line 741 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || reg_or_0_operand (operands[1], V2UHAmode))) && 
#line 741 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 4791 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)",
    __builtin_constant_p 
#line 4791 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn))
    ? (int) 
#line 4791 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn))
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V2HQmode)\n\
       || reg_or_0_operand (operands[1], V2HQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || reg_or_0_operand (operands[1], V2HQmode))) && 
#line 738 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || reg_or_0_operand (operands[1], V2HQmode))) && 
#line 738 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)) && (TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS)",
    __builtin_constant_p (
#line 4781 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)) && 
#line 751 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    ? (int) (
#line 4781 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)) && 
#line 751 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    : -1 },
  { "(!TARGET_FIX_R4000) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1545 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1545 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V2HImode)\n\
       || reg_or_0_operand (operands[1], V2HImode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || reg_or_0_operand (operands[1], V2HImode))) && 
#line 736 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || reg_or_0_operand (operands[1], V2HImode))) && 
#line 736 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V2HImode)\n\
       || register_operand (operands[1], V2HImode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || register_operand (operands[1], V2HImode))) && 
#line 736 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || register_operand (operands[1], V2HImode))) && 
#line 736 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 931 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
  { "TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A",
    __builtin_constant_p 
#line 931 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A)
    ? (int) 
#line 931 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4125 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4125 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "((TARGET_MIPS16) && (Pmode == SImode)) && ( mips_must_initialize_gp_p ())",
    __builtin_constant_p ((
#line 5040 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 5042 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    ? (int) ((
#line 5040 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 5042 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    : -1 },
  { "(ISA_HAS_NMADD3_NMSUB3 (SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (SFmode)\n\
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2439 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2439 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DMUL3 && !TARGET_MIPS16) && ( reload_completed)",
    __builtin_constant_p (
#line 1944 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DMUL3 && !TARGET_MIPS16) && 
#line 1946 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 1944 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DMUL3 && !TARGET_MIPS16) && 
#line 1946 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(ISA_HAS_FP4) && ((((TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 4459 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    ? (int) (
#line 4459 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    : -1 },
#line 1828 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_MUL3 && peep2_reg_dead_p (3, operands[1])",
    __builtin_constant_p 
#line 1828 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (3, operands[1]))
    ? (int) 
#line 1828 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (3, operands[1]))
    : -1 },
  { "(ISA_HAS_LHUX) && ((((TARGET_64BIT) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHUX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHUX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    : -1 },
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || reg_or_0_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode)))
    ? (int) 
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode)))
    : -1 },
  { "(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),\n\
		       INTVAL (operands[3]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3864 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3864 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "((!TARGET_FIX_VR4120 && !TARGET_MIPS16) && (TARGET_64BIT)) && ( reload_completed)",
    __builtin_constant_p ((
#line 2575 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120 && !TARGET_MIPS16) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2577 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 2575 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120 && !TARGET_MIPS16) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2577 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed && register_operand (operands[1], VOIDmode))",
    __builtin_constant_p (
#line 3272 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 3277 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode)))
    ? (int) (
#line 3272 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 3277 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode)))
    : -1 },
#line 2281 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MAD",
    __builtin_constant_p 
#line 2281 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MAD)
    ? (int) 
#line 2281 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MAD)
    : -1 },
  { "(ISA_HAS_SYNCI) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5141 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5141 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 6854 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "reload_completed",
    __builtin_constant_p 
#line 6854 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(reload_completed)
    ? (int) 
#line 6854 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(reload_completed)
    : -1 },
  { "(ISA_HAS_DMUL3) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1507 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_DMUL3) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1507 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_DMUL3) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "Pmode == DImode",
    __builtin_constant_p 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)
    ? (int) 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)
    : -1 },
  { "(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (V2SFmode)\n\
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2454 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2454 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1400 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1400 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 3826 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32",
    __builtin_constant_p 
#line 3826 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32)
    ? (int) 
#line 3826 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32)
    : -1 },
  { "(!TARGET_CPRESTORE_DIRECTIVE || operands[2] == pic_offset_table_rtx) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5059 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_CPRESTORE_DIRECTIVE || operands[2] == pic_offset_table_rtx) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5059 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_CPRESTORE_DIRECTIVE || operands[2] == pic_offset_table_rtx) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(mips_must_initialize_gp_p ()) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6308 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_must_initialize_gp_p ()) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 6308 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_must_initialize_gp_p ()) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 2161 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_MULHI",
    __builtin_constant_p 
#line 2161 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
    ? (int) 
#line 2161 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
    : -1 },
  { "(ISA_HAS_LWXS) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4483 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4483 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 1964 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16",
    __builtin_constant_p 
#line 1964 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16)
    ? (int) 
#line 1964 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16)
    : -1 },
  { "(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (V2SFmode)\n\
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2439 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2439 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 6452 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_SIBCALLS && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 6452 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn))
    ? (int) 
#line 6452 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn))
    : -1 },
  { "(!TARGET_CPRESTORE_DIRECTIVE || operands[2] == pic_offset_table_rtx) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5059 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_CPRESTORE_DIRECTIVE || operands[2] == pic_offset_table_rtx) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5059 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_CPRESTORE_DIRECTIVE || operands[2] == pic_offset_table_rtx) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_LHUX) && ((((TARGET_64BIT) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHUX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHUX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    : -1 },
#line 3864 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),\n\
		       INTVAL (operands[3]))",
    __builtin_constant_p 
#line 3864 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3])))
    ? (int) 
#line 3864 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3])))
    : -1 },
#line 2575 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_FIX_VR4120 && !TARGET_MIPS16",
    __builtin_constant_p 
#line 2575 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120 && !TARGET_MIPS16)
    ? (int) 
#line 2575 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120 && !TARGET_MIPS16)
    : -1 },
#line 760 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
  { "TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT",
    __builtin_constant_p 
#line 760 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)
    ? (int) 
#line 760 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)
    : -1 },
#line 2884 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && and_operands_ok (SImode, operands[1], operands[2])",
    __builtin_constant_p 
#line 2884 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && and_operands_ok (SImode, operands[1], operands[2]))
    ? (int) 
#line 2884 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && and_operands_ok (SImode, operands[1], operands[2]))
    : -1 },
  { "((HAVE_AS_TLS && TARGET_MIPS16) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 6938 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 6940 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 6938 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 6940 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(ISA_HAS_CINS\n\
   && mask_low_and_shift_p (DImode, operands[3], operands[2], 32)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3932 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CINS
   && mask_low_and_shift_p (DImode, operands[3], operands[2], 32)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3932 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CINS
   && mask_low_and_shift_p (DImode, operands[3], operands[2], 32)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1400 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1400 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V4QQmode)\n\
       || register_operand (operands[1], V4QQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || register_operand (operands[1], V4QQmode))) && 
#line 742 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || register_operand (operands[1], V4QQmode))) && 
#line 742 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 743 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_DSP",
    __builtin_constant_p 
#line 743 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP)
    ? (int) 
#line 743 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP)
    : -1 },
  { "(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5699 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 718 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5699 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 718 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 2011 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 2011 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
    ? (int) 
#line 2011 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
    : -1 },
#line 5182 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && !TARGET_MEMCPY",
    __builtin_constant_p 
#line 5182 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !TARGET_MEMCPY)
    ? (int) 
#line 5182 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !TARGET_MEMCPY)
    : -1 },
  { "(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS) && ( reload_completed)",
    __builtin_constant_p (
#line 3424 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS) && 
#line 3426 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 3424 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS) && 
#line 3426 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 4532 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 2\n\
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 2\n\
	   && (INTVAL (operands[1]) & 1) != 0))",
    __builtin_constant_p 
#line 4532 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0)))
    ? (int) 
#line 4532 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0)))
    : -1 },
  { "(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 931 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 931 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 6308 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "mips_must_initialize_gp_p ()",
    __builtin_constant_p 
#line 6308 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_must_initialize_gp_p ())
    ? (int) 
#line 6308 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_must_initialize_gp_p ())
    : -1 },
  { "(ISA_HAS_CONDMOVE) && (((((TARGET_64BIT) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && (TARGET_64BIT)) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 6753 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && ((((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    ? (int) (
#line 6753 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && ((((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    : -1 },
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
  { "(ISA_HAS_CLZ_CLO) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2759 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2759 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_FIX_VR4120) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2554 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2554 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 4759 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && !TARGET_MIPS16\n\
   && (register_operand (operands[0], TFmode)\n\
       || reg_or_0_operand (operands[1], TFmode))",
    __builtin_constant_p 
#line 4759 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || reg_or_0_operand (operands[1], TFmode)))
    ? (int) 
#line 4759 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || reg_or_0_operand (operands[1], TFmode)))
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V4QImode)\n\
       || register_operand (operands[1], V4QImode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || register_operand (operands[1], V4QImode))) && 
#line 737 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || register_operand (operands[1], V4QImode))) && 
#line 737 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(ISA_HAS_NMADD4_NMSUB4 (SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (SFmode)\n\
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2454 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2454 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(ISA_HAS_LBUX) && (Pmode == DImode)",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBUX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBUX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2341 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2341 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 664 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
  { "GENERATE_LL_SC || ISA_HAS_LDADD",
    __builtin_constant_p 
#line 664 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC || ISA_HAS_LDADD)
    ? (int) 
#line 664 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC || ISA_HAS_LDADD)
    : -1 },
  { "(TARGET_CPRESTORE_DIRECTIVE) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5080 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_CPRESTORE_DIRECTIVE) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5080 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_CPRESTORE_DIRECTIVE) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 3501 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 3501 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
    ? (int) 
#line 3501 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
    : -1 },
#line 1249 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0xf)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))",
    __builtin_constant_p 
#line 1249 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10)))
    ? (int) 
#line 1249 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10)))
    : -1 },
#line 47 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
  { "GENERATE_SYNC",
    __builtin_constant_p 
#line 47 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_SYNC)
    ? (int) 
#line 47 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_SYNC)
    : -1 },
#line 3538 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 3538 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
    ? (int) 
#line 3538 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
    : -1 },
  { "(TARGET_CPRESTORE_DIRECTIVE) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5080 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_CPRESTORE_DIRECTIVE) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5080 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_CPRESTORE_DIRECTIVE) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2617 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(reload_completed) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2617 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(reload_completed) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2341 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2341 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(ISA_HAS_SYNCI) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5141 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5141 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 4781 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)) && 
#line 748 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 4781 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)) && 
#line 748 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 6783 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_CONDMOVE",
    __builtin_constant_p 
#line 6783 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE)
    ? (int) 
#line 6783 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE)
    : -1 },
  { "(ISA_HAS_LBUX) && (Pmode == SImode)",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBUX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBUX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(ISA_HAS_FP4) && ((((TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 4459 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    ? (int) (
#line 4459 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 4125 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 4125 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 5247 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16",
    __builtin_constant_p 
#line 5247 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16)
    ? (int) 
#line 5247 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16)
    : -1 },
#line 4803 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0",
    __builtin_constant_p 
#line 4803 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0)
    ? (int) 
#line 4803 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 706 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 706 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(TARGET_MIPS16_SHORT_JUMP_TABLES) && (Pmode == DImode)",
    __builtin_constant_p (
#line 6000 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16_SHORT_JUMP_TABLES) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 6000 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16_SHORT_JUMP_TABLES) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 781 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_FLOAT64",
    __builtin_constant_p 
#line 781 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)
    ? (int) 
#line 781 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)
    : -1 },
  { "((mips_current_loadgp_style () == LOADGP_NEWABI) && (Pmode == DImode)) && ( mips_must_initialize_gp_p ())",
    __builtin_constant_p ((
#line 4976 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4978 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    ? (int) ((
#line 4976 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4978 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    : -1 },
#line 3090 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32",
    __builtin_constant_p 
#line 3090 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32)
    ? (int) 
#line 3090 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32)
    : -1 },
#line 6833 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16",
    __builtin_constant_p 
#line 6833 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)
    ? (int) 
#line 6833 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)
    : -1 },
  { "(ISA_HAS_NMADD3_NMSUB3 (SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (SFmode)\n\
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2469 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2469 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 4392 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 4\n\
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 4\n\
	   && (INTVAL (operands[1]) & 3) != 0))",
    __builtin_constant_p 
#line 4392 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0)))
    ? (int) 
#line 4392 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0)))
    : -1 },
#line 2759 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_CLZ_CLO",
    __builtin_constant_p 
#line 2759 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO)
    ? (int) 
#line 2759 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO)
    : -1 },
  { "(ISA_HAS_LBX) && ((((TARGET_64BIT) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    : -1 },
  { "(ISA_HAS_LHX) && (Pmode == DImode)",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(!HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2825 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2825 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 2022 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && ISA_HAS_DMUL3",
    __builtin_constant_p 
#line 2022 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && ISA_HAS_DMUL3)
    ? (int) 
#line 2022 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && ISA_HAS_DMUL3)
    : -1 },
#line 4640 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 4640 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    ? (int) 
#line 4640 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    : -1 },
  { "(ISA_HAS_LDX) && ((((TARGET_64BIT) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 1165 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LDX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    ? (int) (
#line 1165 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LDX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    : -1 },
#line 1328 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_BADDU && TARGET_64BIT",
    __builtin_constant_p 
#line 1328 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && TARGET_64BIT)
    ? (int) 
#line 1328 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && TARGET_64BIT)
    : -1 },
#line 5434 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && ISA_HAS_WSBH",
    __builtin_constant_p 
#line 5434 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && ISA_HAS_WSBH)
    ? (int) 
#line 5434 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && ISA_HAS_WSBH)
    : -1 },
  { "((HAVE_AS_TLS && TARGET_MIPS16) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 6938 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 6940 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 6938 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 6940 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 3142 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !ISA_HAS_EXT_INS && reload_completed",
    __builtin_constant_p 
#line 3142 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !ISA_HAS_EXT_INS && reload_completed)
    ? (int) 
#line 3142 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !ISA_HAS_EXT_INS && reload_completed)
    : -1 },
  { "(TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5040 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5040 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 5677 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && !ISA_HAS_SEQ_SNE",
    __builtin_constant_p 
#line 5677 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE)
    ? (int) 
#line 5677 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE)
    : -1 },
  { "(TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5783 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5783 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_64BIT && !ISA_HAS_EXT_INS) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p (
#line 3112 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !ISA_HAS_EXT_INS) && 
#line 3116 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) (
#line 3112 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !ISA_HAS_EXT_INS) && 
#line 3116 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
  { "(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p (
#line 3350 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 3354 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) (
#line 3350 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 3354 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
  { "(TARGET_64BIT && TARGET_MIPS16) && ( reload_completed)",
    __builtin_constant_p (
#line 1291 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 1293 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 1291 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 1293 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 4722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && !TARGET_MIPS16\n\
   && (register_operand (operands[0], TImode)\n\
       || reg_or_0_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 4722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || reg_or_0_operand (operands[1], TImode)))
    ? (int) 
#line 4722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || reg_or_0_operand (operands[1], TImode)))
    : -1 },
  { "(ISA_HAS_SWAP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 655 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(ISA_HAS_SWAP) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 655 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(ISA_HAS_SWAP) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(HAVE_AS_TLS) && (Pmode == SImode)",
    __builtin_constant_p (
#line 6966 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 6966 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V2HAmode)\n\
       || register_operand (operands[1], V2HAmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || register_operand (operands[1], V2HAmode))) && 
#line 740 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || register_operand (operands[1], V2HAmode))) && 
#line 740 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 776 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 776 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 776 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    : -1 },
#line 1932 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_FIX_R4000 && !ISA_HAS_DSP",
    __builtin_constant_p 
#line 1932 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000 && !ISA_HAS_DSP)
    ? (int) 
#line 1932 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000 && !ISA_HAS_DSP)
    : -1 },
#line 614 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
  { "TARGET_HARD_FLOAT && TARGET_MIPS3D",
    __builtin_constant_p 
#line 614 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D)
    ? (int) 
#line 614 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D)
    : -1 },
#line 1747 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_MSAC && reload_completed",
    __builtin_constant_p 
#line 1747 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed)
    ? (int) 
#line 1747 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed)
    : -1 },
#line 696 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
  { "GENERATE_LL_SC && !ISA_HAS_LDADD",
    __builtin_constant_p 
#line 696 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC && !ISA_HAS_LDADD)
    ? (int) 
#line 696 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC && !ISA_HAS_LDADD)
    : -1 },
#line 4691 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "(TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 4691 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 4691 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
  { "(mips_must_initialize_gp_p ()) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5061 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_must_initialize_gp_p ()) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5061 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_must_initialize_gp_p ()) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 905 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
  { "TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS",
    __builtin_constant_p 
#line 905 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS)
    ? (int) 
#line 905 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS)
    : -1 },
#line 1153 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
  { "ISA_HAS_DSP",
    __builtin_constant_p 
#line 1153 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
    ? (int) 
#line 1153 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
    : -1 },
#line 6813 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16_PCREL_LOADS",
    __builtin_constant_p 
#line 6813 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16_PCREL_LOADS)
    ? (int) 
#line 6813 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16_PCREL_LOADS)
    : -1 },
#line 2253 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && !TARGET_FIX_R4000\n\
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2253 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2253 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 2775 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_POP",
    __builtin_constant_p 
#line 2775 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_POP)
    ? (int) 
#line 2775 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_POP)
    : -1 },
  { "((mips_current_loadgp_style () == LOADGP_RTP) && (Pmode == DImode)) && ( mips_must_initialize_gp_p ())",
    __builtin_constant_p ((
#line 5019 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 5021 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    ? (int) ((
#line 5019 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 5021 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    : -1 },
  { "(ISA_HAS_LWXS) && (((((TARGET_DSP) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 4483 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 743 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    ? (int) (
#line 4483 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 743 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    : -1 },
  { "(ISA_HAS_MACC && !ISA_HAS_MSAC) && ( reload_completed)",
    __builtin_constant_p (
#line 1705 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC) && 
#line 1707 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 1705 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC) && 
#line 1707 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(!TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4187 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4187 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 780 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_LOONGSON_VECTORS",
    __builtin_constant_p 
#line 780 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)
    ? (int) 
#line 780 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)
    : -1 },
#line 3914 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),\n\
		       INTVAL (operands[2]))",
    __builtin_constant_p 
#line 3914 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2])))
    ? (int) 
#line 3914 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2])))
    : -1 },
  { "(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2712 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2712 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(!TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4187 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4187 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_ROR) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_ROR) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_ROR) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2825 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2825 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 2920 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && and_operands_ok (SImode, operands[1], operands[2])",
    __builtin_constant_p 
#line 2920 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && and_operands_ok (SImode, operands[1], operands[2]))
    ? (int) 
#line 2920 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && and_operands_ok (SImode, operands[1], operands[2]))
    : -1 },
  { "(ISA_HAS_NMADD3_NMSUB3 (DFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (DFmode)\n\
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2439 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2439 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_HARD_FLOAT) && (!TARGET_64BIT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 4933 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 776 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 4933 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 776 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(ISA_HAS_SEB_SEH) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3324 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3324 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1944 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DMUL3 && !TARGET_MIPS16",
    __builtin_constant_p 
#line 1944 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DMUL3 && !TARGET_MIPS16)
    ? (int) 
#line 1944 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DMUL3 && !TARGET_MIPS16)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4139 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4139 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 3424 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS",
    __builtin_constant_p 
#line 3424 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS)
    ? (int) 
#line 3424 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS)
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 4152 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4154 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 4152 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4154 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 3815 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_EXTS",
    __builtin_constant_p 
#line 3815 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXTS)
    ? (int) 
#line 3815 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXTS)
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V2UHQmode)\n\
       || reg_or_0_operand (operands[1], V2UHQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || reg_or_0_operand (operands[1], V2UHQmode))) && 
#line 739 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || reg_or_0_operand (operands[1], V2UHQmode))) && 
#line 739 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 4701 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 4701 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 4701 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 1630 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS3900 && !TARGET_MIPS16",
    __builtin_constant_p 
#line 1630 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS3900 && !TARGET_MIPS16)
    ? (int) 
#line 1630 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS3900 && !TARGET_MIPS16)
    : -1 },
#line 4299 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 4299 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 4299 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(ISA_HAS_LBX) && (Pmode == SImode)",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(ISA_HAS_LBUX) && ((((TARGET_64BIT) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBUX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBUX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    : -1 },
#line 3746 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 3746 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 3746 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    : -1 },
  { "(ISA_HAS_FP4) && (((((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))",
    __builtin_constant_p (
#line 4468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    ? (int) (
#line 4468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    : -1 },
#line 1900 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_MIPS16",
    __builtin_constant_p 
#line 1900 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16)
    ? (int) 
#line 1900 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16)
    : -1 },
#line 2265 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && TARGET_FIX_R4000\n\
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2265 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2265 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4993 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4993 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 6278 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_USE_GOT",
    __builtin_constant_p 
#line 6278 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_USE_GOT)
    ? (int) 
#line 6278 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_USE_GOT)
    : -1 },
  { "((TARGET_CALL_CLOBBERED_GP) && (Pmode == DImode)) && ( epilogue_completed)",
    __builtin_constant_p ((
#line 6291 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 6293 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( epilogue_completed))
    ? (int) ((
#line 6291 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 6293 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( epilogue_completed))
    : -1 },
  { "(ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)",
    __builtin_constant_p (
#line 6753 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF))
    ? (int) (
#line 6753 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF))
    : -1 },
#line 4770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && TARGET_MIPS16\n\
   && (register_operand (operands[0], TFmode)\n\
       || register_operand (operands[1], TFmode))",
    __builtin_constant_p 
#line 4770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || register_operand (operands[1], TFmode)))
    ? (int) 
#line 4770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || register_operand (operands[1], TFmode)))
    : -1 },
  { "((TARGET_CALL_CLOBBERED_GP) && (Pmode == SImode)) && ( epilogue_completed)",
    __builtin_constant_p ((
#line 6291 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 6293 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( epilogue_completed))
    ? (int) ((
#line 6291 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 6293 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( epilogue_completed))
    : -1 },
#line 538 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
  { "GENERATE_LL_SC",
    __builtin_constant_p 
#line 538 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
    ? (int) 
#line 538 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
    : -1 },
#line 4736 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && TARGET_MIPS16\n\
   && (register_operand (operands[0], TImode)\n\
       || register_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 4736 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    ? (int) 
#line 4736 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4152 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4152 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_LBX) && ((((TARGET_64BIT) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    : -1 },
  { "(ISA_HAS_NMADD4_NMSUB4 (DFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (DFmode)\n\
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2424 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2424 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)
    ? (int) 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)
    : -1 },
#line 5634 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)",
    __builtin_constant_p 
#line 5634 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode))
    ? (int) 
#line 5634 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode))
    : -1 },
#line 3970 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])",
    __builtin_constant_p 
#line 3970 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1]))
    ? (int) 
#line 3970 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1]))
    : -1 },
  { "(GENERATE_MIPS16E) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3294 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3294 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_LWUX && TARGET_64BIT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 1176 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWUX && TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 1176 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWUX && TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "((mips_current_loadgp_style () == LOADGP_ABSOLUTE) && (Pmode == SImode)) && ( mips_must_initialize_gp_p ())",
    __builtin_constant_p ((
#line 4993 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4995 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    ? (int) ((
#line 4993 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4995 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    : -1 },
  { "(!ISA_MIPS1) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(ISA_HAS_LWX) && (Pmode == DImode)",
    __builtin_constant_p (
#line 1165 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 1165 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4125 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4125 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && ( reload_completed)",
    __builtin_constant_p (
#line 4068 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && 
#line 4070 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 4068 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && 
#line 4070 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(GENERATE_LL_SC && !ISA_HAS_SWAP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 639 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC && !ISA_HAS_SWAP) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 639 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC && !ISA_HAS_SWAP) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 2195 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && !TARGET_MIPS16\n\
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2195 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2195 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 1889 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "mips_mulsidi3_gen_fn (ZERO_EXTEND) != NULL",
    __builtin_constant_p 
#line 1889 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_mulsidi3_gen_fn (ZERO_EXTEND) != NULL)
    ? (int) 
#line 1889 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_mulsidi3_gen_fn (ZERO_EXTEND) != NULL)
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V2UHQmode)\n\
       || register_operand (operands[1], V2UHQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || register_operand (operands[1], V2UHQmode))) && 
#line 739 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || register_operand (operands[1], V2UHQmode))) && 
#line 739 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1387 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1387 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (TARGET_64BIT && TARGET_FLOAT64)",
    __builtin_constant_p (
#line 4958 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 781 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64))
    ? (int) (
#line 4958 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 781 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64))
    : -1 },
  { "(ISA_HAS_FP4) && (((((TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))",
    __builtin_constant_p (
#line 4468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    ? (int) (
#line 4468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    : -1 },
  { "(ISA_HAS_LHUX) && (Pmode == DImode)",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHUX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHUX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_NMADD3_NMSUB3 (DFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (DFmode)\n\
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2469 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2469 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 4139 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4141 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 4139 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4141 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 6871 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "operands[1] == stack_pointer_rtx\n\
   && mips16e_save_restore_pattern_p (operands[0], INTVAL (operands[2]), NULL)",
    __builtin_constant_p 
#line 6871 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(operands[1] == stack_pointer_rtx
   && mips16e_save_restore_pattern_p (operands[0], INTVAL (operands[2]), NULL))
    ? (int) 
#line 6871 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(operands[1] == stack_pointer_rtx
   && mips16e_save_restore_pattern_p (operands[0], INTVAL (operands[2]), NULL))
    : -1 },
  { "(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4229 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4229 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 4592 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 4592 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 4592 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
  { "(ISA_HAS_LHX) && ((((TARGET_64BIT) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    : -1 },
#line 5919 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16_SHORT_JUMP_TABLES",
    __builtin_constant_p 
#line 5919 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16_SHORT_JUMP_TABLES)
    ? (int) 
#line 5919 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16_SHORT_JUMP_TABLES)
    : -1 },
#line 2053 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSP)",
    __builtin_constant_p 
#line 2053 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSP))
    ? (int) 
#line 2053 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSP))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_MIPS3D) && ( reload_completed)",
    __builtin_constant_p (
#line 495 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 497 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    ? (int) (
#line 495 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 497 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && ( reload_completed)",
    __builtin_constant_p (
#line 466 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    ? (int) (
#line 466 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    : -1 },
  { "(ISA_HAS_EXTS) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3815 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXTS) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3815 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXTS) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_MIPS16_SHORT_JUMP_TABLES) && (Pmode == SImode)",
    __builtin_constant_p (
#line 6000 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16_SHORT_JUMP_TABLES) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 6000 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16_SHORT_JUMP_TABLES) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_NEWABI) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4976 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4976 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3991 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3991 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_HARD_FLOAT) && (!TARGET_64BIT && TARGET_LOONGSON_VECTORS)",
    __builtin_constant_p (
#line 4933 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 780 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS))
    ? (int) (
#line 4933 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 780 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS))
    : -1 },
#line 3991 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])",
    __builtin_constant_p 
#line 3991 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0]))
    ? (int) 
#line 3991 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0]))
    : -1 },
#line 3455 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16 && ISA_HAS_EXTS",
    __builtin_constant_p 
#line 3455 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && ISA_HAS_EXTS)
    ? (int) 
#line 3455 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && ISA_HAS_EXTS)
    : -1 },
  { "(ISA_HAS_LWX && TARGET_64BIT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 1176 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWX && TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 1176 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWX && TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 6717 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 6717 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 6642 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "reload_completed && TARGET_SPLIT_CALLS",
    __builtin_constant_p 
#line 6642 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS)
    ? (int) 
#line 6642 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS)
    : -1 },
#line 2034 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && ISA_HAS_MULS",
    __builtin_constant_p 
#line 2034 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS)
    ? (int) 
#line 2034 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS)
    : -1 },
  { "(GENERATE_LL_SC || ISA_HAS_SWAP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 609 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC || ISA_HAS_SWAP) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 609 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC || ISA_HAS_SWAP) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && ( epilogue_completed)",
    __builtin_constant_p (
#line 4014 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 4016 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( epilogue_completed))
    ? (int) (
#line 4014 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 4016 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( epilogue_completed))
    : -1 },
  { "(HAVE_AS_TLS) && (Pmode == DImode)",
    __builtin_constant_p (
#line 6966 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 6966 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 6242 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "! TARGET_64BIT",
    __builtin_constant_p 
#line 6242 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(! TARGET_64BIT)
    ? (int) 
#line 6242 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(! TARGET_64BIT)
    : -1 },
#line 3932 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_CINS\n\
   && mask_low_and_shift_p (SImode, operands[3], operands[2], 32)",
    __builtin_constant_p 
#line 3932 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CINS
   && mask_low_and_shift_p (SImode, operands[3], operands[2], 32))
    ? (int) 
#line 3932 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CINS
   && mask_low_and_shift_p (SImode, operands[3], operands[2], 32))
    : -1 },
#line 4289 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 4289 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    ? (int) 
#line 4289 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_RTP) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5019 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5019 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 4125 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 4125 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 639 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
  { "GENERATE_LL_SC && !ISA_HAS_SWAP",
    __builtin_constant_p 
#line 639 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC && !ISA_HAS_SWAP)
    ? (int) 
#line 639 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC && !ISA_HAS_SWAP)
    : -1 },
#line 4660 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 4660 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 4660 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 1705 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && !ISA_HAS_MSAC",
    __builtin_constant_p 
#line 1705 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
    ? (int) 
#line 1705 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
    : -1 },
#line 1308 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_BADDU && BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1308 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && BYTES_BIG_ENDIAN)
    ? (int) 
#line 1308 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && BYTES_BIG_ENDIAN)
    : -1 },
#line 4040 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS",
    __builtin_constant_p 
#line 4040 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS)
    ? (int) 
#line 4040 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS)
    : -1 },
  { "(ISA_HAS_LDX) && ((((TARGET_64BIT) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 1165 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LDX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    ? (int) (
#line 1165 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LDX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    : -1 },
  { "(!TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3887 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3887 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),\n\
		       INTVAL (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3914 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3914 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_NMADD4_NMSUB4 (SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (SFmode)\n\
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2424 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2424 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 3604 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 3604 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 3604 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
    : -1 },
#line 2554 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_FIX_VR4120",
    __builtin_constant_p 
#line 2554 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120)
    ? (int) 
#line 2554 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120)
    : -1 },
  { "(TARGET_USE_GOT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 6372 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 6372 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 3339 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "GENERATE_MIPS16E",
    __builtin_constant_p 
#line 3339 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GENERATE_MIPS16E)
    ? (int) 
#line 3339 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GENERATE_MIPS16E)
    : -1 },
  { "(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2352 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2352 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4207 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4207 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 5699 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE",
    __builtin_constant_p 
#line 5699 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE)
    ? (int) 
#line 5699 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE)
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V4UQQmode)\n\
       || register_operand (operands[1], V4UQQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || register_operand (operands[1], V4UQQmode))) && 
#line 743 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || register_operand (operands[1], V4UQQmode))) && 
#line 743 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2341 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2341 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 1917 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && (!TARGET_FIX_R4000 || ISA_HAS_DSP)",
    __builtin_constant_p 
#line 1917 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && (!TARGET_FIX_R4000 || ISA_HAS_DSP))
    ? (int) 
#line 1917 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && (!TARGET_FIX_R4000 || ISA_HAS_DSP))
    : -1 },
#line 5398 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_WSBH && ISA_HAS_ROR",
    __builtin_constant_p 
#line 5398 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_WSBH && ISA_HAS_ROR)
    ? (int) 
#line 5398 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_WSBH && ISA_HAS_ROR)
    : -1 },
  { "(ISA_HAS_FP4) && ((((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 4459 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    ? (int) (
#line 4459 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 52 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 52 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 5343 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16",
    __builtin_constant_p 
#line 5343 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
    ? (int) 
#line 5343 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
    : -1 },
  { "((mips_current_loadgp_style () == LOADGP_NEWABI) && (Pmode == SImode)) && ( mips_must_initialize_gp_p ())",
    __builtin_constant_p ((
#line 4976 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4978 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    ? (int) ((
#line 4976 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4978 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    : -1 },
#line 6702 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS",
    __builtin_constant_p 
#line 6702 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS)
    ? (int) 
#line 6702 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS)
    : -1 },
  { "(ISA_HAS_LDADD) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(ISA_HAS_LDADD) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(ISA_HAS_LDADD) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1662 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_MACC",
    __builtin_constant_p 
#line 1662 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MACC)
    ? (int) 
#line 1662 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MACC)
    : -1 },
  { "(TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5040 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5040 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_MIPS16 && and_operands_ok (DImode, operands[1], operands[2])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2920 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && and_operands_ok (DImode, operands[1], operands[2])) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2920 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && and_operands_ok (DImode, operands[1], operands[2])) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_FIX_VR4120 && !TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2575 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120 && !TARGET_MIPS16) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2575 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120 && !TARGET_MIPS16) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "((!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && (TARGET_64BIT)) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p ((
#line 3305 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 3309 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) ((
#line 3305 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 3309 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
  { "(TARGET_64BIT\n\
   && !TARGET_MIPS16\n\
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && ( reload_completed && !TARGET_FIX_R4000)",
    __builtin_constant_p (
#line 2195 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && 
#line 2199 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000))
    ? (int) (
#line 2195 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && 
#line 2199 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000))
    : -1 },
#line 1612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "GENERATE_MADD_MSUB && !TARGET_MIPS16",
    __builtin_constant_p 
#line 1612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB && !TARGET_MIPS16)
    ? (int) 
#line 1612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB && !TARGET_MIPS16)
    : -1 },
  { "(ISA_HAS_LHX) && (Pmode == SImode)",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(ISA_HAS_POP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2775 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_POP) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2775 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_POP) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!ISA_HAS_MULHI && !TARGET_MIPS16) && ( reload_completed && !TARGET_FIX_R4000)",
    __builtin_constant_p (
#line 2098 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_MIPS16) && 
#line 2100 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000))
    ? (int) (
#line 2098 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_MIPS16) && 
#line 2100 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000))
    : -1 },
  { "(HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 6913 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 6913 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 1732 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && reload_completed",
    __builtin_constant_p 
#line 1732 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed)
    ? (int) 
#line 1732 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed)
    : -1 },
#line 2098 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!ISA_HAS_MULHI && !TARGET_MIPS16",
    __builtin_constant_p 
#line 2098 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_MIPS16)
    ? (int) 
#line 2098 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_MIPS16)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4139 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4139 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2712 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2712 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 4152 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4154 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 4152 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4154 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 706 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 706 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_NEWABI) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4976 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4976 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_LWXS) && (((((TARGET_DSP) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 4483 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 743 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    ? (int) (
#line 4483 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 743 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    : -1 },
  { "(TARGET_MIPS16 && reload_completed) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4092 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4092 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_64BIT\n\
   && !TARGET_MIPS16\n\
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && ( reload_completed && !TARGET_FIX_R4000)",
    __builtin_constant_p (
#line 2195 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && 
#line 2199 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000))
    ? (int) (
#line 2195 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && 
#line 2199 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000))
    : -1 },
  { "(TARGET_HARD_FLOAT) && (TARGET_64BIT && TARGET_FLOAT64)",
    __builtin_constant_p (
#line 4933 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 781 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64))
    ? (int) (
#line 4933 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 781 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64))
    : -1 },
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
  { "ISA_HAS_LDADD",
    __builtin_constant_p 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(ISA_HAS_LDADD)
    ? (int) 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(ISA_HAS_LDADD)
    : -1 },
  { "((!TARGET_64BIT) && (TARGET_64BIT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1223 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && ((INTVAL (operands[1]) > 0xf\n\
	&& INTVAL (operands[1]) <= 0xf + 0xf)\n\
       || (INTVAL (operands[1]) < - 0x10\n\
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))",
    __builtin_constant_p 
#line 1223 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10)))
    ? (int) 
#line 1223 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10)))
    : -1 },
  { "(TARGET_CALL_CLOBBERED_GP) && (Pmode == SImode)",
    __builtin_constant_p (
#line 6291 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 6291 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 3887 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16",
    __builtin_constant_p 
#line 3887 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16)
    ? (int) 
#line 3887 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16)
    : -1 },
  { "((HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 6896 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 6898 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 6896 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 6898 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V2HAmode)\n\
       || reg_or_0_operand (operands[1], V2HAmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || reg_or_0_operand (operands[1], V2HAmode))) && 
#line 740 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || reg_or_0_operand (operands[1], V2HAmode))) && 
#line 740 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 5835 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && TARGET_ABSOLUTE_JUMPS",
    __builtin_constant_p 
#line 5835 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && TARGET_ABSOLUTE_JUMPS)
    ? (int) 
#line 5835 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && TARGET_ABSOLUTE_JUMPS)
    : -1 },
#line 1848 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "GENERATE_MADD_MSUB",
    __builtin_constant_p 
#line 1848 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB)
    ? (int) 
#line 1848 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB)
    : -1 },
  { "(ISA_HAS_LHX) && ((((TARGET_64BIT) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    : -1 },
  { "(ISA_HAS_FP_CONDMOVE) && (((((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))",
    __builtin_constant_p (
#line 6768 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && ((((
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 730 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 730 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    ? (int) (
#line 6768 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && ((((
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 730 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 730 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V4QImode)\n\
       || reg_or_0_operand (operands[1], V4QImode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || reg_or_0_operand (operands[1], V4QImode))) && 
#line 737 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || reg_or_0_operand (operands[1], V4QImode))) && 
#line 737 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 4314 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16 && reload_completed\n\
   && !TARGET_DEBUG_D_MODE\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x10)\n\
       || (INTVAL (operands[1]) >= 32 * 8\n\
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 8\n\
	   && (INTVAL (operands[1]) & 7) != 0))",
    __builtin_constant_p 
#line 4314 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0)))
    ? (int) 
#line 4314 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0)))
    : -1 },
#line 2253 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && !TARGET_FIX_R4000\n\
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2253 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2253 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 5167 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_CACHE",
    __builtin_constant_p 
#line 5167 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CACHE)
    ? (int) 
#line 5167 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CACHE)
    : -1 },
#line 1083 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_COND_TRAP",
    __builtin_constant_p 
#line 1083 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP)
    ? (int) 
#line 1083 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP)
    : -1 },
  { "(TARGET_SB1) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 140 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md"
  { "TUNE_LOONGSON_2EF",
    __builtin_constant_p 
#line 140 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md"
(TUNE_LOONGSON_2EF)
    ? (int) 
#line 140 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md"
(TUNE_LOONGSON_2EF)
    : -1 },
  { "(TARGET_USE_GOT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 6372 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 6372 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 1878 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_MULS",
    __builtin_constant_p 
#line 1878 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MULS)
    ? (int) 
#line 1878 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MULS)
    : -1 },
#line 3128 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && ISA_HAS_EXT_INS",
    __builtin_constant_p 
#line 3128 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && ISA_HAS_EXT_INS)
    ? (int) 
#line 3128 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && ISA_HAS_EXT_INS)
    : -1 },
  { "(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5343 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5343 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 6429 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_SIBCALLS",
    __builtin_constant_p 
#line 6429 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SIBCALLS)
    ? (int) 
#line 6429 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SIBCALLS)
    : -1 },
  { "(ISA_HAS_FP4) && (((((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))",
    __builtin_constant_p (
#line 4468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    ? (int) (
#line 4468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    : -1 },
#line 609 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
  { "GENERATE_LL_SC || ISA_HAS_SWAP",
    __builtin_constant_p 
#line 609 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC || ISA_HAS_SWAP)
    ? (int) 
#line 609 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC || ISA_HAS_SWAP)
    : -1 },
  { "(ISA_HAS_LWX && TARGET_64BIT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 1176 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWX && TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 1176 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWX && TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 1534 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 1534 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 1534 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[0]))
    : -1 },
  { "(TARGET_64BIT) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT))
    ? (int) (
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT))
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V2UHAmode)\n\
       || register_operand (operands[1], V2UHAmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || register_operand (operands[1], V2UHAmode))) && 
#line 741 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || register_operand (operands[1], V2UHAmode))) && 
#line 741 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 4279 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 4279 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 4279 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5677 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 718 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5677 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 718 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(HAVE_AS_TLS && TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 6957 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 6957 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_FP_CONDMOVE) && (((((TARGET_HARD_FLOAT) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT))",
    __builtin_constant_p (
#line 6768 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && ((((
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 730 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 730 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    ? (int) (
#line 6768 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && ((((
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 730 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 730 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    : -1 },
  { "(ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 6795 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 6795 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "Pmode == SImode",
    __builtin_constant_p 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)
    ? (int) 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)
    : -1 },
  { "(ISA_HAS_BADDU && TARGET_64BIT) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1328 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && TARGET_64BIT) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1328 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && TARGET_64BIT) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1555 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1555 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
    ? (int) 
#line 1555 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
    : -1 },
  { "(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2490 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2490 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(ISA_HAS_DSP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1153 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1153 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 6661 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_SPLIT_CALLS",
    __builtin_constant_p 
#line 6661 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
    ? (int) 
#line 6661 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
    : -1 },
#line 3876 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63)",
    __builtin_constant_p 
#line 3876 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63))
    ? (int) 
#line 3876 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63))
    : -1 },
  { "(ISA_HAS_FP4) && (((((TARGET_HARD_FLOAT) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (TARGET_HARD_FLOAT))",
    __builtin_constant_p (
#line 4468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    ? (int) (
#line 4468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    : -1 },
  { "(GENERATE_LL_SC || ISA_HAS_LDADD) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 664 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC || ISA_HAS_LDADD) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 664 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC || ISA_HAS_LDADD) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3970 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3970 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3370 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_SEB_SEH",
    __builtin_constant_p 
#line 3370 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH)
    ? (int) 
#line 3370 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH)
    : -1 },
  { "(TARGET_64BIT && !TARGET_MIPS16 && ISA_HAS_EXTS) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3443 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && ISA_HAS_EXTS) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3443 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && ISA_HAS_EXTS) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 4207 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && TARGET_USE_GOT && reload_completed",
    __builtin_constant_p 
#line 4207 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed)
    ? (int) 
#line 4207 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed)
    : -1 },
#line 1208 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
  { "ISA_HAS_DSP && !TARGET_64BIT",
    __builtin_constant_p 
#line 1208 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT)
    ? (int) 
#line 1208 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT)
    : -1 },
#line 5961 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16_SHORT_JUMP_TABLES",
    __builtin_constant_p 
#line 5961 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16_SHORT_JUMP_TABLES)
    ? (int) 
#line 5961 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16_SHORT_JUMP_TABLES)
    : -1 },
  { "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1387 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1387 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 3350 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E",
    __builtin_constant_p 
#line 3350 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E)
    ? (int) 
#line 3350 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E)
    : -1 },
#line 2785 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_POP && TARGET_64BIT",
    __builtin_constant_p 
#line 2785 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_POP && TARGET_64BIT)
    ? (int) 
#line 2785 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_POP && TARGET_64BIT)
    : -1 },
#line 3067 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16 && IN_RANGE (INTVAL (operands[2]), 32, 63)",
    __builtin_constant_p 
#line 3067 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && IN_RANGE (INTVAL (operands[2]), 32, 63))
    ? (int) 
#line 3067 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && IN_RANGE (INTVAL (operands[2]), 32, 63))
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V4UQQmode)\n\
       || reg_or_0_operand (operands[1], V4UQQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || reg_or_0_operand (operands[1], V4UQQmode))) && 
#line 743 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || reg_or_0_operand (operands[1], V4UQQmode))) && 
#line 743 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4152 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4152 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 3112 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !ISA_HAS_EXT_INS",
    __builtin_constant_p 
#line 3112 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !ISA_HAS_EXT_INS)
    ? (int) 
#line 3112 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !ISA_HAS_EXT_INS)
    : -1 },
  { "(ISA_HAS_LWUX && TARGET_64BIT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 1176 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWUX && TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 1176 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWUX && TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(ISA_HAS_SEQ_SNE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5709 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 718 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5709 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 718 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 2231 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2231 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2231 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 4430 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && INTVAL (operands[1]) >= 0x100\n\
   && INTVAL (operands[1]) <= 0xff + 0x7f",
    __builtin_constant_p 
#line 4430 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f)
    ? (int) 
#line 4430 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f)
    : -1 },
  { "(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4229 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4229 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(ISA_HAS_COND_TRAP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1083 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1083 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 5128 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_SYNCI",
    __builtin_constant_p 
#line 5128 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SYNCI)
    ? (int) 
#line 5128 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SYNCI)
    : -1 },
#line 722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_64BIT",
    __builtin_constant_p 
#line 722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT)
    ? (int) 
#line 722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT)
    : -1 },
  { "(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2352 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2352 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
    : -1 },
#line 6143 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "mips_can_use_return_insn ()",
    __builtin_constant_p 
#line 6143 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_can_use_return_insn ())
    ? (int) 
#line 6143 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_can_use_return_insn ())
    : -1 },
#line 1507 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_MUL3",
    __builtin_constant_p 
#line 1507 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MUL3)
    ? (int) 
#line 1507 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MUL3)
    : -1 },
  { "(ISA_HAS_CONDMOVE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6783 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 6783 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (V2SFmode)\n\
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2469 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2469 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 3491 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 3491 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W)
    ? (int) 
#line 3491 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W)
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V4QQmode)\n\
       || reg_or_0_operand (operands[1], V4QQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || reg_or_0_operand (operands[1], V4QQmode))) && 
#line 742 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4367 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || reg_or_0_operand (operands[1], V4QQmode))) && 
#line 742 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 1196 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))",
    __builtin_constant_p 
#line 1196 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80)))
    ? (int) 
#line 1196 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80)))
    : -1 },
#line 1545 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1545 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000)
    ? (int) 
#line 1545 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000)
    : -1 },
#line 2195 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && !TARGET_MIPS16\n\
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2195 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2195 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)
    ? (int) 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)
    : -1 },
#line 5709 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_SEQ_SNE",
    __builtin_constant_p 
#line 5709 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE)
    ? (int) 
#line 5709 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE)
    : -1 },
  { "(ISA_HAS_NMADD4_NMSUB4 (DFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (DFmode)\n\
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2454 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2454 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 4517 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 4517 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 4517 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
  { "(ISA_HAS_FP_CONDMOVE) && (((((TARGET_HARD_FLOAT) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT))",
    __builtin_constant_p (
#line 6768 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && ((((
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    ? (int) (
#line 6768 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && ((((
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 770 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    : -1 },
#line 4607 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32\n\
	   && INTVAL (operands[1]) <= 31 + 0x7f))",
    __builtin_constant_p 
#line 4607 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f)))
    ? (int) 
#line 4607 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f)))
    : -1 },
#line 4507 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || reg_or_0_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 4507 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode)))
    ? (int) 
#line 4507 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode)))
    : -1 },
  { "((mips_current_loadgp_style () == LOADGP_RTP) && (Pmode == SImode)) && ( mips_must_initialize_gp_p ())",
    __builtin_constant_p ((
#line 5019 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 5021 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    ? (int) ((
#line 5019 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 5021 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    : -1 },
#line 4681 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 4681 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 4681 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
  { "(TARGET_MIPS16 && reload_completed) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4092 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4092 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 4827 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT\n\
   && TARGET_PAIRED_SINGLE_FLOAT\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || reg_or_0_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 4827 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && TARGET_PAIRED_SINGLE_FLOAT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode)))
    ? (int) 
#line 4827 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && TARGET_PAIRED_SINGLE_FLOAT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode)))
    : -1 },
  { "((TARGET_MIPS16) && (Pmode == DImode)) && ( mips_must_initialize_gp_p ())",
    __builtin_constant_p ((
#line 5040 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 5042 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    ? (int) ((
#line 5040 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 5042 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    : -1 },
#line 628 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md"
  { "ISA_HAS_DSPR2 && !TARGET_64BIT",
    __builtin_constant_p 
#line 628 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT)
    ? (int) 
#line 628 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT)
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 4139 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4141 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 4139 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4141 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(!HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2825 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2825 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3305 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3305 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_FP4) && (((((TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))",
    __builtin_constant_p (
#line 4468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    ? (int) (
#line 4468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    : -1 },
  { "(GENERATE_LL_SC) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 594 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 594 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1575 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && !ISA_HAS_MUL3",
    __builtin_constant_p 
#line 1575 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MUL3)
    ? (int) 
#line 1575 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MUL3)
    : -1 },
#line 2295 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "(TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSP)\n\
   && !TARGET_64BIT",
    __builtin_constant_p 
#line 2295 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSP)
   && !TARGET_64BIT)
    ? (int) 
#line 2295 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSP)
   && !TARGET_64BIT)
    : -1 },
  { "(HAVE_AS_TLS && TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 6957 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 6957 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4993 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4993 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 1889 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "mips_mulsidi3_gen_fn (SIGN_EXTEND) != NULL",
    __builtin_constant_p 
#line 1889 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_mulsidi3_gen_fn (SIGN_EXTEND) != NULL)
    ? (int) 
#line 1889 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_mulsidi3_gen_fn (SIGN_EXTEND) != NULL)
    : -1 },
  { "(TARGET_HARD_FLOAT) && (!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 4933 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 777 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 4933 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 777 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (!TARGET_64BIT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 4958 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 776 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 4958 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 776 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(ISA_HAS_LHUX) && (Pmode == SImode)",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHUX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHUX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 1684 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_MSAC",
    __builtin_constant_p 
#line 1684 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
    ? (int) 
#line 1684 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
    : -1 },
#line 777 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT",
    __builtin_constant_p 
#line 777 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)
    ? (int) 
#line 777 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)
    : -1 },
  { "(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2490 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2490 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 4650 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_SOFT_FLOAT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 4650 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    ? (int) 
#line 4650 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    : -1 },
  { "(ISA_HAS_FP4) && ((((TARGET_HARD_FLOAT) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 4459 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    ? (int) (
#line 4459 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    : -1 },
  { "(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2352 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2352 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "((mips_current_loadgp_style () == LOADGP_ABSOLUTE) && (Pmode == DImode)) && ( mips_must_initialize_gp_p ())",
    __builtin_constant_p ((
#line 4993 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4995 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    ? (int) ((
#line 4993 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4995 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ()))
    : -1 },
  { "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 6717 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 6717 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(ISA_HAS_FP4) && ((((TARGET_HARD_FLOAT) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 4459 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    ? (int) (
#line 4459 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode)))
    : -1 },
  { "(ISA_HAS_LWXS) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4483 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4483 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(((!TARGET_64BIT) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT)",
    __builtin_constant_p (((
#line 722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (((
#line 722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V2HQmode)\n\
       || register_operand (operands[1], V2HQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || register_operand (operands[1], V2HQmode))) && 
#line 738 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || register_operand (operands[1], V2HQmode))) && 
#line 738 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5634 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5634 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3528 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 3528 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W)
    ? (int) 
#line 3528 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W)
    : -1 },
#line 5842 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && !TARGET_ABSOLUTE_JUMPS",
    __builtin_constant_p 
#line 5842 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !TARGET_ABSOLUTE_JUMPS)
    ? (int) 
#line 5842 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !TARGET_ABSOLUTE_JUMPS)
    : -1 },
#line 5420 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_WSBH",
    __builtin_constant_p 
#line 5420 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_WSBH)
    ? (int) 
#line 5420 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_WSBH)
    : -1 },
#line 5377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_ROR",
    __builtin_constant_p 
#line 5377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_ROR)
    ? (int) 
#line 5377 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_ROR)
    : -1 },
  { "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 4958 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 777 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 4958 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 777 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(GENERATE_LL_SC && !ISA_HAS_LDADD) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 696 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC && !ISA_HAS_LDADD) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 696 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(GENERATE_LL_SC && !ISA_HAS_LDADD) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_LBUX) && ((((TARGET_64BIT) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBUX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    ? (int) (
#line 1131 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBUX) && (((
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)))
    : -1 },
  { "(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (V2SFmode)\n\
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2424 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2424 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 1318 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_BADDU && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1318 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1318 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && !BYTES_BIG_ENDIAN)
    : -1 },
#line 2231 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2231 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2231 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
  { "(!ISA_MIPS1) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 766 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(mips_must_initialize_gp_p ()) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5061 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_must_initialize_gp_p ()) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5061 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_must_initialize_gp_p ()) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (!TARGET_64BIT && TARGET_LOONGSON_VECTORS)",
    __builtin_constant_p (
#line 4958 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 780 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS))
    ? (int) (
#line 4958 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 780 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS))
    : -1 },
#line 1170 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && ((INTVAL (operands[1]) > 0x7f\n\
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)\n\
       || (INTVAL (operands[1]) < - 0x80\n\
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))",
    __builtin_constant_p 
#line 1170 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80)))
    ? (int) 
#line 1170 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80)))
    : -1 },
  { "(ISA_HAS_FP4) && (((((TARGET_HARD_FLOAT) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (TARGET_HARD_FLOAT))",
    __builtin_constant_p (
#line 4468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    ? (int) (
#line 4468 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 765 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    : -1 },
#line 42 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md"
  { "ISA_HAS_DSPR2",
    __builtin_constant_p 
#line 42 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2)
    ? (int) 
#line 42 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2)
    : -1 },
  { "(TARGET_64BIT && !TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3229 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3229 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1795 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
  { "ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[1])",
    __builtin_constant_p 
#line 1795 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[1]))
    ? (int) 
#line 1795 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[1]))
    : -1 },
#line 655 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
  { "ISA_HAS_SWAP",
    __builtin_constant_p 
#line 655 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(ISA_HAS_SWAP)
    ? (int) 
#line 655 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
(ISA_HAS_SWAP)
    : -1 },
  { "(ISA_HAS_FP_CONDMOVE) && (((((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))",
    __builtin_constant_p (
#line 6768 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && ((((
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    ? (int) (
#line 6768 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && ((((
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && 
#line 771 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    : -1 },
  { "(ISA_HAS_LWX) && (Pmode == SImode)",
    __builtin_constant_p (
#line 1165 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 1165 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWX) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 6913 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 6913 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
