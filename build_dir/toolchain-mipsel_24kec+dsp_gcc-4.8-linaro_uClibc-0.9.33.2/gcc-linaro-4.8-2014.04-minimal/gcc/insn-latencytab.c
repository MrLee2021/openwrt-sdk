/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-attr.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

int
insn_default_latency (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_mode cached_mode ATTRIBUTE_UNUSED;
  enum attr_cnv_mode cached_cnv_mode ATTRIBUTE_UNUSED;
  enum attr_ls2_turn_type cached_ls2_turn_type ATTRIBUTE_UNUSED;
  enum attr_sb1_fp_pipes cached_sb1_fp_pipes ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 586:  /* update_got_version */
    case 585:  /* set_got_version */
    case 582:  /* move_gpdi */
    case 581:  /* move_gpsi */
    case 580:  /* restore_gp_di */
    case 579:  /* restore_gp_si */
    case 564:  /* blockage */
    case 400:  /* use_cprestore_di */
    case 399:  /* use_cprestore_si */
    case 396:  /* potential_cprestore_di */
    case 395:  /* potential_cprestore_si */
    case 394:  /* copygp_mips16_di */
    case 393:  /* copygp_mips16_si */
    case 392:  /* loadgp_rtp_di */
    case 391:  /* loadgp_rtp_si */
    case 390:  /* loadgp_blockage */
    case 389:  /* loadgp_absolute_di */
    case 388:  /* loadgp_absolute_si */
    case 387:  /* loadgp_newabi_di */
    case 386:  /* loadgp_newabi_si */
      return 0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      if ((cached_type = get_attr_type (insn)) == TYPE_GHOST)
        {
	  return 0;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && (cached_type == TYPE_LOAD))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && (cached_type == TYPE_PREFETCH))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) && ((cached_type == TYPE_IDIV) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI))))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP)))) && ((cached_type == TYPE_IDIV) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI))))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) && ((cached_type == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP)))) && ((cached_type == TYPE_IMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP)))) && ((cached_type == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP)))) && ((cached_type == TYPE_IMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 34 /* 0x22 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONDMOVE) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT))))))))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && (cached_type == TYPE_BRANCH))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (cached_type == TYPE_LOAD))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_IDIV) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI))))
        {
	  return 34 /* 0x22 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 66 /* 0x42 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 9;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 4;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONDMOVE) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT))))))))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (cached_type == TYPE_BRANCH))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG))))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (cached_type == TYPE_FMOVE))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (cached_type == TYPE_FCMP))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S) || ((cached_cnv_mode == CNV_MODE_I2D) || (cached_cnv_mode == CNV_MODE_S2D)))))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) && ((cached_type == TYPE_FCVT) && ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2S)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2I) || (cached_cnv_mode == CNV_MODE_D2I))))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_CONDMOVE) && (! (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF))))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONST) || (cached_type == TYPE_NOP)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_SHIFT))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_STORE))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (((cached_type == TYPE_IMADD) || ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (((cached_type == TYPE_IMADD) || ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 7;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_MTC))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_MFC))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FMOVE) || ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FCMP))))))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S) || ((cached_cnv_mode == CNV_MODE_I2D) || (cached_cnv_mode == CNV_MODE_S2D)))))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2S) || (cached_cnv_mode == CNV_MODE_S2I))))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && (cached_type == TYPE_LOAD))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))))))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && ((cached_type == TYPE_CALL) || (cached_type == TYPE_JUMP)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && (cached_type == TYPE_BRANCH))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && (cached_type == TYPE_IMUL))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && (cached_type == TYPE_IMADD))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && (cached_type == TYPE_IMUL3))
        {
	  return 5;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 5;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && (cached_type == TYPE_IDIV))
        {
	  return 36 /* 0x24 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && (cached_type == TYPE_MULTI))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP))))
        {
	  return 0;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && ((cached_type == TYPE_DSPALU) || (cached_type == TYPE_DSPALUSAT)))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && (cached_type == TYPE_DSPMAC))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && (cached_type == TYPE_DSPMACSAT))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && (cached_type == TYPE_ACCEXT))
        {
	  return 5;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))) && (cached_type == TYPE_ACCMOD))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG))))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_CONDMOVE)))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (cached_type == TYPE_FCMP))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S) || ((cached_cnv_mode == CNV_MODE_I2D) || (cached_cnv_mode == CNV_MODE_S2D)))))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FCVT) && ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2S)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2I) || (cached_cnv_mode == CNV_MODE_D2I))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG))))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_CONDMOVE)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (cached_type == TYPE_FCMP))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S) || ((cached_cnv_mode == CNV_MODE_I2D) || (cached_cnv_mode == CNV_MODE_S2D)))))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FCVT) && ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2S)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2I) || (cached_cnv_mode == CNV_MODE_D2I))))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_SHIFT) || (cached_type == TYPE_CLZ)))))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_NOP))
        {
	  return 0;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 4;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_IMUL))
        {
	  return 4;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_IMADD))
        {
	  return 4;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_IMUL3))
        {
	  return 7;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 7;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 7;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_IDIV))
        {
	  return 50 /* 0x32 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX))))
        {
	  return 3;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_MULTI))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_DSPALU))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_DSPALUSAT))
        {
	  return 3;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_DSPMAC))
        {
	  return 6;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_DSPMACSAT))
        {
	  return 7;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_ACCEXT))
        {
	  return 7;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2))))))) && (cached_type == TYPE_ACCMOD))
        {
	  return 7;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG))))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG))))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG))))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_FMOVE))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_FMOVE))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_FMOVE))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 7;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 48 /* 0x30 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_FCMP))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_FCMP))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_FCMP))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_FCVT))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_FCVT))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_FCVT))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_MTC))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_MTC))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_MTC))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_MFC))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_MFC))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_MFC))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))))
        {
	  return 12 /* 0xc */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && (cached_type == TYPE_IDIV))
        {
	  return 35 /* 0x23 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_FCMP) || (cached_type == TYPE_FADD)))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 4;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 5;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 12 /* 0xc */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4000)))) && ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4000)))) && (cached_type == TYPE_IDIV))
        {
	  return 69 /* 0x45 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || ((cached_type == TYPE_FPIDXLOAD) || ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC))))))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 4;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 35 /* 0x23 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))))))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (cached_type == TYPE_LOAD))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (cached_type == TYPE_IMADD))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 0;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || ((cached_type == TYPE_FPIDXLOAD) || ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC))))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 69 /* 0x45 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_FCMP) || ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (cached_type == TYPE_FADD))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 58 /* 0x3a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 12 /* 0xc */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 74 /* 0x4a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) && ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) && (cached_type == TYPE_IDIV))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650))))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 5;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 61 /* 0x3d */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))))) && (((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 31 /* 0x1f */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))))) && (((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || ((cached_type == TYPE_FPIDXLOAD) || ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC))))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 9;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_FCMP) || ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_MTHI) || ((cached_type == TYPE_MTLO) || ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP)))))))))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 74 /* 0x4a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FADD))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 9;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FCMP))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FCVT))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 61 /* 0x3d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_MULTI))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE))))
        {
	  return 0;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP)))))))))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 9;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_IMADD))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 74 /* 0x4a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FADD))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 9;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 59 /* 0x3b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FCMP))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FCVT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FCVT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 118 /* 0x76 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_MULTI))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (cached_type == TYPE_FCMP))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (cached_type == TYPE_FADD))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_CONDMOVE) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 9;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_FNEG) || ((cached_type == TYPE_FCMP) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FMOVE)))))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (cached_type == TYPE_FADD))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (cached_type == TYPE_FCVT))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP)))))))))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_DI))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI))))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 7;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_IDIV) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI))))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || ((cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FCVT)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 9;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE))))
        {
	  return 0;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_MTHI) || ((cached_type == TYPE_MTLO) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_TRAP) || (cached_type == TYPE_LOGICAL))))))))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_MFHI))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_MFLO))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_DI))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_MTC))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_MFC))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FCMP)))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMOVE)))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FCVT) && ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FCVT) && (! ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_FMADD))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 52 /* 0x34 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 1;
        }
      else if ((cached_ls2_turn_type = get_attr_ls2_turn_type (insn)) == LS2_TURN_TYPE_ALU1)
        {
	  return 0;
        }
      else if (cached_ls2_turn_type == LS2_TURN_TYPE_ALU2)
        {
	  return 0;
        }
      else if (cached_ls2_turn_type == LS2_TURN_TYPE_FALU1)
        {
	  return 0;
        }
      else if (cached_ls2_turn_type == LS2_TURN_TYPE_FALU2)
        {
	  return 0;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONDMOVE) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MFHI) || ((cached_type == TYPE_MFLO) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_MTHI) || ((cached_type == TYPE_MTLO) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT))))))))))))))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || ((cached_type == TYPE_CALL) || (cached_type == TYPE_TRAP)))))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3NC)))
        {
	  return 5;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_IDIV) || (cached_type == TYPE_IDIV3)))
        {
	  return 20 /* 0x14 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))))
        {
	  return 5;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 0;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE)))
        {
	  return 0;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || ((cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)))))
        {
	  return 3;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && (cached_type == TYPE_FCVT))
        {
	  return 5;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD))))
        {
	  return 7;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && (cached_type == TYPE_FDIV))
        {
	  return 9;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && (cached_type == TYPE_FSQRT))
        {
	  return 15 /* 0xf */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && (cached_type == TYPE_MULTI))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT))))))))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || ((cached_type == TYPE_CALL) || ((cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_TRAP))))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_MFHI) || ((cached_type == TYPE_MFLO) || ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && (cached_type == TYPE_IMUL3NC))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)))
        {
	  return 7;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && (cached_type == TYPE_LOAD))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC))))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 0;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE))))
        {
	  return 0;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD))))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FCMP) || ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_FNEG)))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && (cached_type == TYPE_FCVT))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2))))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_SLT) || (cached_type == TYPE_NOP)))))))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2))))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_PREFETCH) || ((cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH)))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2))))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || ((cached_type == TYPE_CALL) || (cached_type == TYPE_TRAP)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || ((cached_type == TYPE_CALL) || (cached_type == TYPE_TRAP)))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_IMUL3) || ((cached_type == TYPE_POP) || (cached_type == TYPE_CLZ))))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && ((cached_type == TYPE_IMUL3) || ((cached_type == TYPE_POP) || (cached_type == TYPE_CLZ))))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && (cached_type == TYPE_IMADD))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && (cached_type == TYPE_IMADD))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && (cached_type == TYPE_IDIV))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) && (cached_type == TYPE_IDIV)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && (((cached_mode = get_attr_mode (insn)) == MODE_DI) && (cached_type == TYPE_IDIV)))
        {
	  return 35 /* 0x23 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2))))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 0;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH)))
        {
	  return 0;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FPLOAD) && (
#line 79 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sb1.md"
(TARGET_FLOAT64))))
        {
	  return 0;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FPLOAD) && (! (
#line 79 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sb1.md"
(TARGET_FLOAT64)))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FPIDXLOAD) && (
#line 79 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sb1.md"
(TARGET_FLOAT64))))
        {
	  return 0;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FPIDXLOAD) && (! (
#line 79 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sb1.md"
(TARGET_FLOAT64)))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_PREFETCHX))
        {
	  return 0;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FPSTORE))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FPIDXSTORE))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) && ((cached_type == TYPE_CONST) || ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || (cached_type == TYPE_SIGNEXT))))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A)))) && ((cached_type == TYPE_CONST) || ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || (cached_type == TYPE_SIGNEXT))))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_CONDMOVE) || ((cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || (cached_type == TYPE_TRAP))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_MFHI))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_MFLO))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 4;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 3;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 4;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type == TYPE_FMOVE) || ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FMUL) || ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || ((cached_type == TYPE_FCVT) || ((cached_type == TYPE_FRDIV1) || (cached_type == TYPE_FRSQRT1)))))))) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO)))
        {
	  return 4;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type == TYPE_FMOVE) || ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FMUL) || ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || ((cached_type == TYPE_FCVT) || ((cached_type == TYPE_FRDIV1) || (cached_type == TYPE_FRSQRT1)))))))) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE)))
        {
	  return 4;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type == TYPE_FRDIV2) || (cached_type == TYPE_FRSQRT2)) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO)))
        {
	  return 8;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type == TYPE_FRDIV2) || (cached_type == TYPE_FRSQRT2)) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE)))
        {
	  return 8;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FMADD) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO)))
        {
	  return 8;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FMADD) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE)))
        {
	  return 8;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FCMP))
        {
	  return 4;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_MTC))
        {
	  return 5;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_MFC))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 12 /* 0xc */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 12 /* 0xc */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 28 /* 0x1c */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 28 /* 0x1c */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 40 /* 0x28 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 40 /* 0x28 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 28 /* 0x1c */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_LOAD))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 9;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_MFC))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_MTC))
        {
	  return 9;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_MTHI) || ((cached_type == TYPE_MTLO) || ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || (cached_type == TYPE_TRAP))))))))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 41 /* 0x29 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 73 /* 0x49 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FADD) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 120 /* 0x78 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE))))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_FCMP))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_FCVT))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 48 /* 0x30 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 240 /* 0xf0 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_MULTI))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_NOP))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_SLT))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_CLZ))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_TRAP) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_LOAD))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_IDIV))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_MFHI) || ((cached_type == TYPE_MFLO) || ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_LOAD))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_CONST) || ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_TRAP) || (cached_type == TYPE_NOP)))))))))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_DI))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_IMUL3))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) && (cached_type == TYPE_IDIV)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_DI) && (cached_type == TYPE_IDIV)))
        {
	  return 48 /* 0x30 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MFC))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MFHI))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MFLO))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MTHI))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MTLO))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_FMOVE) || ((cached_type == TYPE_FNEG) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_CONDMOVE)))))
        {
	  return 2;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_FCMP))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_FCVT))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL))))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL))))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && (cached_type == TYPE_FMADD)))
        {
	  return 9;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && (cached_type == TYPE_FMADD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FRDIV1) || ((cached_type == TYPE_FRDIV2) || ((cached_type == TYPE_FSQRT) || ((cached_type == TYPE_FRSQRT) || ((cached_type == TYPE_FRSQRT1) || (cached_type == TYPE_FRSQRT2))))))))))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FRDIV1) || ((cached_type == TYPE_FRDIV2) || ((cached_type == TYPE_FSQRT) || ((cached_type == TYPE_FRSQRT) || ((cached_type == TYPE_FRSQRT1) || (cached_type == TYPE_FRSQRT2))))))))))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_ATOMIC))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_SYNCLOOP))
        {
	  return 40 /* 0x28 */;
        }
      else if ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_PREFETCH) || ((cached_type == TYPE_PREFETCHX) || ((cached_type == TYPE_CONDMOVE) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_TRAP) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_MOVE)))))))))))))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 3;
        }
      else if ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC))
        {
	  return 2;
        }
      else if ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MFHI) || ((cached_type == TYPE_MFLO) || ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)))
        {
	  return 17 /* 0x11 */;
        }
      else if (cached_type == TYPE_IDIV)
        {
	  return 38 /* 0x26 */;
        }
      else if (cached_type == TYPE_FCVT)
        {
	  return 1;
        }
      else if ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))
        {
	  return 2;
        }
      else if (cached_type == TYPE_FCMP)
        {
	  return 3;
        }
      else if (cached_type == TYPE_FADD)
        {
	  return 4;
        }
      else if (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 7;
        }
      else if (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 8;
        }
      else if (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 23 /* 0x17 */;
        }
      else if (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 36 /* 0x24 */;
        }
      else if (((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 54 /* 0x36 */;
        }
      else if (((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 112 /* 0x70 */;
        }
      else if ((cached_type == TYPE_FRDIV1) || ((cached_type == TYPE_FRDIV2) || ((cached_type == TYPE_FRSQRT1) || (cached_type == TYPE_FRSQRT2))))
        {
	  return 5;
        }
      else if (cached_type == TYPE_ATOMIC)
        {
	  return 10 /* 0xa */;
        }
      else if (cached_type == TYPE_SYNCLOOP)
        {
	  return 40 /* 0x28 */;
        }
      else
        {
	  return 0;
        }

    }
}

