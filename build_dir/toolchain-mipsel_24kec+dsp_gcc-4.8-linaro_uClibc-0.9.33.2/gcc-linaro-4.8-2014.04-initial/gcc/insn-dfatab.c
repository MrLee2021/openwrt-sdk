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
internal_dfa_insn_code (rtx insn ATTRIBUTE_UNUSED)
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
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && (cached_type == TYPE_PREFETCH))
        {
	  return 2;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && (cached_type == TYPE_STORE))
        {
	  return 3;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) && ((cached_type == TYPE_IDIV) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI))))
        {
	  return 4;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP)))) && ((cached_type == TYPE_IDIV) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI))))
        {
	  return 5;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 6;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) && ((cached_type == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 7;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP)))) && ((cached_type == TYPE_IMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 8;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP)))) && ((cached_type == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 9;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP)))) && ((cached_type == TYPE_IMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 11 /* 0xb */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 12 /* 0xc */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONDMOVE) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT))))))))))
        {
	  return 13 /* 0xd */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && (cached_type == TYPE_BRANCH))
        {
	  return 14 /* 0xe */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 15 /* 0xf */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_4KP))))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (cached_type == TYPE_LOAD))
        {
	  return 17 /* 0x11 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 18 /* 0x12 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (cached_type == TYPE_STORE))
        {
	  return 19 /* 0x13 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_IDIV) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 21 /* 0x15 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 22 /* 0x16 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 23 /* 0x17 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 24 /* 0x18 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 25 /* 0x19 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 26 /* 0x1a */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONDMOVE) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT))))))))))
        {
	  return 27 /* 0x1b */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (cached_type == TYPE_BRANCH))
        {
	  return 28 /* 0x1c */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 29 /* 0x1d */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG))))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (cached_type == TYPE_FMOVE))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && (cached_type == TYPE_FCMP))
        {
	  return 40 /* 0x28 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S) || ((cached_cnv_mode == CNV_MODE_I2D) || (cached_cnv_mode == CNV_MODE_S2D)))))
        {
	  return 41 /* 0x29 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) && ((cached_type == TYPE_FCVT) && ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2S)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2I) || (cached_cnv_mode == CNV_MODE_D2I))))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_CONDMOVE) && (! (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF)))))
        {
	  return 45 /* 0x2d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF))))
        {
	  return 46 /* 0x2e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONST) || (cached_type == TYPE_NOP)))))
        {
	  return 47 /* 0x2f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_SHIFT))
        {
	  return 48 /* 0x30 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX))))
        {
	  return 49 /* 0x31 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_STORE))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 51 /* 0x33 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 52 /* 0x34 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 53 /* 0x35 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (((cached_type == TYPE_IMADD) || ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (((cached_type == TYPE_IMADD) || ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 57 /* 0x39 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 58 /* 0x3a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_MTC))
        {
	  return 59 /* 0x3b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (cached_type == TYPE_MFC))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 61 /* 0x3d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FMOVE) || ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FCMP))))))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S) || ((cached_cnv_mode == CNV_MODE_I2D) || (cached_cnv_mode == CNV_MODE_S2D)))))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2S) || (cached_cnv_mode == CNV_MODE_S2I))))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 69 /* 0x45 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_20KC)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 71 /* 0x47 */;
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
	  return 72 /* 0x48 */;
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
	  return 73 /* 0x49 */;
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
	  return 74 /* 0x4a */;
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
	  return 75 /* 0x4b */;
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
	  return 76 /* 0x4c */;
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
	  return 77 /* 0x4d */;
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
	  return 78 /* 0x4e */;
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
	  return 79 /* 0x4f */;
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
	  return 80 /* 0x50 */;
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
	  return 81 /* 0x51 */;
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
	  return 82 /* 0x52 */;
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
	  return 83 /* 0x53 */;
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
	  return 84 /* 0x54 */;
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
	  return 85 /* 0x55 */;
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
	  return 86 /* 0x56 */;
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
	  return 87 /* 0x57 */;
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
	  return 88 /* 0x58 */;
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
	  return 89 /* 0x59 */;
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
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG))))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_CONDMOVE)))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 94 /* 0x5e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 95 /* 0x5f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 96 /* 0x60 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 97 /* 0x61 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 99 /* 0x63 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (cached_type == TYPE_FCMP))
        {
	  return 100 /* 0x64 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S) || ((cached_cnv_mode == CNV_MODE_I2D) || (cached_cnv_mode == CNV_MODE_S2D)))))
        {
	  return 101 /* 0x65 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FCVT) && ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2S)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2I) || (cached_cnv_mode == CNV_MODE_D2I))))
        {
	  return 103 /* 0x67 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 104 /* 0x68 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG))))
        {
	  return 105 /* 0x69 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_CONDMOVE)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 109 /* 0x6d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 110 /* 0x6e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 111 /* 0x6f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 112 /* 0x70 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 113 /* 0x71 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (cached_type == TYPE_FCMP))
        {
	  return 114 /* 0x72 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S) || ((cached_cnv_mode == CNV_MODE_I2D) || (cached_cnv_mode == CNV_MODE_S2D)))))
        {
	  return 115 /* 0x73 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FCVT) && ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_D2S)))
        {
	  return 116 /* 0x74 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2I) || (cached_cnv_mode == CNV_MODE_D2I))))
        {
	  return 117 /* 0x75 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 118 /* 0x76 */;
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
	  return 119 /* 0x77 */;
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
	  return 120 /* 0x78 */;
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
	  return 121 /* 0x79 */;
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
	  return 122 /* 0x7a */;
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
	  return 123 /* 0x7b */;
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
	  return 124 /* 0x7c */;
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
	  return 125 /* 0x7d */;
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
	  return 126 /* 0x7e */;
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
	  return 127 /* 0x7f */;
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
	  return 128 /* 0x80 */;
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
	  return 129 /* 0x81 */;
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
	  return 130 /* 0x82 */;
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
	  return 131 /* 0x83 */;
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
	  return 132 /* 0x84 */;
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
	  return 133 /* 0x85 */;
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
	  return 134 /* 0x86 */;
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
	  return 135 /* 0x87 */;
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
	  return 136 /* 0x88 */;
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
	  return 137 /* 0x89 */;
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
	  return 138 /* 0x8a */;
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
	  return 139 /* 0x8b */;
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
	  return 140 /* 0x8c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG))))
        {
	  return 141 /* 0x8d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG))))
        {
	  return 142 /* 0x8e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FNEG))))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_FMOVE))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_FMOVE))
        {
	  return 145 /* 0x91 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_FMOVE))
        {
	  return 146 /* 0x92 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 147 /* 0x93 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 148 /* 0x94 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 149 /* 0x95 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 150 /* 0x96 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 151 /* 0x97 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 152 /* 0x98 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 153 /* 0x99 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 155 /* 0x9b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 156 /* 0x9c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 157 /* 0x9d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 158 /* 0x9e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 159 /* 0x9f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 160 /* 0xa0 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 161 /* 0xa1 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 162 /* 0xa2 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 163 /* 0xa3 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 164 /* 0xa4 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 166 /* 0xa6 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 167 /* 0xa7 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 168 /* 0xa8 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 169 /* 0xa9 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 170 /* 0xaa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_FCMP))
        {
	  return 171 /* 0xab */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_FCMP))
        {
	  return 172 /* 0xac */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_FCMP))
        {
	  return 173 /* 0xad */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_FCVT))
        {
	  return 174 /* 0xae */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_FCVT))
        {
	  return 175 /* 0xaf */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_FCVT))
        {
	  return 176 /* 0xb0 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_MTC))
        {
	  return 177 /* 0xb1 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_MTC))
        {
	  return 178 /* 0xb2 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_MTC))
        {
	  return 179 /* 0xb3 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF1_1)))) && (cached_type == TYPE_MFC))
        {
	  return 180 /* 0xb4 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF2_1)))) && (cached_type == TYPE_MFC))
        {
	  return 181 /* 0xb5 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_74KF3_2)))) && (cached_type == TYPE_MFC))
        {
	  return 182 /* 0xb6 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))))
        {
	  return 183 /* 0xb7 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))))
        {
	  return 184 /* 0xb8 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && (cached_type == TYPE_IDIV))
        {
	  return 185 /* 0xb9 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE))))
        {
	  return 186 /* 0xba */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && ((cached_type == TYPE_FCMP) || (cached_type == TYPE_FADD)))
        {
	  return 187 /* 0xbb */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 188 /* 0xbc */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 189 /* 0xbd */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 190 /* 0xbe */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3000)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R3900))))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4000)))) && ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4000)))) && (cached_type == TYPE_IDIV))
        {
	  return 193 /* 0xc1 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || ((cached_type == TYPE_FPIDXLOAD) || ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC))))))
        {
	  return 194 /* 0xc2 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 195 /* 0xc3 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 196 /* 0xc4 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 197 /* 0xc5 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4100)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4120))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 198 /* 0xc6 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 199 /* 0xc7 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))))))))
        {
	  return 200 /* 0xc8 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (cached_type == TYPE_LOAD))
        {
	  return 201 /* 0xc9 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (cached_type == TYPE_STORE))
        {
	  return 202 /* 0xca */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 203 /* 0xcb */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 204 /* 0xcc */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 205 /* 0xcd */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 206 /* 0xce */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && (cached_type == TYPE_IMADD))
        {
	  return 207 /* 0xcf */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 208 /* 0xd0 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 209 /* 0xd1 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 210 /* 0xd2 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || ((cached_type == TYPE_FPIDXLOAD) || ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC))))))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 213 /* 0xd5 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 214 /* 0xd6 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 215 /* 0xd7 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && ((cached_type == TYPE_FCMP) || ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))))
        {
	  return 216 /* 0xd8 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (cached_type == TYPE_FADD))
        {
	  return 217 /* 0xd9 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 218 /* 0xda */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 219 /* 0xdb */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 220 /* 0xdc */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4300)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 221 /* 0xdd */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 222 /* 0xde */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 223 /* 0xdf */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 224 /* 0xe0 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 225 /* 0xe1 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) && ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))))
        {
	  return 226 /* 0xe2 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650)))) && (cached_type == TYPE_IDIV))
        {
	  return 227 /* 0xe3 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 228 /* 0xe4 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 229 /* 0xe5 */;
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
	  return 230 /* 0xe6 */;
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
	  return 231 /* 0xe7 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4600)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4650))))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 232 /* 0xe8 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 233 /* 0xe9 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4700)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 234 /* 0xea */;
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
	  return 235 /* 0xeb */;
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
	  return 236 /* 0xec */;
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
	  return 237 /* 0xed */;
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
	  return 238 /* 0xee */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || ((cached_type == TYPE_FPIDXLOAD) || ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC))))))
        {
	  return 239 /* 0xef */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 240 /* 0xf0 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 241 /* 0xf1 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 242 /* 0xf2 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 243 /* 0xf3 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && ((cached_type == TYPE_FCMP) || ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))))
        {
	  return 244 /* 0xf4 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 245 /* 0xf5 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 246 /* 0xf6 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 247 /* 0xf7 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5000)))) && (((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 248 /* 0xf8 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP))))
        {
	  return 249 /* 0xf9 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 250 /* 0xfa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))))
        {
	  return 251 /* 0xfb */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_STORE))
        {
	  return 252 /* 0xfc */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 253 /* 0xfd */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 254 /* 0xfe */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 255 /* 0xff */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_MTHI) || ((cached_type == TYPE_MTLO) || ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))))
        {
	  return 256 /* 0x100 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP)))))))))))
        {
	  return 257 /* 0x101 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 258 /* 0x102 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 259 /* 0x103 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)))
        {
	  return 260 /* 0x104 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 261 /* 0x105 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 262 /* 0x106 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FADD))
        {
	  return 263 /* 0x107 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 264 /* 0x108 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 265 /* 0x109 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 266 /* 0x10a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 267 /* 0x10b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 268 /* 0x10c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 269 /* 0x10d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE))))
        {
	  return 270 /* 0x10e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FCMP))
        {
	  return 271 /* 0x10f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_FCVT))
        {
	  return 272 /* 0x110 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 273 /* 0x111 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 274 /* 0x112 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5400)))) && (cached_type == TYPE_MULTI))
        {
	  return 275 /* 0x113 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP))))
        {
	  return 276 /* 0x114 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 277 /* 0x115 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))))
        {
	  return 278 /* 0x116 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE))))
        {
	  return 279 /* 0x117 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 280 /* 0x118 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 281 /* 0x119 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP)))))))))))
        {
	  return 282 /* 0x11a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 283 /* 0x11b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 284 /* 0x11c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 285 /* 0x11d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 286 /* 0x11e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_IMADD))
        {
	  return 287 /* 0x11f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 288 /* 0x120 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 289 /* 0x121 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FADD))
        {
	  return 290 /* 0x122 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 291 /* 0x123 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 292 /* 0x124 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 293 /* 0x125 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 294 /* 0x126 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 295 /* 0x127 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 296 /* 0x128 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE))))
        {
	  return 297 /* 0x129 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_FCMP))
        {
	  return 298 /* 0x12a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FCVT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 299 /* 0x12b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FCVT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 300 /* 0x12c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 301 /* 0x12d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 302 /* 0x12e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (cached_type == TYPE_MULTI))
        {
	  return 303 /* 0x12f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (cached_type == TYPE_FCMP))
        {
	  return 304 /* 0x130 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (cached_type == TYPE_FADD))
        {
	  return 305 /* 0x131 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 306 /* 0x132 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 307 /* 0x133 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 308 /* 0x134 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R6000)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 309 /* 0x135 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_CONDMOVE) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP))))))))))))
        {
	  return 310 /* 0x136 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))))
        {
	  return 311 /* 0x137 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE))))
        {
	  return 312 /* 0x138 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 313 /* 0x139 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 314 /* 0x13a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 315 /* 0x13b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 316 /* 0x13c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 317 /* 0x13d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 318 /* 0x13e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 319 /* 0x13f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 320 /* 0x140 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 321 /* 0x141 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_FNEG) || ((cached_type == TYPE_FCMP) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_FMOVE)))))
        {
	  return 322 /* 0x142 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (cached_type == TYPE_FADD))
        {
	  return 323 /* 0x143 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (cached_type == TYPE_FCVT))
        {
	  return 324 /* 0x144 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 325 /* 0x145 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || (cached_type == TYPE_FSQRT))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 326 /* 0x146 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 327 /* 0x147 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 328 /* 0x148 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 329 /* 0x149 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 330 /* 0x14a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R7000)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 331 /* 0x14b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))))
        {
	  return 332 /* 0x14c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE))))
        {
	  return 333 /* 0x14d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP)))))))))))
        {
	  return 334 /* 0x14e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_DI))))
        {
	  return 335 /* 0x14f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI))))
        {
	  return 336 /* 0x150 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 337 /* 0x151 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_IDIV) && (! ((cached_mode = get_attr_mode (insn)) == MODE_DI))))
        {
	  return 338 /* 0x152 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 339 /* 0x153 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 340 /* 0x154 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 341 /* 0x155 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 342 /* 0x156 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || ((cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)))))
        {
	  return 343 /* 0x157 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF))))
        {
	  return 344 /* 0x158 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FCVT)))
        {
	  return 345 /* 0x159 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 346 /* 0x15a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 347 /* 0x15b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 348 /* 0x15c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 349 /* 0x15d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 350 /* 0x15e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R9000)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 351 /* 0x15f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX))))
        {
	  return 352 /* 0x160 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE))))
        {
	  return 353 /* 0x161 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 354 /* 0x162 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_MTHI) || ((cached_type == TYPE_MTLO) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_TRAP) || (cached_type == TYPE_LOGICAL))))))))))
        {
	  return 355 /* 0x163 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_MFHI))
        {
	  return 356 /* 0x164 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_MFLO))
        {
	  return 357 /* 0x165 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))))
        {
	  return 358 /* 0x166 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_DI))))
        {
	  return 359 /* 0x167 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_MTC))
        {
	  return 360 /* 0x168 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_MFC))
        {
	  return 361 /* 0x169 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 362 /* 0x16a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 363 /* 0x16b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 364 /* 0x16c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 365 /* 0x16d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FCMP)))))
        {
	  return 366 /* 0x16e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMOVE)))
        {
	  return 367 /* 0x16f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) || (cached_mode == MODE_DF))))
        {
	  return 368 /* 0x170 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FCVT) && ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S)))
        {
	  return 369 /* 0x171 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FCVT) && (! ((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_I2S))))
        {
	  return 370 /* 0x172 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (cached_type == TYPE_FMADD))
        {
	  return 371 /* 0x173 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 372 /* 0x174 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 373 /* 0x175 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 374 /* 0x176 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 375 /* 0x177 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 376 /* 0x178 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 377 /* 0x179 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 378 /* 0x17a */;
        }
      else if ((cached_ls2_turn_type = get_attr_ls2_turn_type (insn)) == LS2_TURN_TYPE_ALU1)
        {
	  return 379 /* 0x17b */;
        }
      else if (cached_ls2_turn_type == LS2_TURN_TYPE_ALU2)
        {
	  return 380 /* 0x17c */;
        }
      else if (cached_ls2_turn_type == LS2_TURN_TYPE_FALU1)
        {
	  return 381 /* 0x17d */;
        }
      else if (cached_ls2_turn_type == LS2_TURN_TYPE_FALU2)
        {
	  return 382 /* 0x17e */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONDMOVE) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MFHI) || ((cached_type == TYPE_MFLO) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_MTHI) || ((cached_type == TYPE_MTLO) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT))))))))))))))
        {
	  return 383 /* 0x17f */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || ((cached_type == TYPE_CALL) || (cached_type == TYPE_TRAP)))))
        {
	  return 384 /* 0x180 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3NC)))
        {
	  return 385 /* 0x181 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_IDIV) || (cached_type == TYPE_IDIV3)))
        {
	  return 386 /* 0x182 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))))
        {
	  return 387 /* 0x183 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 388 /* 0x184 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE)))
        {
	  return 389 /* 0x185 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || ((cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)))))
        {
	  return 390 /* 0x186 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && (cached_type == TYPE_FCVT))
        {
	  return 391 /* 0x187 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD))))
        {
	  return 392 /* 0x188 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && (cached_type == TYPE_FDIV))
        {
	  return 393 /* 0x189 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && (cached_type == TYPE_FSQRT))
        {
	  return 394 /* 0x18a */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F))))) && (cached_type == TYPE_MULTI))
        {
	  return 395 /* 0x18b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2E)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_2F)))))
        {
	  return 396 /* 0x18c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT))))))))))
        {
	  return 397 /* 0x18d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || ((cached_type == TYPE_CALL) || ((cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_TRAP))))))
        {
	  return 398 /* 0x18e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_MFHI) || ((cached_type == TYPE_MFLO) || ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))))
        {
	  return 399 /* 0x18f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && (cached_type == TYPE_IMUL3NC))
        {
	  return 400 /* 0x190 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)))
        {
	  return 401 /* 0x191 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 402 /* 0x192 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 403 /* 0x193 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && (cached_type == TYPE_LOAD))
        {
	  return 404 /* 0x194 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC))))
        {
	  return 405 /* 0x195 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 406 /* 0x196 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE))))
        {
	  return 407 /* 0x197 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD))))
        {
	  return 408 /* 0x198 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FCMP) || ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_FNEG)))))
        {
	  return 409 /* 0x199 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && (cached_type == TYPE_FCVT))
        {
	  return 410 /* 0x19a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 411 /* 0x19b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && (((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)))) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 412 /* 0x19c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_LOONGSON_3A)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 413 /* 0x19d */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2))))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_SLT) || (cached_type == TYPE_NOP)))))))))
        {
	  return 414 /* 0x19e */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2))))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 415 /* 0x19f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_PREFETCH) || ((cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))))
        {
	  return 416 /* 0x1a0 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH)))
        {
	  return 417 /* 0x1a1 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 418 /* 0x1a2 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2))))) && (cached_type == TYPE_STORE))
        {
	  return 419 /* 0x1a3 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || ((cached_type == TYPE_CALL) || (cached_type == TYPE_TRAP)))))
        {
	  return 420 /* 0x1a4 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || ((cached_type == TYPE_CALL) || (cached_type == TYPE_TRAP)))))
        {
	  return 421 /* 0x1a5 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_IMUL3) || ((cached_type == TYPE_POP) || (cached_type == TYPE_CLZ))))
        {
	  return 422 /* 0x1a6 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && ((cached_type == TYPE_IMUL3) || ((cached_type == TYPE_POP) || (cached_type == TYPE_CLZ))))
        {
	  return 423 /* 0x1a7 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO))))
        {
	  return 424 /* 0x1a8 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO))))
        {
	  return 425 /* 0x1a9 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 426 /* 0x1aa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 427 /* 0x1ab */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && (cached_type == TYPE_IMADD))
        {
	  return 428 /* 0x1ac */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && (cached_type == TYPE_IMADD))
        {
	  return 429 /* 0x1ad */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) && (cached_type == TYPE_IDIV))
        {
	  return 430 /* 0x1ae */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) && (cached_type == TYPE_IDIV)))
        {
	  return 431 /* 0x1af */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2)))) && (((cached_mode = get_attr_mode (insn)) == MODE_DI) && (cached_type == TYPE_IDIV)))
        {
	  return 432 /* 0x1b0 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_OCTEON2))))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 433 /* 0x1b1 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))
        {
	  return 434 /* 0x1b2 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 435 /* 0x1b3 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH)))
        {
	  return 436 /* 0x1b4 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_PREFETCH)))
        {
	  return 437 /* 0x1b5 */;
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
	  return 438 /* 0x1b6 */;
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
	  return 439 /* 0x1b7 */;
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
	  return 440 /* 0x1b8 */;
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
	  return 441 /* 0x1b9 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_PREFETCHX))
        {
	  return 442 /* 0x1ba */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_STORE))
        {
	  return 443 /* 0x1bb */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FPSTORE))
        {
	  return 444 /* 0x1bc */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FPIDXSTORE))
        {
	  return 445 /* 0x1bd */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) && ((cached_type == TYPE_CONST) || ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || (cached_type == TYPE_SIGNEXT))))))
        {
	  return 446 /* 0x1be */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A)))) && ((cached_type == TYPE_CONST) || ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || (cached_type == TYPE_SIGNEXT))))))
        {
	  return 447 /* 0x1bf */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_CONDMOVE) || ((cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT))))
        {
	  return 448 /* 0x1c0 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || (cached_type == TYPE_TRAP))))
        {
	  return 449 /* 0x1c1 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_MFHI))
        {
	  return 450 /* 0x1c2 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_MFLO))
        {
	  return 451 /* 0x1c3 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 452 /* 0x1c4 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 453 /* 0x1c5 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 454 /* 0x1c6 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 455 /* 0x1c7 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 456 /* 0x1c8 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type == TYPE_FMOVE) || ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FMUL) || ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || ((cached_type == TYPE_FCVT) || ((cached_type == TYPE_FRDIV1) || (cached_type == TYPE_FRSQRT1)))))))) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO)))
        {
	  return 457 /* 0x1c9 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type == TYPE_FMOVE) || ((cached_type == TYPE_FADD) || ((cached_type == TYPE_FMUL) || ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || ((cached_type == TYPE_FCVT) || ((cached_type == TYPE_FRDIV1) || (cached_type == TYPE_FRSQRT1)))))))) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE)))
        {
	  return 458 /* 0x1ca */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type == TYPE_FRDIV2) || (cached_type == TYPE_FRSQRT2)) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO)))
        {
	  return 459 /* 0x1cb */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type == TYPE_FRDIV2) || (cached_type == TYPE_FRSQRT2)) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE)))
        {
	  return 460 /* 0x1cc */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FMADD) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO)))
        {
	  return 461 /* 0x1cd */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FMADD) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE)))
        {
	  return 462 /* 0x1ce */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_FCMP))
        {
	  return 463 /* 0x1cf */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_MTC))
        {
	  return 464 /* 0x1d0 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (cached_type == TYPE_MFC))
        {
	  return 465 /* 0x1d1 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 466 /* 0x1d2 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 467 /* 0x1d3 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 468 /* 0x1d4 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 469 /* 0x1d5 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 470 /* 0x1d6 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 471 /* 0x1d7 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 472 /* 0x1d8 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 473 /* 0x1d9 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 474 /* 0x1da */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 475 /* 0x1db */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 476 /* 0x1dc */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 477 /* 0x1dd */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 478 /* 0x1de */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 479 /* 0x1df */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_TWO))))
        {
	  return 480 /* 0x1e0 */;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type == TYPE_FRSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_sb1_fp_pipes = get_attr_sb1_fp_pipes (insn)) == SB1_FP_PIPES_ONE))))
        {
	  return 481 /* 0x1e1 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP))))
        {
	  return 482 /* 0x1e2 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 483 /* 0x1e3 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_LOAD))
        {
	  return 484 /* 0x1e4 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_STORE))
        {
	  return 485 /* 0x1e5 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 486 /* 0x1e6 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 487 /* 0x1e7 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 488 /* 0x1e8 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_MFC))
        {
	  return 489 /* 0x1e9 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_MTC))
        {
	  return 490 /* 0x1ea */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_MTHI) || ((cached_type == TYPE_MTLO) || ((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)))))
        {
	  return 491 /* 0x1eb */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || (cached_type == TYPE_TRAP))))))))))
        {
	  return 492 /* 0x1ec */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 493 /* 0x1ed */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 494 /* 0x1ee */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 495 /* 0x1ef */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 496 /* 0x1f0 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FADD) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 497 /* 0x1f1 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 498 /* 0x1f2 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 499 /* 0x1f3 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 500 /* 0x1f4 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 501 /* 0x1f5 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 502 /* 0x1f6 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE))))
        {
	  return 503 /* 0x1f7 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_FCMP))
        {
	  return 504 /* 0x1f8 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_FCVT))
        {
	  return 505 /* 0x1f9 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 506 /* 0x1fa */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 507 /* 0x1fb */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_SF)))
        {
	  return 508 /* 0x1fc */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && ((cached_type == TYPE_FRSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF)))
        {
	  return 509 /* 0x1fd */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_MULTI))
        {
	  return 510 /* 0x1fe */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SR71000)))) && (cached_type == TYPE_NOP))
        {
	  return 511 /* 0x1ff */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_SLT))
        {
	  return 512 /* 0x200 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_CLZ))
        {
	  return 513 /* 0x201 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_TRAP) || ((cached_type == TYPE_ATOMIC) || (cached_type == TYPE_SYNCLOOP)))))))))))))
        {
	  return 514 /* 0x202 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 515 /* 0x203 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_LOAD))
        {
	  return 516 /* 0x204 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_STORE))
        {
	  return 517 /* 0x205 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 518 /* 0x206 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 519 /* 0x207 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 520 /* 0x208 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))))
        {
	  return 521 /* 0x209 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (cached_type == TYPE_IDIV))
        {
	  return 522 /* 0x20a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && ((cached_type == TYPE_MFHI) || ((cached_type == TYPE_MFLO) || ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO)))))
        {
	  return 523 /* 0x20b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MULTI)))
        {
	  return 524 /* 0x20c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL))))
        {
	  return 525 /* 0x20d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX)))
        {
	  return 526 /* 0x20e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_LOAD))
        {
	  return 527 /* 0x20f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 528 /* 0x210 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_CONST) || ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_TRAP) || (cached_type == TYPE_NOP)))))))))))
        {
	  return 529 /* 0x211 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_CONDMOVE) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) || (cached_mode == MODE_DI))))
        {
	  return 530 /* 0x212 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMADD)))
        {
	  return 531 /* 0x213 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_IMUL3))
        {
	  return 532 /* 0x214 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_SI) && (cached_type == TYPE_IDIV)))
        {
	  return 533 /* 0x215 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_DI) && (cached_type == TYPE_IDIV)))
        {
	  return 534 /* 0x216 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE))))
        {
	  return 535 /* 0x217 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MFC))
        {
	  return 536 /* 0x218 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MFHI))
        {
	  return 537 /* 0x219 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MFLO))
        {
	  return 538 /* 0x21a */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MTHI))
        {
	  return 539 /* 0x21b */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_MTLO))
        {
	  return 540 /* 0x21c */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && ((cached_type == TYPE_FMOVE) || ((cached_type == TYPE_FNEG) || ((cached_type == TYPE_FABS) || (cached_type == TYPE_CONDMOVE)))))
        {
	  return 541 /* 0x21d */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_FCMP))
        {
	  return 542 /* 0x21e */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_FCVT))
        {
	  return 543 /* 0x21f */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL))))
        {
	  return 544 /* 0x220 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL))))
        {
	  return 545 /* 0x221 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && (cached_type == TYPE_FMADD)))
        {
	  return 546 /* 0x222 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && (cached_type == TYPE_FMADD)))
        {
	  return 547 /* 0x223 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_SF) && ((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FRDIV1) || ((cached_type == TYPE_FRDIV2) || ((cached_type == TYPE_FSQRT) || ((cached_type == TYPE_FRSQRT) || ((cached_type == TYPE_FRSQRT1) || (cached_type == TYPE_FRSQRT2))))))))))
        {
	  return 548 /* 0x224 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_mode = get_attr_mode (insn)) == MODE_DF) && ((cached_type == TYPE_FDIV) || ((cached_type == TYPE_FRDIV) || ((cached_type == TYPE_FRDIV1) || ((cached_type == TYPE_FRDIV2) || ((cached_type == TYPE_FSQRT) || ((cached_type == TYPE_FRSQRT) || ((cached_type == TYPE_FRSQRT1) || (cached_type == TYPE_FRSQRT2))))))))))
        {
	  return 549 /* 0x225 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_ATOMIC))
        {
	  return 550 /* 0x226 */;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (cached_type == TYPE_SYNCLOOP))
        {
	  return 551 /* 0x227 */;
        }
      else if ((cached_type == TYPE_UNKNOWN) || ((cached_type == TYPE_PREFETCH) || ((cached_type == TYPE_PREFETCHX) || ((cached_type == TYPE_CONDMOVE) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_TRAP) || ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_MOVE)))))))))))))))
        {
	  return 552 /* 0x228 */;
        }
      else if ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD)))
        {
	  return 553 /* 0x229 */;
        }
      else if ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || (cached_type == TYPE_FPIDXSTORE)))
        {
	  return 554 /* 0x22a */;
        }
      else if ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC))
        {
	  return 555 /* 0x22b */;
        }
      else if ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 556 /* 0x22c */;
        }
      else if ((cached_type == TYPE_MFHI) || ((cached_type == TYPE_MFLO) || ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO))))
        {
	  return 557 /* 0x22d */;
        }
      else if ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD)))
        {
	  return 558 /* 0x22e */;
        }
      else if (cached_type == TYPE_IDIV)
        {
	  return 559 /* 0x22f */;
        }
      else if (cached_type == TYPE_FCVT)
        {
	  return 560 /* 0x230 */;
        }
      else if ((cached_type == TYPE_FABS) || ((cached_type == TYPE_FNEG) || (cached_type == TYPE_FMOVE)))
        {
	  return 561 /* 0x231 */;
        }
      else if (cached_type == TYPE_FCMP)
        {
	  return 562 /* 0x232 */;
        }
      else if (cached_type == TYPE_FADD)
        {
	  return 563 /* 0x233 */;
        }
      else if (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 564 /* 0x234 */;
        }
      else if (((cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 565 /* 0x235 */;
        }
      else if (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 566 /* 0x236 */;
        }
      else if (((cached_type == TYPE_FDIV) || (cached_type == TYPE_FRDIV)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 567 /* 0x237 */;
        }
      else if (((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 568 /* 0x238 */;
        }
      else if (((cached_type == TYPE_FSQRT) || (cached_type == TYPE_FRSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 569 /* 0x239 */;
        }
      else if ((cached_type == TYPE_FRDIV1) || ((cached_type == TYPE_FRDIV2) || ((cached_type == TYPE_FRSQRT1) || (cached_type == TYPE_FRSQRT2))))
        {
	  return 570 /* 0x23a */;
        }
      else if (cached_type == TYPE_ATOMIC)
        {
	  return 571 /* 0x23b */;
        }
      else if (cached_type == TYPE_SYNCLOOP)
        {
	  return 572 /* 0x23c */;
        }
      else
        {
	  return 574 /* 0x23e */;
        }

    }
}

