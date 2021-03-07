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
insn_current_length (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_got cached_got ATTRIBUTE_UNUSED;
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;
  enum attr_dword_mode cached_dword_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 555:  /* *jump_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (2046)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (2046)))
        {
	  return 4;
        }
      else if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (65534)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (65532)))
        {
	  return 8;
        }
      else if ((
#line 558 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_ABICALLS)) && (! (
#line 559 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_ABSOLUTE_ABICALLS))))
        {
	  return 36 /* 0x24 */;
        }
      else if (
#line 561 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
        {
	  return 28 /* 0x1c */;
        }
      else
        {
	  return 44 /* 0x2c */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 855:  /* mips_bposge */
    case 736:  /* *branch_upper_lower_inverted */
    case 735:  /* *branch_upper_lower */
    case 734:  /* bc1any2f */
    case 733:  /* bc1any2t */
    case 732:  /* bc1any4f */
    case 731:  /* bc1any4t */
    case 554:  /* *jump_pic */
    case 454:  /* *branch_bit1di_inverted */
    case 453:  /* *branch_bit0di_inverted */
    case 452:  /* *branch_bit1si_inverted */
    case 451:  /* *branch_bit0si_inverted */
    case 450:  /* *branch_bit1di */
    case 449:  /* *branch_bit0di */
    case 448:  /* *branch_bit1si */
    case 447:  /* *branch_bit0si */
    case 446:  /* *branch_equalitydi_mips16_inverted */
    case 445:  /* *branch_equalitysi_mips16_inverted */
    case 444:  /* *branch_equalitydi_mips16 */
    case 443:  /* *branch_equalitysi_mips16 */
    case 442:  /* *branch_equalitydi_inverted */
    case 441:  /* *branch_equalitysi_inverted */
    case 440:  /* *branch_equalitydi */
    case 439:  /* *branch_equalitysi */
    case 438:  /* *branch_orderdi_inverted */
    case 437:  /* *branch_ordersi_inverted */
    case 436:  /* *branch_orderdi */
    case 435:  /* *branch_ordersi */
    case 434:  /* *branch_fp_inverted */
    case 433:  /* *branch_fp */
      extract_constrain_insn_cached (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) && (! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))))
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (131064)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (131068)))
	    {
	      return 4;
	    }
	  else if (
#line 464 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_ABSOLUTE_JUMPS))
	    {
	      return 12 /* 0xc */;
	    }
	  else
	    {
	      return 100 /* 0x64 */;
	    }
        }
      else if ((cached_type == TYPE_BRANCH) && (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (254)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (254)))
	    {
	      return 4;
	    }
	  else if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (65534)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (65532)))
	    {
	      return 8;
	    }
	  else if ((
#line 558 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_ABICALLS)) && (! (
#line 559 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_ABSOLUTE_ABICALLS))))
	    {
	      return 40 /* 0x28 */;
	    }
	  else if (
#line 561 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(Pmode == SImode))
	    {
	      return 32 /* 0x20 */;
	    }
	  else
	    {
	      return 48 /* 0x30 */;
	    }
        }
      else if ((get_attr_extended_mips16 (insn) == EXTENDED_MIPS16_YES) && (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 0;
        }
      else if (cached_type == TYPE_GHOST)
        {
	  return 0;
        }
      else if ((cached_got = get_attr_got (insn)) == GOT_LOAD)
        {
	  return 0;
        }
      else if (cached_got == GOT_XGOT_HIGH)
        {
	  return 0;
        }
      else if ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_LOADPOOL)
        {
	  return 0;
        }
      else if (cached_move_type == MOVE_TYPE_SHIFT_SHIFT)
        {
	  return 0;
        }
      else if (((cached_move_type == MOVE_TYPE_MTC) || ((cached_move_type == MOVE_TYPE_MFC) || ((cached_move_type == MOVE_TYPE_MTLO) || ((cached_move_type == MOVE_TYPE_MFLO) || (cached_move_type == MOVE_TYPE_MOVE))))) && ((cached_dword_mode = get_attr_dword_mode (insn)) == DWORD_MODE_YES))
        {
	  return 0;
        }
      else if (((cached_move_type == MOVE_TYPE_CONST) || (cached_move_type == MOVE_TYPE_CONSTN)) && ((cached_dword_mode = get_attr_dword_mode (insn)) == DWORD_MODE_YES))
        {
	  return 0;
        }
      else if ((cached_move_type == MOVE_TYPE_CONST) || (cached_move_type == MOVE_TYPE_CONSTN))
        {
	  return 0;
        }
      else if ((cached_move_type == MOVE_TYPE_LOAD) || (cached_move_type == MOVE_TYPE_FPLOAD))
        {
	  return 0;
        }
      else if ((cached_move_type == MOVE_TYPE_STORE) || (cached_move_type == MOVE_TYPE_FPSTORE))
        {
	  return 0;
        }
      else if (get_attr_jal_macro (insn) == JAL_MACRO_YES)
        {
	  return 0;
        }
      else if ((cached_type == TYPE_IMADD) && (
#line 631 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_VR4120)))
        {
	  return 0;
        }
      else if (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((get_attr_mode (insn) == MODE_DI) && (
#line 631 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_VR4120))))
        {
	  return 0;
        }
      else if ((cached_type == TYPE_IDIV) || (cached_type == TYPE_IDIV3))
        {
	  return 0;
        }
      else if (! (get_attr_sync_mem (insn) == SYNC_MEM_NONE))
        {
	  return 0;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_got cached_got ATTRIBUTE_UNUSED;
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;
  enum attr_dword_mode cached_dword_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (get_attr_type (insn) == TYPE_BRANCH)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 855:  /* mips_bposge */
    case 736:  /* *branch_upper_lower_inverted */
    case 735:  /* *branch_upper_lower */
    case 734:  /* bc1any2f */
    case 733:  /* bc1any2t */
    case 732:  /* bc1any4f */
    case 731:  /* bc1any4t */
    case 554:  /* *jump_pic */
    case 454:  /* *branch_bit1di_inverted */
    case 453:  /* *branch_bit0di_inverted */
    case 452:  /* *branch_bit1si_inverted */
    case 451:  /* *branch_bit0si_inverted */
    case 450:  /* *branch_bit1di */
    case 449:  /* *branch_bit0di */
    case 448:  /* *branch_bit1si */
    case 447:  /* *branch_bit0si */
    case 446:  /* *branch_equalitydi_mips16_inverted */
    case 445:  /* *branch_equalitysi_mips16_inverted */
    case 444:  /* *branch_equalitydi_mips16 */
    case 443:  /* *branch_equalitysi_mips16 */
    case 442:  /* *branch_equalitydi_inverted */
    case 441:  /* *branch_equalitysi_inverted */
    case 440:  /* *branch_equalitydi */
    case 439:  /* *branch_equalitysi */
    case 438:  /* *branch_orderdi_inverted */
    case 437:  /* *branch_ordersi_inverted */
    case 436:  /* *branch_orderdi */
    case 435:  /* *branch_ordersi */
    case 434:  /* *branch_fp_inverted */
    case 433:  /* *branch_fp */
    case 555:  /* *jump_mips16 */
      return 1;

    default:
      return 0;

    }
}

int
insn_min_length (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_got cached_got ATTRIBUTE_UNUSED;
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;
  enum attr_dword_mode cached_dword_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 958:  /* movv8qi_internal */
    case 957:  /* movv4hi_internal */
    case 956:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x1c)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (!((1 << which_alternative) & 0x3d))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (((1 << which_alternative) & 0x21))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 698:  /* atomic_fetch_adddi_llsc */
    case 697:  /* atomic_fetch_addsi_llsc */
    case 694:  /* atomic_exchangedi_llsc */
    case 693:  /* atomic_exchangesi_llsc */
    case 692:  /* atomic_compare_and_swapdi */
    case 691:  /* atomic_compare_and_swapsi */
    case 690:  /* test_and_set_12 */
    case 689:  /* sync_lock_test_and_setdi */
    case 688:  /* sync_lock_test_and_setsi */
    case 687:  /* sync_new_nanddi */
    case 686:  /* sync_new_nandsi */
    case 685:  /* sync_old_nanddi */
    case 684:  /* sync_old_nandsi */
    case 683:  /* sync_nanddi */
    case 682:  /* sync_nandsi */
    case 681:  /* sync_new_anddi */
    case 680:  /* sync_new_xordi */
    case 679:  /* sync_new_iordi */
    case 678:  /* sync_new_andsi */
    case 677:  /* sync_new_xorsi */
    case 676:  /* sync_new_iorsi */
    case 675:  /* sync_old_anddi */
    case 674:  /* sync_old_xordi */
    case 673:  /* sync_old_iordi */
    case 672:  /* sync_old_andsi */
    case 671:  /* sync_old_xorsi */
    case 670:  /* sync_old_iorsi */
    case 669:  /* sync_anddi */
    case 668:  /* sync_xordi */
    case 667:  /* sync_iordi */
    case 666:  /* sync_andsi */
    case 665:  /* sync_xorsi */
    case 664:  /* sync_iorsi */
    case 663:  /* sync_new_subdi */
    case 662:  /* sync_new_subsi */
    case 661:  /* sync_new_adddi */
    case 660:  /* sync_new_addsi */
    case 659:  /* sync_old_subdi */
    case 658:  /* sync_old_subsi */
    case 657:  /* sync_old_adddi */
    case 656:  /* sync_old_addsi */
    case 655:  /* sync_subdi */
    case 654:  /* sync_subsi */
    case 653:  /* sync_new_nand_12 */
    case 652:  /* sync_old_nand_12 */
    case 651:  /* sync_nand_12 */
    case 650:  /* sync_new_and_12 */
    case 649:  /* sync_new_xor_12 */
    case 648:  /* sync_new_ior_12 */
    case 647:  /* sync_new_sub_12 */
    case 646:  /* sync_new_add_12 */
    case 645:  /* sync_old_and_12 */
    case 644:  /* sync_old_xor_12 */
    case 643:  /* sync_old_ior_12 */
    case 642:  /* sync_old_sub_12 */
    case 641:  /* sync_old_add_12 */
    case 640:  /* sync_and_12 */
    case 639:  /* sync_xor_12 */
    case 638:  /* sync_ior_12 */
    case 637:  /* sync_sub_12 */
    case 636:  /* sync_add_12 */
    case 635:  /* sync_adddi */
    case 634:  /* sync_addsi */
    case 633:  /* compare_and_swap_12 */
    case 632:  /* sync_compare_and_swapdi */
    case 631:  /* sync_compare_and_swapsi */
      extract_constrain_insn_cached (insn);
      return 
#line 646 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_sync_loop_insns (insn, operands) * 4);

    case 596:  /* call_value_internal_direct */
    case 592:  /* call_internal_direct */
      extract_constrain_insn_cached (insn);
      if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
        {
	  return 8;
        }
      else if ((
#line 186 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO))) == (
(JAL_MACRO_YES)))
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 4;
        }

    case 598:  /* call_value_multiple_internal */
    case 594:  /* call_value_internal */
    case 590:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 8;
        }
      else if (get_attr_jal_macro (insn) == JAL_MACRO_YES)
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 4;
        }

    case 599:  /* call_value_multiple_split */
    case 595:  /* call_value_split */
    case 591:  /* call_split */
    case 589:  /* sibcall_value_multiple_internal */
    case 588:  /* sibcall_value_internal */
    case 587:  /* sibcall_internal */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

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

    case 960:  /* loongson_vec_init1_v8qi */
    case 959:  /* loongson_vec_init1_v4hi */
    case 385:  /* mfhc1tf */
    case 378:  /* mthc1tf */
      extract_constrain_insn_cached (insn);
      if (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 371:  /* store_wordtf */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (which_alternative != 0)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 370:  /* store_wordv8qi */
    case 369:  /* store_wordv4hi */
    case 368:  /* store_wordv2si */
    case 367:  /* store_wordv2sf */
    case 366:  /* store_worddi */
    case 365:  /* store_worddf */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 364:  /* load_hightf */
    case 357:  /* load_lowtf */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (which_alternative != 0)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 343:  /* *movtf_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x7)) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 8;
        }
      else if (which_alternative == 3)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 342:  /* *movtf */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x19)) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x22))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x3b))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 341:  /* *movti_mips16 */
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0x78)) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 8;
        }
      else if ((((1 << which_alternative) & 0x18)) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 5)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 6)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 340:  /* *movti */
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0x1e)) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 8;
        }
      else if ((which_alternative == 1) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 1)
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 2)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 3)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 339:  /* *movdf_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x7)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (which_alternative == 3)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 338:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 344:  /* *movv2sf */
    case 337:  /* *movdf_hardfloat */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0xe2)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x104))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x1e7))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 336:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 335:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 334:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x104))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x1e7))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 333:  /* *movqi_mips16 */
    case 331:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x18))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 5)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 6)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 332:  /* *movqi_internal */
    case 330:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 2)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 3)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 299:  /* *movv4uqq_mips16 */
    case 298:  /* *movv4qq_mips16 */
    case 297:  /* *movv2uha_mips16 */
    case 296:  /* *movv2ha_mips16 */
    case 295:  /* *movv2uhq_mips16 */
    case 294:  /* *movv2hq_mips16 */
    case 293:  /* *movv4qi_mips16 */
    case 292:  /* *movv2hi_mips16 */
    case 291:  /* *movsi_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 6)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 7)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 8)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 290:  /* *movv4uqq_internal */
    case 289:  /* *movv4qq_internal */
    case 288:  /* *movv2uha_internal */
    case 287:  /* *movv2ha_internal */
    case 286:  /* *movv2uhq_internal */
    case 285:  /* *movv2hq_internal */
    case 284:  /* *movv4qi_internal */
    case 283:  /* *movv2hi_internal */
    case 282:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x6))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x4048))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0xfeef))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 281:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 6) || ((!((1 << which_alternative) & 0x1f8)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))))
        {
	  return 8;
        }
      else if ((((1 << which_alternative) & 0x38)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 7)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 8)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 280:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x2ea1)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if ((((1 << which_alternative) & 0x6)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x1048))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x3eef))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 279:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0x78)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if ((((1 << which_alternative) & 0x18)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 5)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 6)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 278:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x2ae1)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if ((which_alternative == 1) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 1)
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x1104))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x3bf7))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 277:  /* *movdi_ra */
    case 276:  /* *movsi_ra */
    case 257:  /* mov_sdr */
    case 256:  /* mov_swr */
    case 255:  /* mov_sdl */
    case 254:  /* mov_swl */
      extract_constrain_insn_cached (insn);
      if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
        {
	  return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
        }

    case 224:  /* *extendhi_truncateqi */
    case 223:  /* *extendsi_truncatehi */
    case 222:  /* *extendsi_truncateqi */
    case 221:  /* *extenddi_truncatehi */
    case 220:  /* *extenddi_truncateqi */
      extract_constrain_insn_cached (insn);
      if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 8;
        }

    case 204:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x3)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 253:  /* mov_ldr */
    case 252:  /* mov_lwr */
    case 251:  /* mov_ldl */
    case 250:  /* mov_lwl */
    case 198:  /* *zero_extendqihi2_mips16 */
    case 196:  /* *zero_extendhidi2_mips16 */
    case 195:  /* *zero_extendhisi2_mips16 */
    case 194:  /* *zero_extendqidi2_mips16 */
    case 193:  /* *zero_extendqisi2_mips16 */
      extract_constrain_insn_cached (insn);
      return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);

    case 363:  /* load_highv8qi */
    case 362:  /* load_highv4hi */
    case 361:  /* load_highv2si */
    case 360:  /* load_highv2sf */
    case 359:  /* load_highdi */
    case 358:  /* load_highdf */
    case 356:  /* load_lowv8qi */
    case 355:  /* load_lowv4hi */
    case 354:  /* load_lowv2si */
    case 353:  /* load_lowv2sf */
    case 352:  /* load_lowdi */
    case 351:  /* load_lowdf */
    case 219:  /* *extendqihi2_seb */
    case 217:  /* *extendqihi2_mips16e */
    case 216:  /* *extendhidi2_seh */
    case 215:  /* *extendhisi2_seh */
    case 214:  /* *extendqidi2_seb */
    case 213:  /* *extendqisi2_seb */
    case 208:  /* *extendhidi2_mips16e */
    case 207:  /* *extendhisi2_mips16e */
    case 206:  /* *extendqidi2_mips16e */
    case 205:  /* *extendqisi2_mips16e */
    case 197:  /* *zero_extendqihi2 */
    case 188:  /* *zero_extendhidi2 */
    case 187:  /* *zero_extendhisi2 */
    case 186:  /* *zero_extendqidi2 */
    case 185:  /* *zero_extendqisi2 */
    case 184:  /* *zero_extendsidi2_dext */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 218:  /* *extendqihi2 */
    case 212:  /* *extendhidi2 */
    case 211:  /* *extendhisi2 */
    case 210:  /* *extendqidi2 */
    case 209:  /* *extendqisi2 */
    case 183:  /* *zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 16 /* 0x10 */;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }

    case 170:  /* truncdisi2 */
    case 169:  /* truncdihi2 */
    case 168:  /* truncdiqi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 8;
        }
      else if (which_alternative != 0)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 156:  /* *anddi3_mips16 */
    case 155:  /* *andsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 16 /* 0x10 */;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 154:  /* *anddi3 */
    case 153:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 5)
        {
	  if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 16 /* 0x10 */;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 1062:  /* umoddi3 */
    case 1061:  /* moddi3 */
    case 1060:  /* umodsi3 */
    case 1059:  /* modsi3 */
    case 1058:  /* udivdi3 */
    case 1057:  /* divdi3 */
    case 1056:  /* udivsi3 */
    case 1055:  /* divsi3 */
    case 128:  /* udivmoddi4_hilo_ti */
    case 127:  /* divmoddi4_hilo_ti */
    case 126:  /* udivmodsi4_hilo_ti */
    case 125:  /* divmodsi4_hilo_ti */
    case 124:  /* udivmodsi4_hilo_di */
    case 123:  /* divmodsi4_hilo_di */
      extract_constrain_insn_cached (insn);
      return 
#line 643 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_idiv_insns () * 4);

    case 41:  /* *mul_acc_si_r3900 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 955:  /* ssmsubsqdq4 */
    case 954:  /* ssmaddsqdq4 */
    case 76:  /* umaddsidi4 */
    case 75:  /* maddsidi4 */
    case 74:  /* madsi */
    case 71:  /* umulditi3_internal */
    case 70:  /* mulditi3_internal */
    case 61:  /* umsubsidi4 */
    case 60:  /* msubsidi4 */
    case 57:  /* mulsidi3_64bit_dmul */
    case 46:  /* *msac2 */
    case 45:  /* *macc2 */
    case 43:  /* *msac */
    case 42:  /* *macc */
    case 37:  /* muldi3_internal */
    case 35:  /* muldi3_mul3 */
      extract_constrain_insn_cached (insn);
      if (
#line 631 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_VR4120))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 621:  /* *mips16e_save_restore */
    case 597:  /* call_value_direct_split */
    case 593:  /* call_direct_split */
    case 584:  /* load_calldi */
    case 583:  /* load_callsi */
    case 559:  /* indirect_jump_and_restore_di */
    case 558:  /* indirect_jump_and_restore_si */
    case 275:  /* *lowdi_mips16 */
    case 274:  /* *lowsi_mips16 */
    case 271:  /* load_gotdi */
    case 270:  /* load_gotsi */
    case 269:  /* *got_pagedi */
    case 268:  /* *got_pagesi */
    case 267:  /* *got_dispdi */
    case 266:  /* *got_dispsi */
    case 265:  /* *xgot_lodi */
    case 264:  /* *xgot_losi */
    case 261:  /* *unshifted_high */
    case 260:  /* *unshifted_high */
    case 16:  /* *addsi3_extended_mips16 */
      extract_constrain_insn_cached (insn);
      if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 263:  /* *xgot_hidi */
    case 262:  /* *xgot_hisi */
    case 717:  /* mips_cabs_cond_4s */
    case 716:  /* mips_c_cond_4s */
    case 623:  /* tls_get_tp_di */
    case 622:  /* tls_get_tp_si */
    case 429:  /* bswapdi2 */
    case 428:  /* bswapsi2 */
    case 122:  /* udivmoddi4_internal */
    case 121:  /* udivmodsi4_internal */
    case 120:  /* divmoddi4_internal */
    case 119:  /* divmodsi4_internal */
    case 69:  /* umuldi3_highpart_internal */
    case 68:  /* smuldi3_highpart_internal */
    case 63:  /* umulsi3_highpart_internal */
    case 62:  /* smulsi3_highpart_internal */
    case 44:  /* *msac_using_macc */
    case 39:  /* muldi3_r4000 */
    case 38:  /* mulsi3_r4000 */
    case 30:  /* *muldf3_r4300 */
    case 29:  /* *mulsf3_r4300 */
      return 8;

    case 629:  /* *tls_get_tp_mips16_call_di */
    case 628:  /* *tls_get_tp_mips16_call_si */
    case 73:  /* umulditi3_r4000 */
    case 72:  /* mulditi3_r4000 */
    case 52:  /* umulsidi3_32bit_r4000 */
    case 51:  /* mulsidi3_32bit_r4000 */
      return 12 /* 0xc */;

    case 627:  /* tls_get_tp_mips16_di */
    case 626:  /* tls_get_tp_mips16_si */
    case 424:  /* *mips.md:5359 */
      return 16 /* 0x10 */;

    case 620:  /* align */
      extract_constrain_insn_cached (insn);
      return 
#line 6850 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((1 << INTVAL (operands[0])) - 1);

    case 619:  /* consttable_float */
      extract_constrain_insn_cached (insn);
      return 
#line 6844 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GET_MODE_SIZE (GET_MODE (operands[0])));

    case 618:  /* consttable_int */
    case 617:  /* consttable_tls_reloc */
      extract_constrain_insn_cached (insn);
      return 
#line 6828 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(INTVAL (operands[1]));

    case 563:  /* casesi_internal_mips16_di */
    case 562:  /* casesi_internal_mips16_si */
      return 32 /* 0x20 */;

    case 530:  /* *sleu_didi_mips16 */
    case 529:  /* *sle_didi_mips16 */
    case 528:  /* *sleu_sidi_mips16 */
    case 527:  /* *sle_sidi_mips16 */
    case 526:  /* *sleu_disi_mips16 */
    case 525:  /* *sle_disi_mips16 */
    case 524:  /* *sleu_sisi_mips16 */
    case 523:  /* *sle_sisi_mips16 */
      extract_insn_cached (insn);
      if (m16_uimm8_m1_1 (operands[2], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 514:  /* *sltu_didi_mips16 */
    case 513:  /* *slt_didi_mips16 */
    case 512:  /* *sltu_sidi_mips16 */
    case 511:  /* *slt_sidi_mips16 */
    case 510:  /* *sltu_disi_mips16 */
    case 509:  /* *slt_disi_mips16 */
    case 508:  /* *sltu_sisi_mips16 */
    case 507:  /* *slt_sisi_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  if (m16_uimm8_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 423:  /* *lshrdi3_mips16 */
    case 422:  /* *ashrdi3_mips16 */
    case 421:  /* *ashldi3_mips16 */
    case 420:  /* *lshrsi3_mips16 */
    case 419:  /* *ashrsi3_mips16 */
    case 418:  /* *ashlsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  if (m16_uimm3_b (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 406:  /* clear_hazard_di */
    case 405:  /* clear_hazard_si */
    case 258:  /* *lea_high64 */
      return 20 /* 0x14 */;

    case 398:  /* cprestore_di */
    case 397:  /* cprestore_si */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 259:  /* *lea64 */
      return 24 /* 0x18 */;

    case 234:  /* fix_truncsfsi2_macro */
    case 232:  /* fix_truncdfsi2_macro */
      return 36 /* 0x24 */;

    case 164:  /* *mips.md:2992 */
    case 163:  /* *mips.md:2992 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  if (m16_uimm8_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 4;
        }

    case 137:  /* *rsqrtv2sfb */
    case 136:  /* *rsqrtdfb */
    case 135:  /* *rsqrtsfb */
    case 134:  /* *rsqrtv2sfa */
    case 133:  /* *rsqrtdfa */
    case 132:  /* *rsqrtsfa */
    case 131:  /* sqrtv2sf2 */
    case 130:  /* sqrtdf2 */
    case 129:  /* sqrtsf2 */
    case 118:  /* *recipv2sf3 */
    case 117:  /* *recipdf3 */
    case 116:  /* *recipsf3 */
    case 115:  /* *divv2sf3 */
    case 114:  /* *divdf3 */
    case 113:  /* *divsf3 */
      extract_constrain_insn_cached (insn);
      if (
#line 2722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_SB1))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 54:  /* umulsidi3_64bit */
    case 53:  /* mulsidi3_64bit */
      extract_constrain_insn_cached (insn);
      if (
#line 1956 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXT_INS))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 28 /* 0x1c */;
        }

    case 47:  /* *mul_sub_si */
    case 40:  /* *mul_acc_si */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 14:  /* *adddi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (m16_simm8_8 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 1)
        {
	  if (m16_uimm5_4 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 2)
        {
	  if (m16_simm5_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 3)
        {
	  if (m16_simm4_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 4;
        }

    case 13:  /* *addsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (m16_simm8_8 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 1)
        {
	  if (m16_uimm8_4 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 2)
        {
	  if (m16_simm8_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 3)
        {
	  if (m16_simm4_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) && (! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))))
        {
	  return 4;
        }
      else if ((cached_type == TYPE_BRANCH) && (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 4;
        }
      else if ((get_attr_extended_mips16 (insn) == EXTENDED_MIPS16_YES) && (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 8;
        }
      else if (cached_type == TYPE_GHOST)
        {
	  return 0;
        }
      else if ((cached_got = get_attr_got (insn)) == GOT_LOAD)
        {
	  if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 8;
	    }
	  else
	    {
	      return 4;
	    }
        }
      else if (cached_got == GOT_XGOT_HIGH)
        {
	  return 8;
        }
      else if ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_LOADPOOL)
        {
	  return 8;
        }
      else if (cached_move_type == MOVE_TYPE_SHIFT_SHIFT)
        {
	  if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 16 /* 0x10 */;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (((cached_move_type == MOVE_TYPE_MTC) || ((cached_move_type == MOVE_TYPE_MFC) || ((cached_move_type == MOVE_TYPE_MTLO) || ((cached_move_type == MOVE_TYPE_MFLO) || (cached_move_type == MOVE_TYPE_MOVE))))) && ((cached_dword_mode = get_attr_dword_mode (insn)) == DWORD_MODE_YES))
        {
	  return 8;
        }
      else if (((cached_move_type == MOVE_TYPE_CONST) || (cached_move_type == MOVE_TYPE_CONSTN)) && ((cached_dword_mode = get_attr_dword_mode (insn)) == DWORD_MODE_YES))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if ((cached_move_type == MOVE_TYPE_CONST) || (cached_move_type == MOVE_TYPE_CONSTN))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if ((cached_move_type == MOVE_TYPE_LOAD) || (cached_move_type == MOVE_TYPE_FPLOAD))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if ((cached_move_type == MOVE_TYPE_STORE) || (cached_move_type == MOVE_TYPE_FPSTORE))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else if (get_attr_jal_macro (insn) == JAL_MACRO_YES)
        {
	  return 32 /* 0x20 */;
        }
      else if ((cached_type == TYPE_IMADD) && (
#line 631 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_VR4120)))
        {
	  return 8;
        }
      else if (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((get_attr_mode (insn) == MODE_DI) && (
#line 631 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_VR4120))))
        {
	  return 8;
        }
      else if ((cached_type == TYPE_IDIV) || (cached_type == TYPE_IDIV3))
        {
	  return 
#line 643 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_idiv_insns () * 4);
        }
      else if (! (get_attr_sync_mem (insn) == SYNC_MEM_NONE))
        {
	  return 
#line 646 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_sync_loop_insns (insn, operands) * 4);
        }
      else
        {
	  return 4;
        }

    default:
      return 4;

    }
}

int
insn_default_length (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_got cached_got ATTRIBUTE_UNUSED;
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;
  enum attr_dword_mode cached_dword_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 958:  /* movv8qi_internal */
    case 957:  /* movv4hi_internal */
    case 956:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x1c)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (!((1 << which_alternative) & 0x3d))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (((1 << which_alternative) & 0x21))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 698:  /* atomic_fetch_adddi_llsc */
    case 697:  /* atomic_fetch_addsi_llsc */
    case 694:  /* atomic_exchangedi_llsc */
    case 693:  /* atomic_exchangesi_llsc */
    case 692:  /* atomic_compare_and_swapdi */
    case 691:  /* atomic_compare_and_swapsi */
    case 690:  /* test_and_set_12 */
    case 689:  /* sync_lock_test_and_setdi */
    case 688:  /* sync_lock_test_and_setsi */
    case 687:  /* sync_new_nanddi */
    case 686:  /* sync_new_nandsi */
    case 685:  /* sync_old_nanddi */
    case 684:  /* sync_old_nandsi */
    case 683:  /* sync_nanddi */
    case 682:  /* sync_nandsi */
    case 681:  /* sync_new_anddi */
    case 680:  /* sync_new_xordi */
    case 679:  /* sync_new_iordi */
    case 678:  /* sync_new_andsi */
    case 677:  /* sync_new_xorsi */
    case 676:  /* sync_new_iorsi */
    case 675:  /* sync_old_anddi */
    case 674:  /* sync_old_xordi */
    case 673:  /* sync_old_iordi */
    case 672:  /* sync_old_andsi */
    case 671:  /* sync_old_xorsi */
    case 670:  /* sync_old_iorsi */
    case 669:  /* sync_anddi */
    case 668:  /* sync_xordi */
    case 667:  /* sync_iordi */
    case 666:  /* sync_andsi */
    case 665:  /* sync_xorsi */
    case 664:  /* sync_iorsi */
    case 663:  /* sync_new_subdi */
    case 662:  /* sync_new_subsi */
    case 661:  /* sync_new_adddi */
    case 660:  /* sync_new_addsi */
    case 659:  /* sync_old_subdi */
    case 658:  /* sync_old_subsi */
    case 657:  /* sync_old_adddi */
    case 656:  /* sync_old_addsi */
    case 655:  /* sync_subdi */
    case 654:  /* sync_subsi */
    case 653:  /* sync_new_nand_12 */
    case 652:  /* sync_old_nand_12 */
    case 651:  /* sync_nand_12 */
    case 650:  /* sync_new_and_12 */
    case 649:  /* sync_new_xor_12 */
    case 648:  /* sync_new_ior_12 */
    case 647:  /* sync_new_sub_12 */
    case 646:  /* sync_new_add_12 */
    case 645:  /* sync_old_and_12 */
    case 644:  /* sync_old_xor_12 */
    case 643:  /* sync_old_ior_12 */
    case 642:  /* sync_old_sub_12 */
    case 641:  /* sync_old_add_12 */
    case 640:  /* sync_and_12 */
    case 639:  /* sync_xor_12 */
    case 638:  /* sync_ior_12 */
    case 637:  /* sync_sub_12 */
    case 636:  /* sync_add_12 */
    case 635:  /* sync_adddi */
    case 634:  /* sync_addsi */
    case 633:  /* compare_and_swap_12 */
    case 632:  /* sync_compare_and_swapdi */
    case 631:  /* sync_compare_and_swapsi */
      extract_constrain_insn_cached (insn);
      return 
#line 646 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_sync_loop_insns (insn, operands) * 4);

    case 596:  /* call_value_internal_direct */
    case 592:  /* call_internal_direct */
      extract_constrain_insn_cached (insn);
      if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
        {
	  return 8;
        }
      else if ((
#line 186 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO))) == (
(JAL_MACRO_YES)))
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 4;
        }

    case 598:  /* call_value_multiple_internal */
    case 594:  /* call_value_internal */
    case 590:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 8;
        }
      else if (get_attr_jal_macro (insn) == JAL_MACRO_YES)
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 4;
        }

    case 599:  /* call_value_multiple_split */
    case 595:  /* call_value_split */
    case 591:  /* call_split */
    case 589:  /* sibcall_value_multiple_internal */
    case 588:  /* sibcall_value_internal */
    case 587:  /* sibcall_internal */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 855:  /* mips_bposge */
    case 736:  /* *branch_upper_lower_inverted */
    case 735:  /* *branch_upper_lower */
    case 734:  /* bc1any2f */
    case 733:  /* bc1any2t */
    case 732:  /* bc1any4f */
    case 731:  /* bc1any4t */
    case 554:  /* *jump_pic */
    case 454:  /* *branch_bit1di_inverted */
    case 453:  /* *branch_bit0di_inverted */
    case 452:  /* *branch_bit1si_inverted */
    case 451:  /* *branch_bit0si_inverted */
    case 450:  /* *branch_bit1di */
    case 449:  /* *branch_bit0di */
    case 448:  /* *branch_bit1si */
    case 447:  /* *branch_bit0si */
    case 446:  /* *branch_equalitydi_mips16_inverted */
    case 445:  /* *branch_equalitysi_mips16_inverted */
    case 444:  /* *branch_equalitydi_mips16 */
    case 443:  /* *branch_equalitysi_mips16 */
    case 442:  /* *branch_equalitydi_inverted */
    case 441:  /* *branch_equalitysi_inverted */
    case 440:  /* *branch_equalitydi */
    case 439:  /* *branch_equalitysi */
    case 438:  /* *branch_orderdi_inverted */
    case 437:  /* *branch_ordersi_inverted */
    case 436:  /* *branch_orderdi */
    case 435:  /* *branch_ordersi */
    case 434:  /* *branch_fp_inverted */
    case 433:  /* *branch_fp */
      extract_constrain_insn_cached (insn);
      if (! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 100 /* 0x64 */;
        }
      else
        {
	  return 48 /* 0x30 */;
        }

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

    case 960:  /* loongson_vec_init1_v8qi */
    case 959:  /* loongson_vec_init1_v4hi */
    case 385:  /* mfhc1tf */
    case 378:  /* mthc1tf */
      extract_constrain_insn_cached (insn);
      if (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 371:  /* store_wordtf */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (which_alternative != 0)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 370:  /* store_wordv8qi */
    case 369:  /* store_wordv4hi */
    case 368:  /* store_wordv2si */
    case 367:  /* store_wordv2sf */
    case 366:  /* store_worddi */
    case 365:  /* store_worddf */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 364:  /* load_hightf */
    case 357:  /* load_lowtf */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (which_alternative != 0)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 343:  /* *movtf_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x7)) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 8;
        }
      else if (which_alternative == 3)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 342:  /* *movtf */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x19)) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x22))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x3b))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 341:  /* *movti_mips16 */
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0x78)) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 8;
        }
      else if ((((1 << which_alternative) & 0x18)) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 5)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 6)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 340:  /* *movti */
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0x1e)) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 8;
        }
      else if ((which_alternative == 1) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 1)
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 2)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 3)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 339:  /* *movdf_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x7)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (which_alternative == 3)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 338:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 344:  /* *movv2sf */
    case 337:  /* *movdf_hardfloat */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0xe2)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x104))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x1e7))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 336:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 335:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 334:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x104))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x1e7))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 333:  /* *movqi_mips16 */
    case 331:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x18))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 5)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 6)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 332:  /* *movqi_internal */
    case 330:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 2)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 3)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 299:  /* *movv4uqq_mips16 */
    case 298:  /* *movv4qq_mips16 */
    case 297:  /* *movv2uha_mips16 */
    case 296:  /* *movv2ha_mips16 */
    case 295:  /* *movv2uhq_mips16 */
    case 294:  /* *movv2hq_mips16 */
    case 293:  /* *movv4qi_mips16 */
    case 292:  /* *movv2hi_mips16 */
    case 291:  /* *movsi_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 6)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 7)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 8)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 290:  /* *movv4uqq_internal */
    case 289:  /* *movv4qq_internal */
    case 288:  /* *movv2uha_internal */
    case 287:  /* *movv2ha_internal */
    case 286:  /* *movv2uhq_internal */
    case 285:  /* *movv2hq_internal */
    case 284:  /* *movv4qi_internal */
    case 283:  /* *movv2hi_internal */
    case 282:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x6))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x4048))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0xfeef))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 281:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 6) || ((!((1 << which_alternative) & 0x1f8)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))))
        {
	  return 8;
        }
      else if ((((1 << which_alternative) & 0x38)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 7)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 8)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 280:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x2ea1)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if ((((1 << which_alternative) & 0x6)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x1048))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x3eef))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 279:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0x78)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if ((((1 << which_alternative) & 0x18)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 5)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 6)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 278:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x2ae1)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if ((which_alternative == 1) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if (which_alternative == 1)
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if (((1 << which_alternative) & 0x1104))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1 << which_alternative) & 0x3bf7))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 277:  /* *movdi_ra */
    case 276:  /* *movsi_ra */
    case 257:  /* mov_sdr */
    case 256:  /* mov_swr */
    case 255:  /* mov_sdl */
    case 254:  /* mov_swl */
      extract_constrain_insn_cached (insn);
      if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
        {
	  return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
        }

    case 224:  /* *extendhi_truncateqi */
    case 223:  /* *extendsi_truncatehi */
    case 222:  /* *extendsi_truncateqi */
    case 221:  /* *extenddi_truncatehi */
    case 220:  /* *extenddi_truncateqi */
      extract_constrain_insn_cached (insn);
      if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 8;
        }

    case 204:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x3)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return 8;
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 253:  /* mov_ldr */
    case 252:  /* mov_lwr */
    case 251:  /* mov_ldl */
    case 250:  /* mov_lwl */
    case 198:  /* *zero_extendqihi2_mips16 */
    case 196:  /* *zero_extendhidi2_mips16 */
    case 195:  /* *zero_extendhisi2_mips16 */
    case 194:  /* *zero_extendqidi2_mips16 */
    case 193:  /* *zero_extendqisi2_mips16 */
      extract_constrain_insn_cached (insn);
      return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);

    case 363:  /* load_highv8qi */
    case 362:  /* load_highv4hi */
    case 361:  /* load_highv2si */
    case 360:  /* load_highv2sf */
    case 359:  /* load_highdi */
    case 358:  /* load_highdf */
    case 356:  /* load_lowv8qi */
    case 355:  /* load_lowv4hi */
    case 354:  /* load_lowv2si */
    case 353:  /* load_lowv2sf */
    case 352:  /* load_lowdi */
    case 351:  /* load_lowdf */
    case 219:  /* *extendqihi2_seb */
    case 217:  /* *extendqihi2_mips16e */
    case 216:  /* *extendhidi2_seh */
    case 215:  /* *extendhisi2_seh */
    case 214:  /* *extendqidi2_seb */
    case 213:  /* *extendqisi2_seb */
    case 208:  /* *extendhidi2_mips16e */
    case 207:  /* *extendhisi2_mips16e */
    case 206:  /* *extendqidi2_mips16e */
    case 205:  /* *extendqisi2_mips16e */
    case 197:  /* *zero_extendqihi2 */
    case 188:  /* *zero_extendhidi2 */
    case 187:  /* *zero_extendhisi2 */
    case 186:  /* *zero_extendqidi2 */
    case 185:  /* *zero_extendqisi2 */
    case 184:  /* *zero_extendsidi2_dext */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 218:  /* *extendqihi2 */
    case 212:  /* *extendhidi2 */
    case 211:  /* *extendhisi2 */
    case 210:  /* *extendqidi2 */
    case 209:  /* *extendqisi2 */
    case 183:  /* *zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 16 /* 0x10 */;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }

    case 170:  /* truncdisi2 */
    case 169:  /* truncdihi2 */
    case 168:  /* truncdiqi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 8;
        }
      else if (which_alternative != 0)
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else
        {
	  return 4;
        }

    case 156:  /* *anddi3_mips16 */
    case 155:  /* *andsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 16 /* 0x10 */;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 154:  /* *anddi3 */
    case 153:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 5)
        {
	  if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 16 /* 0x10 */;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 1062:  /* umoddi3 */
    case 1061:  /* moddi3 */
    case 1060:  /* umodsi3 */
    case 1059:  /* modsi3 */
    case 1058:  /* udivdi3 */
    case 1057:  /* divdi3 */
    case 1056:  /* udivsi3 */
    case 1055:  /* divsi3 */
    case 128:  /* udivmoddi4_hilo_ti */
    case 127:  /* divmoddi4_hilo_ti */
    case 126:  /* udivmodsi4_hilo_ti */
    case 125:  /* divmodsi4_hilo_ti */
    case 124:  /* udivmodsi4_hilo_di */
    case 123:  /* divmodsi4_hilo_di */
      extract_constrain_insn_cached (insn);
      return 
#line 643 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_idiv_insns () * 4);

    case 41:  /* *mul_acc_si_r3900 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 955:  /* ssmsubsqdq4 */
    case 954:  /* ssmaddsqdq4 */
    case 76:  /* umaddsidi4 */
    case 75:  /* maddsidi4 */
    case 74:  /* madsi */
    case 71:  /* umulditi3_internal */
    case 70:  /* mulditi3_internal */
    case 61:  /* umsubsidi4 */
    case 60:  /* msubsidi4 */
    case 57:  /* mulsidi3_64bit_dmul */
    case 46:  /* *msac2 */
    case 45:  /* *macc2 */
    case 43:  /* *msac */
    case 42:  /* *macc */
    case 37:  /* muldi3_internal */
    case 35:  /* muldi3_mul3 */
      extract_constrain_insn_cached (insn);
      if (
#line 631 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_VR4120))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 621:  /* *mips16e_save_restore */
    case 597:  /* call_value_direct_split */
    case 593:  /* call_direct_split */
    case 584:  /* load_calldi */
    case 583:  /* load_callsi */
    case 559:  /* indirect_jump_and_restore_di */
    case 558:  /* indirect_jump_and_restore_si */
    case 275:  /* *lowdi_mips16 */
    case 274:  /* *lowsi_mips16 */
    case 271:  /* load_gotdi */
    case 270:  /* load_gotsi */
    case 269:  /* *got_pagedi */
    case 268:  /* *got_pagesi */
    case 267:  /* *got_dispdi */
    case 266:  /* *got_dispsi */
    case 265:  /* *xgot_lodi */
    case 264:  /* *xgot_losi */
    case 261:  /* *unshifted_high */
    case 260:  /* *unshifted_high */
    case 16:  /* *addsi3_extended_mips16 */
      extract_constrain_insn_cached (insn);
      if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 263:  /* *xgot_hidi */
    case 262:  /* *xgot_hisi */
    case 717:  /* mips_cabs_cond_4s */
    case 716:  /* mips_c_cond_4s */
    case 623:  /* tls_get_tp_di */
    case 622:  /* tls_get_tp_si */
    case 429:  /* bswapdi2 */
    case 428:  /* bswapsi2 */
    case 122:  /* udivmoddi4_internal */
    case 121:  /* udivmodsi4_internal */
    case 120:  /* divmoddi4_internal */
    case 119:  /* divmodsi4_internal */
    case 69:  /* umuldi3_highpart_internal */
    case 68:  /* smuldi3_highpart_internal */
    case 63:  /* umulsi3_highpart_internal */
    case 62:  /* smulsi3_highpart_internal */
    case 44:  /* *msac_using_macc */
    case 39:  /* muldi3_r4000 */
    case 38:  /* mulsi3_r4000 */
    case 30:  /* *muldf3_r4300 */
    case 29:  /* *mulsf3_r4300 */
      return 8;

    case 629:  /* *tls_get_tp_mips16_call_di */
    case 628:  /* *tls_get_tp_mips16_call_si */
    case 73:  /* umulditi3_r4000 */
    case 72:  /* mulditi3_r4000 */
    case 52:  /* umulsidi3_32bit_r4000 */
    case 51:  /* mulsidi3_32bit_r4000 */
      return 12 /* 0xc */;

    case 627:  /* tls_get_tp_mips16_di */
    case 626:  /* tls_get_tp_mips16_si */
    case 424:  /* *mips.md:5359 */
      return 16 /* 0x10 */;

    case 620:  /* align */
      extract_constrain_insn_cached (insn);
      return 
#line 6850 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((1 << INTVAL (operands[0])) - 1);

    case 619:  /* consttable_float */
      extract_constrain_insn_cached (insn);
      return 
#line 6844 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GET_MODE_SIZE (GET_MODE (operands[0])));

    case 618:  /* consttable_int */
    case 617:  /* consttable_tls_reloc */
      extract_constrain_insn_cached (insn);
      return 
#line 6828 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(INTVAL (operands[1]));

    case 563:  /* casesi_internal_mips16_di */
    case 562:  /* casesi_internal_mips16_si */
      return 32 /* 0x20 */;

    case 555:  /* *jump_mips16 */
      return 44 /* 0x2c */;

    case 530:  /* *sleu_didi_mips16 */
    case 529:  /* *sle_didi_mips16 */
    case 528:  /* *sleu_sidi_mips16 */
    case 527:  /* *sle_sidi_mips16 */
    case 526:  /* *sleu_disi_mips16 */
    case 525:  /* *sle_disi_mips16 */
    case 524:  /* *sleu_sisi_mips16 */
    case 523:  /* *sle_sisi_mips16 */
      extract_insn_cached (insn);
      if (m16_uimm8_m1_1 (operands[2], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 514:  /* *sltu_didi_mips16 */
    case 513:  /* *slt_didi_mips16 */
    case 512:  /* *sltu_sidi_mips16 */
    case 511:  /* *slt_sidi_mips16 */
    case 510:  /* *sltu_disi_mips16 */
    case 509:  /* *slt_disi_mips16 */
    case 508:  /* *sltu_sisi_mips16 */
    case 507:  /* *slt_sisi_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  if (m16_uimm8_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 423:  /* *lshrdi3_mips16 */
    case 422:  /* *ashrdi3_mips16 */
    case 421:  /* *ashldi3_mips16 */
    case 420:  /* *lshrsi3_mips16 */
    case 419:  /* *ashrsi3_mips16 */
    case 418:  /* *ashlsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  if (m16_uimm3_b (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 406:  /* clear_hazard_di */
    case 405:  /* clear_hazard_si */
    case 258:  /* *lea_high64 */
      return 20 /* 0x14 */;

    case 398:  /* cprestore_di */
    case 397:  /* cprestore_si */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 259:  /* *lea64 */
      return 24 /* 0x18 */;

    case 234:  /* fix_truncsfsi2_macro */
    case 232:  /* fix_truncdfsi2_macro */
      return 36 /* 0x24 */;

    case 164:  /* *mips.md:2992 */
    case 163:  /* *mips.md:2992 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  if (m16_uimm8_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 4;
        }

    case 137:  /* *rsqrtv2sfb */
    case 136:  /* *rsqrtdfb */
    case 135:  /* *rsqrtsfb */
    case 134:  /* *rsqrtv2sfa */
    case 133:  /* *rsqrtdfa */
    case 132:  /* *rsqrtsfa */
    case 131:  /* sqrtv2sf2 */
    case 130:  /* sqrtdf2 */
    case 129:  /* sqrtsf2 */
    case 118:  /* *recipv2sf3 */
    case 117:  /* *recipdf3 */
    case 116:  /* *recipsf3 */
    case 115:  /* *divv2sf3 */
    case 114:  /* *divdf3 */
    case 113:  /* *divsf3 */
      extract_constrain_insn_cached (insn);
      if (
#line 2722 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_SB1))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 54:  /* umulsidi3_64bit */
    case 53:  /* mulsidi3_64bit */
      extract_constrain_insn_cached (insn);
      if (
#line 1956 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_EXT_INS))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 28 /* 0x1c */;
        }

    case 47:  /* *mul_sub_si */
    case 40:  /* *mul_acc_si */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 14:  /* *adddi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (m16_simm8_8 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 1)
        {
	  if (m16_uimm5_4 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 2)
        {
	  if (m16_simm5_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 3)
        {
	  if (m16_simm4_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 4;
        }

    case 13:  /* *addsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (m16_simm8_8 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 1)
        {
	  if (m16_uimm8_4 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 2)
        {
	  if (m16_simm8_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 3)
        {
	  if (m16_simm4_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) && (! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))))
        {
	  return 100 /* 0x64 */;
        }
      else if ((cached_type == TYPE_BRANCH) && (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 48 /* 0x30 */;
        }
      else if ((get_attr_extended_mips16 (insn) == EXTENDED_MIPS16_YES) && (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 8;
        }
      else if (cached_type == TYPE_GHOST)
        {
	  return 0;
        }
      else if ((cached_got = get_attr_got (insn)) == GOT_LOAD)
        {
	  if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 8;
	    }
	  else
	    {
	      return 4;
	    }
        }
      else if (cached_got == GOT_XGOT_HIGH)
        {
	  return 8;
        }
      else if ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_LOADPOOL)
        {
	  return 8;
        }
      else if (cached_move_type == MOVE_TYPE_SHIFT_SHIFT)
        {
	  if (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))
	    {
	      return 16 /* 0x10 */;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (((cached_move_type == MOVE_TYPE_MTC) || ((cached_move_type == MOVE_TYPE_MFC) || ((cached_move_type == MOVE_TYPE_MTLO) || ((cached_move_type == MOVE_TYPE_MFLO) || (cached_move_type == MOVE_TYPE_MOVE))))) && ((cached_dword_mode = get_attr_dword_mode (insn)) == DWORD_MODE_YES))
        {
	  return 8;
        }
      else if (((cached_move_type == MOVE_TYPE_CONST) || (cached_move_type == MOVE_TYPE_CONSTN)) && ((cached_dword_mode = get_attr_dword_mode (insn)) == DWORD_MODE_YES))
        {
	  return 
#line 601 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_split_const_insns (operands[1]) * 4);
        }
      else if ((cached_move_type == MOVE_TYPE_CONST) || (cached_move_type == MOVE_TYPE_CONSTN))
        {
	  return 
#line 606 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_const_insns (operands[1]) * 4);
        }
      else if ((cached_move_type == MOVE_TYPE_LOAD) || (cached_move_type == MOVE_TYPE_FPLOAD))
        {
	  return 
#line 608 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[1], insn) * 4);
        }
      else if ((cached_move_type == MOVE_TYPE_STORE) || (cached_move_type == MOVE_TYPE_FPSTORE))
        {
	  if (! (
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_24K)))
	    {
	      return 
#line 611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4);
	    }
	  else
	    {
	      return 
#line 612 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_load_store_insns (operands[0], insn) * 4 + 4);
	    }
        }
      else if (get_attr_jal_macro (insn) == JAL_MACRO_YES)
        {
	  return 32 /* 0x20 */;
        }
      else if ((cached_type == TYPE_IMADD) && (
#line 631 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_VR4120)))
        {
	  return 8;
        }
      else if (((cached_type == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((get_attr_mode (insn) == MODE_DI) && (
#line 631 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_VR4120))))
        {
	  return 8;
        }
      else if ((cached_type == TYPE_IDIV) || (cached_type == TYPE_IDIV3))
        {
	  return 
#line 643 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_idiv_insns () * 4);
        }
      else if (! (get_attr_sync_mem (insn) == SYNC_MEM_NONE))
        {
	  return 
#line 646 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_sync_loop_insns (insn, operands) * 4);
        }
      else
        {
	  return 4;
        }

    default:
      return 4;

    }
}

int
bypass_p (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_mode cached_mode ATTRIBUTE_UNUSED;
  enum attr_cnv_mode cached_cnv_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 730:  /* sungt_ps */
    case 729:  /* sunge_ps */
    case 728:  /* sgt_ps */
    case 727:  /* sge_ps */
    case 726:  /* sle_ps */
    case 725:  /* slt_ps */
    case 724:  /* seq_ps */
    case 723:  /* sunle_ps */
    case 722:  /* sunlt_ps */
    case 721:  /* suneq_ps */
    case 720:  /* sunordered_ps */
    case 719:  /* mips_cabs_cond_ps */
    case 718:  /* mips_c_cond_ps */
    case 717:  /* mips_cabs_cond_4s */
    case 716:  /* mips_c_cond_4s */
    case 715:  /* mips_cabs_cond_d */
    case 714:  /* mips_cabs_cond_s */
    case 552:  /* sungt_df */
    case 551:  /* sunge_df */
    case 550:  /* sgt_df */
    case 549:  /* sge_df */
    case 548:  /* sungt_sf */
    case 547:  /* sunge_sf */
    case 546:  /* sgt_sf */
    case 545:  /* sge_sf */
    case 544:  /* sle_df */
    case 543:  /* slt_df */
    case 542:  /* seq_df */
    case 541:  /* sunle_df */
    case 540:  /* sunlt_df */
    case 539:  /* suneq_df */
    case 538:  /* sunordered_df */
    case 537:  /* sle_sf */
    case 536:  /* slt_sf */
    case 535:  /* seq_sf */
    case 534:  /* sunle_sf */
    case 533:  /* sunlt_sf */
    case 532:  /* suneq_sf */
    case 531:  /* sunordered_sf */
      if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 960:  /* loongson_vec_init1_v8qi */
    case 959:  /* loongson_vec_init1_v4hi */
    case 576:  /* cop0_move */
    case 385:  /* mfhc1tf */
    case 384:  /* mfhc1v8qi */
    case 383:  /* mfhc1v4hi */
    case 382:  /* mfhc1v2si */
    case 381:  /* mfhc1v2sf */
    case 380:  /* mfhc1di */
    case 379:  /* mfhc1df */
    case 378:  /* mthc1tf */
    case 377:  /* mthc1v8qi */
    case 376:  /* mthc1v4hi */
    case 375:  /* mthc1v2si */
    case 374:  /* mthc1v2sf */
    case 373:  /* mthc1di */
    case 372:  /* mthc1df */
      if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 371:  /* store_wordtf */
    case 370:  /* store_wordv8qi */
    case 369:  /* store_wordv4hi */
    case 368:  /* store_wordv2si */
    case 367:  /* store_wordv2sf */
    case 366:  /* store_worddi */
    case 365:  /* store_worddf */
      extract_constrain_insn_cached (insn);
      if ((((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR))))) && (which_alternative == 0))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 236:  /* fix_truncsfdi2 */
    case 235:  /* fix_truncdfdi2 */
    case 234:  /* fix_truncsfsi2_macro */
    case 233:  /* fix_truncsfsi2_insn */
    case 232:  /* fix_truncdfsi2_macro */
    case 231:  /* fix_truncdfsi2_insn */
      if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 892:  /* mips_subqh_r_w */
    case 891:  /* mips_subqh_w */
    case 890:  /* mips_subqh_r_ph */
    case 889:  /* mips_subqh_ph */
    case 888:  /* mips_addqh_r_w */
    case 887:  /* mips_addqh_w */
    case 886:  /* mips_addqh_r_ph */
    case 885:  /* mips_addqh_ph */
    case 884:  /* mips_subuh_r_qb */
    case 883:  /* mips_subuh_qb */
    case 882:  /* mips_subu_s_ph */
    case 881:  /* mips_subu_ph */
    case 880:  /* mips_shrl_ph */
    case 879:  /* mips_shra_r_qb */
    case 878:  /* mips_shra_qb */
    case 877:  /* mips_prepend */
    case 876:  /* mips_precr_sra_r_ph_w */
    case 875:  /* mips_precr_sra_ph_w */
    case 874:  /* mips_precr_qb_ph */
    case 865:  /* mips_cmpgdu_le_qb */
    case 864:  /* mips_cmpgdu_lt_qb */
    case 863:  /* mips_cmpgdu_eq_qb */
    case 862:  /* mips_balign */
    case 861:  /* mips_append */
    case 860:  /* mips_adduh_r_qb */
    case 859:  /* mips_adduh_qb */
    case 858:  /* mips_addu_s_ph */
    case 857:  /* mips_addu_ph */
    case 856:  /* mips_absq_s_qb */
    case 830:  /* mips_rddsp */
    case 829:  /* mips_wrdsp */
    case 828:  /* mips_mthlip */
    case 827:  /* mips_shilo */
    case 826:  /* mips_extpdp */
    case 825:  /* mips_extp */
    case 824:  /* mips_extr_s_h */
    case 823:  /* mips_extr_rs_w */
    case 822:  /* mips_extr_r_w */
    case 821:  /* mips_extr_w */
    case 820:  /* mips_packrl_ph */
    case 819:  /* mips_pick_qb */
    case 818:  /* mips_pick_ph */
    case 817:  /* mips_cmpgu_le_qb */
    case 816:  /* mips_cmpgu_lt_qb */
    case 815:  /* mips_cmpgu_eq_qb */
    case 814:  /* mips_cmpu_le_qb */
    case 813:  /* mips_cmp_le_ph */
    case 812:  /* mips_cmpu_lt_qb */
    case 811:  /* mips_cmp_lt_ph */
    case 810:  /* mips_cmpu_eq_qb */
    case 809:  /* mips_cmp_eq_ph */
    case 808:  /* mips_repl_ph */
    case 807:  /* mips_repl_qb */
    case 806:  /* mips_insv */
    case 805:  /* mips_bitrev */
    case 786:  /* mips_shra_r_ph */
    case 785:  /* mips_shra_r_w */
    case 784:  /* mips_shra_ph */
    case 783:  /* mips_shrl_qb */
    case 782:  /* mips_shll_s_ph */
    case 781:  /* mips_shll_s_w */
    case 780:  /* mips_shll_qb */
    case 779:  /* mips_shll_ph */
    case 778:  /* mips_preceu_ph_qbra */
    case 777:  /* mips_preceu_ph_qbla */
    case 776:  /* mips_preceu_ph_qbr */
    case 775:  /* mips_preceu_ph_qbl */
    case 774:  /* mips_precequ_ph_qbra */
    case 773:  /* mips_precequ_ph_qbla */
    case 772:  /* mips_precequ_ph_qbr */
    case 771:  /* mips_precequ_ph_qbl */
    case 770:  /* mips_preceq_w_phr */
    case 769:  /* mips_preceq_w_phl */
    case 768:  /* mips_precrqu_s_qb_ph */
    case 767:  /* mips_precrq_rs_ph_w */
    case 766:  /* mips_precrq_ph_w */
    case 765:  /* mips_precrq_qb_ph */
    case 764:  /* mips_absq_s_ph */
    case 763:  /* mips_absq_s_w */
    case 762:  /* mips_raddu_w_qb */
    case 761:  /* mips_modsub */
    case 760:  /* mips_addwc */
    case 759:  /* mips_addsc */
    case 758:  /* mips_subu_s_qb */
    case 757:  /* mips_subq_s_ph */
    case 756:  /* mips_subq_s_w */
    case 755:  /* subv4qi3 */
    case 754:  /* subv2hi3 */
    case 753:  /* mips_addu_s_qb */
    case 752:  /* mips_addq_s_ph */
    case 751:  /* mips_addq_s_w */
    case 750:  /* addv4qi3 */
    case 749:  /* addv2hi3 */
    case 627:  /* tls_get_tp_mips16_di */
    case 626:  /* tls_get_tp_mips16_si */
    case 559:  /* indirect_jump_and_restore_di */
    case 558:  /* indirect_jump_and_restore_si */
    case 224:  /* *extendhi_truncateqi */
    case 223:  /* *extendsi_truncatehi */
    case 222:  /* *extendsi_truncateqi */
    case 221:  /* *extenddi_truncatehi */
    case 220:  /* *extenddi_truncateqi */
      if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KC)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 128:  /* udivmoddi4_hilo_ti */
    case 127:  /* divmoddi4_hilo_ti */
    case 126:  /* udivmodsi4_hilo_ti */
    case 125:  /* divmodsi4_hilo_ti */
    case 124:  /* udivmodsi4_hilo_di */
    case 123:  /* divmodsi4_hilo_di */
    case 122:  /* udivmoddi4_internal */
    case 121:  /* udivmodsi4_internal */
    case 120:  /* divmoddi4_internal */
    case 119:  /* divmodsi4_internal */
    case 112:  /* *nmsub3v2sf_fastmath */
    case 111:  /* *nmsub3df_fastmath */
    case 110:  /* *nmsub3sf_fastmath */
    case 109:  /* *nmsub4v2sf_fastmath */
    case 108:  /* *nmsub4df_fastmath */
    case 107:  /* *nmsub4sf_fastmath */
    case 106:  /* *nmsub3v2sf */
    case 105:  /* *nmsub3df */
    case 104:  /* *nmsub3sf */
    case 103:  /* *nmsub4v2sf */
    case 102:  /* *nmsub4df */
    case 101:  /* *nmsub4sf */
    case 100:  /* *nmadd3v2sf_fastmath */
    case 99:  /* *nmadd3df_fastmath */
    case 98:  /* *nmadd3sf_fastmath */
    case 97:  /* *nmadd4v2sf_fastmath */
    case 96:  /* *nmadd4df_fastmath */
    case 95:  /* *nmadd4sf_fastmath */
    case 94:  /* *nmadd3v2sf */
    case 93:  /* *nmadd3df */
    case 92:  /* *nmadd3sf */
    case 91:  /* *nmadd4v2sf */
    case 90:  /* *nmadd4df */
    case 89:  /* *nmadd4sf */
    case 88:  /* *msub3v2sf */
    case 87:  /* *msub3df */
    case 86:  /* *msub3sf */
    case 85:  /* *msub4v2sf */
    case 84:  /* *msub4df */
    case 83:  /* *msub4sf */
    case 82:  /* *madd3v2sf */
    case 81:  /* *madd3df */
    case 80:  /* *madd3sf */
    case 79:  /* *madd4v2sf */
    case 78:  /* *madd4df */
    case 77:  /* *madd4sf */
      if (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 574:  /* mips_ehb */
    case 573:  /* mips_di */
    case 572:  /* mips_deret */
    case 571:  /* mips_eret */
    case 305:  /* *ldxc1_di */
    case 304:  /* *ldxc1_di */
    case 303:  /* *lwxc1_di */
    case 302:  /* *ldxc1_si */
    case 301:  /* *ldxc1_si */
    case 300:  /* *lwxc1_si */
    case 7:  /* *conditional_trapdi */
    case 6:  /* *conditional_trapsi */
    case 5:  /* trap */
      if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) || ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1062:  /* umoddi3 */
    case 1061:  /* moddi3 */
    case 1060:  /* umodsi3 */
    case 1059:  /* modsi3 */
    case 1058:  /* udivdi3 */
    case 1057:  /* divdi3 */
    case 1056:  /* udivsi3 */
    case 1055:  /* divsi3 */
    case 1054:  /* vec_shr_di */
    case 1053:  /* vec_shr_v8qi */
    case 1052:  /* vec_shr_v4hi */
    case 1051:  /* vec_shr_v2si */
    case 1050:  /* vec_shl_di */
    case 1049:  /* vec_shl_v8qi */
    case 1048:  /* vec_shl_v4hi */
    case 1047:  /* vec_shl_v2si */
    case 1046:  /* *loongson_punpcklwd_hi */
    case 1045:  /* *loongson_punpcklwd_qi */
    case 1044:  /* loongson_punpcklwd */
    case 1043:  /* *loongson_punpcklhw_qi */
    case 1042:  /* loongson_punpcklhw */
    case 1041:  /* loongson_punpcklbh */
    case 1040:  /* loongson_punpckhwd_hi */
    case 1039:  /* loongson_punpckhwd_qi */
    case 1038:  /* loongson_punpckhwd */
    case 1037:  /* loongson_punpckhhw_qi */
    case 1036:  /* loongson_punpckhhw */
    case 1035:  /* loongson_punpckhbh */
    case 1034:  /* ussubv8qi3 */
    case 1033:  /* ussubv4hi3 */
    case 1032:  /* sssubv8qi3 */
    case 1031:  /* sssubv4hi3 */
    case 1030:  /* loongson_psubd */
    case 1029:  /* subv8qi3 */
    case 1028:  /* subv4hi3 */
    case 1027:  /* subv2si3 */
    case 1026:  /* lshrv4hi3 */
    case 1025:  /* lshrv2si3 */
    case 1024:  /* ashrv4hi3 */
    case 1023:  /* ashrv2si3 */
    case 1022:  /* ashlv4hi3 */
    case 1021:  /* ashlv2si3 */
    case 1020:  /* loongson_pshufh */
    case 1019:  /* loongson_psadbh */
    case 1018:  /* reduc_uplus_v8qi */
    case 1017:  /* loongson_biadd */
    case 1016:  /* loongson_pasubub */
    case 1015:  /* loongson_pmuluw */
    case 1014:  /* mulv4hi3 */
    case 1013:  /* smulv4hi3_highpart */
    case 1012:  /* umulv4hi3_highpart */
    case 1011:  /* loongson_pmovmskb */
    case 1010:  /* uminv8qi3 */
    case 1009:  /* sminv4hi3 */
    case 1008:  /* umaxv8qi3 */
    case 1007:  /* smaxv4hi3 */
    case 1006:  /* loongson_pmaddhw */
    case 1005:  /* *vec_setv4hi */
    case 1004:  /* loongson_pinsrh_3 */
    case 1003:  /* loongson_pinsrh_2 */
    case 1002:  /* loongson_pinsrh_1 */
    case 1001:  /* loongson_pinsrh_0 */
    case 1000:  /* loongson_pextrh */
    case 999:  /* loongson_pcmpgtb */
    case 998:  /* loongson_pcmpgth */
    case 997:  /* loongson_pcmpgtw */
    case 996:  /* loongson_pcmpeqb */
    case 995:  /* loongson_pcmpeqh */
    case 994:  /* loongson_pcmpeqw */
    case 993:  /* loongson_pavgb */
    case 992:  /* loongson_pavgh */
    case 991:  /* one_cmplv8qi2 */
    case 990:  /* one_cmplv4hi2 */
    case 989:  /* one_cmplv2si2 */
    case 988:  /* *loongson_nor */
    case 987:  /* *loongson_nor */
    case 986:  /* *loongson_nor */
    case 985:  /* xorv8qi3 */
    case 984:  /* xorv4hi3 */
    case 983:  /* xorv2si3 */
    case 982:  /* iorv8qi3 */
    case 981:  /* iorv4hi3 */
    case 980:  /* iorv2si3 */
    case 979:  /* andv8qi3 */
    case 978:  /* andv4hi3 */
    case 977:  /* andv2si3 */
    case 976:  /* loongson_pandn_d */
    case 975:  /* loongson_pandn_b */
    case 974:  /* loongson_pandn_h */
    case 973:  /* loongson_pandn_w */
    case 972:  /* usaddv8qi3 */
    case 971:  /* usaddv4hi3 */
    case 970:  /* ssaddv8qi3 */
    case 969:  /* ssaddv4hi3 */
    case 968:  /* loongson_paddd */
    case 967:  /* addv8qi3 */
    case 966:  /* addv4hi3 */
    case 965:  /* addv2si3 */
    case 964:  /* vec_pack_usat_v4hi */
    case 963:  /* vec_pack_ssat_v4hi */
    case 962:  /* vec_pack_ssat_v2si */
    case 961:  /* *vec_concatv2si */
    case 855:  /* mips_bposge */
    case 748:  /* mips_recip2_ps */
    case 747:  /* mips_recip2_d */
    case 746:  /* mips_recip2_s */
    case 745:  /* mips_recip1_ps */
    case 744:  /* mips_recip1_d */
    case 743:  /* mips_recip1_s */
    case 742:  /* mips_rsqrt2_ps */
    case 741:  /* mips_rsqrt2_d */
    case 740:  /* mips_rsqrt2_s */
    case 739:  /* mips_rsqrt1_ps */
    case 738:  /* mips_rsqrt1_d */
    case 737:  /* mips_rsqrt1_s */
    case 736:  /* *branch_upper_lower_inverted */
    case 735:  /* *branch_upper_lower */
    case 734:  /* bc1any2f */
    case 733:  /* bc1any2t */
    case 732:  /* bc1any4f */
    case 731:  /* bc1any4t */
    case 713:  /* *mips_abs_ps */
    case 712:  /* mips_mulr_ps */
    case 711:  /* mips_cvt_ps_pw */
    case 710:  /* mips_cvt_pw_ps */
    case 709:  /* reduc_splus_v2sf */
    case 708:  /* mips_addr_ps */
    case 707:  /* mips_alnv_ps */
    case 706:  /* vec_extractv2sf */
    case 705:  /* vec_concatv2sf */
    case 704:  /* vec_perm_const_ps */
    case 700:  /* atomic_fetch_adddi_ldadd */
    case 699:  /* atomic_fetch_addsi_ldadd */
    case 698:  /* atomic_fetch_adddi_llsc */
    case 697:  /* atomic_fetch_addsi_llsc */
    case 696:  /* atomic_exchangedi_swap */
    case 695:  /* atomic_exchangesi_swap */
    case 694:  /* atomic_exchangedi_llsc */
    case 693:  /* atomic_exchangesi_llsc */
    case 692:  /* atomic_compare_and_swapdi */
    case 691:  /* atomic_compare_and_swapsi */
    case 690:  /* test_and_set_12 */
    case 689:  /* sync_lock_test_and_setdi */
    case 688:  /* sync_lock_test_and_setsi */
    case 687:  /* sync_new_nanddi */
    case 686:  /* sync_new_nandsi */
    case 685:  /* sync_old_nanddi */
    case 684:  /* sync_old_nandsi */
    case 683:  /* sync_nanddi */
    case 682:  /* sync_nandsi */
    case 681:  /* sync_new_anddi */
    case 680:  /* sync_new_xordi */
    case 679:  /* sync_new_iordi */
    case 678:  /* sync_new_andsi */
    case 677:  /* sync_new_xorsi */
    case 676:  /* sync_new_iorsi */
    case 675:  /* sync_old_anddi */
    case 674:  /* sync_old_xordi */
    case 673:  /* sync_old_iordi */
    case 672:  /* sync_old_andsi */
    case 671:  /* sync_old_xorsi */
    case 670:  /* sync_old_iorsi */
    case 669:  /* sync_anddi */
    case 668:  /* sync_xordi */
    case 667:  /* sync_iordi */
    case 666:  /* sync_andsi */
    case 665:  /* sync_xorsi */
    case 664:  /* sync_iorsi */
    case 663:  /* sync_new_subdi */
    case 662:  /* sync_new_subsi */
    case 661:  /* sync_new_adddi */
    case 660:  /* sync_new_addsi */
    case 659:  /* sync_old_subdi */
    case 658:  /* sync_old_subsi */
    case 657:  /* sync_old_adddi */
    case 656:  /* sync_old_addsi */
    case 655:  /* sync_subdi */
    case 654:  /* sync_subsi */
    case 653:  /* sync_new_nand_12 */
    case 652:  /* sync_old_nand_12 */
    case 651:  /* sync_nand_12 */
    case 650:  /* sync_new_and_12 */
    case 649:  /* sync_new_xor_12 */
    case 648:  /* sync_new_ior_12 */
    case 647:  /* sync_new_sub_12 */
    case 646:  /* sync_new_add_12 */
    case 645:  /* sync_old_and_12 */
    case 644:  /* sync_old_xor_12 */
    case 643:  /* sync_old_ior_12 */
    case 642:  /* sync_old_sub_12 */
    case 641:  /* sync_old_add_12 */
    case 640:  /* sync_and_12 */
    case 639:  /* sync_xor_12 */
    case 638:  /* sync_ior_12 */
    case 637:  /* sync_sub_12 */
    case 636:  /* sync_add_12 */
    case 635:  /* sync_adddi */
    case 634:  /* sync_addsi */
    case 633:  /* compare_and_swap_12 */
    case 632:  /* sync_compare_and_swapdi */
    case 631:  /* sync_compare_and_swapsi */
    case 630:  /* *memory_barrier */
    case 629:  /* *tls_get_tp_mips16_call_di */
    case 628:  /* *tls_get_tp_mips16_call_si */
    case 625:  /* *tls_get_tp_di_split */
    case 624:  /* *tls_get_tp_si_split */
    case 623:  /* tls_get_tp_di */
    case 622:  /* tls_get_tp_si */
    case 620:  /* align */
    case 619:  /* consttable_float */
    case 618:  /* consttable_int */
    case 617:  /* consttable_tls_reloc */
    case 599:  /* call_value_multiple_split */
    case 598:  /* call_value_multiple_internal */
    case 597:  /* call_value_direct_split */
    case 596:  /* call_value_internal_direct */
    case 595:  /* call_value_split */
    case 594:  /* call_value_internal */
    case 593:  /* call_direct_split */
    case 592:  /* call_internal_direct */
    case 591:  /* call_split */
    case 590:  /* call_internal */
    case 589:  /* sibcall_value_multiple_internal */
    case 588:  /* sibcall_value_internal */
    case 587:  /* sibcall_internal */
    case 586:  /* update_got_version */
    case 585:  /* set_got_version */
    case 582:  /* move_gpdi */
    case 581:  /* move_gpsi */
    case 580:  /* restore_gp_di */
    case 579:  /* restore_gp_si */
    case 578:  /* eh_set_lr_di */
    case 577:  /* eh_set_lr_si */
    case 570:  /* simple_return_internal */
    case 569:  /* return_internal */
    case 568:  /* *simple_return */
    case 567:  /* *return */
    case 566:  /* probe_stack_range_di */
    case 565:  /* probe_stack_range_si */
    case 564:  /* blockage */
    case 563:  /* casesi_internal_mips16_di */
    case 562:  /* casesi_internal_mips16_si */
    case 561:  /* tablejump_di */
    case 560:  /* tablejump_si */
    case 557:  /* indirect_jump_di */
    case 556:  /* indirect_jump_si */
    case 555:  /* *jump_mips16 */
    case 554:  /* *jump_pic */
    case 553:  /* *jump_absolute */
    case 454:  /* *branch_bit1di_inverted */
    case 453:  /* *branch_bit0di_inverted */
    case 452:  /* *branch_bit1si_inverted */
    case 451:  /* *branch_bit0si_inverted */
    case 450:  /* *branch_bit1di */
    case 449:  /* *branch_bit0di */
    case 448:  /* *branch_bit1si */
    case 447:  /* *branch_bit0si */
    case 446:  /* *branch_equalitydi_mips16_inverted */
    case 445:  /* *branch_equalitysi_mips16_inverted */
    case 444:  /* *branch_equalitydi_mips16 */
    case 443:  /* *branch_equalitysi_mips16 */
    case 442:  /* *branch_equalitydi_inverted */
    case 441:  /* *branch_equalitysi_inverted */
    case 440:  /* *branch_equalitydi */
    case 439:  /* *branch_equalitysi */
    case 438:  /* *branch_orderdi_inverted */
    case 437:  /* *branch_ordersi_inverted */
    case 436:  /* *branch_orderdi */
    case 435:  /* *branch_ordersi */
    case 434:  /* *branch_fp_inverted */
    case 433:  /* *branch_fp */
    case 429:  /* bswapdi2 */
    case 428:  /* bswapsi2 */
    case 408:  /* r10k_cache_barrier */
    case 407:  /* mips_cache */
    case 406:  /* clear_hazard_di */
    case 405:  /* clear_hazard_si */
    case 404:  /* rdhwr_synci_step_di */
    case 403:  /* rdhwr_synci_step_si */
    case 402:  /* synci */
    case 401:  /* sync */
    case 400:  /* use_cprestore_di */
    case 399:  /* use_cprestore_si */
    case 398:  /* cprestore_di */
    case 397:  /* cprestore_si */
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
    case 311:  /* *sdxc1_di */
    case 310:  /* *sdxc1_di */
    case 309:  /* *swxc1_di */
    case 308:  /* *sdxc1_si */
    case 307:  /* *sdxc1_si */
    case 306:  /* *swxc1_si */
    case 277:  /* *movdi_ra */
    case 276:  /* *movsi_ra */
    case 263:  /* *xgot_hidi */
    case 262:  /* *xgot_hisi */
    case 261:  /* *unshifted_high */
    case 260:  /* *unshifted_high */
    case 259:  /* *lea64 */
    case 258:  /* *lea_high64 */
    case 257:  /* mov_sdr */
    case 256:  /* mov_swr */
    case 255:  /* mov_sdl */
    case 254:  /* mov_swl */
    case 240:  /* floatdisf2 */
    case 239:  /* floatsisf2 */
    case 238:  /* floatdidf2 */
    case 237:  /* floatsidf2 */
    case 230:  /* extendsfdf2 */
    case 167:  /* truncdfsf2 */
    case 150:  /* negv2sf2 */
    case 149:  /* negdf2 */
    case 148:  /* negsf2 */
    case 145:  /* *popcountdi2_trunc */
    case 144:  /* popcountdi2 */
    case 143:  /* popcountsi2 */
    case 140:  /* absv2sf2 */
    case 139:  /* absdf2 */
    case 138:  /* abssf2 */
    case 137:  /* *rsqrtv2sfb */
    case 136:  /* *rsqrtdfb */
    case 135:  /* *rsqrtsfb */
    case 134:  /* *rsqrtv2sfa */
    case 133:  /* *rsqrtdfa */
    case 132:  /* *rsqrtsfa */
    case 131:  /* sqrtv2sf2 */
    case 130:  /* sqrtdf2 */
    case 129:  /* sqrtsf2 */
    case 118:  /* *recipv2sf3 */
    case 117:  /* *recipdf3 */
    case 116:  /* *recipsf3 */
    case 115:  /* *divv2sf3 */
    case 114:  /* *divdf3 */
    case 113:  /* *divsf3 */
    case 33:  /* muldi3_mul3_loongson */
    case 32:  /* mulsi3_mul3_loongson */
    case 31:  /* mulv2sf3 */
    case 30:  /* *muldf3_r4300 */
    case 29:  /* *mulsf3_r4300 */
    case 28:  /* *muldf3 */
    case 27:  /* *mulsf3 */
    case 23:  /* subv2sf3 */
    case 22:  /* subdf3 */
    case 21:  /* subsf3 */
    case 10:  /* addv2sf3 */
    case 9:  /* adddf3 */
    case 8:  /* addsf3 */
    case 4:  /* ls2_falu2_turn_enabled_insn */
    case 3:  /* ls2_falu1_turn_enabled_insn */
    case 2:  /* ls2_alu2_turn_enabled_insn */
    case 1:  /* ls2_alu1_turn_enabled_insn */
      return 0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (((cached_type = get_attr_type (insn)) == TYPE_IMUL3) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (((cached_type = get_attr_type (insn)) == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KC)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF))))) && (((cached_type = get_attr_type (insn)) == TYPE_ARITH) || ((cached_type == TYPE_CONDMOVE) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT))))))))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_5KF)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMP))
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
(PROCESSOR_24KF1_1)))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD))
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
(PROCESSOR_24KF1_1)))))) && (((cached_type = get_attr_type (insn)) == TYPE_ARITH) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))))))))
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
(PROCESSOR_24KF1_1)))))) && ((cached_type = get_attr_type (insn)) == TYPE_IMUL))
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
(PROCESSOR_24KF1_1)))))) && ((cached_type = get_attr_type (insn)) == TYPE_IMUL3))
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
(PROCESSOR_24KF1_1)))))) && (((cached_type = get_attr_type (insn)) == TYPE_MFHI) || (cached_type == TYPE_MFLO)))
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
(PROCESSOR_24KF1_1)))))) && (((cached_type = get_attr_type (insn)) == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
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
(PROCESSOR_24KF1_1)))))) && ((cached_type = get_attr_type (insn)) == TYPE_MULTI))
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
(PROCESSOR_24KF1_1)))))) && (((cached_type = get_attr_type (insn)) == TYPE_DSPALU) || (cached_type == TYPE_DSPALUSAT)))
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
(PROCESSOR_24KF1_1)))))) && ((cached_type = get_attr_type (insn)) == TYPE_DSPMAC))
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
(PROCESSOR_24KF1_1)))))) && ((cached_type = get_attr_type (insn)) == TYPE_DSPMACSAT))
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
(PROCESSOR_24KF1_1)))))) && ((cached_type = get_attr_type (insn)) == TYPE_ACCEXT))
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
(PROCESSOR_24KF1_1)))))) && ((cached_type = get_attr_type (insn)) == TYPE_ACCMOD))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMP))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2I) || (cached_cnv_mode == CNV_MODE_D2I))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF2_1)))) && (((cached_type = get_attr_type (insn)) == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMP))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCVT) && (((cached_cnv_mode = get_attr_cnv_mode (insn)) == CNV_MODE_S2I) || (cached_cnv_mode == CNV_MODE_D2I))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_24KF1_1)))) && (((cached_type = get_attr_type (insn)) == TYPE_MFC) || (cached_type == TYPE_MTC)))
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
(PROCESSOR_74KF3_2))))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_SIGNEXT) || (cached_type == TYPE_SLT)))))
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
(PROCESSOR_74KF3_2))))))) && (((cached_type = get_attr_type (insn)) == TYPE_ARITH) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_SHIFT) || (cached_type == TYPE_CLZ)))))
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
(PROCESSOR_74KF3_2))))))) && ((cached_type = get_attr_type (insn)) == TYPE_CONDMOVE))
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
(PROCESSOR_74KF3_2))))))) && ((cached_type = get_attr_type (insn)) == TYPE_IMUL))
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
(PROCESSOR_74KF3_2))))))) && ((cached_type = get_attr_type (insn)) == TYPE_IMADD))
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
(PROCESSOR_74KF3_2))))))) && ((cached_type = get_attr_type (insn)) == TYPE_IMUL3))
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
(PROCESSOR_74KF3_2))))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || ((cached_type == TYPE_PREFETCH) || (cached_type == TYPE_PREFETCHX))))
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
(PROCESSOR_74KF3_2))))))) && ((cached_type = get_attr_type (insn)) == TYPE_DSPMAC))
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
(PROCESSOR_74KF3_2))))))) && ((cached_type = get_attr_type (insn)) == TYPE_DSPMACSAT))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R4130)))) && ((cached_type = get_attr_type (insn)) == TYPE_IMADD))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && (((cached_type = get_attr_type (insn)) == TYPE_ARITH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_SIGNEXT) || ((cached_type == TYPE_SLT) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_CONST) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || ((cached_type == TYPE_NOP) || (cached_type == TYPE_TRAP)))))))))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R5500)))) && ((cached_type = get_attr_type (insn)) == TYPE_IMADD))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (((cached_type = get_attr_type (insn)) == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && (((cached_type = get_attr_type (insn)) == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_R10000)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMADD))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || (cached_type == TYPE_PREFETCH)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || (cached_type == TYPE_PREFETCH)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type = get_attr_type (insn)) == TYPE_FPLOAD) && (
#line 79 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sb1.md"
(TARGET_FLOAT64))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type = get_attr_type (insn)) == TYPE_FPLOAD) && (! (
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
(PROCESSOR_SB1A))))) && (((cached_type = get_attr_type (insn)) == TYPE_FPIDXLOAD) && (
#line 79 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sb1.md"
(TARGET_FLOAT64))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type = get_attr_type (insn)) == TYPE_FPIDXLOAD) && (! (
#line 79 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sb1.md"
(TARGET_FLOAT64)))))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A)))) && (((cached_type = get_attr_type (insn)) == TYPE_CONST) || ((cached_type == TYPE_ARITH) || ((cached_type == TYPE_LOGICAL) || ((cached_type == TYPE_MOVE) || (cached_type == TYPE_SIGNEXT))))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type = get_attr_type (insn)) == TYPE_CONDMOVE) || ((cached_type == TYPE_NOP) || (cached_type == TYPE_SHIFT))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type = get_attr_type (insn)) == TYPE_SLT) || ((cached_type == TYPE_CLZ) || (cached_type == TYPE_TRAP))))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type = get_attr_type (insn)) == TYPE_MFHI))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((cached_type = get_attr_type (insn)) == TYPE_MFLO))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && (((cached_type = get_attr_type (insn)) == TYPE_MTHI) || (cached_type == TYPE_MTLO)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((((cached_type = get_attr_type (insn)) == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || (cached_type == TYPE_IMADD))) && ((cached_mode = get_attr_mode (insn)) == MODE_SI)))
        {
	  return 1;
        }
      else if (((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1)))) || (((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_SB1A))))) && ((((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMUL3)) && ((cached_mode = get_attr_mode (insn)) == MODE_DI)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLR)))) && (((cached_type = get_attr_type (insn)) == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 1;
        }
      else if ((((
#line 651 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(mips_tune)) == (
(PROCESSOR_XLP)))) && (((cached_type = get_attr_type (insn)) == TYPE_IMUL) || (cached_type == TYPE_IMADD)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    }
}

int
num_delay_slots (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_branch_likely cached_branch_likely ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 596:  /* call_value_internal_direct */
    case 592:  /* call_internal_direct */
      extract_constrain_insn_cached (insn);
      if ((
#line 186 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO))) == (
(JAL_MACRO_NO)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 598:  /* call_value_multiple_internal */
    case 594:  /* call_value_internal */
    case 590:  /* call_internal */
      if (get_attr_jal_macro (insn) == JAL_MACRO_NO)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 629:  /* *tls_get_tp_mips16_call_di */
    case 628:  /* *tls_get_tp_mips16_call_si */
    case 599:  /* call_value_multiple_split */
    case 597:  /* call_value_direct_split */
    case 595:  /* call_value_split */
    case 593:  /* call_direct_split */
    case 591:  /* call_split */
    case 589:  /* sibcall_value_multiple_internal */
    case 588:  /* sibcall_value_internal */
    case 587:  /* sibcall_internal */
    case 570:  /* simple_return_internal */
    case 569:  /* return_internal */
    case 568:  /* *simple_return */
    case 567:  /* *return */
    case 561:  /* tablejump_di */
    case 560:  /* tablejump_si */
    case 557:  /* indirect_jump_di */
    case 556:  /* indirect_jump_si */
    case 553:  /* *jump_absolute */
      return 1;

    case 855:  /* mips_bposge */
    case 736:  /* *branch_upper_lower_inverted */
    case 735:  /* *branch_upper_lower */
    case 734:  /* bc1any2f */
    case 733:  /* bc1any2t */
    case 732:  /* bc1any4f */
    case 731:  /* bc1any4t */
    case 555:  /* *jump_mips16 */
    case 554:  /* *jump_pic */
    case 454:  /* *branch_bit1di_inverted */
    case 453:  /* *branch_bit0di_inverted */
    case 452:  /* *branch_bit1si_inverted */
    case 451:  /* *branch_bit0si_inverted */
    case 450:  /* *branch_bit1di */
    case 449:  /* *branch_bit0di */
    case 448:  /* *branch_bit1si */
    case 447:  /* *branch_bit0si */
    case 446:  /* *branch_equalitydi_mips16_inverted */
    case 445:  /* *branch_equalitysi_mips16_inverted */
    case 444:  /* *branch_equalitydi_mips16 */
    case 443:  /* *branch_equalitysi_mips16 */
    case 442:  /* *branch_equalitydi_inverted */
    case 441:  /* *branch_equalitysi_inverted */
    case 440:  /* *branch_equalitydi */
    case 439:  /* *branch_equalitysi */
    case 438:  /* *branch_orderdi_inverted */
    case 437:  /* *branch_ordersi_inverted */
    case 436:  /* *branch_orderdi */
    case 435:  /* *branch_ordersi */
    case 434:  /* *branch_fp_inverted */
    case 433:  /* *branch_fp */
      extract_constrain_insn_cached (insn);
      if (! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_CALL) && (get_attr_jal_macro (insn) == JAL_MACRO_NO))
        {
	  return 1;
        }
      else if (cached_type == TYPE_JUMP)
        {
	  return 1;
        }
      else if ((cached_type == TYPE_BRANCH) && ((! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && ((cached_branch_likely = get_attr_branch_likely (insn)) == BRANCH_LIKELY_NO)))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_BRANCH) && ((! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && ((cached_branch_likely = get_attr_branch_likely (insn)) == BRANCH_LIKELY_YES)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

enum attr_accum_in
get_attr_accum_in (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 40:  /* *mul_acc_si */
    case 41:  /* *mul_acc_si_r3900 */
    case 42:  /* *macc */
    case 60:  /* msubsidi4 */
    case 61:  /* umsubsidi4 */
    case 75:  /* maddsidi4 */
    case 76:  /* umaddsidi4 */
    case 77:  /* *madd4sf */
    case 78:  /* *madd4df */
    case 79:  /* *madd4v2sf */
    case 80:  /* *madd3sf */
    case 81:  /* *madd3df */
    case 82:  /* *madd3v2sf */
    case 83:  /* *msub4sf */
    case 84:  /* *msub4df */
    case 85:  /* *msub4v2sf */
    case 86:  /* *msub3sf */
    case 87:  /* *msub3df */
    case 88:  /* *msub3v2sf */
    case 89:  /* *nmadd4sf */
    case 90:  /* *nmadd4df */
    case 91:  /* *nmadd4v2sf */
    case 92:  /* *nmadd3sf */
    case 93:  /* *nmadd3df */
    case 94:  /* *nmadd3v2sf */
    case 95:  /* *nmadd4sf_fastmath */
    case 96:  /* *nmadd4df_fastmath */
    case 97:  /* *nmadd4v2sf_fastmath */
    case 98:  /* *nmadd3sf_fastmath */
    case 99:  /* *nmadd3df_fastmath */
    case 100:  /* *nmadd3v2sf_fastmath */
      return ACCUM_IN_3;

    case 43:  /* *msac */
    case 44:  /* *msac_using_macc */
    case 47:  /* *mul_sub_si */
    case 101:  /* *nmsub4sf */
    case 102:  /* *nmsub4df */
    case 103:  /* *nmsub4v2sf */
    case 104:  /* *nmsub3sf */
    case 105:  /* *nmsub3df */
    case 106:  /* *nmsub3v2sf */
    case 107:  /* *nmsub4sf_fastmath */
    case 108:  /* *nmsub4df_fastmath */
    case 109:  /* *nmsub4v2sf_fastmath */
    case 110:  /* *nmsub3sf_fastmath */
    case 111:  /* *nmsub3df_fastmath */
    case 112:  /* *nmsub3v2sf_fastmath */
    case 792:  /* mips_dpau_h_qbl */
    case 793:  /* mips_dpau_h_qbr */
    case 794:  /* mips_dpsu_h_qbl */
    case 795:  /* mips_dpsu_h_qbr */
    case 796:  /* mips_dpaq_s_w_ph */
    case 797:  /* mips_dpsq_s_w_ph */
    case 798:  /* mips_mulsaq_s_w_ph */
    case 799:  /* mips_dpaq_sa_l_w */
    case 800:  /* mips_dpsq_sa_l_w */
    case 801:  /* mips_maq_s_w_phl */
    case 802:  /* mips_maq_s_w_phr */
    case 803:  /* mips_maq_sa_w_phl */
    case 804:  /* mips_maq_sa_w_phr */
    case 866:  /* mips_dpa_w_ph */
    case 867:  /* mips_dps_w_ph */
    case 873:  /* mips_mulsa_w_ph */
    case 893:  /* mips_dpax_w_ph */
    case 894:  /* mips_dpsx_w_ph */
    case 895:  /* mips_dpaqx_s_w_ph */
    case 896:  /* mips_dpaqx_sa_w_ph */
    case 897:  /* mips_dpsqx_s_w_ph */
    case 898:  /* mips_dpsqx_sa_w_ph */
      return ACCUM_IN_1;

    case 45:  /* *macc2 */
    case 46:  /* *msac2 */
    case 74:  /* madsi */
      return ACCUM_IN_0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return ACCUM_IN_NONE;

    }
}

enum attr_alu_type
get_attr_alu_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 161:  /* *mips.md:2981 */
    case 162:  /* *mips.md:2981 */
    case 163:  /* *mips.md:2992 */
    case 164:  /* *mips.md:2992 */
      return ALU_TYPE_XOR;

    case 157:  /* *iorsi3 */
    case 158:  /* *iordi3 */
    case 159:  /* *iorsi3_mips16 */
    case 160:  /* *iordi3_mips16 */
      return ALU_TYPE_OR;

    case 199:  /* *zero_extendsi_truncqi */
    case 200:  /* *zero_extenddi_truncqi */
    case 201:  /* *zero_extendsi_trunchi */
    case 202:  /* *zero_extenddi_trunchi */
    case 203:  /* *zero_extendhi_truncqi */
      return ALU_TYPE_AND;

    case 165:  /* *norsi3 */
    case 166:  /* *nordi3 */
      return ALU_TYPE_NOR;

    case 151:  /* one_cmplsi2 */
    case 152:  /* one_cmpldi2 */
      return ALU_TYPE_NOT;

    case 24:  /* subsi3 */
    case 25:  /* subdi3 */
    case 26:  /* *subsi3_extended */
    case 146:  /* negsi2 */
    case 147:  /* negdi2 */
      return ALU_TYPE_SUB;

    case 11:  /* *addsi3 */
    case 12:  /* *adddi3 */
    case 13:  /* *addsi3_mips16 */
    case 14:  /* *adddi3_mips16 */
    case 15:  /* *addsi3_extended */
    case 16:  /* *addsi3_extended_mips16 */
    case 17:  /* *baddu_si_eb */
    case 18:  /* *baddu_si_el */
    case 19:  /* *baddu_disi */
    case 20:  /* *baddu_didi */
    case 272:  /* *lowsi */
    case 273:  /* *lowdi */
    case 274:  /* *lowsi_mips16 */
    case 275:  /* *lowdi_mips16 */
      return ALU_TYPE_ADD;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return ALU_TYPE_UNKNOWN;

    }
}

enum attr_branch_likely
get_attr_branch_likely (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 447:  /* *branch_bit0si */
    case 448:  /* *branch_bit1si */
    case 449:  /* *branch_bit0di */
    case 450:  /* *branch_bit1di */
    case 451:  /* *branch_bit0si_inverted */
    case 452:  /* *branch_bit1si_inverted */
    case 453:  /* *branch_bit0di_inverted */
    case 454:  /* *branch_bit1di_inverted */
      return BRANCH_LIKELY_NO;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      if (
#line 696 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY))
        {
	  return BRANCH_LIKELY_YES;
        }
      else
        {
	  return BRANCH_LIKELY_NO;
        }

    }
}

enum attr_can_delay
get_attr_can_delay (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 730:  /* sungt_ps */
    case 729:  /* sunge_ps */
    case 728:  /* sgt_ps */
    case 727:  /* sge_ps */
    case 726:  /* sle_ps */
    case 725:  /* slt_ps */
    case 724:  /* seq_ps */
    case 723:  /* sunle_ps */
    case 722:  /* sunlt_ps */
    case 721:  /* suneq_ps */
    case 720:  /* sunordered_ps */
    case 719:  /* mips_cabs_cond_ps */
    case 718:  /* mips_c_cond_ps */
    case 717:  /* mips_cabs_cond_4s */
    case 716:  /* mips_c_cond_4s */
    case 715:  /* mips_cabs_cond_d */
    case 714:  /* mips_cabs_cond_s */
    case 552:  /* sungt_df */
    case 551:  /* sunge_df */
    case 550:  /* sgt_df */
    case 549:  /* sge_df */
    case 548:  /* sungt_sf */
    case 547:  /* sunge_sf */
    case 546:  /* sgt_sf */
    case 545:  /* sge_sf */
    case 544:  /* sle_df */
    case 543:  /* slt_df */
    case 542:  /* seq_df */
    case 541:  /* sunle_df */
    case 540:  /* sunlt_df */
    case 539:  /* suneq_df */
    case 538:  /* sunordered_df */
    case 537:  /* sle_sf */
    case 536:  /* slt_sf */
    case 535:  /* seq_sf */
    case 534:  /* sunle_sf */
    case 533:  /* sunlt_sf */
    case 532:  /* suneq_sf */
    case 531:  /* sunordered_sf */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 667 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FCMP_DELAY))) && ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES))))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 960:  /* loongson_vec_init1_v8qi */
    case 959:  /* loongson_vec_init1_v4hi */
    case 576:  /* cop0_move */
    case 385:  /* mfhc1tf */
    case 384:  /* mfhc1v8qi */
    case 383:  /* mfhc1v4hi */
    case 382:  /* mfhc1v2si */
    case 381:  /* mfhc1v2sf */
    case 380:  /* mfhc1di */
    case 379:  /* mfhc1df */
    case 378:  /* mthc1tf */
    case 377:  /* mthc1v8qi */
    case 376:  /* mthc1v4hi */
    case 375:  /* mthc1v2si */
    case 374:  /* mthc1v2sf */
    case 373:  /* mthc1di */
    case 372:  /* mthc1df */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))) && ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES))))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 371:  /* store_wordtf */
    case 370:  /* store_wordv8qi */
    case 369:  /* store_wordv4hi */
    case 368:  /* store_wordv2si */
    case 367:  /* store_wordv2sf */
    case 366:  /* store_worddi */
    case 365:  /* store_worddf */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) || (! (
#line 663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY)))) && ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES))))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 347:  /* mfhidi_ti */
    case 346:  /* mfhisi_ti */
    case 345:  /* mfhisi_di */
      extract_constrain_insn_cached (insn);
      if ((
#line 676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS)) && ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES))))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 343:  /* *movtf_mips16 */
    case 339:  /* *movdf_mips16 */
    case 336:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || (! (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))) && ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES))))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 958:  /* movv8qi_internal */
    case 957:  /* movv4hi_internal */
    case 956:  /* movv2si_internal */
    case 364:  /* load_hightf */
    case 363:  /* load_highv8qi */
    case 362:  /* load_highv4hi */
    case 361:  /* load_highv2si */
    case 360:  /* load_highv2sf */
    case 359:  /* load_highdi */
    case 358:  /* load_highdf */
    case 357:  /* load_lowtf */
    case 356:  /* load_lowv8qi */
    case 355:  /* load_lowv4hi */
    case 354:  /* load_lowv2si */
    case 353:  /* load_lowv2sf */
    case 352:  /* load_lowdi */
    case 351:  /* load_lowdf */
    case 344:  /* *movv2sf */
    case 342:  /* *movtf */
    case 341:  /* *movti_mips16 */
    case 340:  /* *movti */
    case 337:  /* *movdf_hardfloat */
    case 334:  /* *movsf_hardfloat */
    case 333:  /* *movqi_mips16 */
    case 332:  /* *movqi_internal */
    case 331:  /* *movhi_mips16 */
    case 330:  /* *movhi_internal */
    case 299:  /* *movv4uqq_mips16 */
    case 298:  /* *movv4qq_mips16 */
    case 297:  /* *movv2uha_mips16 */
    case 296:  /* *movv2ha_mips16 */
    case 295:  /* *movv2uhq_mips16 */
    case 294:  /* *movv2hq_mips16 */
    case 293:  /* *movv4qi_mips16 */
    case 292:  /* *movv2hi_mips16 */
    case 291:  /* *movsi_mips16 */
    case 290:  /* *movv4uqq_internal */
    case 289:  /* *movv4qq_internal */
    case 288:  /* *movv2uha_internal */
    case 287:  /* *movv2ha_internal */
    case 286:  /* *movv2uhq_internal */
    case 285:  /* *movv2hq_internal */
    case 284:  /* *movv4qi_internal */
    case 283:  /* *movv2hi_internal */
    case 282:  /* *movsi_internal */
    case 281:  /* *movdi_64bit_mips16 */
    case 280:  /* *movdi_64bit */
    case 279:  /* *movdi_32bit_mips16 */
    case 278:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if ((get_attr_hazard (insn) == HAZARD_NONE) && ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES))))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 204:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) || (! (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))) && ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES))))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 854:  /* *mips_lwux_di_ext */
    case 853:  /* *mips_lwx_di_ext */
    case 852:  /* *mips_lwux_si_ext */
    case 851:  /* *mips_lwx_si_ext */
    case 850:  /* mips_ldx_di */
    case 849:  /* mips_lwx_di */
    case 848:  /* mips_ldx_si */
    case 847:  /* mips_lwx_si */
    case 846:  /* mips_lhux_extdi_di */
    case 845:  /* mips_lhx_extdi_di */
    case 844:  /* mips_lhux_extsi_di */
    case 843:  /* mips_lhx_extsi_di */
    case 842:  /* mips_lbux_extdi_di */
    case 841:  /* mips_lbx_extdi_di */
    case 840:  /* mips_lbux_extsi_di */
    case 839:  /* mips_lbx_extsi_di */
    case 838:  /* mips_lhux_extdi_si */
    case 837:  /* mips_lhx_extdi_si */
    case 836:  /* mips_lhux_extsi_si */
    case 835:  /* mips_lhx_extsi_si */
    case 834:  /* mips_lbux_extdi_si */
    case 833:  /* mips_lbx_extdi_si */
    case 832:  /* mips_lbux_extsi_si */
    case 831:  /* mips_lbx_extsi_si */
    case 584:  /* load_calldi */
    case 583:  /* load_callsi */
    case 424:  /* *mips.md:5359 */
    case 329:  /* *lwxs */
    case 328:  /* *lwxs */
    case 327:  /* *lwxs */
    case 326:  /* *lwxs */
    case 325:  /* *lwxs */
    case 324:  /* *lwxs */
    case 323:  /* *lwxs */
    case 322:  /* *lwxs */
    case 321:  /* *lwxs */
    case 320:  /* *lwxs */
    case 319:  /* *lwxs */
    case 318:  /* *lwxs */
    case 317:  /* *lwxs */
    case 316:  /* *lwxs */
    case 315:  /* *lwxs */
    case 314:  /* *lwxs */
    case 313:  /* *lwxs */
    case 312:  /* *lwxs */
    case 305:  /* *ldxc1_di */
    case 304:  /* *ldxc1_di */
    case 303:  /* *lwxc1_di */
    case 302:  /* *ldxc1_si */
    case 301:  /* *ldxc1_si */
    case 300:  /* *lwxc1_si */
    case 271:  /* load_gotdi */
    case 270:  /* load_gotsi */
    case 269:  /* *got_pagedi */
    case 268:  /* *got_pagesi */
    case 267:  /* *got_dispdi */
    case 266:  /* *got_dispsi */
    case 265:  /* *xgot_lodi */
    case 264:  /* *xgot_losi */
    case 253:  /* mov_ldr */
    case 252:  /* mov_lwr */
    case 251:  /* mov_ldl */
    case 250:  /* mov_lwl */
    case 198:  /* *zero_extendqihi2_mips16 */
    case 196:  /* *zero_extendhidi2_mips16 */
    case 195:  /* *zero_extendhisi2_mips16 */
    case 194:  /* *zero_extendqidi2_mips16 */
    case 193:  /* *zero_extendqisi2_mips16 */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) && ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES))))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 338:  /* *movdf_softfloat */
    case 335:  /* *movsf_softfloat */
    case 219:  /* *extendqihi2_seb */
    case 218:  /* *extendqihi2 */
    case 217:  /* *extendqihi2_mips16e */
    case 216:  /* *extendhidi2_seh */
    case 215:  /* *extendhisi2_seh */
    case 214:  /* *extendqidi2_seb */
    case 213:  /* *extendqisi2_seb */
    case 212:  /* *extendhidi2 */
    case 211:  /* *extendhisi2 */
    case 210:  /* *extendqidi2 */
    case 209:  /* *extendqisi2 */
    case 208:  /* *extendhidi2_mips16e */
    case 207:  /* *extendhisi2_mips16e */
    case 206:  /* *extendqidi2_mips16e */
    case 205:  /* *extendqisi2_mips16e */
    case 197:  /* *zero_extendqihi2 */
    case 188:  /* *zero_extendhidi2 */
    case 187:  /* *zero_extendhisi2 */
    case 186:  /* *zero_extendqidi2 */
    case 185:  /* *zero_extendqisi2 */
    case 184:  /* *zero_extendsidi2_dext */
    case 183:  /* *zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 1) || (! (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))) && ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES))))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 156:  /* *anddi3_mips16 */
    case 155:  /* *andsi3_mips16 */
    case 154:  /* *anddi3 */
    case 153:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if (((!((1 << which_alternative) & 0x7)) || (! (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))) && ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES))))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 48:  /* *muls */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) || (! (
#line 672 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)))) && ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES))))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 73:  /* umulditi3_r4000 */
    case 72:  /* mulditi3_r4000 */
    case 71:  /* umulditi3_internal */
    case 70:  /* mulditi3_internal */
    case 69:  /* umuldi3_highpart_internal */
    case 68:  /* smuldi3_highpart_internal */
    case 63:  /* umulsi3_highpart_internal */
    case 62:  /* smulsi3_highpart_internal */
    case 59:  /* *mulsu_di */
    case 58:  /* *muls_di */
    case 56:  /* umulsidi3_64bit_hilo */
    case 55:  /* mulsidi3_64bit_hilo */
    case 54:  /* umulsidi3_64bit */
    case 53:  /* mulsidi3_64bit */
    case 52:  /* umulsidi3_32bit_r4000 */
    case 51:  /* mulsidi3_32bit_r4000 */
    case 50:  /* umulsidi3_32bit */
    case 49:  /* mulsidi3_32bit */
    case 39:  /* muldi3_r4000 */
    case 38:  /* mulsi3_r4000 */
    case 37:  /* muldi3_internal */
    case 36:  /* mulsi3_internal */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 672 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))) && ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES))))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 35:  /* muldi3_mul3 */
    case 34:  /* mulsi3_mul3 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 1) || (! (
#line 672 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)))) && ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES))))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 855:  /* mips_bposge */
    case 736:  /* *branch_upper_lower_inverted */
    case 735:  /* *branch_upper_lower */
    case 734:  /* bc1any2f */
    case 733:  /* bc1any2t */
    case 732:  /* bc1any4f */
    case 731:  /* bc1any4t */
    case 629:  /* *tls_get_tp_mips16_call_di */
    case 628:  /* *tls_get_tp_mips16_call_si */
    case 599:  /* call_value_multiple_split */
    case 598:  /* call_value_multiple_internal */
    case 597:  /* call_value_direct_split */
    case 596:  /* call_value_internal_direct */
    case 595:  /* call_value_split */
    case 594:  /* call_value_internal */
    case 593:  /* call_direct_split */
    case 592:  /* call_internal_direct */
    case 591:  /* call_split */
    case 590:  /* call_internal */
    case 589:  /* sibcall_value_multiple_internal */
    case 588:  /* sibcall_value_internal */
    case 587:  /* sibcall_internal */
    case 570:  /* simple_return_internal */
    case 569:  /* return_internal */
    case 568:  /* *simple_return */
    case 567:  /* *return */
    case 561:  /* tablejump_di */
    case 560:  /* tablejump_si */
    case 557:  /* indirect_jump_di */
    case 556:  /* indirect_jump_si */
    case 555:  /* *jump_mips16 */
    case 554:  /* *jump_pic */
    case 553:  /* *jump_absolute */
    case 454:  /* *branch_bit1di_inverted */
    case 453:  /* *branch_bit0di_inverted */
    case 452:  /* *branch_bit1si_inverted */
    case 451:  /* *branch_bit0si_inverted */
    case 450:  /* *branch_bit1di */
    case 449:  /* *branch_bit0di */
    case 448:  /* *branch_bit1si */
    case 447:  /* *branch_bit0si */
    case 446:  /* *branch_equalitydi_mips16_inverted */
    case 445:  /* *branch_equalitysi_mips16_inverted */
    case 444:  /* *branch_equalitydi_mips16 */
    case 443:  /* *branch_equalitysi_mips16 */
    case 442:  /* *branch_equalitydi_inverted */
    case 441:  /* *branch_equalitysi_inverted */
    case 440:  /* *branch_equalitydi */
    case 439:  /* *branch_equalitysi */
    case 438:  /* *branch_orderdi_inverted */
    case 437:  /* *branch_ordersi_inverted */
    case 436:  /* *branch_orderdi */
    case 435:  /* *branch_ordersi */
    case 434:  /* *branch_fp_inverted */
    case 433:  /* *branch_fp */
    case 408:  /* r10k_cache_barrier */
    case 565:  /* probe_stack_range_si */
    case 566:  /* probe_stack_range_di */
    case 622:  /* tls_get_tp_si */
    case 623:  /* tls_get_tp_di */
    case 624:  /* *tls_get_tp_si_split */
    case 625:  /* *tls_get_tp_di_split */
      return CAN_DELAY_NO;

    default:
      extract_constrain_insn_cached (insn);
      if ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    }
}

enum attr_cnv_mode
get_attr_cnv_mode (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 230:  /* extendsfdf2 */
      return CNV_MODE_S2D;

    case 167:  /* truncdfsf2 */
      return CNV_MODE_D2S;

    case 231:  /* fix_truncdfsi2_insn */
    case 232:  /* fix_truncdfsi2_macro */
    case 235:  /* fix_truncdfdi2 */
      return CNV_MODE_D2I;

    case 233:  /* fix_truncsfsi2_insn */
    case 234:  /* fix_truncsfsi2_macro */
    case 236:  /* fix_truncsfdi2 */
      return CNV_MODE_S2I;

    case 237:  /* floatsidf2 */
    case 238:  /* floatdidf2 */
      return CNV_MODE_I2D;

    case 239:  /* floatsisf2 */
    case 240:  /* floatdisf2 */
      return CNV_MODE_I2S;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return CNV_MODE_UNKNOWN;

    }
}

enum attr_dword_mode
get_attr_dword_mode (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_mode cached_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 343:  /* *movtf_mips16 */
    case 342:  /* *movtf */
    case 341:  /* *movti_mips16 */
      extract_constrain_insn_cached (insn);
      if (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
        {
	  return DWORD_MODE_YES;
        }
      else
        {
	  return DWORD_MODE_NO;
        }

    case 340:  /* *movti */
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 4) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return DWORD_MODE_YES;
        }
      else
        {
	  return DWORD_MODE_NO;
        }

    case 278:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 4) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return DWORD_MODE_YES;
        }
      else
        {
	  return DWORD_MODE_NO;
        }

    case 1062:  /* umoddi3 */
    case 1061:  /* moddi3 */
    case 1058:  /* udivdi3 */
    case 1057:  /* divdi3 */
    case 960:  /* loongson_vec_init1_v8qi */
    case 959:  /* loongson_vec_init1_v4hi */
    case 958:  /* movv8qi_internal */
    case 957:  /* movv4hi_internal */
    case 956:  /* movv2si_internal */
    case 938:  /* subuda3 */
    case 935:  /* subda3 */
    case 932:  /* subudq3 */
    case 928:  /* subdq3 */
    case 912:  /* adduda3 */
    case 909:  /* addda3 */
    case 906:  /* addudq3 */
    case 902:  /* adddq3 */
    case 854:  /* *mips_lwux_di_ext */
    case 853:  /* *mips_lwx_di_ext */
    case 852:  /* *mips_lwux_si_ext */
    case 851:  /* *mips_lwx_si_ext */
    case 850:  /* mips_ldx_di */
    case 848:  /* mips_ldx_si */
    case 846:  /* mips_lhux_extdi_di */
    case 845:  /* mips_lhx_extdi_di */
    case 842:  /* mips_lbux_extdi_di */
    case 841:  /* mips_lbx_extdi_di */
    case 838:  /* mips_lhux_extdi_si */
    case 837:  /* mips_lhx_extdi_si */
    case 834:  /* mips_lbux_extdi_si */
    case 833:  /* mips_lbx_extdi_si */
    case 747:  /* mips_recip2_d */
    case 744:  /* mips_recip1_d */
    case 741:  /* mips_rsqrt2_d */
    case 738:  /* mips_rsqrt1_d */
    case 629:  /* *tls_get_tp_mips16_call_di */
    case 627:  /* tls_get_tp_mips16_di */
    case 625:  /* *tls_get_tp_di_split */
    case 623:  /* tls_get_tp_di */
    case 616:  /* *movdf_on_cc */
    case 615:  /* *movdf_on_di */
    case 614:  /* *movdf_on_si */
    case 610:  /* *movdi_on_cc */
    case 608:  /* *movdi_on_di */
    case 606:  /* *movdi_on_si */
    case 584:  /* load_calldi */
    case 566:  /* probe_stack_range_di */
    case 530:  /* *sleu_didi_mips16 */
    case 529:  /* *sle_didi_mips16 */
    case 526:  /* *sleu_disi_mips16 */
    case 525:  /* *sle_disi_mips16 */
    case 522:  /* *sleu_didi */
    case 521:  /* *sle_didi */
    case 518:  /* *sleu_disi */
    case 517:  /* *sle_disi */
    case 514:  /* *sltu_didi_mips16 */
    case 513:  /* *slt_didi_mips16 */
    case 510:  /* *sltu_disi_mips16 */
    case 509:  /* *slt_disi_mips16 */
    case 506:  /* *sltu_didi */
    case 505:  /* *slt_didi */
    case 502:  /* *sltu_disi */
    case 501:  /* *slt_disi */
    case 498:  /* *sgeu_didi */
    case 497:  /* *sge_didi */
    case 494:  /* *sgeu_disi */
    case 493:  /* *sge_disi */
    case 490:  /* *sgtu_didi_mips16 */
    case 489:  /* *sgt_didi_mips16 */
    case 486:  /* *sgtu_disi_mips16 */
    case 485:  /* *sgt_disi_mips16 */
    case 482:  /* *sgtu_didi */
    case 481:  /* *sgt_didi */
    case 478:  /* *sgtu_disi */
    case 477:  /* *sgt_disi */
    case 474:  /* *sne_didi_sne */
    case 472:  /* *sne_disi_sne */
    case 470:  /* *sne_zero_didi */
    case 468:  /* *sne_zero_disi */
    case 466:  /* *seq_didi_seq */
    case 464:  /* *seq_disi_seq */
    case 462:  /* *seq_zero_didi_mips16 */
    case 460:  /* *seq_zero_disi_mips16 */
    case 458:  /* *seq_zero_didi */
    case 456:  /* *seq_zero_disi */
    case 426:  /* rotrdi3 */
    case 423:  /* *lshrdi3_mips16 */
    case 422:  /* *ashrdi3_mips16 */
    case 421:  /* *ashldi3_mips16 */
    case 414:  /* *lshrdi3 */
    case 413:  /* *ashrdi3 */
    case 412:  /* *ashldi3 */
    case 385:  /* mfhc1tf */
    case 378:  /* mthc1tf */
    case 371:  /* store_wordtf */
    case 364:  /* load_hightf */
    case 357:  /* load_lowtf */
    case 347:  /* mfhidi_ti */
    case 344:  /* *movv2sf */
    case 339:  /* *movdf_mips16 */
    case 338:  /* *movdf_softfloat */
    case 337:  /* *movdf_hardfloat */
    case 310:  /* *sdxc1_di */
    case 307:  /* *sdxc1_si */
    case 304:  /* *ldxc1_di */
    case 301:  /* *ldxc1_si */
    case 281:  /* *movdi_64bit_mips16 */
    case 280:  /* *movdi_64bit */
    case 279:  /* *movdi_32bit_mips16 */
    case 277:  /* *movdi_ra */
    case 275:  /* *lowdi_mips16 */
    case 273:  /* *lowdi */
    case 271:  /* load_gotdi */
    case 269:  /* *got_pagedi */
    case 267:  /* *got_dispdi */
    case 265:  /* *xgot_lodi */
    case 263:  /* *xgot_hidi */
    case 257:  /* mov_sdr */
    case 255:  /* mov_sdl */
    case 253:  /* mov_ldr */
    case 251:  /* mov_ldl */
    case 249:  /* *cinsdi */
    case 247:  /* *insvdi */
    case 244:  /* *extzvdi */
    case 242:  /* *extvdi */
    case 238:  /* floatdidf2 */
    case 237:  /* floatsidf2 */
    case 235:  /* fix_truncdfdi2 */
    case 232:  /* fix_truncdfsi2_macro */
    case 231:  /* fix_truncdfsi2_insn */
    case 230:  /* extendsfdf2 */
    case 228:  /* *extenddi_truncatehi_exts */
    case 226:  /* *extenddi_truncateqi_exts */
    case 221:  /* *extenddi_truncatehi */
    case 220:  /* *extenddi_truncateqi */
    case 216:  /* *extendhidi2_seh */
    case 214:  /* *extendqidi2_seb */
    case 212:  /* *extendhidi2 */
    case 210:  /* *extendqidi2 */
    case 208:  /* *extendhidi2_mips16e */
    case 206:  /* *extendqidi2_mips16e */
    case 204:  /* extendsidi2 */
    case 202:  /* *zero_extenddi_trunchi */
    case 200:  /* *zero_extenddi_truncqi */
    case 196:  /* *zero_extendhidi2_mips16 */
    case 194:  /* *zero_extendqidi2_mips16 */
    case 192:  /* *zero_extendhidi2_mips16e */
    case 190:  /* *zero_extendqidi2_mips16e */
    case 188:  /* *zero_extendhidi2 */
    case 186:  /* *zero_extendqidi2 */
    case 184:  /* *zero_extendsidi2_dext */
    case 183:  /* *zero_extendsidi2 */
    case 166:  /* *nordi3 */
    case 164:  /* *mips.md:2992 */
    case 162:  /* *mips.md:2981 */
    case 160:  /* *iordi3_mips16 */
    case 158:  /* *iordi3 */
    case 156:  /* *anddi3_mips16 */
    case 154:  /* *anddi3 */
    case 152:  /* one_cmpldi2 */
    case 149:  /* negdf2 */
    case 147:  /* negdi2 */
    case 144:  /* popcountdi2 */
    case 142:  /* clzdi2 */
    case 139:  /* absdf2 */
    case 136:  /* *rsqrtdfb */
    case 133:  /* *rsqrtdfa */
    case 130:  /* sqrtdf2 */
    case 128:  /* udivmoddi4_hilo_ti */
    case 127:  /* divmoddi4_hilo_ti */
    case 122:  /* udivmoddi4_internal */
    case 120:  /* divmoddi4_internal */
    case 117:  /* *recipdf3 */
    case 114:  /* *divdf3 */
    case 111:  /* *nmsub3df_fastmath */
    case 108:  /* *nmsub4df_fastmath */
    case 105:  /* *nmsub3df */
    case 102:  /* *nmsub4df */
    case 99:  /* *nmadd3df_fastmath */
    case 96:  /* *nmadd4df_fastmath */
    case 93:  /* *nmadd3df */
    case 90:  /* *nmadd4df */
    case 87:  /* *msub3df */
    case 84:  /* *msub4df */
    case 81:  /* *madd3df */
    case 78:  /* *madd4df */
    case 73:  /* umulditi3_r4000 */
    case 72:  /* mulditi3_r4000 */
    case 71:  /* umulditi3_internal */
    case 70:  /* mulditi3_internal */
    case 69:  /* umuldi3_highpart_internal */
    case 68:  /* smuldi3_highpart_internal */
    case 57:  /* mulsidi3_64bit_dmul */
    case 39:  /* muldi3_r4000 */
    case 37:  /* muldi3_internal */
    case 35:  /* muldi3_mul3 */
    case 33:  /* muldi3_mul3_loongson */
    case 30:  /* *muldf3_r4300 */
    case 28:  /* *muldf3 */
    case 26:  /* *subsi3_extended */
    case 25:  /* subdi3 */
    case 22:  /* subdf3 */
    case 14:  /* *adddi3_mips16 */
    case 12:  /* *adddi3 */
    case 9:  /* adddf3 */
      extract_constrain_insn_cached (insn);
      if (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return DWORD_MODE_YES;
        }
      else
        {
	  return DWORD_MODE_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if ((((cached_mode = get_attr_mode (insn)) == MODE_DI) || (cached_mode == MODE_DF)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return DWORD_MODE_YES;
        }
      else if (((cached_mode == MODE_TI) || (cached_mode == MODE_TF)) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return DWORD_MODE_YES;
        }
      else
        {
	  return DWORD_MODE_NO;
        }

    default:
      return DWORD_MODE_NO;

    }
}

enum attr_extended_mips16
get_attr_extended_mips16 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 599:  /* call_value_multiple_split */
    case 598:  /* call_value_multiple_internal */
    case 595:  /* call_value_split */
    case 594:  /* call_value_internal */
    case 591:  /* call_split */
    case 590:  /* call_internal */
    case 589:  /* sibcall_value_multiple_internal */
    case 588:  /* sibcall_value_internal */
    case 587:  /* sibcall_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return EXTENDED_MIPS16_YES;
        }
      else
        {
	  return EXTENDED_MIPS16_NO;
        }

    case 170:  /* truncdisi2 */
    case 169:  /* truncdihi2 */
    case 168:  /* truncdiqi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return EXTENDED_MIPS16_YES;
        }
      else
        {
	  return EXTENDED_MIPS16_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if ((get_attr_move_type (insn) == MOVE_TYPE_SLL0) || ((get_attr_type (insn) == TYPE_BRANCH) || (get_attr_jal (insn) == JAL_DIRECT)))
        {
	  return EXTENDED_MIPS16_YES;
        }
      else
        {
	  return EXTENDED_MIPS16_NO;
        }

    case 855:  /* mips_bposge */
    case 736:  /* *branch_upper_lower_inverted */
    case 735:  /* *branch_upper_lower */
    case 734:  /* bc1any2f */
    case 733:  /* bc1any2t */
    case 732:  /* bc1any4f */
    case 731:  /* bc1any4t */
    case 597:  /* call_value_direct_split */
    case 596:  /* call_value_internal_direct */
    case 593:  /* call_direct_split */
    case 592:  /* call_internal_direct */
    case 555:  /* *jump_mips16 */
    case 554:  /* *jump_pic */
    case 454:  /* *branch_bit1di_inverted */
    case 453:  /* *branch_bit0di_inverted */
    case 452:  /* *branch_bit1si_inverted */
    case 451:  /* *branch_bit0si_inverted */
    case 450:  /* *branch_bit1di */
    case 449:  /* *branch_bit0di */
    case 448:  /* *branch_bit1si */
    case 447:  /* *branch_bit0si */
    case 446:  /* *branch_equalitydi_mips16_inverted */
    case 445:  /* *branch_equalitysi_mips16_inverted */
    case 444:  /* *branch_equalitydi_mips16 */
    case 443:  /* *branch_equalitysi_mips16 */
    case 442:  /* *branch_equalitydi_inverted */
    case 441:  /* *branch_equalitysi_inverted */
    case 440:  /* *branch_equalitydi */
    case 439:  /* *branch_equalitysi */
    case 438:  /* *branch_orderdi_inverted */
    case 437:  /* *branch_ordersi_inverted */
    case 436:  /* *branch_orderdi */
    case 435:  /* *branch_ordersi */
    case 434:  /* *branch_fp_inverted */
    case 433:  /* *branch_fp */
    case 16:  /* *addsi3_extended_mips16 */
    case 260:  /* *unshifted_high */
    case 261:  /* *unshifted_high */
    case 274:  /* *lowsi_mips16 */
    case 275:  /* *lowdi_mips16 */
    case 558:  /* indirect_jump_and_restore_si */
    case 559:  /* indirect_jump_and_restore_di */
    case 621:  /* *mips16e_save_restore */
      return EXTENDED_MIPS16_YES;

    default:
      return EXTENDED_MIPS16_NO;

    }
}

enum attr_got
get_attr_got (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 264:  /* *xgot_losi */
    case 265:  /* *xgot_lodi */
    case 266:  /* *got_dispsi */
    case 267:  /* *got_dispdi */
    case 268:  /* *got_pagesi */
    case 269:  /* *got_pagedi */
    case 270:  /* load_gotsi */
    case 271:  /* load_gotdi */
    case 583:  /* load_callsi */
    case 584:  /* load_calldi */
      return GOT_LOAD;

    case 262:  /* *xgot_hisi */
    case 263:  /* *xgot_hidi */
      return GOT_XGOT_HIGH;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return GOT_UNSET;

    }
}

enum attr_hazard
get_attr_hazard (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 958:  /* movv8qi_internal */
    case 957:  /* movv4hi_internal */
    case 956:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (((!((1 << which_alternative) & 0x3d)) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((((1 << which_alternative) & 0xc)) && (
#line 663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 730:  /* sungt_ps */
    case 729:  /* sunge_ps */
    case 728:  /* sgt_ps */
    case 727:  /* sge_ps */
    case 726:  /* sle_ps */
    case 725:  /* slt_ps */
    case 724:  /* seq_ps */
    case 723:  /* sunle_ps */
    case 722:  /* sunlt_ps */
    case 721:  /* suneq_ps */
    case 720:  /* sunordered_ps */
    case 719:  /* mips_cabs_cond_ps */
    case 718:  /* mips_c_cond_ps */
    case 717:  /* mips_cabs_cond_4s */
    case 716:  /* mips_c_cond_4s */
    case 715:  /* mips_cabs_cond_d */
    case 714:  /* mips_cabs_cond_s */
    case 552:  /* sungt_df */
    case 551:  /* sunge_df */
    case 550:  /* sgt_df */
    case 549:  /* sge_df */
    case 548:  /* sungt_sf */
    case 547:  /* sunge_sf */
    case 546:  /* sgt_sf */
    case 545:  /* sge_sf */
    case 544:  /* sle_df */
    case 543:  /* slt_df */
    case 542:  /* seq_df */
    case 541:  /* sunle_df */
    case 540:  /* sunlt_df */
    case 539:  /* suneq_df */
    case 538:  /* sunordered_df */
    case 537:  /* sle_sf */
    case 536:  /* slt_sf */
    case 535:  /* seq_sf */
    case 534:  /* sunle_sf */
    case 533:  /* sunlt_sf */
    case 532:  /* suneq_sf */
    case 531:  /* sunordered_sf */
      extract_constrain_insn_cached (insn);
      if (
#line 667 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FCMP_DELAY))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 960:  /* loongson_vec_init1_v8qi */
    case 959:  /* loongson_vec_init1_v4hi */
    case 576:  /* cop0_move */
    case 385:  /* mfhc1tf */
    case 384:  /* mfhc1v8qi */
    case 383:  /* mfhc1v4hi */
    case 382:  /* mfhc1v2si */
    case 381:  /* mfhc1v2sf */
    case 380:  /* mfhc1di */
    case 379:  /* mfhc1df */
    case 378:  /* mthc1tf */
    case 377:  /* mthc1v8qi */
    case 376:  /* mthc1v4hi */
    case 375:  /* mthc1v2si */
    case 374:  /* mthc1v2sf */
    case 373:  /* mthc1di */
    case 372:  /* mthc1df */
      extract_constrain_insn_cached (insn);
      if (
#line 663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 371:  /* store_wordtf */
    case 370:  /* store_wordv8qi */
    case 369:  /* store_wordv4hi */
    case 368:  /* store_wordv2si */
    case 367:  /* store_wordv2sf */
    case 366:  /* store_worddi */
    case 365:  /* store_worddf */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 364:  /* load_hightf */
    case 363:  /* load_highv8qi */
    case 362:  /* load_highv4hi */
    case 361:  /* load_highv2si */
    case 360:  /* load_highv2sf */
    case 359:  /* load_highdi */
    case 358:  /* load_highdf */
    case 357:  /* load_lowtf */
    case 356:  /* load_lowv8qi */
    case 355:  /* load_lowv4hi */
    case 354:  /* load_lowv2si */
    case 353:  /* load_lowv2sf */
    case 352:  /* load_lowdi */
    case 351:  /* load_lowdf */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((which_alternative == 0) && (
#line 663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 347:  /* mfhidi_ti */
    case 346:  /* mfhisi_ti */
    case 345:  /* mfhisi_di */
      extract_constrain_insn_cached (insn);
      if (! (
#line 676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS)))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 342:  /* *movtf */
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x22)) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((((1 << which_alternative) & 0x18)) && (
#line 663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 340:  /* *movti */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if (((which_alternative == 4) && (
#line 672 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))) || ((which_alternative == 6) && (! (
#line 676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS)))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 343:  /* *movtf_mips16 */
    case 339:  /* *movdf_mips16 */
    case 336:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 344:  /* *movv2sf */
    case 337:  /* *movdf_hardfloat */
    case 334:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x104)) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((((1 << which_alternative) & 0x62)) && (
#line 663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 332:  /* *movqi_internal */
    case 330:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 5) && (! (
#line 676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 290:  /* *movv4uqq_internal */
    case 289:  /* *movv4qq_internal */
    case 288:  /* *movv2uha_internal */
    case 287:  /* *movv2ha_internal */
    case 286:  /* *movv2uhq_internal */
    case 285:  /* *movv2hq_internal */
    case 284:  /* *movv4qi_internal */
    case 283:  /* *movv2hi_internal */
    case 282:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x4048)) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((((1 << which_alternative) & 0xa6a0)) && (
#line 663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 12) && (! (
#line 676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 299:  /* *movv4uqq_mips16 */
    case 298:  /* *movv4qq_mips16 */
    case 297:  /* *movv2uha_mips16 */
    case 296:  /* *movv2ha_mips16 */
    case 295:  /* *movv2uhq_mips16 */
    case 294:  /* *movv2hq_mips16 */
    case 293:  /* *movv4qi_mips16 */
    case 292:  /* *movv2hi_mips16 */
    case 291:  /* *movsi_mips16 */
    case 281:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0xc0)) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 9) && (! (
#line 676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 280:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x1048)) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((((1 << which_alternative) & 0x28a0)) && (
#line 663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 10) && (! (
#line 676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 341:  /* *movti_mips16 */
    case 333:  /* *movqi_mips16 */
    case 331:  /* *movhi_mips16 */
    case 279:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 5) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 7) && (! (
#line 676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 278:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x1104)) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))) || ((((1 << which_alternative) & 0x2a80)) && (
#line 663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY))))
        {
	  return HAZARD_DELAY;
        }
      else if (((which_alternative == 4) && (
#line 672 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))) || ((which_alternative == 6) && (! (
#line 676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS)))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 204:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 854:  /* *mips_lwux_di_ext */
    case 853:  /* *mips_lwx_di_ext */
    case 852:  /* *mips_lwux_si_ext */
    case 851:  /* *mips_lwx_si_ext */
    case 850:  /* mips_ldx_di */
    case 849:  /* mips_lwx_di */
    case 848:  /* mips_ldx_si */
    case 847:  /* mips_lwx_si */
    case 846:  /* mips_lhux_extdi_di */
    case 845:  /* mips_lhx_extdi_di */
    case 844:  /* mips_lhux_extsi_di */
    case 843:  /* mips_lhx_extsi_di */
    case 842:  /* mips_lbux_extdi_di */
    case 841:  /* mips_lbx_extdi_di */
    case 840:  /* mips_lbux_extsi_di */
    case 839:  /* mips_lbx_extsi_di */
    case 838:  /* mips_lhux_extdi_si */
    case 837:  /* mips_lhx_extdi_si */
    case 836:  /* mips_lhux_extsi_si */
    case 835:  /* mips_lhx_extsi_si */
    case 834:  /* mips_lbux_extdi_si */
    case 833:  /* mips_lbx_extdi_si */
    case 832:  /* mips_lbux_extsi_si */
    case 831:  /* mips_lbx_extsi_si */
    case 584:  /* load_calldi */
    case 583:  /* load_callsi */
    case 424:  /* *mips.md:5359 */
    case 329:  /* *lwxs */
    case 328:  /* *lwxs */
    case 327:  /* *lwxs */
    case 326:  /* *lwxs */
    case 325:  /* *lwxs */
    case 324:  /* *lwxs */
    case 323:  /* *lwxs */
    case 322:  /* *lwxs */
    case 321:  /* *lwxs */
    case 320:  /* *lwxs */
    case 319:  /* *lwxs */
    case 318:  /* *lwxs */
    case 317:  /* *lwxs */
    case 316:  /* *lwxs */
    case 315:  /* *lwxs */
    case 314:  /* *lwxs */
    case 313:  /* *lwxs */
    case 312:  /* *lwxs */
    case 305:  /* *ldxc1_di */
    case 304:  /* *ldxc1_di */
    case 303:  /* *lwxc1_di */
    case 302:  /* *ldxc1_si */
    case 301:  /* *ldxc1_si */
    case 300:  /* *lwxc1_si */
    case 271:  /* load_gotdi */
    case 270:  /* load_gotsi */
    case 269:  /* *got_pagedi */
    case 268:  /* *got_pagesi */
    case 267:  /* *got_dispdi */
    case 266:  /* *got_dispsi */
    case 265:  /* *xgot_lodi */
    case 264:  /* *xgot_losi */
    case 253:  /* mov_ldr */
    case 252:  /* mov_lwr */
    case 251:  /* mov_ldl */
    case 250:  /* mov_lwl */
    case 198:  /* *zero_extendqihi2_mips16 */
    case 196:  /* *zero_extendhidi2_mips16 */
    case 195:  /* *zero_extendhisi2_mips16 */
    case 194:  /* *zero_extendqidi2_mips16 */
    case 193:  /* *zero_extendqisi2_mips16 */
      extract_constrain_insn_cached (insn);
      if (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 338:  /* *movdf_softfloat */
    case 335:  /* *movsf_softfloat */
    case 219:  /* *extendqihi2_seb */
    case 218:  /* *extendqihi2 */
    case 217:  /* *extendqihi2_mips16e */
    case 216:  /* *extendhidi2_seh */
    case 215:  /* *extendhisi2_seh */
    case 214:  /* *extendqidi2_seb */
    case 213:  /* *extendqisi2_seb */
    case 212:  /* *extendhidi2 */
    case 211:  /* *extendhisi2 */
    case 210:  /* *extendqidi2 */
    case 209:  /* *extendqisi2 */
    case 208:  /* *extendhidi2_mips16e */
    case 207:  /* *extendhisi2_mips16e */
    case 206:  /* *extendqidi2_mips16e */
    case 205:  /* *extendqisi2_mips16e */
    case 197:  /* *zero_extendqihi2 */
    case 188:  /* *zero_extendhidi2 */
    case 187:  /* *zero_extendhisi2 */
    case 186:  /* *zero_extendqidi2 */
    case 185:  /* *zero_extendqisi2 */
    case 184:  /* *zero_extendsidi2_dext */
    case 183:  /* *zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 156:  /* *anddi3_mips16 */
    case 155:  /* *andsi3_mips16 */
    case 154:  /* *anddi3 */
    case 153:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x7)) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 48:  /* *muls */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (
#line 672 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 73:  /* umulditi3_r4000 */
    case 72:  /* mulditi3_r4000 */
    case 71:  /* umulditi3_internal */
    case 70:  /* mulditi3_internal */
    case 69:  /* umuldi3_highpart_internal */
    case 68:  /* smuldi3_highpart_internal */
    case 63:  /* umulsi3_highpart_internal */
    case 62:  /* smulsi3_highpart_internal */
    case 59:  /* *mulsu_di */
    case 58:  /* *muls_di */
    case 56:  /* umulsidi3_64bit_hilo */
    case 55:  /* mulsidi3_64bit_hilo */
    case 54:  /* umulsidi3_64bit */
    case 53:  /* mulsidi3_64bit */
    case 52:  /* umulsidi3_32bit_r4000 */
    case 51:  /* mulsidi3_32bit_r4000 */
    case 50:  /* umulsidi3_32bit */
    case 49:  /* mulsidi3_32bit */
    case 39:  /* muldi3_r4000 */
    case 38:  /* mulsi3_r4000 */
    case 37:  /* muldi3_internal */
    case 36:  /* mulsi3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 672 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 35:  /* muldi3_mul3 */
    case 34:  /* mulsi3_mul3 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (
#line 672 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if ((((cached_type = get_attr_type (insn)) == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPIDXLOAD))) && (
#line 659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_LOAD_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if (((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)) && (
#line 663 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_XFER_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if ((cached_type == TYPE_FCMP) && (
#line 667 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_FCMP_DELAY)))
        {
	  return HAZARD_DELAY;
        }
      else if ((cached_type == TYPE_IMUL) && (
#line 672 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)))
        {
	  return HAZARD_HILO;
        }
      else if (((cached_type == TYPE_MFHI) || (cached_type == TYPE_MFLO)) && (! (
#line 676 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(ISA_HAS_HILO_INTERLOCKS))))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    default:
      return HAZARD_NONE;

    }
}

enum attr_jal_macro
get_attr_jal_macro (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_jal cached_jal ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 596:  /* call_value_internal_direct */
    case 592:  /* call_internal_direct */
      extract_constrain_insn_cached (insn);
      return 
#line 186 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO));

    case 598:  /* call_value_multiple_internal */
    case 594:  /* call_value_internal */
    case 590:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 
#line 186 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO));
        }
      else
        {
	  return 
#line 189 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP
		       ? JAL_MACRO_YES : JAL_MACRO_NO));
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if ((cached_jal = get_attr_jal (insn)) == JAL_DIRECT)
        {
	  return 
#line 186 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO));
        }
      else if (cached_jal == JAL_INDIRECT)
        {
	  return 
#line 189 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP
		       ? JAL_MACRO_YES : JAL_MACRO_NO));
        }
      else
        {
	  return JAL_MACRO_NO;
        }

    default:
      return JAL_MACRO_NO;

    }
}

enum attr_jal
get_attr_jal (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 587:  /* sibcall_internal */
    case 588:  /* sibcall_value_internal */
    case 589:  /* sibcall_value_multiple_internal */
    case 590:  /* call_internal */
    case 591:  /* call_split */
    case 594:  /* call_value_internal */
    case 595:  /* call_value_split */
    case 598:  /* call_value_multiple_internal */
    case 599:  /* call_value_multiple_split */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return JAL_INDIRECT;
        }
      else
        {
	  return JAL_DIRECT;
        }

    case 592:  /* call_internal_direct */
    case 593:  /* call_direct_split */
    case 596:  /* call_value_internal_direct */
    case 597:  /* call_value_direct_split */
      return JAL_DIRECT;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return JAL_UNSET;

    }
}

enum attr_ls2_turn_type
get_attr_ls2_turn_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 4:  /* ls2_falu2_turn_enabled_insn */
      return LS2_TURN_TYPE_FALU2;

    case 3:  /* ls2_falu1_turn_enabled_insn */
      return LS2_TURN_TYPE_FALU1;

    case 2:  /* ls2_alu2_turn_enabled_insn */
      return LS2_TURN_TYPE_ALU2;

    case 1:  /* ls2_alu1_turn_enabled_insn */
      return LS2_TURN_TYPE_ALU1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return LS2_TURN_TYPE_UNKNOWN;

    }
}

enum attr_may_clobber_hilo
get_attr_may_clobber_hilo (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 332:  /* *movqi_internal */
    case 330:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 290:  /* *movv4uqq_internal */
    case 289:  /* *movv4qq_internal */
    case 288:  /* *movv2uha_internal */
    case 287:  /* *movv2ha_internal */
    case 286:  /* *movv2uhq_internal */
    case 285:  /* *movv2hq_internal */
    case 284:  /* *movv4qi_internal */
    case 283:  /* *movv2hi_internal */
    case 282:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 11)
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 280:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 9)
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 340:  /* *movti */
    case 278:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x30))
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || ((cached_type == TYPE_IMADD) || ((cached_type == TYPE_IDIV) || ((cached_type == TYPE_MTHI) || (cached_type == TYPE_MTLO))))))
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 955:  /* ssmsubsqdq4 */
    case 954:  /* ssmaddsqdq4 */
    case 953:  /* ssmulsq3 */
    case 952:  /* ssmulhq3 */
    case 951:  /* ssmulv2hq3 */
    case 872:  /* mips_mulq_s_w */
    case 871:  /* mips_mulq_s_ph */
    case 870:  /* mips_mulq_rs_w */
    case 869:  /* mips_mul_s_ph */
    case 868:  /* mulv2hi3 */
    case 791:  /* mips_muleq_s_w_phr */
    case 790:  /* mips_muleq_s_w_phl */
    case 789:  /* mips_mulq_rs_ph */
    case 788:  /* mips_muleu_s_ph_qbr */
    case 787:  /* mips_muleu_s_ph_qbl */
    case 350:  /* mthidi_ti */
    case 349:  /* mthisi_ti */
    case 348:  /* mthisi_di */
    case 128:  /* udivmoddi4_hilo_ti */
    case 127:  /* divmoddi4_hilo_ti */
    case 126:  /* udivmodsi4_hilo_ti */
    case 125:  /* divmodsi4_hilo_ti */
    case 124:  /* udivmodsi4_hilo_di */
    case 123:  /* divmodsi4_hilo_di */
    case 122:  /* udivmoddi4_internal */
    case 121:  /* udivmodsi4_internal */
    case 120:  /* divmoddi4_internal */
    case 119:  /* divmodsi4_internal */
    case 76:  /* umaddsidi4 */
    case 75:  /* maddsidi4 */
    case 74:  /* madsi */
    case 73:  /* umulditi3_r4000 */
    case 72:  /* mulditi3_r4000 */
    case 71:  /* umulditi3_internal */
    case 70:  /* mulditi3_internal */
    case 69:  /* umuldi3_highpart_internal */
    case 68:  /* smuldi3_highpart_internal */
    case 67:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 66:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 65:  /* umulsi3_highpart_mulhi_internal */
    case 64:  /* smulsi3_highpart_mulhi_internal */
    case 63:  /* umulsi3_highpart_internal */
    case 62:  /* smulsi3_highpart_internal */
    case 61:  /* umsubsidi4 */
    case 60:  /* msubsidi4 */
    case 59:  /* *mulsu_di */
    case 58:  /* *muls_di */
    case 57:  /* mulsidi3_64bit_dmul */
    case 56:  /* umulsidi3_64bit_hilo */
    case 55:  /* mulsidi3_64bit_hilo */
    case 54:  /* umulsidi3_64bit */
    case 53:  /* mulsidi3_64bit */
    case 52:  /* umulsidi3_32bit_r4000 */
    case 51:  /* mulsidi3_32bit_r4000 */
    case 50:  /* umulsidi3_32bit */
    case 49:  /* mulsidi3_32bit */
    case 48:  /* *muls */
    case 47:  /* *mul_sub_si */
    case 46:  /* *msac2 */
    case 45:  /* *macc2 */
    case 44:  /* *msac_using_macc */
    case 43:  /* *msac */
    case 42:  /* *macc */
    case 41:  /* *mul_acc_si_r3900 */
    case 40:  /* *mul_acc_si */
    case 39:  /* muldi3_r4000 */
    case 38:  /* mulsi3_r4000 */
    case 37:  /* muldi3_internal */
    case 36:  /* mulsi3_internal */
    case 35:  /* muldi3_mul3 */
    case 34:  /* mulsi3_mul3 */
      return MAY_CLOBBER_HILO_YES;

    default:
      return MAY_CLOBBER_HILO_NO;

    }
}

enum attr_mode
get_attr_mode (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 340:  /* *movti */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_TI;
        }

    case 278:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_DI;
        }

    case 531:  /* sunordered_sf */
    case 532:  /* suneq_sf */
    case 533:  /* sunlt_sf */
    case 534:  /* sunle_sf */
    case 535:  /* seq_sf */
    case 536:  /* slt_sf */
    case 537:  /* sle_sf */
    case 538:  /* sunordered_df */
    case 539:  /* suneq_df */
    case 540:  /* sunlt_df */
    case 541:  /* sunle_df */
    case 542:  /* seq_df */
    case 543:  /* slt_df */
    case 544:  /* sle_df */
    case 545:  /* sge_sf */
    case 546:  /* sgt_sf */
    case 547:  /* sunge_sf */
    case 548:  /* sungt_sf */
    case 549:  /* sge_df */
    case 550:  /* sgt_df */
    case 551:  /* sunge_df */
    case 552:  /* sungt_df */
    case 714:  /* mips_cabs_cond_s */
    case 715:  /* mips_cabs_cond_d */
    case 716:  /* mips_c_cond_4s */
    case 717:  /* mips_cabs_cond_4s */
    case 718:  /* mips_c_cond_ps */
    case 719:  /* mips_cabs_cond_ps */
    case 720:  /* sunordered_ps */
    case 721:  /* suneq_ps */
    case 722:  /* sunlt_ps */
    case 723:  /* sunle_ps */
    case 724:  /* seq_ps */
    case 725:  /* slt_ps */
    case 726:  /* sle_ps */
    case 727:  /* sge_ps */
    case 728:  /* sgt_ps */
    case 729:  /* sunge_ps */
    case 730:  /* sungt_ps */
      return MODE_FPSW;

    case 342:  /* *movtf */
    case 343:  /* *movtf_mips16 */
      return MODE_TF;

    case 9:  /* adddf3 */
    case 22:  /* subdf3 */
    case 28:  /* *muldf3 */
    case 30:  /* *muldf3_r4300 */
    case 78:  /* *madd4df */
    case 81:  /* *madd3df */
    case 84:  /* *msub4df */
    case 87:  /* *msub3df */
    case 90:  /* *nmadd4df */
    case 93:  /* *nmadd3df */
    case 96:  /* *nmadd4df_fastmath */
    case 99:  /* *nmadd3df_fastmath */
    case 102:  /* *nmsub4df */
    case 105:  /* *nmsub3df */
    case 108:  /* *nmsub4df_fastmath */
    case 111:  /* *nmsub3df_fastmath */
    case 114:  /* *divdf3 */
    case 117:  /* *recipdf3 */
    case 130:  /* sqrtdf2 */
    case 133:  /* *rsqrtdfa */
    case 136:  /* *rsqrtdfb */
    case 139:  /* absdf2 */
    case 149:  /* negdf2 */
    case 230:  /* extendsfdf2 */
    case 231:  /* fix_truncdfsi2_insn */
    case 232:  /* fix_truncdfsi2_macro */
    case 235:  /* fix_truncdfdi2 */
    case 237:  /* floatsidf2 */
    case 238:  /* floatdidf2 */
    case 301:  /* *ldxc1_si */
    case 304:  /* *ldxc1_di */
    case 307:  /* *sdxc1_si */
    case 310:  /* *sdxc1_di */
    case 337:  /* *movdf_hardfloat */
    case 338:  /* *movdf_softfloat */
    case 339:  /* *movdf_mips16 */
    case 344:  /* *movv2sf */
    case 614:  /* *movdf_on_si */
    case 615:  /* *movdf_on_di */
    case 616:  /* *movdf_on_cc */
    case 738:  /* mips_rsqrt1_d */
    case 741:  /* mips_rsqrt2_d */
    case 744:  /* mips_recip1_d */
    case 747:  /* mips_recip2_d */
      return MODE_DF;

    case 8:  /* addsf3 */
    case 10:  /* addv2sf3 */
    case 21:  /* subsf3 */
    case 23:  /* subv2sf3 */
    case 27:  /* *mulsf3 */
    case 29:  /* *mulsf3_r4300 */
    case 31:  /* mulv2sf3 */
    case 77:  /* *madd4sf */
    case 79:  /* *madd4v2sf */
    case 80:  /* *madd3sf */
    case 82:  /* *madd3v2sf */
    case 83:  /* *msub4sf */
    case 85:  /* *msub4v2sf */
    case 86:  /* *msub3sf */
    case 88:  /* *msub3v2sf */
    case 89:  /* *nmadd4sf */
    case 91:  /* *nmadd4v2sf */
    case 92:  /* *nmadd3sf */
    case 94:  /* *nmadd3v2sf */
    case 95:  /* *nmadd4sf_fastmath */
    case 97:  /* *nmadd4v2sf_fastmath */
    case 98:  /* *nmadd3sf_fastmath */
    case 100:  /* *nmadd3v2sf_fastmath */
    case 101:  /* *nmsub4sf */
    case 103:  /* *nmsub4v2sf */
    case 104:  /* *nmsub3sf */
    case 106:  /* *nmsub3v2sf */
    case 107:  /* *nmsub4sf_fastmath */
    case 109:  /* *nmsub4v2sf_fastmath */
    case 110:  /* *nmsub3sf_fastmath */
    case 112:  /* *nmsub3v2sf_fastmath */
    case 113:  /* *divsf3 */
    case 115:  /* *divv2sf3 */
    case 116:  /* *recipsf3 */
    case 118:  /* *recipv2sf3 */
    case 129:  /* sqrtsf2 */
    case 131:  /* sqrtv2sf2 */
    case 132:  /* *rsqrtsfa */
    case 134:  /* *rsqrtv2sfa */
    case 135:  /* *rsqrtsfb */
    case 137:  /* *rsqrtv2sfb */
    case 138:  /* abssf2 */
    case 140:  /* absv2sf2 */
    case 148:  /* negsf2 */
    case 150:  /* negv2sf2 */
    case 167:  /* truncdfsf2 */
    case 233:  /* fix_truncsfsi2_insn */
    case 234:  /* fix_truncsfsi2_macro */
    case 236:  /* fix_truncsfdi2 */
    case 239:  /* floatsisf2 */
    case 240:  /* floatdisf2 */
    case 300:  /* *lwxc1_si */
    case 302:  /* *ldxc1_si */
    case 303:  /* *lwxc1_di */
    case 305:  /* *ldxc1_di */
    case 306:  /* *swxc1_si */
    case 308:  /* *sdxc1_si */
    case 309:  /* *swxc1_di */
    case 311:  /* *sdxc1_di */
    case 334:  /* *movsf_hardfloat */
    case 335:  /* *movsf_softfloat */
    case 336:  /* *movsf_mips16 */
    case 611:  /* *movsf_on_si */
    case 612:  /* *movsf_on_di */
    case 613:  /* *movsf_on_cc */
    case 701:  /* *movcc_v2sf_si */
    case 702:  /* *movcc_v2sf_di */
    case 703:  /* mips_cond_move_tf_ps */
    case 704:  /* vec_perm_const_ps */
    case 705:  /* vec_concatv2sf */
    case 706:  /* vec_extractv2sf */
    case 707:  /* mips_alnv_ps */
    case 708:  /* mips_addr_ps */
    case 710:  /* mips_cvt_pw_ps */
    case 711:  /* mips_cvt_ps_pw */
    case 712:  /* mips_mulr_ps */
    case 713:  /* *mips_abs_ps */
    case 737:  /* mips_rsqrt1_s */
    case 739:  /* mips_rsqrt1_ps */
    case 740:  /* mips_rsqrt2_s */
    case 742:  /* mips_rsqrt2_ps */
    case 743:  /* mips_recip1_s */
    case 745:  /* mips_recip1_ps */
    case 746:  /* mips_recip2_s */
    case 748:  /* mips_recip2_ps */
      return MODE_SF;

    case 341:  /* *movti_mips16 */
      return MODE_TI;

    case 12:  /* *adddi3 */
    case 14:  /* *adddi3_mips16 */
    case 25:  /* subdi3 */
    case 26:  /* *subsi3_extended */
    case 33:  /* muldi3_mul3_loongson */
    case 35:  /* muldi3_mul3 */
    case 37:  /* muldi3_internal */
    case 39:  /* muldi3_r4000 */
    case 57:  /* mulsidi3_64bit_dmul */
    case 68:  /* smuldi3_highpart_internal */
    case 69:  /* umuldi3_highpart_internal */
    case 70:  /* mulditi3_internal */
    case 71:  /* umulditi3_internal */
    case 72:  /* mulditi3_r4000 */
    case 73:  /* umulditi3_r4000 */
    case 120:  /* divmoddi4_internal */
    case 122:  /* udivmoddi4_internal */
    case 127:  /* divmoddi4_hilo_ti */
    case 128:  /* udivmoddi4_hilo_ti */
    case 142:  /* clzdi2 */
    case 144:  /* popcountdi2 */
    case 147:  /* negdi2 */
    case 152:  /* one_cmpldi2 */
    case 154:  /* *anddi3 */
    case 156:  /* *anddi3_mips16 */
    case 158:  /* *iordi3 */
    case 160:  /* *iordi3_mips16 */
    case 162:  /* *mips.md:2981 */
    case 164:  /* *mips.md:2992 */
    case 166:  /* *nordi3 */
    case 183:  /* *zero_extendsidi2 */
    case 184:  /* *zero_extendsidi2_dext */
    case 186:  /* *zero_extendqidi2 */
    case 188:  /* *zero_extendhidi2 */
    case 190:  /* *zero_extendqidi2_mips16e */
    case 192:  /* *zero_extendhidi2_mips16e */
    case 194:  /* *zero_extendqidi2_mips16 */
    case 196:  /* *zero_extendhidi2_mips16 */
    case 200:  /* *zero_extenddi_truncqi */
    case 202:  /* *zero_extenddi_trunchi */
    case 204:  /* extendsidi2 */
    case 206:  /* *extendqidi2_mips16e */
    case 208:  /* *extendhidi2_mips16e */
    case 210:  /* *extendqidi2 */
    case 212:  /* *extendhidi2 */
    case 214:  /* *extendqidi2_seb */
    case 216:  /* *extendhidi2_seh */
    case 220:  /* *extenddi_truncateqi */
    case 221:  /* *extenddi_truncatehi */
    case 226:  /* *extenddi_truncateqi_exts */
    case 228:  /* *extenddi_truncatehi_exts */
    case 242:  /* *extvdi */
    case 244:  /* *extzvdi */
    case 247:  /* *insvdi */
    case 249:  /* *cinsdi */
    case 251:  /* mov_ldl */
    case 253:  /* mov_ldr */
    case 255:  /* mov_sdl */
    case 257:  /* mov_sdr */
    case 263:  /* *xgot_hidi */
    case 265:  /* *xgot_lodi */
    case 267:  /* *got_dispdi */
    case 269:  /* *got_pagedi */
    case 271:  /* load_gotdi */
    case 273:  /* *lowdi */
    case 275:  /* *lowdi_mips16 */
    case 277:  /* *movdi_ra */
    case 279:  /* *movdi_32bit_mips16 */
    case 280:  /* *movdi_64bit */
    case 281:  /* *movdi_64bit_mips16 */
    case 347:  /* mfhidi_ti */
    case 357:  /* load_lowtf */
    case 364:  /* load_hightf */
    case 371:  /* store_wordtf */
    case 378:  /* mthc1tf */
    case 385:  /* mfhc1tf */
    case 412:  /* *ashldi3 */
    case 413:  /* *ashrdi3 */
    case 414:  /* *lshrdi3 */
    case 421:  /* *ashldi3_mips16 */
    case 422:  /* *ashrdi3_mips16 */
    case 423:  /* *lshrdi3_mips16 */
    case 426:  /* rotrdi3 */
    case 456:  /* *seq_zero_disi */
    case 458:  /* *seq_zero_didi */
    case 460:  /* *seq_zero_disi_mips16 */
    case 462:  /* *seq_zero_didi_mips16 */
    case 464:  /* *seq_disi_seq */
    case 466:  /* *seq_didi_seq */
    case 468:  /* *sne_zero_disi */
    case 470:  /* *sne_zero_didi */
    case 472:  /* *sne_disi_sne */
    case 474:  /* *sne_didi_sne */
    case 477:  /* *sgt_disi */
    case 478:  /* *sgtu_disi */
    case 481:  /* *sgt_didi */
    case 482:  /* *sgtu_didi */
    case 485:  /* *sgt_disi_mips16 */
    case 486:  /* *sgtu_disi_mips16 */
    case 489:  /* *sgt_didi_mips16 */
    case 490:  /* *sgtu_didi_mips16 */
    case 493:  /* *sge_disi */
    case 494:  /* *sgeu_disi */
    case 497:  /* *sge_didi */
    case 498:  /* *sgeu_didi */
    case 501:  /* *slt_disi */
    case 502:  /* *sltu_disi */
    case 505:  /* *slt_didi */
    case 506:  /* *sltu_didi */
    case 509:  /* *slt_disi_mips16 */
    case 510:  /* *sltu_disi_mips16 */
    case 513:  /* *slt_didi_mips16 */
    case 514:  /* *sltu_didi_mips16 */
    case 517:  /* *sle_disi */
    case 518:  /* *sleu_disi */
    case 521:  /* *sle_didi */
    case 522:  /* *sleu_didi */
    case 525:  /* *sle_disi_mips16 */
    case 526:  /* *sleu_disi_mips16 */
    case 529:  /* *sle_didi_mips16 */
    case 530:  /* *sleu_didi_mips16 */
    case 566:  /* probe_stack_range_di */
    case 584:  /* load_calldi */
    case 606:  /* *movdi_on_si */
    case 608:  /* *movdi_on_di */
    case 610:  /* *movdi_on_cc */
    case 623:  /* tls_get_tp_di */
    case 625:  /* *tls_get_tp_di_split */
    case 627:  /* tls_get_tp_mips16_di */
    case 629:  /* *tls_get_tp_mips16_call_di */
    case 833:  /* mips_lbx_extdi_si */
    case 834:  /* mips_lbux_extdi_si */
    case 837:  /* mips_lhx_extdi_si */
    case 838:  /* mips_lhux_extdi_si */
    case 841:  /* mips_lbx_extdi_di */
    case 842:  /* mips_lbux_extdi_di */
    case 845:  /* mips_lhx_extdi_di */
    case 846:  /* mips_lhux_extdi_di */
    case 848:  /* mips_ldx_si */
    case 850:  /* mips_ldx_di */
    case 851:  /* *mips_lwx_si_ext */
    case 852:  /* *mips_lwux_si_ext */
    case 853:  /* *mips_lwx_di_ext */
    case 854:  /* *mips_lwux_di_ext */
    case 902:  /* adddq3 */
    case 906:  /* addudq3 */
    case 909:  /* addda3 */
    case 912:  /* adduda3 */
    case 928:  /* subdq3 */
    case 932:  /* subudq3 */
    case 935:  /* subda3 */
    case 938:  /* subuda3 */
    case 956:  /* movv2si_internal */
    case 957:  /* movv4hi_internal */
    case 958:  /* movv8qi_internal */
    case 959:  /* loongson_vec_init1_v4hi */
    case 960:  /* loongson_vec_init1_v8qi */
    case 1057:  /* divdi3 */
    case 1058:  /* udivdi3 */
    case 1061:  /* moddi3 */
    case 1062:  /* umoddi3 */
      return MODE_DI;

    case 172:  /* *ashr_trunchi */
    case 175:  /* *lshr32_trunchi */
    case 179:  /* *ashr_trunchi_exts */
    case 180:  /* *lshr_trunchi_exts */
    case 197:  /* *zero_extendqihi2 */
    case 198:  /* *zero_extendqihi2_mips16 */
    case 203:  /* *zero_extendhi_truncqi */
    case 330:  /* *movhi_internal */
    case 331:  /* *movhi_mips16 */
    case 900:  /* addhq3 */
    case 904:  /* adduhq3 */
    case 907:  /* addha3 */
    case 910:  /* adduha3 */
    case 914:  /* usadduhq3 */
    case 915:  /* usadduha3 */
    case 919:  /* ssaddhq3 */
    case 921:  /* ssaddha3 */
    case 926:  /* subhq3 */
    case 930:  /* subuhq3 */
    case 933:  /* subha3 */
    case 936:  /* subuha3 */
    case 940:  /* ussubuhq3 */
    case 941:  /* ussubuha3 */
    case 945:  /* sssubhq3 */
    case 947:  /* sssubha3 */
    case 952:  /* ssmulhq3 */
      return MODE_HI;

    case 171:  /* *ashr_truncqi */
    case 174:  /* *lshr32_truncqi */
    case 177:  /* *ashr_truncqi_exts */
    case 178:  /* *lshr_truncqi_exts */
    case 332:  /* *movqi_internal */
    case 333:  /* *movqi_mips16 */
    case 899:  /* addqq3 */
    case 903:  /* adduqq3 */
    case 913:  /* usadduqq3 */
    case 925:  /* subqq3 */
    case 929:  /* subuqq3 */
    case 939:  /* ussubuqq3 */
      return MODE_QI;

    case 556:  /* indirect_jump_si */
    case 557:  /* indirect_jump_di */
    case 560:  /* tablejump_si */
    case 561:  /* tablejump_di */
    case 564:  /* blockage */
    case 567:  /* *return */
    case 568:  /* *simple_return */
    case 569:  /* return_internal */
    case 570:  /* simple_return_internal */
    case 571:  /* mips_eret */
    case 572:  /* mips_deret */
    case 573:  /* mips_di */
    case 574:  /* mips_ehb */
    case 603:  /* nop */
      return MODE_NONE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 1:  /* ls2_alu1_turn_enabled_insn */
    case 2:  /* ls2_alu2_turn_enabled_insn */
    case 3:  /* ls2_falu1_turn_enabled_insn */
    case 4:  /* ls2_falu2_turn_enabled_insn */
    case 5:  /* trap */
    case 6:  /* *conditional_trapsi */
    case 7:  /* *conditional_trapdi */
    case 17:  /* *baddu_si_eb */
    case 18:  /* *baddu_si_el */
    case 19:  /* *baddu_disi */
    case 20:  /* *baddu_didi */
    case 44:  /* *msac_using_macc */
    case 258:  /* *lea_high64 */
    case 259:  /* *lea64 */
    case 260:  /* *unshifted_high */
    case 261:  /* *unshifted_high */
    case 386:  /* loadgp_newabi_si */
    case 387:  /* loadgp_newabi_di */
    case 388:  /* loadgp_absolute_si */
    case 389:  /* loadgp_absolute_di */
    case 390:  /* loadgp_blockage */
    case 391:  /* loadgp_rtp_si */
    case 392:  /* loadgp_rtp_di */
    case 393:  /* copygp_mips16_si */
    case 394:  /* copygp_mips16_di */
    case 395:  /* potential_cprestore_si */
    case 396:  /* potential_cprestore_di */
    case 397:  /* cprestore_si */
    case 398:  /* cprestore_di */
    case 399:  /* use_cprestore_si */
    case 400:  /* use_cprestore_di */
    case 401:  /* sync */
    case 402:  /* synci */
    case 403:  /* rdhwr_synci_step_si */
    case 404:  /* rdhwr_synci_step_di */
    case 405:  /* clear_hazard_si */
    case 406:  /* clear_hazard_di */
    case 407:  /* mips_cache */
    case 408:  /* r10k_cache_barrier */
    case 427:  /* bswaphi2 */
    case 428:  /* bswapsi2 */
    case 429:  /* bswapdi2 */
    case 430:  /* wsbh */
    case 431:  /* dsbh */
    case 432:  /* dshd */
    case 433:  /* *branch_fp */
    case 434:  /* *branch_fp_inverted */
    case 435:  /* *branch_ordersi */
    case 436:  /* *branch_orderdi */
    case 437:  /* *branch_ordersi_inverted */
    case 438:  /* *branch_orderdi_inverted */
    case 439:  /* *branch_equalitysi */
    case 440:  /* *branch_equalitydi */
    case 441:  /* *branch_equalitysi_inverted */
    case 442:  /* *branch_equalitydi_inverted */
    case 443:  /* *branch_equalitysi_mips16 */
    case 444:  /* *branch_equalitydi_mips16 */
    case 445:  /* *branch_equalitysi_mips16_inverted */
    case 446:  /* *branch_equalitydi_mips16_inverted */
    case 447:  /* *branch_bit0si */
    case 448:  /* *branch_bit1si */
    case 449:  /* *branch_bit0di */
    case 450:  /* *branch_bit1di */
    case 451:  /* *branch_bit0si_inverted */
    case 452:  /* *branch_bit1si_inverted */
    case 453:  /* *branch_bit0di_inverted */
    case 454:  /* *branch_bit1di_inverted */
    case 553:  /* *jump_absolute */
    case 554:  /* *jump_pic */
    case 555:  /* *jump_mips16 */
    case 558:  /* indirect_jump_and_restore_si */
    case 559:  /* indirect_jump_and_restore_di */
    case 562:  /* casesi_internal_mips16_si */
    case 563:  /* casesi_internal_mips16_di */
    case 577:  /* eh_set_lr_si */
    case 578:  /* eh_set_lr_di */
    case 579:  /* restore_gp_si */
    case 580:  /* restore_gp_di */
    case 581:  /* move_gpsi */
    case 582:  /* move_gpdi */
    case 585:  /* set_got_version */
    case 586:  /* update_got_version */
    case 587:  /* sibcall_internal */
    case 588:  /* sibcall_value_internal */
    case 589:  /* sibcall_value_multiple_internal */
    case 590:  /* call_internal */
    case 591:  /* call_split */
    case 592:  /* call_internal_direct */
    case 593:  /* call_direct_split */
    case 594:  /* call_value_internal */
    case 595:  /* call_value_split */
    case 596:  /* call_value_internal_direct */
    case 597:  /* call_value_direct_split */
    case 598:  /* call_value_multiple_internal */
    case 599:  /* call_value_multiple_split */
    case 600:  /* prefetch */
    case 601:  /* *prefetch_indexed_si */
    case 602:  /* *prefetch_indexed_di */
    case 604:  /* hazard_nop */
    case 617:  /* consttable_tls_reloc */
    case 618:  /* consttable_int */
    case 619:  /* consttable_float */
    case 620:  /* align */
    case 621:  /* *mips16e_save_restore */
    case 630:  /* *memory_barrier */
    case 631:  /* sync_compare_and_swapsi */
    case 632:  /* sync_compare_and_swapdi */
    case 633:  /* compare_and_swap_12 */
    case 634:  /* sync_addsi */
    case 635:  /* sync_adddi */
    case 636:  /* sync_add_12 */
    case 637:  /* sync_sub_12 */
    case 638:  /* sync_ior_12 */
    case 639:  /* sync_xor_12 */
    case 640:  /* sync_and_12 */
    case 641:  /* sync_old_add_12 */
    case 642:  /* sync_old_sub_12 */
    case 643:  /* sync_old_ior_12 */
    case 644:  /* sync_old_xor_12 */
    case 645:  /* sync_old_and_12 */
    case 646:  /* sync_new_add_12 */
    case 647:  /* sync_new_sub_12 */
    case 648:  /* sync_new_ior_12 */
    case 649:  /* sync_new_xor_12 */
    case 650:  /* sync_new_and_12 */
    case 651:  /* sync_nand_12 */
    case 652:  /* sync_old_nand_12 */
    case 653:  /* sync_new_nand_12 */
    case 654:  /* sync_subsi */
    case 655:  /* sync_subdi */
    case 656:  /* sync_old_addsi */
    case 657:  /* sync_old_adddi */
    case 658:  /* sync_old_subsi */
    case 659:  /* sync_old_subdi */
    case 660:  /* sync_new_addsi */
    case 661:  /* sync_new_adddi */
    case 662:  /* sync_new_subsi */
    case 663:  /* sync_new_subdi */
    case 664:  /* sync_iorsi */
    case 665:  /* sync_xorsi */
    case 666:  /* sync_andsi */
    case 667:  /* sync_iordi */
    case 668:  /* sync_xordi */
    case 669:  /* sync_anddi */
    case 670:  /* sync_old_iorsi */
    case 671:  /* sync_old_xorsi */
    case 672:  /* sync_old_andsi */
    case 673:  /* sync_old_iordi */
    case 674:  /* sync_old_xordi */
    case 675:  /* sync_old_anddi */
    case 676:  /* sync_new_iorsi */
    case 677:  /* sync_new_xorsi */
    case 678:  /* sync_new_andsi */
    case 679:  /* sync_new_iordi */
    case 680:  /* sync_new_xordi */
    case 681:  /* sync_new_anddi */
    case 682:  /* sync_nandsi */
    case 683:  /* sync_nanddi */
    case 684:  /* sync_old_nandsi */
    case 685:  /* sync_old_nanddi */
    case 686:  /* sync_new_nandsi */
    case 687:  /* sync_new_nanddi */
    case 688:  /* sync_lock_test_and_setsi */
    case 689:  /* sync_lock_test_and_setdi */
    case 690:  /* test_and_set_12 */
    case 691:  /* atomic_compare_and_swapsi */
    case 692:  /* atomic_compare_and_swapdi */
    case 693:  /* atomic_exchangesi_llsc */
    case 694:  /* atomic_exchangedi_llsc */
    case 695:  /* atomic_exchangesi_swap */
    case 696:  /* atomic_exchangedi_swap */
    case 697:  /* atomic_fetch_addsi_llsc */
    case 698:  /* atomic_fetch_adddi_llsc */
    case 699:  /* atomic_fetch_addsi_ldadd */
    case 700:  /* atomic_fetch_adddi_ldadd */
    case 709:  /* reduc_splus_v2sf */
    case 731:  /* bc1any4t */
    case 732:  /* bc1any4f */
    case 733:  /* bc1any2t */
    case 734:  /* bc1any2f */
    case 735:  /* *branch_upper_lower */
    case 736:  /* *branch_upper_lower_inverted */
    case 855:  /* mips_bposge */
    case 961:  /* *vec_concatv2si */
    case 962:  /* vec_pack_ssat_v2si */
    case 963:  /* vec_pack_ssat_v4hi */
    case 964:  /* vec_pack_usat_v4hi */
    case 965:  /* addv2si3 */
    case 966:  /* addv4hi3 */
    case 967:  /* addv8qi3 */
    case 968:  /* loongson_paddd */
    case 969:  /* ssaddv4hi3 */
    case 970:  /* ssaddv8qi3 */
    case 971:  /* usaddv4hi3 */
    case 972:  /* usaddv8qi3 */
    case 973:  /* loongson_pandn_w */
    case 974:  /* loongson_pandn_h */
    case 975:  /* loongson_pandn_b */
    case 976:  /* loongson_pandn_d */
    case 977:  /* andv2si3 */
    case 978:  /* andv4hi3 */
    case 979:  /* andv8qi3 */
    case 980:  /* iorv2si3 */
    case 981:  /* iorv4hi3 */
    case 982:  /* iorv8qi3 */
    case 983:  /* xorv2si3 */
    case 984:  /* xorv4hi3 */
    case 985:  /* xorv8qi3 */
    case 986:  /* *loongson_nor */
    case 987:  /* *loongson_nor */
    case 988:  /* *loongson_nor */
    case 989:  /* one_cmplv2si2 */
    case 990:  /* one_cmplv4hi2 */
    case 991:  /* one_cmplv8qi2 */
    case 992:  /* loongson_pavgh */
    case 993:  /* loongson_pavgb */
    case 994:  /* loongson_pcmpeqw */
    case 995:  /* loongson_pcmpeqh */
    case 996:  /* loongson_pcmpeqb */
    case 997:  /* loongson_pcmpgtw */
    case 998:  /* loongson_pcmpgth */
    case 999:  /* loongson_pcmpgtb */
    case 1000:  /* loongson_pextrh */
    case 1001:  /* loongson_pinsrh_0 */
    case 1002:  /* loongson_pinsrh_1 */
    case 1003:  /* loongson_pinsrh_2 */
    case 1004:  /* loongson_pinsrh_3 */
    case 1005:  /* *vec_setv4hi */
    case 1006:  /* loongson_pmaddhw */
    case 1007:  /* smaxv4hi3 */
    case 1008:  /* umaxv8qi3 */
    case 1009:  /* sminv4hi3 */
    case 1010:  /* uminv8qi3 */
    case 1011:  /* loongson_pmovmskb */
    case 1012:  /* umulv4hi3_highpart */
    case 1013:  /* smulv4hi3_highpart */
    case 1014:  /* mulv4hi3 */
    case 1015:  /* loongson_pmuluw */
    case 1016:  /* loongson_pasubub */
    case 1017:  /* loongson_biadd */
    case 1018:  /* reduc_uplus_v8qi */
    case 1019:  /* loongson_psadbh */
    case 1020:  /* loongson_pshufh */
    case 1021:  /* ashlv2si3 */
    case 1022:  /* ashlv4hi3 */
    case 1023:  /* ashrv2si3 */
    case 1024:  /* ashrv4hi3 */
    case 1025:  /* lshrv2si3 */
    case 1026:  /* lshrv4hi3 */
    case 1027:  /* subv2si3 */
    case 1028:  /* subv4hi3 */
    case 1029:  /* subv8qi3 */
    case 1030:  /* loongson_psubd */
    case 1031:  /* sssubv4hi3 */
    case 1032:  /* sssubv8qi3 */
    case 1033:  /* ussubv4hi3 */
    case 1034:  /* ussubv8qi3 */
    case 1035:  /* loongson_punpckhbh */
    case 1036:  /* loongson_punpckhhw */
    case 1037:  /* loongson_punpckhhw_qi */
    case 1038:  /* loongson_punpckhwd */
    case 1039:  /* loongson_punpckhwd_qi */
    case 1040:  /* loongson_punpckhwd_hi */
    case 1041:  /* loongson_punpcklbh */
    case 1042:  /* loongson_punpcklhw */
    case 1043:  /* *loongson_punpcklhw_qi */
    case 1044:  /* loongson_punpcklwd */
    case 1045:  /* *loongson_punpcklwd_qi */
    case 1046:  /* *loongson_punpcklwd_hi */
    case 1047:  /* vec_shl_v2si */
    case 1048:  /* vec_shl_v4hi */
    case 1049:  /* vec_shl_v8qi */
    case 1050:  /* vec_shl_di */
    case 1051:  /* vec_shr_v2si */
    case 1052:  /* vec_shr_v4hi */
    case 1053:  /* vec_shr_v8qi */
    case 1054:  /* vec_shr_di */
      return MODE_UNKNOWN;

    default:
      return MODE_SI;

    }
}

enum attr_move_type
get_attr_move_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 343:  /* *movtf_mips16 */
    case 339:  /* *movdf_mips16 */
    case 336:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_LOAD;
        }
      else
        {
	  return MOVE_TYPE_STORE;
        }

    case 299:  /* *movv4uqq_mips16 */
    case 298:  /* *movv4qq_mips16 */
    case 297:  /* *movv2uha_mips16 */
    case 296:  /* *movv2ha_mips16 */
    case 295:  /* *movv2uhq_mips16 */
    case 294:  /* *movv2hq_mips16 */
    case 293:  /* *movv4qi_mips16 */
    case 292:  /* *movv2hi_mips16 */
    case 291:  /* *movsi_mips16 */
    case 281:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_CONSTN;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_LOADPOOL;
        }
      else if (which_alternative == 7)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 8)
        {
	  return MOVE_TYPE_STORE;
        }
      else
        {
	  return MOVE_TYPE_MFLO;
        }

    case 341:  /* *movti_mips16 */
    case 333:  /* *movqi_mips16 */
    case 331:  /* *movhi_mips16 */
    case 279:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_CONSTN;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_STORE;
        }
      else
        {
	  return MOVE_TYPE_MFLO;
        }

    case 204:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return MOVE_TYPE_MOVE;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 156:  /* *anddi3_mips16 */
    case 155:  /* *andsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_SHIFT_SHIFT;
        }
      else
        {
	  return MOVE_TYPE_LOGICAL;
        }

    case 154:  /* *anddi3 */
    case 153:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_ANDI;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_EXT_INS;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_SHIFT_SHIFT;
        }
      else
        {
	  return MOVE_TYPE_LOGICAL;
        }

    case 168:  /* truncdiqi2 */
    case 169:  /* truncdihi2 */
    case 170:  /* truncdisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_SLL0;
        }
      else
        {
	  return MOVE_TYPE_STORE;
        }

    case 184:  /* *zero_extendsidi2_dext */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_ARITH;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 185:  /* *zero_extendqisi2 */
    case 186:  /* *zero_extendqidi2 */
    case 187:  /* *zero_extendhisi2 */
    case 188:  /* *zero_extendhidi2 */
    case 197:  /* *zero_extendqihi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_ANDI;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 183:  /* *zero_extendsidi2 */
    case 209:  /* *extendqisi2 */
    case 210:  /* *extendqidi2 */
    case 211:  /* *extendhisi2 */
    case 212:  /* *extendhidi2 */
    case 218:  /* *extendqihi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_SHIFT_SHIFT;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 205:  /* *extendqisi2_mips16e */
    case 206:  /* *extendqidi2_mips16e */
    case 207:  /* *extendhisi2_mips16e */
    case 208:  /* *extendhidi2_mips16e */
    case 213:  /* *extendqisi2_seb */
    case 214:  /* *extendqidi2_seb */
    case 215:  /* *extendhisi2_seh */
    case 216:  /* *extendhidi2_seh */
    case 217:  /* *extendqihi2_mips16e */
    case 219:  /* *extendqihi2_seb */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_SIGNEXT;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 278:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_IMUL;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_MTLO;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_MFLO;
        }
      else if (which_alternative == 7)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 8)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 9)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 10)
        {
	  return MOVE_TYPE_FPSTORE;
        }
      else if (which_alternative == 11)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 12)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 13)
        {
	  return MOVE_TYPE_MFC;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case 280:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 7)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 8)
        {
	  return MOVE_TYPE_FPSTORE;
        }
      else if (which_alternative == 9)
        {
	  return MOVE_TYPE_MTLO;
        }
      else if (which_alternative == 10)
        {
	  return MOVE_TYPE_MFLO;
        }
      else if (which_alternative == 11)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 12)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 13)
        {
	  return MOVE_TYPE_MFC;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case 282:  /* *movsi_internal */
    case 283:  /* *movv2hi_internal */
    case 284:  /* *movv4qi_internal */
    case 285:  /* *movv2hq_internal */
    case 286:  /* *movv2uhq_internal */
    case 287:  /* *movv2ha_internal */
    case 288:  /* *movv2uha_internal */
    case 289:  /* *movv4qq_internal */
    case 290:  /* *movv4uqq_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 7)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 8)
        {
	  return MOVE_TYPE_FPSTORE;
        }
      else if (which_alternative == 9)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 10)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 11)
        {
	  return MOVE_TYPE_MTLO;
        }
      else if (which_alternative == 12)
        {
	  return MOVE_TYPE_MFLO;
        }
      else if (which_alternative == 13)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 14)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 15)
        {
	  return MOVE_TYPE_MFC;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case 330:  /* *movhi_internal */
    case 332:  /* *movqi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_MTLO;
        }
      else
        {
	  return MOVE_TYPE_MFLO;
        }

    case 335:  /* *movsf_softfloat */
    case 338:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_LOAD;
        }
      else
        {
	  return MOVE_TYPE_STORE;
        }

    case 340:  /* *movti */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_IMUL;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_MTLO;
        }
      else
        {
	  return MOVE_TYPE_MFLO;
        }

    case 342:  /* *movtf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case 334:  /* *movsf_hardfloat */
    case 337:  /* *movdf_hardfloat */
    case 344:  /* *movv2sf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_FMOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_FPSTORE;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 7)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 8)
        {
	  return MOVE_TYPE_LOAD;
        }
      else
        {
	  return MOVE_TYPE_STORE;
        }

    case 351:  /* load_lowdf */
    case 352:  /* load_lowdi */
    case 353:  /* load_lowv2sf */
    case 354:  /* load_lowv2si */
    case 355:  /* load_lowv4hi */
    case 356:  /* load_lowv8qi */
    case 357:  /* load_lowtf */
    case 358:  /* load_highdf */
    case 359:  /* load_highdi */
    case 360:  /* load_highv2sf */
    case 361:  /* load_highv2si */
    case 362:  /* load_highv4hi */
    case 363:  /* load_highv8qi */
    case 364:  /* load_hightf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MTC;
        }
      else
        {
	  return MOVE_TYPE_FPLOAD;
        }

    case 365:  /* store_worddf */
    case 366:  /* store_worddi */
    case 367:  /* store_wordv2sf */
    case 368:  /* store_wordv2si */
    case 369:  /* store_wordv4hi */
    case 370:  /* store_wordv8qi */
    case 371:  /* store_wordtf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MFC;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case 956:  /* movv2si_internal */
    case 957:  /* movv4hi_internal */
    case 958:  /* movv8qi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_FPSTORE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_STORE;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 220:  /* *extenddi_truncateqi */
    case 221:  /* *extenddi_truncatehi */
    case 222:  /* *extendsi_truncateqi */
    case 223:  /* *extendsi_truncatehi */
    case 224:  /* *extendhi_truncateqi */
      return MOVE_TYPE_SHIFT_SHIFT;

    case 189:  /* *zero_extendqisi2_mips16e */
    case 190:  /* *zero_extendqidi2_mips16e */
    case 191:  /* *zero_extendhisi2_mips16e */
    case 192:  /* *zero_extendhidi2_mips16e */
      return MOVE_TYPE_ANDI;

    case 379:  /* mfhc1df */
    case 380:  /* mfhc1di */
    case 381:  /* mfhc1v2sf */
    case 382:  /* mfhc1v2si */
    case 383:  /* mfhc1v4hi */
    case 384:  /* mfhc1v8qi */
    case 385:  /* mfhc1tf */
      return MOVE_TYPE_MFC;

    case 372:  /* mthc1df */
    case 373:  /* mthc1di */
    case 374:  /* mthc1v2sf */
    case 375:  /* mthc1v2si */
    case 376:  /* mthc1v4hi */
    case 377:  /* mthc1v8qi */
    case 378:  /* mthc1tf */
    case 959:  /* loongson_vec_init1_v4hi */
    case 960:  /* loongson_vec_init1_v8qi */
      return MOVE_TYPE_MTC;

    case 254:  /* mov_swl */
    case 255:  /* mov_sdl */
    case 256:  /* mov_swr */
    case 257:  /* mov_sdr */
    case 276:  /* *movsi_ra */
    case 277:  /* *movdi_ra */
      return MOVE_TYPE_STORE;

    case 193:  /* *zero_extendqisi2_mips16 */
    case 194:  /* *zero_extendqidi2_mips16 */
    case 195:  /* *zero_extendhisi2_mips16 */
    case 196:  /* *zero_extendhidi2_mips16 */
    case 198:  /* *zero_extendqihi2_mips16 */
    case 250:  /* mov_lwl */
    case 251:  /* mov_ldl */
    case 252:  /* mov_lwr */
    case 253:  /* mov_ldr */
      return MOVE_TYPE_LOAD;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return MOVE_TYPE_UNKNOWN;

    }
}

enum attr_sb1_fp_pipes
get_attr_sb1_fp_pipes (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      if ((
#line 79 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sb1.md"
(TARGET_FLOAT64)) && (! (
#line 80 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sb1.md"
(TARGET_FP_EXCEPTIONS))))
        {
	  return SB1_FP_PIPES_TWO;
        }
      else
        {
	  return SB1_FP_PIPES_ONE;
        }

    }
}

enum attr_single_insn
get_attr_single_insn (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO));

    }
}

int
get_attr_sync_memmodel (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 688:  /* sync_lock_test_and_setsi */
    case 689:  /* sync_lock_test_and_setdi */
    case 690:  /* test_and_set_12 */
      return 11 /* 0xb */;

    case 691:  /* atomic_compare_and_swapsi */
    case 692:  /* atomic_compare_and_swapdi */
      return 6;

    case 693:  /* atomic_exchangesi_llsc */
    case 694:  /* atomic_exchangedi_llsc */
    case 697:  /* atomic_fetch_addsi_llsc */
    case 698:  /* atomic_fetch_adddi_llsc */
      return 3;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 10 /* 0xa */;

    }
}

enum attr_sync_insn2
get_attr_sync_insn2 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 682:  /* sync_nandsi */
    case 683:  /* sync_nanddi */
    case 684:  /* sync_old_nandsi */
    case 685:  /* sync_old_nanddi */
    case 686:  /* sync_new_nandsi */
    case 687:  /* sync_new_nanddi */
      return SYNC_INSN2_NOT;

    case 651:  /* sync_nand_12 */
    case 652:  /* sync_old_nand_12 */
    case 653:  /* sync_new_nand_12 */
      return SYNC_INSN2_XOR;

    case 636:  /* sync_add_12 */
    case 637:  /* sync_sub_12 */
    case 638:  /* sync_ior_12 */
    case 639:  /* sync_xor_12 */
    case 640:  /* sync_and_12 */
    case 641:  /* sync_old_add_12 */
    case 642:  /* sync_old_sub_12 */
    case 643:  /* sync_old_ior_12 */
    case 644:  /* sync_old_xor_12 */
    case 645:  /* sync_old_and_12 */
    case 646:  /* sync_new_add_12 */
    case 647:  /* sync_new_sub_12 */
    case 648:  /* sync_new_ior_12 */
    case 649:  /* sync_new_xor_12 */
    case 650:  /* sync_new_and_12 */
      return SYNC_INSN2_AND;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return SYNC_INSN2_NOP;

    }
}

enum attr_sync_insn1
get_attr_sync_insn1 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 664:  /* sync_iorsi */
    case 667:  /* sync_iordi */
    case 670:  /* sync_old_iorsi */
    case 673:  /* sync_old_iordi */
    case 676:  /* sync_new_iorsi */
    case 679:  /* sync_new_iordi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return SYNC_INSN1_ORI;
        }
      else
        {
	  return SYNC_INSN1_OR;
        }

    case 665:  /* sync_xorsi */
    case 668:  /* sync_xordi */
    case 671:  /* sync_old_xorsi */
    case 674:  /* sync_old_xordi */
    case 677:  /* sync_new_xorsi */
    case 680:  /* sync_new_xordi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return SYNC_INSN1_XORI;
        }
      else
        {
	  return SYNC_INSN1_XOR;
        }

    case 666:  /* sync_andsi */
    case 669:  /* sync_anddi */
    case 672:  /* sync_old_andsi */
    case 675:  /* sync_old_anddi */
    case 678:  /* sync_new_andsi */
    case 681:  /* sync_new_anddi */
    case 682:  /* sync_nandsi */
    case 683:  /* sync_nanddi */
    case 684:  /* sync_old_nandsi */
    case 685:  /* sync_old_nanddi */
    case 686:  /* sync_new_nandsi */
    case 687:  /* sync_new_nanddi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return SYNC_INSN1_ANDI;
        }
      else
        {
	  return SYNC_INSN1_AND;
        }

    case 631:  /* sync_compare_and_swapsi */
    case 632:  /* sync_compare_and_swapdi */
    case 688:  /* sync_lock_test_and_setsi */
    case 689:  /* sync_lock_test_and_setdi */
    case 691:  /* atomic_compare_and_swapsi */
    case 692:  /* atomic_compare_and_swapdi */
    case 693:  /* atomic_exchangesi_llsc */
    case 694:  /* atomic_exchangedi_llsc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return SYNC_INSN1_LI;
        }
      else
        {
	  return SYNC_INSN1_MOVE;
        }

    case 634:  /* sync_addsi */
    case 635:  /* sync_adddi */
    case 656:  /* sync_old_addsi */
    case 657:  /* sync_old_adddi */
    case 660:  /* sync_new_addsi */
    case 661:  /* sync_new_adddi */
    case 697:  /* atomic_fetch_addsi_llsc */
    case 698:  /* atomic_fetch_adddi_llsc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return SYNC_INSN1_ADDIU;
        }
      else
        {
	  return SYNC_INSN1_ADDU;
        }

    case 639:  /* sync_xor_12 */
    case 644:  /* sync_old_xor_12 */
    case 649:  /* sync_new_xor_12 */
      return SYNC_INSN1_XOR;

    case 638:  /* sync_ior_12 */
    case 643:  /* sync_old_ior_12 */
    case 648:  /* sync_new_ior_12 */
      return SYNC_INSN1_OR;

    case 640:  /* sync_and_12 */
    case 645:  /* sync_old_and_12 */
    case 650:  /* sync_new_and_12 */
    case 651:  /* sync_nand_12 */
    case 652:  /* sync_old_nand_12 */
    case 653:  /* sync_new_nand_12 */
      return SYNC_INSN1_AND;

    case 637:  /* sync_sub_12 */
    case 642:  /* sync_old_sub_12 */
    case 647:  /* sync_new_sub_12 */
    case 654:  /* sync_subsi */
    case 655:  /* sync_subdi */
    case 658:  /* sync_old_subsi */
    case 659:  /* sync_old_subdi */
    case 662:  /* sync_new_subsi */
    case 663:  /* sync_new_subdi */
      return SYNC_INSN1_SUBU;

    case 636:  /* sync_add_12 */
    case 641:  /* sync_old_add_12 */
    case 646:  /* sync_new_add_12 */
      return SYNC_INSN1_ADDU;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return SYNC_INSN1_MOVE;

    }
}

enum attr_sync_insn1_op2
get_attr_sync_insn1_op2 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 633:  /* compare_and_swap_12 */
      return SYNC_INSN1_OP2_5;

    case 641:  /* sync_old_add_12 */
    case 642:  /* sync_old_sub_12 */
    case 643:  /* sync_old_ior_12 */
    case 644:  /* sync_old_xor_12 */
    case 645:  /* sync_old_and_12 */
    case 646:  /* sync_new_add_12 */
    case 647:  /* sync_new_sub_12 */
    case 648:  /* sync_new_ior_12 */
    case 649:  /* sync_new_xor_12 */
    case 650:  /* sync_new_and_12 */
    case 652:  /* sync_old_nand_12 */
    case 653:  /* sync_new_nand_12 */
    case 690:  /* test_and_set_12 */
    case 691:  /* atomic_compare_and_swapsi */
    case 692:  /* atomic_compare_and_swapdi */
      return SYNC_INSN1_OP2_4;

    case 631:  /* sync_compare_and_swapsi */
    case 632:  /* sync_compare_and_swapdi */
    case 636:  /* sync_add_12 */
    case 637:  /* sync_sub_12 */
    case 638:  /* sync_ior_12 */
    case 639:  /* sync_xor_12 */
    case 640:  /* sync_and_12 */
    case 651:  /* sync_nand_12 */
      return SYNC_INSN1_OP2_3;

    case 656:  /* sync_old_addsi */
    case 657:  /* sync_old_adddi */
    case 658:  /* sync_old_subsi */
    case 659:  /* sync_old_subdi */
    case 660:  /* sync_new_addsi */
    case 661:  /* sync_new_adddi */
    case 662:  /* sync_new_subsi */
    case 663:  /* sync_new_subdi */
    case 670:  /* sync_old_iorsi */
    case 671:  /* sync_old_xorsi */
    case 672:  /* sync_old_andsi */
    case 673:  /* sync_old_iordi */
    case 674:  /* sync_old_xordi */
    case 675:  /* sync_old_anddi */
    case 676:  /* sync_new_iorsi */
    case 677:  /* sync_new_xorsi */
    case 678:  /* sync_new_andsi */
    case 679:  /* sync_new_iordi */
    case 680:  /* sync_new_xordi */
    case 681:  /* sync_new_anddi */
    case 684:  /* sync_old_nandsi */
    case 685:  /* sync_old_nanddi */
    case 686:  /* sync_new_nandsi */
    case 687:  /* sync_new_nanddi */
    case 688:  /* sync_lock_test_and_setsi */
    case 689:  /* sync_lock_test_and_setdi */
    case 693:  /* atomic_exchangesi_llsc */
    case 694:  /* atomic_exchangedi_llsc */
    case 697:  /* atomic_fetch_addsi_llsc */
    case 698:  /* atomic_fetch_adddi_llsc */
      return SYNC_INSN1_OP2_2;

    case 634:  /* sync_addsi */
    case 635:  /* sync_adddi */
    case 654:  /* sync_subsi */
    case 655:  /* sync_subdi */
    case 664:  /* sync_iorsi */
    case 665:  /* sync_xorsi */
    case 666:  /* sync_andsi */
    case 667:  /* sync_iordi */
    case 668:  /* sync_xordi */
    case 669:  /* sync_anddi */
    case 682:  /* sync_nandsi */
    case 683:  /* sync_nanddi */
      return SYNC_INSN1_OP2_1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return SYNC_INSN1_OP2_NONE;

    }
}

enum attr_sync_required_oldval
get_attr_sync_required_oldval (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 633:  /* compare_and_swap_12 */
      return SYNC_REQUIRED_OLDVAL_4;

    case 691:  /* atomic_compare_and_swapsi */
    case 692:  /* atomic_compare_and_swapdi */
      return SYNC_REQUIRED_OLDVAL_3;

    case 631:  /* sync_compare_and_swapsi */
    case 632:  /* sync_compare_and_swapdi */
      return SYNC_REQUIRED_OLDVAL_2;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return SYNC_REQUIRED_OLDVAL_NONE;

    }
}

enum attr_sync_exclusive_mask
get_attr_sync_exclusive_mask (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 633:  /* compare_and_swap_12 */
    case 641:  /* sync_old_add_12 */
    case 642:  /* sync_old_sub_12 */
    case 643:  /* sync_old_ior_12 */
    case 644:  /* sync_old_xor_12 */
    case 645:  /* sync_old_and_12 */
    case 646:  /* sync_new_add_12 */
    case 647:  /* sync_new_sub_12 */
    case 648:  /* sync_new_ior_12 */
    case 649:  /* sync_new_xor_12 */
    case 650:  /* sync_new_and_12 */
    case 652:  /* sync_old_nand_12 */
    case 653:  /* sync_new_nand_12 */
    case 690:  /* test_and_set_12 */
      return SYNC_EXCLUSIVE_MASK_3;

    case 636:  /* sync_add_12 */
    case 637:  /* sync_sub_12 */
    case 638:  /* sync_ior_12 */
    case 639:  /* sync_xor_12 */
    case 640:  /* sync_and_12 */
    case 651:  /* sync_nand_12 */
      return SYNC_EXCLUSIVE_MASK_2;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return SYNC_EXCLUSIVE_MASK_NONE;

    }
}

enum attr_sync_inclusive_mask
get_attr_sync_inclusive_mask (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 633:  /* compare_and_swap_12 */
    case 641:  /* sync_old_add_12 */
    case 642:  /* sync_old_sub_12 */
    case 643:  /* sync_old_ior_12 */
    case 644:  /* sync_old_xor_12 */
    case 645:  /* sync_old_and_12 */
    case 646:  /* sync_new_add_12 */
    case 647:  /* sync_new_sub_12 */
    case 648:  /* sync_new_ior_12 */
    case 649:  /* sync_new_xor_12 */
    case 650:  /* sync_new_and_12 */
    case 652:  /* sync_old_nand_12 */
    case 653:  /* sync_new_nand_12 */
    case 690:  /* test_and_set_12 */
      return SYNC_INCLUSIVE_MASK_2;

    case 636:  /* sync_add_12 */
    case 637:  /* sync_sub_12 */
    case 638:  /* sync_ior_12 */
    case 639:  /* sync_xor_12 */
    case 640:  /* sync_and_12 */
    case 651:  /* sync_nand_12 */
      return SYNC_INCLUSIVE_MASK_1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return SYNC_INCLUSIVE_MASK_NONE;

    }
}

enum attr_sync_newval
get_attr_sync_newval (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 641:  /* sync_old_add_12 */
    case 642:  /* sync_old_sub_12 */
    case 643:  /* sync_old_ior_12 */
    case 644:  /* sync_old_xor_12 */
    case 645:  /* sync_old_and_12 */
    case 652:  /* sync_old_nand_12 */
      return SYNC_NEWVAL_5;

    case 636:  /* sync_add_12 */
    case 637:  /* sync_sub_12 */
    case 638:  /* sync_ior_12 */
    case 639:  /* sync_xor_12 */
    case 640:  /* sync_and_12 */
    case 651:  /* sync_nand_12 */
      return SYNC_NEWVAL_4;

    case 646:  /* sync_new_add_12 */
    case 647:  /* sync_new_sub_12 */
    case 648:  /* sync_new_ior_12 */
    case 649:  /* sync_new_xor_12 */
    case 650:  /* sync_new_and_12 */
    case 653:  /* sync_new_nand_12 */
    case 660:  /* sync_new_addsi */
    case 661:  /* sync_new_adddi */
    case 662:  /* sync_new_subsi */
    case 663:  /* sync_new_subdi */
    case 676:  /* sync_new_iorsi */
    case 677:  /* sync_new_xorsi */
    case 678:  /* sync_new_andsi */
    case 679:  /* sync_new_iordi */
    case 680:  /* sync_new_xordi */
    case 681:  /* sync_new_anddi */
    case 686:  /* sync_new_nandsi */
    case 687:  /* sync_new_nanddi */
      return SYNC_NEWVAL_0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return SYNC_NEWVAL_NONE;

    }
}

enum attr_sync_cmp
get_attr_sync_cmp (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 691:  /* atomic_compare_and_swapsi */
    case 692:  /* atomic_compare_and_swapdi */
      return SYNC_CMP_0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return SYNC_CMP_NONE;

    }
}

enum attr_sync_oldval
get_attr_sync_oldval (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 636:  /* sync_add_12 */
    case 637:  /* sync_sub_12 */
    case 638:  /* sync_ior_12 */
    case 639:  /* sync_xor_12 */
    case 640:  /* sync_and_12 */
    case 651:  /* sync_nand_12 */
      return SYNC_OLDVAL_4;

    case 691:  /* atomic_compare_and_swapsi */
    case 692:  /* atomic_compare_and_swapdi */
      return SYNC_OLDVAL_1;

    case 631:  /* sync_compare_and_swapsi */
    case 632:  /* sync_compare_and_swapdi */
    case 633:  /* compare_and_swap_12 */
    case 641:  /* sync_old_add_12 */
    case 642:  /* sync_old_sub_12 */
    case 643:  /* sync_old_ior_12 */
    case 644:  /* sync_old_xor_12 */
    case 645:  /* sync_old_and_12 */
    case 646:  /* sync_new_add_12 */
    case 647:  /* sync_new_sub_12 */
    case 648:  /* sync_new_ior_12 */
    case 649:  /* sync_new_xor_12 */
    case 650:  /* sync_new_and_12 */
    case 652:  /* sync_old_nand_12 */
    case 653:  /* sync_new_nand_12 */
    case 656:  /* sync_old_addsi */
    case 657:  /* sync_old_adddi */
    case 658:  /* sync_old_subsi */
    case 659:  /* sync_old_subdi */
    case 660:  /* sync_new_addsi */
    case 661:  /* sync_new_adddi */
    case 662:  /* sync_new_subsi */
    case 663:  /* sync_new_subdi */
    case 670:  /* sync_old_iorsi */
    case 671:  /* sync_old_xorsi */
    case 672:  /* sync_old_andsi */
    case 673:  /* sync_old_iordi */
    case 674:  /* sync_old_xordi */
    case 675:  /* sync_old_anddi */
    case 676:  /* sync_new_iorsi */
    case 677:  /* sync_new_xorsi */
    case 678:  /* sync_new_andsi */
    case 679:  /* sync_new_iordi */
    case 680:  /* sync_new_xordi */
    case 681:  /* sync_new_anddi */
    case 684:  /* sync_old_nandsi */
    case 685:  /* sync_old_nanddi */
    case 686:  /* sync_new_nandsi */
    case 687:  /* sync_new_nanddi */
    case 688:  /* sync_lock_test_and_setsi */
    case 689:  /* sync_lock_test_and_setdi */
    case 690:  /* test_and_set_12 */
    case 693:  /* atomic_exchangesi_llsc */
    case 694:  /* atomic_exchangedi_llsc */
    case 697:  /* atomic_fetch_addsi_llsc */
    case 698:  /* atomic_fetch_adddi_llsc */
      return SYNC_OLDVAL_0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return SYNC_OLDVAL_NONE;

    }
}

enum attr_sync_mem
get_attr_sync_mem (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 691:  /* atomic_compare_and_swapsi */
    case 692:  /* atomic_compare_and_swapdi */
      return SYNC_MEM_2;

    case 631:  /* sync_compare_and_swapsi */
    case 632:  /* sync_compare_and_swapdi */
    case 633:  /* compare_and_swap_12 */
    case 641:  /* sync_old_add_12 */
    case 642:  /* sync_old_sub_12 */
    case 643:  /* sync_old_ior_12 */
    case 644:  /* sync_old_xor_12 */
    case 645:  /* sync_old_and_12 */
    case 646:  /* sync_new_add_12 */
    case 647:  /* sync_new_sub_12 */
    case 648:  /* sync_new_ior_12 */
    case 649:  /* sync_new_xor_12 */
    case 650:  /* sync_new_and_12 */
    case 652:  /* sync_old_nand_12 */
    case 653:  /* sync_new_nand_12 */
    case 656:  /* sync_old_addsi */
    case 657:  /* sync_old_adddi */
    case 658:  /* sync_old_subsi */
    case 659:  /* sync_old_subdi */
    case 660:  /* sync_new_addsi */
    case 661:  /* sync_new_adddi */
    case 662:  /* sync_new_subsi */
    case 663:  /* sync_new_subdi */
    case 670:  /* sync_old_iorsi */
    case 671:  /* sync_old_xorsi */
    case 672:  /* sync_old_andsi */
    case 673:  /* sync_old_iordi */
    case 674:  /* sync_old_xordi */
    case 675:  /* sync_old_anddi */
    case 676:  /* sync_new_iorsi */
    case 677:  /* sync_new_xorsi */
    case 678:  /* sync_new_andsi */
    case 679:  /* sync_new_iordi */
    case 680:  /* sync_new_xordi */
    case 681:  /* sync_new_anddi */
    case 684:  /* sync_old_nandsi */
    case 685:  /* sync_old_nanddi */
    case 686:  /* sync_new_nandsi */
    case 687:  /* sync_new_nanddi */
    case 688:  /* sync_lock_test_and_setsi */
    case 689:  /* sync_lock_test_and_setdi */
    case 690:  /* test_and_set_12 */
    case 693:  /* atomic_exchangesi_llsc */
    case 694:  /* atomic_exchangedi_llsc */
    case 697:  /* atomic_fetch_addsi_llsc */
    case 698:  /* atomic_fetch_adddi_llsc */
      return SYNC_MEM_1;

    case 634:  /* sync_addsi */
    case 635:  /* sync_adddi */
    case 636:  /* sync_add_12 */
    case 637:  /* sync_sub_12 */
    case 638:  /* sync_ior_12 */
    case 639:  /* sync_xor_12 */
    case 640:  /* sync_and_12 */
    case 651:  /* sync_nand_12 */
    case 654:  /* sync_subsi */
    case 655:  /* sync_subdi */
    case 664:  /* sync_iorsi */
    case 665:  /* sync_xorsi */
    case 666:  /* sync_andsi */
    case 667:  /* sync_iordi */
    case 668:  /* sync_xordi */
    case 669:  /* sync_anddi */
    case 682:  /* sync_nandsi */
    case 683:  /* sync_nanddi */
      return SYNC_MEM_0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return SYNC_MEM_NONE;

    }
}

enum attr_type
get_attr_type (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_alu_type cached_alu_type ATTRIBUTE_UNUSED;
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 958:  /* movv8qi_internal */
    case 957:  /* movv4hi_internal */
    case 956:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3f))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_MTC;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_MFC;
        }
      else if (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 371:  /* store_wordtf */
    case 370:  /* store_wordv8qi */
    case 369:  /* store_wordv4hi */
    case 368:  /* store_wordv2si */
    case 367:  /* store_wordv2sf */
    case 366:  /* store_worddi */
    case 365:  /* store_worddf */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_FPSTORE;
        }
      else
        {
	  return TYPE_MFC;
        }

    case 364:  /* load_hightf */
    case 363:  /* load_highv8qi */
    case 362:  /* load_highv4hi */
    case 361:  /* load_highv2si */
    case 360:  /* load_highv2sf */
    case 359:  /* load_highdi */
    case 358:  /* load_highdf */
    case 357:  /* load_lowtf */
    case 356:  /* load_lowv8qi */
    case 355:  /* load_lowv4hi */
    case 354:  /* load_lowv2si */
    case 353:  /* load_lowv2sf */
    case 352:  /* load_lowdi */
    case 351:  /* load_lowdf */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_FPLOAD;
        }
      else
        {
	  return TYPE_MTC;
        }

    case 343:  /* *movtf_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  return TYPE_STORE;
        }
      else if (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 342:  /* *movtf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE;
        }
      else if (!((1 << which_alternative) & 0x3f))
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_MTC;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MFC;
        }
      else if (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 341:  /* *movti_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return TYPE_MFLO;
        }
      else if ((which_alternative == 4) || ((((1 << which_alternative) & 0xf)) && (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))))
        {
	  return TYPE_MULTI;
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 340:  /* *movti */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_MTLO;
        }
      else if (!((1 << which_alternative) & 0x3f))
        {
	  return TYPE_MFLO;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_IMUL;
        }
      else if (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT))
        {
	  return TYPE_MULTI;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 339:  /* *movdf_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  return TYPE_STORE;
        }
      else if (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 338:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  return TYPE_STORE;
        }
      else if (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 344:  /* *movv2sf */
    case 337:  /* *movdf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 8)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FPLOAD;
        }
      else if (!((1 << which_alternative) & 0x1ef))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FPSTORE;
        }
      else if (((1 << which_alternative) & 0x22))
        {
	  return TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MFC;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_FMOVE;
        }
      else if (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 336:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 335:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 334:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 8)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FPLOAD;
        }
      else if (!((1 << which_alternative) & 0x1ef))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FPSTORE;
        }
      else if (((1 << which_alternative) & 0x22))
        {
	  return TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MFC;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_FMOVE;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 333:  /* *movqi_mips16 */
    case 331:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return TYPE_MFLO;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MULTI;
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 332:  /* *movqi_internal */
    case 330:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MTLO;
        }
      else if (!((1 << which_alternative) & 0x1f))
        {
	  return TYPE_MFLO;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 299:  /* *movv4uqq_mips16 */
    case 298:  /* *movv4qq_mips16 */
    case 297:  /* *movv2uha_mips16 */
    case 296:  /* *movv2ha_mips16 */
    case 295:  /* *movv2uhq_mips16 */
    case 294:  /* *movv2hq_mips16 */
    case 293:  /* *movv4qi_mips16 */
    case 292:  /* *movv2hi_mips16 */
    case 291:  /* *movsi_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 7)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_STORE;
        }
      else if (!((1 << which_alternative) & 0x1ff))
        {
	  return TYPE_MFLO;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MULTI;
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 290:  /* *movv4uqq_internal */
    case 289:  /* *movv4qq_internal */
    case 288:  /* *movv2uha_internal */
    case 287:  /* *movv2ha_internal */
    case 286:  /* *movv2uhq_internal */
    case 285:  /* *movv2hq_internal */
    case 284:  /* *movv4qi_internal */
    case 283:  /* *movv2hi_internal */
    case 282:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (((1 << which_alternative) & 0x4040))
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE;
        }
      else if (!((1 << which_alternative) & 0xfeff))
        {
	  return TYPE_FPSTORE;
        }
      else if (((1 << which_alternative) & 0x2420))
        {
	  return TYPE_MTC;
        }
      else if (((1 << which_alternative) & 0x8280))
        {
	  return TYPE_MFC;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_MTLO;
        }
      else if (which_alternative == 12)
        {
	  return TYPE_MFLO;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 281:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 7)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_STORE;
        }
      else if (!((1 << which_alternative) & 0x1ff))
        {
	  return TYPE_MFLO;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || ((((1 << which_alternative) & 0x2f)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))))
        {
	  return TYPE_MULTI;
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 279:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return TYPE_MFLO;
        }
      else if ((which_alternative == 4) || ((((1 << which_alternative) & 0xf)) && (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))))
        {
	  return TYPE_MULTI;
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 219:  /* *extendqihi2_seb */
    case 217:  /* *extendqihi2_mips16e */
    case 216:  /* *extendhidi2_seh */
    case 215:  /* *extendhisi2_seh */
    case 214:  /* *extendqidi2_seb */
    case 213:  /* *extendqisi2_seb */
    case 208:  /* *extendhidi2_mips16e */
    case 207:  /* *extendhisi2_mips16e */
    case 206:  /* *extendqidi2_mips16e */
    case 205:  /* *extendqisi2_mips16e */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_SIGNEXT;
        }

    case 204:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return TYPE_LOAD;
        }
      else if (! (
#line 227 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_64BIT)))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 197:  /* *zero_extendqihi2 */
    case 188:  /* *zero_extendhidi2 */
    case 187:  /* *zero_extendhisi2 */
    case 186:  /* *zero_extendqidi2 */
    case 185:  /* *zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_LOGICAL;
        }

    case 184:  /* *zero_extendsidi2_dext */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_ARITH;
        }

    case 218:  /* *extendqihi2 */
    case 212:  /* *extendhidi2 */
    case 211:  /* *extendhisi2 */
    case 210:  /* *extendqidi2 */
    case 209:  /* *extendqisi2 */
    case 183:  /* *zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 170:  /* truncdisi2 */
    case 169:  /* truncdihi2 */
    case 168:  /* truncdiqi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_SHIFT;
        }

    case 156:  /* *anddi3_mips16 */
    case 155:  /* *andsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_LOAD;
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  return TYPE_LOGICAL;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 154:  /* *anddi3 */
    case 153:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_ARITH;
        }
      else if (!((1 << which_alternative) & 0x37))
        {
	  return TYPE_LOGICAL;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 34:  /* mulsi3_mul3 */
    case 35:  /* muldi3_mul3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IMUL3;
        }
      else
        {
	  return TYPE_IMUL;
        }

    case 48:  /* *muls */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IMUL;
        }
      else
        {
	  return TYPE_IMUL3;
        }

    case 576:  /* cop0_move */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MTC;
        }
      else
        {
	  return TYPE_MFC;
        }

    case 278:  /* *movdi_32bit */
    case 280:  /* *movdi_64bit */
      if (! (get_attr_jal (insn) == JAL_UNSET))
        {
	  return TYPE_CALL;
        }
      else if (get_attr_got (insn) == GOT_LOAD)
        {
	  return TYPE_LOAD;
        }
      else if (((cached_alu_type = get_attr_alu_type (insn)) == ALU_TYPE_ADD) || (cached_alu_type == ALU_TYPE_SUB))
        {
	  return TYPE_ARITH;
        }
      else if ((cached_alu_type == ALU_TYPE_NOT) || ((cached_alu_type == ALU_TYPE_NOR) || ((cached_alu_type == ALU_TYPE_AND) || ((cached_alu_type == ALU_TYPE_OR) || (cached_alu_type == ALU_TYPE_XOR)))))
        {
	  return TYPE_LOGICAL;
        }
      else if ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_LOAD)
        {
	  return TYPE_LOAD;
        }
      else if (cached_move_type == MOVE_TYPE_FPLOAD)
        {
	  return TYPE_FPLOAD;
        }
      else if (cached_move_type == MOVE_TYPE_STORE)
        {
	  return TYPE_STORE;
        }
      else if (cached_move_type == MOVE_TYPE_FPSTORE)
        {
	  return TYPE_FPSTORE;
        }
      else if (cached_move_type == MOVE_TYPE_MTC)
        {
	  return TYPE_MTC;
        }
      else if (cached_move_type == MOVE_TYPE_MFC)
        {
	  return TYPE_MFC;
        }
      else if (cached_move_type == MOVE_TYPE_MTLO)
        {
	  return TYPE_MTLO;
        }
      else if (cached_move_type == MOVE_TYPE_MFLO)
        {
	  return TYPE_MFLO;
        }
      else if (cached_move_type == MOVE_TYPE_IMUL)
        {
	  return TYPE_IMUL;
        }
      else if (cached_move_type == MOVE_TYPE_FMOVE)
        {
	  return TYPE_FMOVE;
        }
      else if (cached_move_type == MOVE_TYPE_LOADPOOL)
        {
	  return TYPE_LOAD;
        }
      else if (cached_move_type == MOVE_TYPE_SIGNEXT)
        {
	  return TYPE_SIGNEXT;
        }
      else if (cached_move_type == MOVE_TYPE_EXT_INS)
        {
	  return TYPE_ARITH;
        }
      else if (cached_move_type == MOVE_TYPE_ARITH)
        {
	  return TYPE_ARITH;
        }
      else if (cached_move_type == MOVE_TYPE_LOGICAL)
        {
	  return TYPE_LOGICAL;
        }
      else if (cached_move_type == MOVE_TYPE_SLL0)
        {
	  return TYPE_SHIFT;
        }
      else if (cached_move_type == MOVE_TYPE_ANDI)
        {
	  return TYPE_LOGICAL;
        }
      else if ((cached_move_type == MOVE_TYPE_CONSTN) || (cached_move_type == MOVE_TYPE_SHIFT_SHIFT))
        {
	  return TYPE_MULTI;
        }
      else if (((cached_move_type == MOVE_TYPE_MOVE) || (cached_move_type == MOVE_TYPE_CONST)) && (get_attr_dword_mode (insn) == DWORD_MODE_YES))
        {
	  return TYPE_MULTI;
        }
      else if (cached_move_type == MOVE_TYPE_MOVE)
        {
	  return TYPE_MOVE;
        }
      else if (cached_move_type == MOVE_TYPE_CONST)
        {
	  return TYPE_CONST;
        }
      else if (! (get_attr_sync_mem (insn) == SYNC_MEM_NONE))
        {
	  return TYPE_SYNCLOOP;
        }
      else
        {
	  return TYPE_UNKNOWN;
        }

    case 386:  /* loadgp_newabi_si */
    case 387:  /* loadgp_newabi_di */
    case 388:  /* loadgp_absolute_si */
    case 389:  /* loadgp_absolute_di */
    case 390:  /* loadgp_blockage */
    case 391:  /* loadgp_rtp_si */
    case 392:  /* loadgp_rtp_di */
    case 393:  /* copygp_mips16_si */
    case 394:  /* copygp_mips16_di */
    case 395:  /* potential_cprestore_si */
    case 396:  /* potential_cprestore_di */
    case 399:  /* use_cprestore_si */
    case 400:  /* use_cprestore_di */
    case 564:  /* blockage */
    case 579:  /* restore_gp_si */
    case 580:  /* restore_gp_di */
    case 581:  /* move_gpsi */
    case 582:  /* move_gpdi */
    case 585:  /* set_got_version */
    case 586:  /* update_got_version */
      return TYPE_GHOST;

    case 603:  /* nop */
    case 604:  /* hazard_nop */
      return TYPE_NOP;

    case 698:  /* atomic_fetch_adddi_llsc */
    case 697:  /* atomic_fetch_addsi_llsc */
    case 694:  /* atomic_exchangedi_llsc */
    case 693:  /* atomic_exchangesi_llsc */
    case 692:  /* atomic_compare_and_swapdi */
    case 691:  /* atomic_compare_and_swapsi */
    case 690:  /* test_and_set_12 */
    case 689:  /* sync_lock_test_and_setdi */
    case 688:  /* sync_lock_test_and_setsi */
    case 687:  /* sync_new_nanddi */
    case 686:  /* sync_new_nandsi */
    case 685:  /* sync_old_nanddi */
    case 684:  /* sync_old_nandsi */
    case 683:  /* sync_nanddi */
    case 682:  /* sync_nandsi */
    case 681:  /* sync_new_anddi */
    case 680:  /* sync_new_xordi */
    case 679:  /* sync_new_iordi */
    case 678:  /* sync_new_andsi */
    case 677:  /* sync_new_xorsi */
    case 676:  /* sync_new_iorsi */
    case 675:  /* sync_old_anddi */
    case 674:  /* sync_old_xordi */
    case 673:  /* sync_old_iordi */
    case 672:  /* sync_old_andsi */
    case 671:  /* sync_old_xorsi */
    case 670:  /* sync_old_iorsi */
    case 669:  /* sync_anddi */
    case 668:  /* sync_xordi */
    case 667:  /* sync_iordi */
    case 666:  /* sync_andsi */
    case 665:  /* sync_xorsi */
    case 664:  /* sync_iorsi */
    case 663:  /* sync_new_subdi */
    case 662:  /* sync_new_subsi */
    case 661:  /* sync_new_adddi */
    case 660:  /* sync_new_addsi */
    case 659:  /* sync_old_subdi */
    case 658:  /* sync_old_subsi */
    case 657:  /* sync_old_adddi */
    case 656:  /* sync_old_addsi */
    case 655:  /* sync_subdi */
    case 654:  /* sync_subsi */
    case 653:  /* sync_new_nand_12 */
    case 652:  /* sync_old_nand_12 */
    case 651:  /* sync_nand_12 */
    case 650:  /* sync_new_and_12 */
    case 649:  /* sync_new_xor_12 */
    case 648:  /* sync_new_ior_12 */
    case 647:  /* sync_new_sub_12 */
    case 646:  /* sync_new_add_12 */
    case 645:  /* sync_old_and_12 */
    case 644:  /* sync_old_xor_12 */
    case 643:  /* sync_old_ior_12 */
    case 642:  /* sync_old_sub_12 */
    case 641:  /* sync_old_add_12 */
    case 640:  /* sync_and_12 */
    case 639:  /* sync_xor_12 */
    case 638:  /* sync_ior_12 */
    case 637:  /* sync_sub_12 */
    case 636:  /* sync_add_12 */
    case 635:  /* sync_adddi */
    case 634:  /* sync_addsi */
    case 633:  /* compare_and_swap_12 */
    case 632:  /* sync_compare_and_swapdi */
    case 631:  /* sync_compare_and_swapsi */
      return TYPE_SYNCLOOP;

    case 695:  /* atomic_exchangesi_swap */
    case 696:  /* atomic_exchangedi_swap */
    case 699:  /* atomic_fetch_addsi_ldadd */
    case 700:  /* atomic_fetch_adddi_ldadd */
      return TYPE_ATOMIC;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 224:  /* *extendhi_truncateqi */
    case 223:  /* *extendsi_truncatehi */
    case 222:  /* *extendsi_truncateqi */
    case 221:  /* *extenddi_truncatehi */
    case 220:  /* *extenddi_truncateqi */
    case 558:  /* indirect_jump_and_restore_si */
    case 559:  /* indirect_jump_and_restore_di */
    case 626:  /* tls_get_tp_mips16_si */
    case 627:  /* tls_get_tp_mips16_di */
      return TYPE_MULTI;

    case 751:  /* mips_addq_s_w */
    case 752:  /* mips_addq_s_ph */
    case 753:  /* mips_addu_s_qb */
    case 756:  /* mips_subq_s_w */
    case 757:  /* mips_subq_s_ph */
    case 758:  /* mips_subu_s_qb */
    case 763:  /* mips_absq_s_w */
    case 764:  /* mips_absq_s_ph */
    case 768:  /* mips_precrqu_s_qb_ph */
    case 781:  /* mips_shll_s_w */
    case 782:  /* mips_shll_s_ph */
    case 856:  /* mips_absq_s_qb */
    case 858:  /* mips_addu_s_ph */
    case 860:  /* mips_adduh_r_qb */
    case 882:  /* mips_subu_s_ph */
      return TYPE_DSPALUSAT;

    case 749:  /* addv2hi3 */
    case 750:  /* addv4qi3 */
    case 754:  /* subv2hi3 */
    case 755:  /* subv4qi3 */
    case 759:  /* mips_addsc */
    case 760:  /* mips_addwc */
    case 761:  /* mips_modsub */
    case 762:  /* mips_raddu_w_qb */
    case 765:  /* mips_precrq_qb_ph */
    case 766:  /* mips_precrq_ph_w */
    case 767:  /* mips_precrq_rs_ph_w */
    case 769:  /* mips_preceq_w_phl */
    case 770:  /* mips_preceq_w_phr */
    case 771:  /* mips_precequ_ph_qbl */
    case 772:  /* mips_precequ_ph_qbr */
    case 773:  /* mips_precequ_ph_qbla */
    case 774:  /* mips_precequ_ph_qbra */
    case 775:  /* mips_preceu_ph_qbl */
    case 776:  /* mips_preceu_ph_qbr */
    case 777:  /* mips_preceu_ph_qbla */
    case 778:  /* mips_preceu_ph_qbra */
    case 779:  /* mips_shll_ph */
    case 780:  /* mips_shll_qb */
    case 783:  /* mips_shrl_qb */
    case 784:  /* mips_shra_ph */
    case 785:  /* mips_shra_r_w */
    case 786:  /* mips_shra_r_ph */
    case 805:  /* mips_bitrev */
    case 806:  /* mips_insv */
    case 807:  /* mips_repl_qb */
    case 808:  /* mips_repl_ph */
    case 809:  /* mips_cmp_eq_ph */
    case 810:  /* mips_cmpu_eq_qb */
    case 811:  /* mips_cmp_lt_ph */
    case 812:  /* mips_cmpu_lt_qb */
    case 813:  /* mips_cmp_le_ph */
    case 814:  /* mips_cmpu_le_qb */
    case 815:  /* mips_cmpgu_eq_qb */
    case 816:  /* mips_cmpgu_lt_qb */
    case 817:  /* mips_cmpgu_le_qb */
    case 818:  /* mips_pick_ph */
    case 819:  /* mips_pick_qb */
    case 820:  /* mips_packrl_ph */
    case 829:  /* mips_wrdsp */
    case 830:  /* mips_rddsp */
    case 857:  /* mips_addu_ph */
    case 859:  /* mips_adduh_qb */
    case 861:  /* mips_append */
    case 862:  /* mips_balign */
    case 863:  /* mips_cmpgdu_eq_qb */
    case 864:  /* mips_cmpgdu_lt_qb */
    case 865:  /* mips_cmpgdu_le_qb */
    case 874:  /* mips_precr_qb_ph */
    case 875:  /* mips_precr_sra_ph_w */
    case 876:  /* mips_precr_sra_r_ph_w */
    case 877:  /* mips_prepend */
    case 878:  /* mips_shra_qb */
    case 879:  /* mips_shra_r_qb */
    case 880:  /* mips_shrl_ph */
    case 881:  /* mips_subu_ph */
    case 883:  /* mips_subuh_qb */
    case 884:  /* mips_subuh_r_qb */
    case 885:  /* mips_addqh_ph */
    case 886:  /* mips_addqh_r_ph */
    case 887:  /* mips_addqh_w */
    case 888:  /* mips_addqh_r_w */
    case 889:  /* mips_subqh_ph */
    case 890:  /* mips_subqh_r_ph */
    case 891:  /* mips_subqh_w */
    case 892:  /* mips_subqh_r_w */
      return TYPE_DSPALU;

    case 827:  /* mips_shilo */
    case 828:  /* mips_mthlip */
      return TYPE_ACCMOD;

    case 821:  /* mips_extr_w */
    case 822:  /* mips_extr_r_w */
    case 823:  /* mips_extr_rs_w */
    case 824:  /* mips_extr_s_h */
    case 825:  /* mips_extp */
    case 826:  /* mips_extpdp */
      return TYPE_ACCEXT;

    case 799:  /* mips_dpaq_sa_l_w */
    case 800:  /* mips_dpsq_sa_l_w */
    case 803:  /* mips_maq_sa_w_phl */
    case 804:  /* mips_maq_sa_w_phr */
    case 896:  /* mips_dpaqx_sa_w_ph */
    case 898:  /* mips_dpsqx_sa_w_ph */
      return TYPE_DSPMACSAT;

    case 792:  /* mips_dpau_h_qbl */
    case 793:  /* mips_dpau_h_qbr */
    case 794:  /* mips_dpsu_h_qbl */
    case 795:  /* mips_dpsu_h_qbr */
    case 796:  /* mips_dpaq_s_w_ph */
    case 797:  /* mips_dpsq_s_w_ph */
    case 798:  /* mips_mulsaq_s_w_ph */
    case 801:  /* mips_maq_s_w_phl */
    case 802:  /* mips_maq_s_w_phr */
    case 866:  /* mips_dpa_w_ph */
    case 867:  /* mips_dps_w_ph */
    case 873:  /* mips_mulsa_w_ph */
    case 893:  /* mips_dpax_w_ph */
    case 894:  /* mips_dpsx_w_ph */
    case 895:  /* mips_dpaqx_s_w_ph */
    case 897:  /* mips_dpsqx_s_w_ph */
      return TYPE_DSPMAC;

    case 740:  /* mips_rsqrt2_s */
    case 741:  /* mips_rsqrt2_d */
    case 742:  /* mips_rsqrt2_ps */
      return TYPE_FRSQRT2;

    case 737:  /* mips_rsqrt1_s */
    case 738:  /* mips_rsqrt1_d */
    case 739:  /* mips_rsqrt1_ps */
      return TYPE_FRSQRT1;

    case 132:  /* *rsqrtsfa */
    case 133:  /* *rsqrtdfa */
    case 134:  /* *rsqrtv2sfa */
    case 135:  /* *rsqrtsfb */
    case 136:  /* *rsqrtdfb */
    case 137:  /* *rsqrtv2sfb */
      return TYPE_FRSQRT;

    case 129:  /* sqrtsf2 */
    case 130:  /* sqrtdf2 */
    case 131:  /* sqrtv2sf2 */
      return TYPE_FSQRT;

    case 167:  /* truncdfsf2 */
    case 230:  /* extendsfdf2 */
    case 231:  /* fix_truncdfsi2_insn */
    case 232:  /* fix_truncdfsi2_macro */
    case 233:  /* fix_truncsfsi2_insn */
    case 234:  /* fix_truncsfsi2_macro */
    case 235:  /* fix_truncdfdi2 */
    case 236:  /* fix_truncsfdi2 */
    case 237:  /* floatsidf2 */
    case 238:  /* floatdidf2 */
    case 239:  /* floatsisf2 */
    case 240:  /* floatdisf2 */
    case 705:  /* vec_concatv2sf */
    case 706:  /* vec_extractv2sf */
    case 710:  /* mips_cvt_pw_ps */
    case 711:  /* mips_cvt_ps_pw */
    case 961:  /* *vec_concatv2si */
    case 980:  /* iorv2si3 */
    case 981:  /* iorv4hi3 */
    case 982:  /* iorv8qi3 */
    case 1000:  /* loongson_pextrh */
    case 1021:  /* ashlv2si3 */
    case 1022:  /* ashlv4hi3 */
    case 1023:  /* ashrv2si3 */
    case 1024:  /* ashrv4hi3 */
    case 1025:  /* lshrv2si3 */
    case 1026:  /* lshrv4hi3 */
    case 1038:  /* loongson_punpckhwd */
    case 1039:  /* loongson_punpckhwd_qi */
    case 1040:  /* loongson_punpckhwd_hi */
    case 1044:  /* loongson_punpcklwd */
    case 1045:  /* *loongson_punpcklwd_qi */
    case 1046:  /* *loongson_punpcklwd_hi */
    case 1047:  /* vec_shl_v2si */
    case 1048:  /* vec_shl_v4hi */
    case 1049:  /* vec_shl_v8qi */
    case 1050:  /* vec_shl_di */
    case 1051:  /* vec_shr_v2si */
    case 1052:  /* vec_shr_v4hi */
    case 1053:  /* vec_shr_v8qi */
    case 1054:  /* vec_shr_di */
      return TYPE_FCVT;

    case 531:  /* sunordered_sf */
    case 532:  /* suneq_sf */
    case 533:  /* sunlt_sf */
    case 534:  /* sunle_sf */
    case 535:  /* seq_sf */
    case 536:  /* slt_sf */
    case 537:  /* sle_sf */
    case 538:  /* sunordered_df */
    case 539:  /* suneq_df */
    case 540:  /* sunlt_df */
    case 541:  /* sunle_df */
    case 542:  /* seq_df */
    case 543:  /* slt_df */
    case 544:  /* sle_df */
    case 545:  /* sge_sf */
    case 546:  /* sgt_sf */
    case 547:  /* sunge_sf */
    case 548:  /* sungt_sf */
    case 549:  /* sge_df */
    case 550:  /* sgt_df */
    case 551:  /* sunge_df */
    case 552:  /* sungt_df */
    case 714:  /* mips_cabs_cond_s */
    case 715:  /* mips_cabs_cond_d */
    case 716:  /* mips_c_cond_4s */
    case 717:  /* mips_cabs_cond_4s */
    case 718:  /* mips_c_cond_ps */
    case 719:  /* mips_cabs_cond_ps */
    case 720:  /* sunordered_ps */
    case 721:  /* suneq_ps */
    case 722:  /* sunlt_ps */
    case 723:  /* sunle_ps */
    case 724:  /* seq_ps */
    case 725:  /* slt_ps */
    case 726:  /* sle_ps */
    case 727:  /* sge_ps */
    case 728:  /* sgt_ps */
    case 729:  /* sunge_ps */
    case 730:  /* sungt_ps */
      return TYPE_FCMP;

    case 148:  /* negsf2 */
    case 149:  /* negdf2 */
    case 150:  /* negv2sf2 */
      return TYPE_FNEG;

    case 138:  /* abssf2 */
    case 139:  /* absdf2 */
    case 140:  /* absv2sf2 */
    case 713:  /* *mips_abs_ps */
    case 1011:  /* loongson_pmovmskb */
    case 1017:  /* loongson_biadd */
    case 1018:  /* reduc_uplus_v8qi */
      return TYPE_FABS;

    case 746:  /* mips_recip2_s */
    case 747:  /* mips_recip2_d */
    case 748:  /* mips_recip2_ps */
      return TYPE_FRDIV2;

    case 743:  /* mips_recip1_s */
    case 744:  /* mips_recip1_d */
    case 745:  /* mips_recip1_ps */
      return TYPE_FRDIV1;

    case 116:  /* *recipsf3 */
    case 117:  /* *recipdf3 */
    case 118:  /* *recipv2sf3 */
      return TYPE_FRDIV;

    case 113:  /* *divsf3 */
    case 114:  /* *divdf3 */
    case 115:  /* *divv2sf3 */
    case 1001:  /* loongson_pinsrh_0 */
    case 1002:  /* loongson_pinsrh_1 */
    case 1003:  /* loongson_pinsrh_2 */
    case 1004:  /* loongson_pinsrh_3 */
    case 1005:  /* *vec_setv4hi */
    case 1035:  /* loongson_punpckhbh */
    case 1036:  /* loongson_punpckhhw */
    case 1037:  /* loongson_punpckhhw_qi */
    case 1041:  /* loongson_punpcklbh */
    case 1042:  /* loongson_punpcklhw */
    case 1043:  /* *loongson_punpcklhw_qi */
      return TYPE_FDIV;

    case 77:  /* *madd4sf */
    case 78:  /* *madd4df */
    case 79:  /* *madd4v2sf */
    case 80:  /* *madd3sf */
    case 81:  /* *madd3df */
    case 82:  /* *madd3v2sf */
    case 83:  /* *msub4sf */
    case 84:  /* *msub4df */
    case 85:  /* *msub4v2sf */
    case 86:  /* *msub3sf */
    case 87:  /* *msub3df */
    case 88:  /* *msub3v2sf */
    case 89:  /* *nmadd4sf */
    case 90:  /* *nmadd4df */
    case 91:  /* *nmadd4v2sf */
    case 92:  /* *nmadd3sf */
    case 93:  /* *nmadd3df */
    case 94:  /* *nmadd3v2sf */
    case 95:  /* *nmadd4sf_fastmath */
    case 96:  /* *nmadd4df_fastmath */
    case 97:  /* *nmadd4v2sf_fastmath */
    case 98:  /* *nmadd3sf_fastmath */
    case 99:  /* *nmadd3df_fastmath */
    case 100:  /* *nmadd3v2sf_fastmath */
    case 101:  /* *nmsub4sf */
    case 102:  /* *nmsub4df */
    case 103:  /* *nmsub4v2sf */
    case 104:  /* *nmsub3sf */
    case 105:  /* *nmsub3df */
    case 106:  /* *nmsub3v2sf */
    case 107:  /* *nmsub4sf_fastmath */
    case 108:  /* *nmsub4df_fastmath */
    case 109:  /* *nmsub4v2sf_fastmath */
    case 110:  /* *nmsub3sf_fastmath */
    case 111:  /* *nmsub3df_fastmath */
    case 112:  /* *nmsub3v2sf_fastmath */
      return TYPE_FMADD;

    case 27:  /* *mulsf3 */
    case 28:  /* *muldf3 */
    case 29:  /* *mulsf3_r4300 */
    case 30:  /* *muldf3_r4300 */
    case 31:  /* mulv2sf3 */
    case 712:  /* mips_mulr_ps */
    case 962:  /* vec_pack_ssat_v2si */
    case 963:  /* vec_pack_ssat_v4hi */
    case 964:  /* vec_pack_usat_v4hi */
    case 973:  /* loongson_pandn_w */
    case 974:  /* loongson_pandn_h */
    case 975:  /* loongson_pandn_b */
    case 976:  /* loongson_pandn_d */
    case 977:  /* andv2si3 */
    case 978:  /* andv4hi3 */
    case 979:  /* andv8qi3 */
    case 983:  /* xorv2si3 */
    case 984:  /* xorv4hi3 */
    case 985:  /* xorv8qi3 */
    case 986:  /* *loongson_nor */
    case 987:  /* *loongson_nor */
    case 988:  /* *loongson_nor */
    case 989:  /* one_cmplv2si2 */
    case 990:  /* one_cmplv4hi2 */
    case 991:  /* one_cmplv8qi2 */
    case 1006:  /* loongson_pmaddhw */
    case 1012:  /* umulv4hi3_highpart */
    case 1013:  /* smulv4hi3_highpart */
    case 1014:  /* mulv4hi3 */
    case 1015:  /* loongson_pmuluw */
    case 1020:  /* loongson_pshufh */
      return TYPE_FMUL;

    case 8:  /* addsf3 */
    case 9:  /* adddf3 */
    case 10:  /* addv2sf3 */
    case 21:  /* subsf3 */
    case 22:  /* subdf3 */
    case 23:  /* subv2sf3 */
    case 708:  /* mips_addr_ps */
    case 965:  /* addv2si3 */
    case 966:  /* addv4hi3 */
    case 967:  /* addv8qi3 */
    case 968:  /* loongson_paddd */
    case 969:  /* ssaddv4hi3 */
    case 970:  /* ssaddv8qi3 */
    case 971:  /* usaddv4hi3 */
    case 972:  /* usaddv8qi3 */
    case 992:  /* loongson_pavgh */
    case 993:  /* loongson_pavgb */
    case 994:  /* loongson_pcmpeqw */
    case 995:  /* loongson_pcmpeqh */
    case 996:  /* loongson_pcmpeqb */
    case 997:  /* loongson_pcmpgtw */
    case 998:  /* loongson_pcmpgth */
    case 999:  /* loongson_pcmpgtb */
    case 1007:  /* smaxv4hi3 */
    case 1008:  /* umaxv8qi3 */
    case 1009:  /* sminv4hi3 */
    case 1010:  /* uminv8qi3 */
    case 1016:  /* loongson_pasubub */
    case 1019:  /* loongson_psadbh */
    case 1027:  /* subv2si3 */
    case 1028:  /* subv4hi3 */
    case 1029:  /* subv8qi3 */
    case 1030:  /* loongson_psubd */
    case 1031:  /* sssubv4hi3 */
    case 1032:  /* sssubv8qi3 */
    case 1033:  /* ussubv4hi3 */
    case 1034:  /* ussubv8qi3 */
      return TYPE_FADD;

    case 704:  /* vec_perm_const_ps */
    case 707:  /* mips_alnv_ps */
      return TYPE_FMOVE;

    case 575:  /* mips_rdpgpr */
      return TYPE_MOVE;

    case 1055:  /* divsi3 */
    case 1056:  /* udivsi3 */
    case 1057:  /* divdi3 */
    case 1058:  /* udivdi3 */
    case 1059:  /* modsi3 */
    case 1060:  /* umodsi3 */
    case 1061:  /* moddi3 */
    case 1062:  /* umoddi3 */
      return TYPE_IDIV3;

    case 119:  /* divmodsi4_internal */
    case 120:  /* divmoddi4_internal */
    case 121:  /* udivmodsi4_internal */
    case 122:  /* udivmoddi4_internal */
    case 123:  /* divmodsi4_hilo_di */
    case 124:  /* udivmodsi4_hilo_di */
    case 125:  /* divmodsi4_hilo_ti */
    case 126:  /* udivmodsi4_hilo_ti */
    case 127:  /* divmoddi4_hilo_ti */
    case 128:  /* udivmoddi4_hilo_ti */
      return TYPE_IDIV;

    case 40:  /* *mul_acc_si */
    case 41:  /* *mul_acc_si_r3900 */
    case 42:  /* *macc */
    case 43:  /* *msac */
    case 44:  /* *msac_using_macc */
    case 45:  /* *macc2 */
    case 46:  /* *msac2 */
    case 47:  /* *mul_sub_si */
    case 60:  /* msubsidi4 */
    case 61:  /* umsubsidi4 */
    case 74:  /* madsi */
    case 75:  /* maddsidi4 */
    case 76:  /* umaddsidi4 */
    case 954:  /* ssmaddsqdq4 */
    case 955:  /* ssmsubsqdq4 */
      return TYPE_IMADD;

    case 32:  /* mulsi3_mul3_loongson */
    case 33:  /* muldi3_mul3_loongson */
      return TYPE_IMUL3NC;

    case 57:  /* mulsidi3_64bit_dmul */
    case 64:  /* smulsi3_highpart_mulhi_internal */
    case 65:  /* umulsi3_highpart_mulhi_internal */
    case 66:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 67:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 787:  /* mips_muleu_s_ph_qbl */
    case 788:  /* mips_muleu_s_ph_qbr */
    case 789:  /* mips_mulq_rs_ph */
    case 790:  /* mips_muleq_s_w_phl */
    case 791:  /* mips_muleq_s_w_phr */
    case 868:  /* mulv2hi3 */
    case 869:  /* mips_mul_s_ph */
    case 870:  /* mips_mulq_rs_w */
    case 871:  /* mips_mulq_s_ph */
    case 872:  /* mips_mulq_s_w */
    case 951:  /* ssmulv2hq3 */
    case 952:  /* ssmulhq3 */
    case 953:  /* ssmulsq3 */
      return TYPE_IMUL3;

    case 36:  /* mulsi3_internal */
    case 37:  /* muldi3_internal */
    case 38:  /* mulsi3_r4000 */
    case 39:  /* muldi3_r4000 */
    case 49:  /* mulsidi3_32bit */
    case 50:  /* umulsidi3_32bit */
    case 51:  /* mulsidi3_32bit_r4000 */
    case 52:  /* umulsidi3_32bit_r4000 */
    case 53:  /* mulsidi3_64bit */
    case 54:  /* umulsidi3_64bit */
    case 55:  /* mulsidi3_64bit_hilo */
    case 56:  /* umulsidi3_64bit_hilo */
    case 58:  /* *muls_di */
    case 59:  /* *mulsu_di */
    case 62:  /* smulsi3_highpart_internal */
    case 63:  /* umulsi3_highpart_internal */
    case 68:  /* smuldi3_highpart_internal */
    case 69:  /* umuldi3_highpart_internal */
    case 70:  /* mulditi3_internal */
    case 71:  /* umulditi3_internal */
    case 72:  /* mulditi3_r4000 */
    case 73:  /* umulditi3_r4000 */
      return TYPE_IMUL;

    case 5:  /* trap */
    case 6:  /* *conditional_trapsi */
    case 7:  /* *conditional_trapdi */
    case 571:  /* mips_eret */
    case 572:  /* mips_deret */
    case 573:  /* mips_di */
    case 574:  /* mips_ehb */
      return TYPE_TRAP;

    case 143:  /* popcountsi2 */
    case 144:  /* popcountdi2 */
    case 145:  /* *popcountdi2_trunc */
      return TYPE_POP;

    case 141:  /* clzsi2 */
    case 142:  /* clzdi2 */
      return TYPE_CLZ;

    case 455:  /* *seq_zero_sisi */
    case 456:  /* *seq_zero_disi */
    case 457:  /* *seq_zero_sidi */
    case 458:  /* *seq_zero_didi */
    case 459:  /* *seq_zero_sisi_mips16 */
    case 460:  /* *seq_zero_disi_mips16 */
    case 461:  /* *seq_zero_sidi_mips16 */
    case 462:  /* *seq_zero_didi_mips16 */
    case 463:  /* *seq_sisi_seq */
    case 464:  /* *seq_disi_seq */
    case 465:  /* *seq_sidi_seq */
    case 466:  /* *seq_didi_seq */
    case 467:  /* *sne_zero_sisi */
    case 468:  /* *sne_zero_disi */
    case 469:  /* *sne_zero_sidi */
    case 470:  /* *sne_zero_didi */
    case 471:  /* *sne_sisi_sne */
    case 472:  /* *sne_disi_sne */
    case 473:  /* *sne_sidi_sne */
    case 474:  /* *sne_didi_sne */
    case 475:  /* *sgt_sisi */
    case 476:  /* *sgtu_sisi */
    case 477:  /* *sgt_disi */
    case 478:  /* *sgtu_disi */
    case 479:  /* *sgt_sidi */
    case 480:  /* *sgtu_sidi */
    case 481:  /* *sgt_didi */
    case 482:  /* *sgtu_didi */
    case 483:  /* *sgt_sisi_mips16 */
    case 484:  /* *sgtu_sisi_mips16 */
    case 485:  /* *sgt_disi_mips16 */
    case 486:  /* *sgtu_disi_mips16 */
    case 487:  /* *sgt_sidi_mips16 */
    case 488:  /* *sgtu_sidi_mips16 */
    case 489:  /* *sgt_didi_mips16 */
    case 490:  /* *sgtu_didi_mips16 */
    case 491:  /* *sge_sisi */
    case 492:  /* *sgeu_sisi */
    case 493:  /* *sge_disi */
    case 494:  /* *sgeu_disi */
    case 495:  /* *sge_sidi */
    case 496:  /* *sgeu_sidi */
    case 497:  /* *sge_didi */
    case 498:  /* *sgeu_didi */
    case 499:  /* *slt_sisi */
    case 500:  /* *sltu_sisi */
    case 501:  /* *slt_disi */
    case 502:  /* *sltu_disi */
    case 503:  /* *slt_sidi */
    case 504:  /* *sltu_sidi */
    case 505:  /* *slt_didi */
    case 506:  /* *sltu_didi */
    case 507:  /* *slt_sisi_mips16 */
    case 508:  /* *sltu_sisi_mips16 */
    case 509:  /* *slt_disi_mips16 */
    case 510:  /* *sltu_disi_mips16 */
    case 511:  /* *slt_sidi_mips16 */
    case 512:  /* *sltu_sidi_mips16 */
    case 513:  /* *slt_didi_mips16 */
    case 514:  /* *sltu_didi_mips16 */
    case 515:  /* *sle_sisi */
    case 516:  /* *sleu_sisi */
    case 517:  /* *sle_disi */
    case 518:  /* *sleu_disi */
    case 519:  /* *sle_sidi */
    case 520:  /* *sleu_sidi */
    case 521:  /* *sle_didi */
    case 522:  /* *sleu_didi */
    case 523:  /* *sle_sisi_mips16 */
    case 524:  /* *sleu_sisi_mips16 */
    case 525:  /* *sle_disi_mips16 */
    case 526:  /* *sleu_disi_mips16 */
    case 527:  /* *sle_sidi_mips16 */
    case 528:  /* *sleu_sidi_mips16 */
    case 529:  /* *sle_didi_mips16 */
    case 530:  /* *sleu_didi_mips16 */
      return TYPE_SLT;

    case 171:  /* *ashr_truncqi */
    case 172:  /* *ashr_trunchi */
    case 173:  /* *ashr_truncsi */
    case 174:  /* *lshr32_truncqi */
    case 175:  /* *lshr32_trunchi */
    case 176:  /* *lshr32_truncsi */
    case 248:  /* *cinssi */
    case 249:  /* *cinsdi */
    case 409:  /* *ashlsi3 */
    case 410:  /* *ashrsi3 */
    case 411:  /* *lshrsi3 */
    case 412:  /* *ashldi3 */
    case 413:  /* *ashrdi3 */
    case 414:  /* *lshrdi3 */
    case 415:  /* *ashlsi3_extend */
    case 416:  /* *ashrsi3_extend */
    case 417:  /* *lshrsi3_extend */
    case 418:  /* *ashlsi3_mips16 */
    case 419:  /* *ashrsi3_mips16 */
    case 420:  /* *lshrsi3_mips16 */
    case 421:  /* *ashldi3_mips16 */
    case 422:  /* *ashrdi3_mips16 */
    case 423:  /* *lshrdi3_mips16 */
    case 425:  /* rotrsi3 */
    case 426:  /* rotrdi3 */
    case 427:  /* bswaphi2 */
    case 430:  /* wsbh */
    case 431:  /* dsbh */
    case 432:  /* dshd */
      return TYPE_SHIFT;

    case 203:  /* *zero_extendhi_truncqi */
    case 202:  /* *zero_extenddi_trunchi */
    case 201:  /* *zero_extendsi_trunchi */
    case 200:  /* *zero_extenddi_truncqi */
    case 199:  /* *zero_extendsi_truncqi */
    case 192:  /* *zero_extendhidi2_mips16e */
    case 191:  /* *zero_extendhisi2_mips16e */
    case 190:  /* *zero_extendqidi2_mips16e */
    case 189:  /* *zero_extendqisi2_mips16e */
    case 166:  /* *nordi3 */
    case 165:  /* *norsi3 */
    case 164:  /* *mips.md:2992 */
    case 163:  /* *mips.md:2992 */
    case 162:  /* *mips.md:2981 */
    case 161:  /* *mips.md:2981 */
    case 160:  /* *iordi3_mips16 */
    case 159:  /* *iorsi3_mips16 */
    case 158:  /* *iordi3 */
    case 157:  /* *iorsi3 */
    case 152:  /* one_cmpldi2 */
    case 151:  /* one_cmplsi2 */
      return TYPE_LOGICAL;

    case 345:  /* mfhisi_di */
    case 346:  /* mfhisi_ti */
    case 347:  /* mfhidi_ti */
      return TYPE_MFHI;

    case 348:  /* mthisi_di */
    case 349:  /* mthisi_ti */
    case 350:  /* mthidi_ti */
      return TYPE_MTHI;

    case 385:  /* mfhc1tf */
    case 384:  /* mfhc1v8qi */
    case 383:  /* mfhc1v4hi */
    case 382:  /* mfhc1v2si */
    case 381:  /* mfhc1v2sf */
    case 380:  /* mfhc1di */
    case 379:  /* mfhc1df */
      return TYPE_MFC;

    case 960:  /* loongson_vec_init1_v8qi */
    case 959:  /* loongson_vec_init1_v4hi */
    case 378:  /* mthc1tf */
    case 377:  /* mthc1v8qi */
    case 376:  /* mthc1v4hi */
    case 375:  /* mthc1v2si */
    case 374:  /* mthc1v2sf */
    case 373:  /* mthc1di */
    case 372:  /* mthc1df */
      return TYPE_MTC;

    case 605:  /* *movsi_on_si */
    case 606:  /* *movdi_on_si */
    case 607:  /* *movsi_on_di */
    case 608:  /* *movdi_on_di */
    case 609:  /* *movsi_on_cc */
    case 610:  /* *movdi_on_cc */
    case 611:  /* *movsf_on_si */
    case 612:  /* *movsf_on_di */
    case 613:  /* *movsf_on_cc */
    case 614:  /* *movdf_on_si */
    case 615:  /* *movdf_on_di */
    case 616:  /* *movdf_on_cc */
    case 701:  /* *movcc_v2sf_si */
    case 702:  /* *movcc_v2sf_di */
    case 703:  /* mips_cond_move_tf_ps */
      return TYPE_CONDMOVE;

    case 601:  /* *prefetch_indexed_si */
    case 602:  /* *prefetch_indexed_di */
      return TYPE_PREFETCHX;

    case 600:  /* prefetch */
      return TYPE_PREFETCH;

    case 306:  /* *swxc1_si */
    case 307:  /* *sdxc1_si */
    case 308:  /* *sdxc1_si */
    case 309:  /* *swxc1_di */
    case 310:  /* *sdxc1_di */
    case 311:  /* *sdxc1_di */
      return TYPE_FPIDXSTORE;

    case 277:  /* *movdi_ra */
    case 276:  /* *movsi_ra */
    case 257:  /* mov_sdr */
    case 256:  /* mov_swr */
    case 255:  /* mov_sdl */
    case 254:  /* mov_swl */
    case 397:  /* cprestore_si */
    case 398:  /* cprestore_di */
      return TYPE_STORE;

    case 300:  /* *lwxc1_si */
    case 301:  /* *ldxc1_si */
    case 302:  /* *ldxc1_si */
    case 303:  /* *lwxc1_di */
    case 304:  /* *ldxc1_di */
    case 305:  /* *ldxc1_di */
      return TYPE_FPIDXLOAD;

    case 584:  /* load_calldi */
    case 583:  /* load_callsi */
    case 271:  /* load_gotdi */
    case 270:  /* load_gotsi */
    case 269:  /* *got_pagedi */
    case 268:  /* *got_pagesi */
    case 267:  /* *got_dispdi */
    case 266:  /* *got_dispsi */
    case 265:  /* *xgot_lodi */
    case 264:  /* *xgot_losi */
    case 253:  /* mov_ldr */
    case 252:  /* mov_lwr */
    case 251:  /* mov_ldl */
    case 250:  /* mov_lwl */
    case 198:  /* *zero_extendqihi2_mips16 */
    case 196:  /* *zero_extendhidi2_mips16 */
    case 195:  /* *zero_extendhisi2_mips16 */
    case 194:  /* *zero_extendqidi2_mips16 */
    case 193:  /* *zero_extendqisi2_mips16 */
    case 312:  /* *lwxs */
    case 313:  /* *lwxs */
    case 314:  /* *lwxs */
    case 315:  /* *lwxs */
    case 316:  /* *lwxs */
    case 317:  /* *lwxs */
    case 318:  /* *lwxs */
    case 319:  /* *lwxs */
    case 320:  /* *lwxs */
    case 321:  /* *lwxs */
    case 322:  /* *lwxs */
    case 323:  /* *lwxs */
    case 324:  /* *lwxs */
    case 325:  /* *lwxs */
    case 326:  /* *lwxs */
    case 327:  /* *lwxs */
    case 328:  /* *lwxs */
    case 329:  /* *lwxs */
    case 424:  /* *mips.md:5359 */
    case 831:  /* mips_lbx_extsi_si */
    case 832:  /* mips_lbux_extsi_si */
    case 833:  /* mips_lbx_extdi_si */
    case 834:  /* mips_lbux_extdi_si */
    case 835:  /* mips_lhx_extsi_si */
    case 836:  /* mips_lhux_extsi_si */
    case 837:  /* mips_lhx_extdi_si */
    case 838:  /* mips_lhux_extdi_si */
    case 839:  /* mips_lbx_extsi_di */
    case 840:  /* mips_lbux_extsi_di */
    case 841:  /* mips_lbx_extdi_di */
    case 842:  /* mips_lbux_extdi_di */
    case 843:  /* mips_lhx_extsi_di */
    case 844:  /* mips_lhux_extsi_di */
    case 845:  /* mips_lhx_extdi_di */
    case 846:  /* mips_lhux_extdi_di */
    case 847:  /* mips_lwx_si */
    case 848:  /* mips_ldx_si */
    case 849:  /* mips_lwx_di */
    case 850:  /* mips_ldx_di */
    case 851:  /* *mips_lwx_si_ext */
    case 852:  /* *mips_lwux_si_ext */
    case 853:  /* *mips_lwx_di_ext */
    case 854:  /* *mips_lwux_di_ext */
      return TYPE_LOAD;

    case 599:  /* call_value_multiple_split */
    case 598:  /* call_value_multiple_internal */
    case 597:  /* call_value_direct_split */
    case 596:  /* call_value_internal_direct */
    case 595:  /* call_value_split */
    case 594:  /* call_value_internal */
    case 593:  /* call_direct_split */
    case 592:  /* call_internal_direct */
    case 591:  /* call_split */
    case 590:  /* call_internal */
    case 589:  /* sibcall_value_multiple_internal */
    case 588:  /* sibcall_value_internal */
    case 587:  /* sibcall_internal */
    case 628:  /* *tls_get_tp_mips16_call_si */
    case 629:  /* *tls_get_tp_mips16_call_di */
      return TYPE_CALL;

    case 553:  /* *jump_absolute */
    case 556:  /* indirect_jump_si */
    case 557:  /* indirect_jump_di */
    case 560:  /* tablejump_si */
    case 561:  /* tablejump_di */
    case 567:  /* *return */
    case 568:  /* *simple_return */
    case 569:  /* return_internal */
    case 570:  /* simple_return_internal */
      return TYPE_JUMP;

    case 433:  /* *branch_fp */
    case 434:  /* *branch_fp_inverted */
    case 435:  /* *branch_ordersi */
    case 436:  /* *branch_orderdi */
    case 437:  /* *branch_ordersi_inverted */
    case 438:  /* *branch_orderdi_inverted */
    case 439:  /* *branch_equalitysi */
    case 440:  /* *branch_equalitydi */
    case 441:  /* *branch_equalitysi_inverted */
    case 442:  /* *branch_equalitydi_inverted */
    case 443:  /* *branch_equalitysi_mips16 */
    case 444:  /* *branch_equalitydi_mips16 */
    case 445:  /* *branch_equalitysi_mips16_inverted */
    case 446:  /* *branch_equalitydi_mips16_inverted */
    case 447:  /* *branch_bit0si */
    case 448:  /* *branch_bit1si */
    case 449:  /* *branch_bit0di */
    case 450:  /* *branch_bit1di */
    case 451:  /* *branch_bit0si_inverted */
    case 452:  /* *branch_bit1si_inverted */
    case 453:  /* *branch_bit0di_inverted */
    case 454:  /* *branch_bit1di_inverted */
    case 554:  /* *jump_pic */
    case 555:  /* *jump_mips16 */
    case 731:  /* bc1any4t */
    case 732:  /* bc1any4f */
    case 733:  /* bc1any2t */
    case 734:  /* bc1any2f */
    case 735:  /* *branch_upper_lower */
    case 736:  /* *branch_upper_lower_inverted */
    case 855:  /* mips_bposge */
      return TYPE_BRANCH;

    case 709:  /* reduc_splus_v2sf */
    case 630:  /* *memory_barrier */
    case 620:  /* align */
    case 619:  /* consttable_float */
    case 618:  /* consttable_int */
    case 617:  /* consttable_tls_reloc */
    case 578:  /* eh_set_lr_di */
    case 577:  /* eh_set_lr_si */
    case 563:  /* casesi_internal_mips16_di */
    case 562:  /* casesi_internal_mips16_si */
    case 429:  /* bswapdi2 */
    case 428:  /* bswapsi2 */
    case 408:  /* r10k_cache_barrier */
    case 407:  /* mips_cache */
    case 406:  /* clear_hazard_di */
    case 405:  /* clear_hazard_si */
    case 404:  /* rdhwr_synci_step_di */
    case 403:  /* rdhwr_synci_step_si */
    case 402:  /* synci */
    case 401:  /* sync */
    case 263:  /* *xgot_hidi */
    case 262:  /* *xgot_hisi */
    case 261:  /* *unshifted_high */
    case 260:  /* *unshifted_high */
    case 259:  /* *lea64 */
    case 258:  /* *lea_high64 */
    case 4:  /* ls2_falu2_turn_enabled_insn */
    case 3:  /* ls2_falu1_turn_enabled_insn */
    case 2:  /* ls2_alu2_turn_enabled_insn */
    case 1:  /* ls2_alu1_turn_enabled_insn */
    case 565:  /* probe_stack_range_si */
    case 566:  /* probe_stack_range_di */
    case 622:  /* tls_get_tp_si */
    case 623:  /* tls_get_tp_di */
    case 624:  /* *tls_get_tp_si_split */
    case 625:  /* *tls_get_tp_di_split */
      return TYPE_UNKNOWN;

    default:
      return TYPE_ARITH;

    }
}

enum attr_vr4130_class
get_attr_vr4130_class (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 958:  /* movv8qi_internal */
    case 957:  /* movv4hi_internal */
    case 956:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x1f))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 342:  /* *movtf */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x6))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 343:  /* *movtf_mips16 */
    case 339:  /* *movdf_mips16 */
    case 336:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x7))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 344:  /* *movv2sf */
    case 337:  /* *movdf_hardfloat */
    case 334:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xef))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 340:  /* *movti */
    case 332:  /* *movqi_internal */
    case 330:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xc))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 290:  /* *movv4uqq_internal */
    case 289:  /* *movv4qq_internal */
    case 288:  /* *movv2uha_internal */
    case 287:  /* *movv2ha_internal */
    case 286:  /* *movv2uhq_internal */
    case 285:  /* *movv2hq_internal */
    case 284:  /* *movv4qi_internal */
    case 283:  /* *movv2hi_internal */
    case 282:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x18))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (((1 << which_alternative) & 0x1800))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 299:  /* *movv4uqq_mips16 */
    case 298:  /* *movv4qq_mips16 */
    case 297:  /* *movv2uha_mips16 */
    case 296:  /* *movv2ha_mips16 */
    case 295:  /* *movv2uhq_mips16 */
    case 294:  /* *movv2hq_mips16 */
    case 293:  /* *movv4qi_mips16 */
    case 292:  /* *movv2hi_mips16 */
    case 291:  /* *movsi_mips16 */
    case 281:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1c0))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (!((1 << which_alternative) & 0x1ff))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 280:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x18))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (((1 << which_alternative) & 0x600))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 341:  /* *movti_mips16 */
    case 333:  /* *movqi_mips16 */
    case 331:  /* *movhi_mips16 */
    case 279:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x60))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 278:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xc))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 204:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 338:  /* *movdf_softfloat */
    case 335:  /* *movsf_softfloat */
    case 219:  /* *extendqihi2_seb */
    case 218:  /* *extendqihi2 */
    case 217:  /* *extendqihi2_mips16e */
    case 216:  /* *extendhidi2_seh */
    case 215:  /* *extendhisi2_seh */
    case 214:  /* *extendqidi2_seb */
    case 213:  /* *extendqisi2_seb */
    case 212:  /* *extendhidi2 */
    case 211:  /* *extendhisi2 */
    case 210:  /* *extendqidi2 */
    case 209:  /* *extendqisi2 */
    case 208:  /* *extendhidi2_mips16e */
    case 207:  /* *extendhisi2_mips16e */
    case 206:  /* *extendqidi2_mips16e */
    case 205:  /* *extendqisi2_mips16e */
    case 197:  /* *zero_extendqihi2 */
    case 188:  /* *zero_extendhidi2 */
    case 187:  /* *zero_extendhisi2 */
    case 186:  /* *zero_extendqidi2 */
    case 185:  /* *zero_extendqisi2 */
    case 184:  /* *zero_extendsidi2_dext */
    case 183:  /* *zero_extendsidi2 */
    case 170:  /* truncdisi2 */
    case 169:  /* truncdihi2 */
    case 168:  /* truncdiqi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 156:  /* *anddi3_mips16 */
    case 155:  /* *andsi3_mips16 */
    case 154:  /* *anddi3 */
    case 153:  /* *andsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || (cached_type == TYPE_STORE))
        {
	  return VR4130_CLASS_MEM;
        }
      else if ((cached_type == TYPE_MFHI) || ((cached_type == TYPE_MFLO) || ((cached_type == TYPE_MTHI) || ((cached_type == TYPE_MTLO) || ((cached_type == TYPE_IMUL) || ((cached_type == TYPE_IMUL3) || ((cached_type == TYPE_IMADD) || (cached_type == TYPE_IDIV))))))))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 854:  /* *mips_lwux_di_ext */
    case 853:  /* *mips_lwx_di_ext */
    case 852:  /* *mips_lwux_si_ext */
    case 851:  /* *mips_lwx_si_ext */
    case 850:  /* mips_ldx_di */
    case 849:  /* mips_lwx_di */
    case 848:  /* mips_ldx_si */
    case 847:  /* mips_lwx_si */
    case 846:  /* mips_lhux_extdi_di */
    case 845:  /* mips_lhx_extdi_di */
    case 844:  /* mips_lhux_extsi_di */
    case 843:  /* mips_lhx_extsi_di */
    case 842:  /* mips_lbux_extdi_di */
    case 841:  /* mips_lbx_extdi_di */
    case 840:  /* mips_lbux_extsi_di */
    case 839:  /* mips_lbx_extsi_di */
    case 838:  /* mips_lhux_extdi_si */
    case 837:  /* mips_lhx_extdi_si */
    case 836:  /* mips_lhux_extsi_si */
    case 835:  /* mips_lhx_extsi_si */
    case 834:  /* mips_lbux_extdi_si */
    case 833:  /* mips_lbx_extdi_si */
    case 832:  /* mips_lbux_extsi_si */
    case 831:  /* mips_lbx_extsi_si */
    case 584:  /* load_calldi */
    case 583:  /* load_callsi */
    case 424:  /* *mips.md:5359 */
    case 398:  /* cprestore_di */
    case 397:  /* cprestore_si */
    case 329:  /* *lwxs */
    case 328:  /* *lwxs */
    case 327:  /* *lwxs */
    case 326:  /* *lwxs */
    case 325:  /* *lwxs */
    case 324:  /* *lwxs */
    case 323:  /* *lwxs */
    case 322:  /* *lwxs */
    case 321:  /* *lwxs */
    case 320:  /* *lwxs */
    case 319:  /* *lwxs */
    case 318:  /* *lwxs */
    case 317:  /* *lwxs */
    case 316:  /* *lwxs */
    case 315:  /* *lwxs */
    case 314:  /* *lwxs */
    case 313:  /* *lwxs */
    case 312:  /* *lwxs */
    case 277:  /* *movdi_ra */
    case 276:  /* *movsi_ra */
    case 271:  /* load_gotdi */
    case 270:  /* load_gotsi */
    case 269:  /* *got_pagedi */
    case 268:  /* *got_pagesi */
    case 267:  /* *got_dispdi */
    case 266:  /* *got_dispsi */
    case 265:  /* *xgot_lodi */
    case 264:  /* *xgot_losi */
    case 257:  /* mov_sdr */
    case 256:  /* mov_swr */
    case 255:  /* mov_sdl */
    case 254:  /* mov_swl */
    case 253:  /* mov_ldr */
    case 252:  /* mov_lwr */
    case 251:  /* mov_ldl */
    case 250:  /* mov_lwl */
    case 198:  /* *zero_extendqihi2_mips16 */
    case 196:  /* *zero_extendhidi2_mips16 */
    case 195:  /* *zero_extendhisi2_mips16 */
    case 194:  /* *zero_extendqidi2_mips16 */
    case 193:  /* *zero_extendqisi2_mips16 */
      return VR4130_CLASS_MEM;

    case 955:  /* ssmsubsqdq4 */
    case 954:  /* ssmaddsqdq4 */
    case 953:  /* ssmulsq3 */
    case 952:  /* ssmulhq3 */
    case 951:  /* ssmulv2hq3 */
    case 872:  /* mips_mulq_s_w */
    case 871:  /* mips_mulq_s_ph */
    case 870:  /* mips_mulq_rs_w */
    case 869:  /* mips_mul_s_ph */
    case 868:  /* mulv2hi3 */
    case 791:  /* mips_muleq_s_w_phr */
    case 790:  /* mips_muleq_s_w_phl */
    case 789:  /* mips_mulq_rs_ph */
    case 788:  /* mips_muleu_s_ph_qbr */
    case 787:  /* mips_muleu_s_ph_qbl */
    case 350:  /* mthidi_ti */
    case 349:  /* mthisi_ti */
    case 348:  /* mthisi_di */
    case 347:  /* mfhidi_ti */
    case 346:  /* mfhisi_ti */
    case 345:  /* mfhisi_di */
    case 128:  /* udivmoddi4_hilo_ti */
    case 127:  /* divmoddi4_hilo_ti */
    case 126:  /* udivmodsi4_hilo_ti */
    case 125:  /* divmodsi4_hilo_ti */
    case 124:  /* udivmodsi4_hilo_di */
    case 123:  /* divmodsi4_hilo_di */
    case 122:  /* udivmoddi4_internal */
    case 121:  /* udivmodsi4_internal */
    case 120:  /* divmoddi4_internal */
    case 119:  /* divmodsi4_internal */
    case 76:  /* umaddsidi4 */
    case 75:  /* maddsidi4 */
    case 74:  /* madsi */
    case 73:  /* umulditi3_r4000 */
    case 72:  /* mulditi3_r4000 */
    case 71:  /* umulditi3_internal */
    case 70:  /* mulditi3_internal */
    case 69:  /* umuldi3_highpart_internal */
    case 68:  /* smuldi3_highpart_internal */
    case 67:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 66:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 65:  /* umulsi3_highpart_mulhi_internal */
    case 64:  /* smulsi3_highpart_mulhi_internal */
    case 63:  /* umulsi3_highpart_internal */
    case 62:  /* smulsi3_highpart_internal */
    case 61:  /* umsubsidi4 */
    case 60:  /* msubsidi4 */
    case 59:  /* *mulsu_di */
    case 58:  /* *muls_di */
    case 57:  /* mulsidi3_64bit_dmul */
    case 56:  /* umulsidi3_64bit_hilo */
    case 55:  /* mulsidi3_64bit_hilo */
    case 54:  /* umulsidi3_64bit */
    case 53:  /* mulsidi3_64bit */
    case 52:  /* umulsidi3_32bit_r4000 */
    case 51:  /* mulsidi3_32bit_r4000 */
    case 50:  /* umulsidi3_32bit */
    case 49:  /* mulsidi3_32bit */
    case 48:  /* *muls */
    case 47:  /* *mul_sub_si */
    case 46:  /* *msac2 */
    case 45:  /* *macc2 */
    case 44:  /* *msac_using_macc */
    case 43:  /* *msac */
    case 42:  /* *macc */
    case 41:  /* *mul_acc_si_r3900 */
    case 40:  /* *mul_acc_si */
    case 39:  /* muldi3_r4000 */
    case 38:  /* mulsi3_r4000 */
    case 37:  /* muldi3_internal */
    case 36:  /* mulsi3_internal */
    case 35:  /* muldi3_mul3 */
    case 34:  /* mulsi3_mul3 */
      return VR4130_CLASS_MUL;

    default:
      return VR4130_CLASS_ALU;

    }
}

int
eligible_for_delay (rtx delay_insn ATTRIBUTE_UNUSED, int slot, 
		   rtx candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx insn;

  gcc_assert (slot < 1);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 596:  /* call_value_internal_direct */
    case 592:  /* call_internal_direct */
      extract_constrain_insn_cached (insn);
      if ((
#line 186 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO))) == (
(JAL_MACRO_NO)))
        {
	  slot += 4 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 598:  /* call_value_multiple_internal */
    case 594:  /* call_value_internal */
    case 590:  /* call_internal */
      if (get_attr_jal_macro (insn) == JAL_MACRO_NO)
        {
	  slot += 4 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 629:  /* *tls_get_tp_mips16_call_di */
    case 628:  /* *tls_get_tp_mips16_call_si */
    case 599:  /* call_value_multiple_split */
    case 597:  /* call_value_direct_split */
    case 595:  /* call_value_split */
    case 593:  /* call_direct_split */
    case 591:  /* call_split */
    case 589:  /* sibcall_value_multiple_internal */
    case 588:  /* sibcall_value_internal */
    case 587:  /* sibcall_internal */
      slot += 4 * 1;
      break;
      break;

    case 570:  /* simple_return_internal */
    case 569:  /* return_internal */
    case 568:  /* *simple_return */
    case 567:  /* *return */
    case 561:  /* tablejump_di */
    case 560:  /* tablejump_si */
    case 557:  /* indirect_jump_di */
    case 556:  /* indirect_jump_si */
    case 553:  /* *jump_absolute */
      slot += 3 * 1;
      break;
      break;

    case 454:  /* *branch_bit1di_inverted */
    case 453:  /* *branch_bit0di_inverted */
    case 452:  /* *branch_bit1si_inverted */
    case 451:  /* *branch_bit0si_inverted */
    case 450:  /* *branch_bit1di */
    case 449:  /* *branch_bit0di */
    case 448:  /* *branch_bit1si */
    case 447:  /* *branch_bit0si */
      extract_constrain_insn_cached (insn);
      if (! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  slot += 2 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 855:  /* mips_bposge */
    case 736:  /* *branch_upper_lower_inverted */
    case 735:  /* *branch_upper_lower */
    case 734:  /* bc1any2f */
    case 733:  /* bc1any2t */
    case 732:  /* bc1any4f */
    case 731:  /* bc1any4t */
    case 555:  /* *jump_mips16 */
    case 554:  /* *jump_pic */
    case 446:  /* *branch_equalitydi_mips16_inverted */
    case 445:  /* *branch_equalitysi_mips16_inverted */
    case 444:  /* *branch_equalitydi_mips16 */
    case 443:  /* *branch_equalitysi_mips16 */
    case 442:  /* *branch_equalitydi_inverted */
    case 441:  /* *branch_equalitysi_inverted */
    case 440:  /* *branch_equalitydi */
    case 439:  /* *branch_equalitysi */
    case 438:  /* *branch_orderdi_inverted */
    case 437:  /* *branch_ordersi_inverted */
    case 436:  /* *branch_orderdi */
    case 435:  /* *branch_ordersi */
    case 434:  /* *branch_fp_inverted */
    case 433:  /* *branch_fp */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (! (
#line 696 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY))))
        {
	  slot += 2 * 1;
      break;
        }
      else if ((! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (
#line 696 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY)))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_CALL) && (get_attr_jal_macro (insn) == JAL_MACRO_NO))
        {
	  slot += 4 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_JUMP)
        {
	  slot += 3 * 1;
      break;
        }
      else if ((get_attr_type (insn) == TYPE_BRANCH) && ((! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (get_attr_branch_likely (insn) == BRANCH_LIKELY_NO)))
        {
	  slot += 2 * 1;
      break;
        }
      else if ((get_attr_type (insn) == TYPE_BRANCH) && ((! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (get_attr_branch_likely (insn) == BRANCH_LIKELY_YES)))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    default:
      slot += 0 * 1;
      break;
      break;

    }

  gcc_assert (slot >= 1);

  insn = candidate_insn;
  switch (slot)
    {
    case 4:
      switch (recog_memoized (insn))
	{
        case 855:  /* mips_bposge */
        case 736:  /* *branch_upper_lower_inverted */
        case 735:  /* *branch_upper_lower */
        case 734:  /* bc1any2f */
        case 733:  /* bc1any2t */
        case 732:  /* bc1any4f */
        case 731:  /* bc1any4t */
        case 629:  /* *tls_get_tp_mips16_call_di */
        case 628:  /* *tls_get_tp_mips16_call_si */
        case 625:  /* *tls_get_tp_di_split */
        case 624:  /* *tls_get_tp_si_split */
        case 623:  /* tls_get_tp_di */
        case 622:  /* tls_get_tp_si */
        case 599:  /* call_value_multiple_split */
        case 598:  /* call_value_multiple_internal */
        case 597:  /* call_value_direct_split */
        case 596:  /* call_value_internal_direct */
        case 595:  /* call_value_split */
        case 594:  /* call_value_internal */
        case 593:  /* call_direct_split */
        case 592:  /* call_internal_direct */
        case 591:  /* call_split */
        case 590:  /* call_internal */
        case 589:  /* sibcall_value_multiple_internal */
        case 588:  /* sibcall_value_internal */
        case 587:  /* sibcall_internal */
        case 570:  /* simple_return_internal */
        case 569:  /* return_internal */
        case 568:  /* *simple_return */
        case 567:  /* *return */
        case 566:  /* probe_stack_range_di */
        case 565:  /* probe_stack_range_si */
        case 561:  /* tablejump_di */
        case 560:  /* tablejump_si */
        case 557:  /* indirect_jump_di */
        case 556:  /* indirect_jump_si */
        case 555:  /* *jump_mips16 */
        case 554:  /* *jump_pic */
        case 553:  /* *jump_absolute */
        case 454:  /* *branch_bit1di_inverted */
        case 453:  /* *branch_bit0di_inverted */
        case 452:  /* *branch_bit1si_inverted */
        case 451:  /* *branch_bit0si_inverted */
        case 450:  /* *branch_bit1di */
        case 449:  /* *branch_bit0di */
        case 448:  /* *branch_bit1si */
        case 447:  /* *branch_bit0si */
        case 446:  /* *branch_equalitydi_mips16_inverted */
        case 445:  /* *branch_equalitysi_mips16_inverted */
        case 444:  /* *branch_equalitydi_mips16 */
        case 443:  /* *branch_equalitysi_mips16 */
        case 442:  /* *branch_equalitydi_inverted */
        case 441:  /* *branch_equalitysi_inverted */
        case 440:  /* *branch_equalitydi */
        case 439:  /* *branch_equalitysi */
        case 438:  /* *branch_orderdi_inverted */
        case 437:  /* *branch_ordersi_inverted */
        case 436:  /* *branch_orderdi */
        case 435:  /* *branch_ordersi */
        case 434:  /* *branch_fp_inverted */
        case 433:  /* *branch_fp */
        case 408:  /* r10k_cache_barrier */
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 34:  /* mulsi3_mul3 */
        case 35:  /* muldi3_mul3 */
        case 36:  /* mulsi3_internal */
        case 37:  /* muldi3_internal */
        case 38:  /* mulsi3_r4000 */
        case 39:  /* muldi3_r4000 */
        case 48:  /* *muls */
        case 49:  /* mulsidi3_32bit */
        case 50:  /* umulsidi3_32bit */
        case 51:  /* mulsidi3_32bit_r4000 */
        case 52:  /* umulsidi3_32bit_r4000 */
        case 53:  /* mulsidi3_64bit */
        case 54:  /* umulsidi3_64bit */
        case 55:  /* mulsidi3_64bit_hilo */
        case 56:  /* umulsidi3_64bit_hilo */
        case 58:  /* *muls_di */
        case 59:  /* *mulsu_di */
        case 62:  /* smulsi3_highpart_internal */
        case 63:  /* umulsi3_highpart_internal */
        case 68:  /* smuldi3_highpart_internal */
        case 69:  /* umuldi3_highpart_internal */
        case 70:  /* mulditi3_internal */
        case 71:  /* umulditi3_internal */
        case 72:  /* mulditi3_r4000 */
        case 73:  /* umulditi3_r4000 */
        case 153:  /* *andsi3 */
        case 154:  /* *anddi3 */
        case 155:  /* *andsi3_mips16 */
        case 156:  /* *anddi3_mips16 */
        case 183:  /* *zero_extendsidi2 */
        case 184:  /* *zero_extendsidi2_dext */
        case 185:  /* *zero_extendqisi2 */
        case 186:  /* *zero_extendqidi2 */
        case 187:  /* *zero_extendhisi2 */
        case 188:  /* *zero_extendhidi2 */
        case 193:  /* *zero_extendqisi2_mips16 */
        case 194:  /* *zero_extendqidi2_mips16 */
        case 195:  /* *zero_extendhisi2_mips16 */
        case 196:  /* *zero_extendhidi2_mips16 */
        case 197:  /* *zero_extendqihi2 */
        case 198:  /* *zero_extendqihi2_mips16 */
        case 204:  /* extendsidi2 */
        case 205:  /* *extendqisi2_mips16e */
        case 206:  /* *extendqidi2_mips16e */
        case 207:  /* *extendhisi2_mips16e */
        case 208:  /* *extendhidi2_mips16e */
        case 209:  /* *extendqisi2 */
        case 210:  /* *extendqidi2 */
        case 211:  /* *extendhisi2 */
        case 212:  /* *extendhidi2 */
        case 213:  /* *extendqisi2_seb */
        case 214:  /* *extendqidi2_seb */
        case 215:  /* *extendhisi2_seh */
        case 216:  /* *extendhidi2_seh */
        case 217:  /* *extendqihi2_mips16e */
        case 218:  /* *extendqihi2 */
        case 219:  /* *extendqihi2_seb */
        case 250:  /* mov_lwl */
        case 251:  /* mov_ldl */
        case 252:  /* mov_lwr */
        case 253:  /* mov_ldr */
        case 264:  /* *xgot_losi */
        case 265:  /* *xgot_lodi */
        case 266:  /* *got_dispsi */
        case 267:  /* *got_dispdi */
        case 268:  /* *got_pagesi */
        case 269:  /* *got_pagedi */
        case 270:  /* load_gotsi */
        case 271:  /* load_gotdi */
        case 278:  /* *movdi_32bit */
        case 279:  /* *movdi_32bit_mips16 */
        case 280:  /* *movdi_64bit */
        case 281:  /* *movdi_64bit_mips16 */
        case 282:  /* *movsi_internal */
        case 283:  /* *movv2hi_internal */
        case 284:  /* *movv4qi_internal */
        case 285:  /* *movv2hq_internal */
        case 286:  /* *movv2uhq_internal */
        case 287:  /* *movv2ha_internal */
        case 288:  /* *movv2uha_internal */
        case 289:  /* *movv4qq_internal */
        case 290:  /* *movv4uqq_internal */
        case 291:  /* *movsi_mips16 */
        case 292:  /* *movv2hi_mips16 */
        case 293:  /* *movv4qi_mips16 */
        case 294:  /* *movv2hq_mips16 */
        case 295:  /* *movv2uhq_mips16 */
        case 296:  /* *movv2ha_mips16 */
        case 297:  /* *movv2uha_mips16 */
        case 298:  /* *movv4qq_mips16 */
        case 299:  /* *movv4uqq_mips16 */
        case 300:  /* *lwxc1_si */
        case 301:  /* *ldxc1_si */
        case 302:  /* *ldxc1_si */
        case 303:  /* *lwxc1_di */
        case 304:  /* *ldxc1_di */
        case 305:  /* *ldxc1_di */
        case 312:  /* *lwxs */
        case 313:  /* *lwxs */
        case 314:  /* *lwxs */
        case 315:  /* *lwxs */
        case 316:  /* *lwxs */
        case 317:  /* *lwxs */
        case 318:  /* *lwxs */
        case 319:  /* *lwxs */
        case 320:  /* *lwxs */
        case 321:  /* *lwxs */
        case 322:  /* *lwxs */
        case 323:  /* *lwxs */
        case 324:  /* *lwxs */
        case 325:  /* *lwxs */
        case 326:  /* *lwxs */
        case 327:  /* *lwxs */
        case 328:  /* *lwxs */
        case 329:  /* *lwxs */
        case 330:  /* *movhi_internal */
        case 331:  /* *movhi_mips16 */
        case 332:  /* *movqi_internal */
        case 333:  /* *movqi_mips16 */
        case 334:  /* *movsf_hardfloat */
        case 335:  /* *movsf_softfloat */
        case 336:  /* *movsf_mips16 */
        case 337:  /* *movdf_hardfloat */
        case 338:  /* *movdf_softfloat */
        case 339:  /* *movdf_mips16 */
        case 340:  /* *movti */
        case 341:  /* *movti_mips16 */
        case 342:  /* *movtf */
        case 343:  /* *movtf_mips16 */
        case 344:  /* *movv2sf */
        case 345:  /* mfhisi_di */
        case 346:  /* mfhisi_ti */
        case 347:  /* mfhidi_ti */
        case 351:  /* load_lowdf */
        case 352:  /* load_lowdi */
        case 353:  /* load_lowv2sf */
        case 354:  /* load_lowv2si */
        case 355:  /* load_lowv4hi */
        case 356:  /* load_lowv8qi */
        case 357:  /* load_lowtf */
        case 358:  /* load_highdf */
        case 359:  /* load_highdi */
        case 360:  /* load_highv2sf */
        case 361:  /* load_highv2si */
        case 362:  /* load_highv4hi */
        case 363:  /* load_highv8qi */
        case 364:  /* load_hightf */
        case 365:  /* store_worddf */
        case 366:  /* store_worddi */
        case 367:  /* store_wordv2sf */
        case 368:  /* store_wordv2si */
        case 369:  /* store_wordv4hi */
        case 370:  /* store_wordv8qi */
        case 371:  /* store_wordtf */
        case 372:  /* mthc1df */
        case 373:  /* mthc1di */
        case 374:  /* mthc1v2sf */
        case 375:  /* mthc1v2si */
        case 376:  /* mthc1v4hi */
        case 377:  /* mthc1v8qi */
        case 378:  /* mthc1tf */
        case 379:  /* mfhc1df */
        case 380:  /* mfhc1di */
        case 381:  /* mfhc1v2sf */
        case 382:  /* mfhc1v2si */
        case 383:  /* mfhc1v4hi */
        case 384:  /* mfhc1v8qi */
        case 385:  /* mfhc1tf */
        case 424:  /* *mips.md:5359 */
        case 531:  /* sunordered_sf */
        case 532:  /* suneq_sf */
        case 533:  /* sunlt_sf */
        case 534:  /* sunle_sf */
        case 535:  /* seq_sf */
        case 536:  /* slt_sf */
        case 537:  /* sle_sf */
        case 538:  /* sunordered_df */
        case 539:  /* suneq_df */
        case 540:  /* sunlt_df */
        case 541:  /* sunle_df */
        case 542:  /* seq_df */
        case 543:  /* slt_df */
        case 544:  /* sle_df */
        case 545:  /* sge_sf */
        case 546:  /* sgt_sf */
        case 547:  /* sunge_sf */
        case 548:  /* sungt_sf */
        case 549:  /* sge_df */
        case 550:  /* sgt_df */
        case 551:  /* sunge_df */
        case 552:  /* sungt_df */
        case 576:  /* cop0_move */
        case 583:  /* load_callsi */
        case 584:  /* load_calldi */
        case 714:  /* mips_cabs_cond_s */
        case 715:  /* mips_cabs_cond_d */
        case 716:  /* mips_c_cond_4s */
        case 717:  /* mips_cabs_cond_4s */
        case 718:  /* mips_c_cond_ps */
        case 719:  /* mips_cabs_cond_ps */
        case 720:  /* sunordered_ps */
        case 721:  /* suneq_ps */
        case 722:  /* sunlt_ps */
        case 723:  /* sunle_ps */
        case 724:  /* seq_ps */
        case 725:  /* slt_ps */
        case 726:  /* sle_ps */
        case 727:  /* sge_ps */
        case 728:  /* sgt_ps */
        case 729:  /* sunge_ps */
        case 730:  /* sungt_ps */
        case 831:  /* mips_lbx_extsi_si */
        case 832:  /* mips_lbux_extsi_si */
        case 833:  /* mips_lbx_extdi_si */
        case 834:  /* mips_lbux_extdi_si */
        case 835:  /* mips_lhx_extsi_si */
        case 836:  /* mips_lhux_extsi_si */
        case 837:  /* mips_lhx_extdi_si */
        case 838:  /* mips_lhux_extdi_si */
        case 839:  /* mips_lbx_extsi_di */
        case 840:  /* mips_lbux_extsi_di */
        case 841:  /* mips_lbx_extdi_di */
        case 842:  /* mips_lbux_extdi_di */
        case 843:  /* mips_lhx_extsi_di */
        case 844:  /* mips_lhux_extsi_di */
        case 845:  /* mips_lhx_extdi_di */
        case 846:  /* mips_lhux_extdi_di */
        case 847:  /* mips_lwx_si */
        case 848:  /* mips_ldx_si */
        case 849:  /* mips_lwx_di */
        case 850:  /* mips_ldx_di */
        case 851:  /* *mips_lwx_si_ext */
        case 852:  /* *mips_lwux_si_ext */
        case 853:  /* *mips_lwx_di_ext */
        case 854:  /* *mips_lwux_di_ext */
        case 956:  /* movv2si_internal */
        case 957:  /* movv4hi_internal */
        case 958:  /* movv8qi_internal */
        case 959:  /* loongson_vec_init1_v4hi */
        case 960:  /* loongson_vec_init1_v8qi */
	  if (get_attr_can_delay (insn) == CAN_DELAY_YES)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 3:
      switch (recog_memoized (insn))
	{
        case 855:  /* mips_bposge */
        case 736:  /* *branch_upper_lower_inverted */
        case 735:  /* *branch_upper_lower */
        case 734:  /* bc1any2f */
        case 733:  /* bc1any2t */
        case 732:  /* bc1any4f */
        case 731:  /* bc1any4t */
        case 629:  /* *tls_get_tp_mips16_call_di */
        case 628:  /* *tls_get_tp_mips16_call_si */
        case 625:  /* *tls_get_tp_di_split */
        case 624:  /* *tls_get_tp_si_split */
        case 623:  /* tls_get_tp_di */
        case 622:  /* tls_get_tp_si */
        case 599:  /* call_value_multiple_split */
        case 598:  /* call_value_multiple_internal */
        case 597:  /* call_value_direct_split */
        case 596:  /* call_value_internal_direct */
        case 595:  /* call_value_split */
        case 594:  /* call_value_internal */
        case 593:  /* call_direct_split */
        case 592:  /* call_internal_direct */
        case 591:  /* call_split */
        case 590:  /* call_internal */
        case 589:  /* sibcall_value_multiple_internal */
        case 588:  /* sibcall_value_internal */
        case 587:  /* sibcall_internal */
        case 570:  /* simple_return_internal */
        case 569:  /* return_internal */
        case 568:  /* *simple_return */
        case 567:  /* *return */
        case 566:  /* probe_stack_range_di */
        case 565:  /* probe_stack_range_si */
        case 561:  /* tablejump_di */
        case 560:  /* tablejump_si */
        case 557:  /* indirect_jump_di */
        case 556:  /* indirect_jump_si */
        case 555:  /* *jump_mips16 */
        case 554:  /* *jump_pic */
        case 553:  /* *jump_absolute */
        case 454:  /* *branch_bit1di_inverted */
        case 453:  /* *branch_bit0di_inverted */
        case 452:  /* *branch_bit1si_inverted */
        case 451:  /* *branch_bit0si_inverted */
        case 450:  /* *branch_bit1di */
        case 449:  /* *branch_bit0di */
        case 448:  /* *branch_bit1si */
        case 447:  /* *branch_bit0si */
        case 446:  /* *branch_equalitydi_mips16_inverted */
        case 445:  /* *branch_equalitysi_mips16_inverted */
        case 444:  /* *branch_equalitydi_mips16 */
        case 443:  /* *branch_equalitysi_mips16 */
        case 442:  /* *branch_equalitydi_inverted */
        case 441:  /* *branch_equalitysi_inverted */
        case 440:  /* *branch_equalitydi */
        case 439:  /* *branch_equalitysi */
        case 438:  /* *branch_orderdi_inverted */
        case 437:  /* *branch_ordersi_inverted */
        case 436:  /* *branch_orderdi */
        case 435:  /* *branch_ordersi */
        case 434:  /* *branch_fp_inverted */
        case 433:  /* *branch_fp */
        case 408:  /* r10k_cache_barrier */
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 34:  /* mulsi3_mul3 */
        case 35:  /* muldi3_mul3 */
        case 36:  /* mulsi3_internal */
        case 37:  /* muldi3_internal */
        case 38:  /* mulsi3_r4000 */
        case 39:  /* muldi3_r4000 */
        case 48:  /* *muls */
        case 49:  /* mulsidi3_32bit */
        case 50:  /* umulsidi3_32bit */
        case 51:  /* mulsidi3_32bit_r4000 */
        case 52:  /* umulsidi3_32bit_r4000 */
        case 53:  /* mulsidi3_64bit */
        case 54:  /* umulsidi3_64bit */
        case 55:  /* mulsidi3_64bit_hilo */
        case 56:  /* umulsidi3_64bit_hilo */
        case 58:  /* *muls_di */
        case 59:  /* *mulsu_di */
        case 62:  /* smulsi3_highpart_internal */
        case 63:  /* umulsi3_highpart_internal */
        case 68:  /* smuldi3_highpart_internal */
        case 69:  /* umuldi3_highpart_internal */
        case 70:  /* mulditi3_internal */
        case 71:  /* umulditi3_internal */
        case 72:  /* mulditi3_r4000 */
        case 73:  /* umulditi3_r4000 */
        case 153:  /* *andsi3 */
        case 154:  /* *anddi3 */
        case 155:  /* *andsi3_mips16 */
        case 156:  /* *anddi3_mips16 */
        case 183:  /* *zero_extendsidi2 */
        case 184:  /* *zero_extendsidi2_dext */
        case 185:  /* *zero_extendqisi2 */
        case 186:  /* *zero_extendqidi2 */
        case 187:  /* *zero_extendhisi2 */
        case 188:  /* *zero_extendhidi2 */
        case 193:  /* *zero_extendqisi2_mips16 */
        case 194:  /* *zero_extendqidi2_mips16 */
        case 195:  /* *zero_extendhisi2_mips16 */
        case 196:  /* *zero_extendhidi2_mips16 */
        case 197:  /* *zero_extendqihi2 */
        case 198:  /* *zero_extendqihi2_mips16 */
        case 204:  /* extendsidi2 */
        case 205:  /* *extendqisi2_mips16e */
        case 206:  /* *extendqidi2_mips16e */
        case 207:  /* *extendhisi2_mips16e */
        case 208:  /* *extendhidi2_mips16e */
        case 209:  /* *extendqisi2 */
        case 210:  /* *extendqidi2 */
        case 211:  /* *extendhisi2 */
        case 212:  /* *extendhidi2 */
        case 213:  /* *extendqisi2_seb */
        case 214:  /* *extendqidi2_seb */
        case 215:  /* *extendhisi2_seh */
        case 216:  /* *extendhidi2_seh */
        case 217:  /* *extendqihi2_mips16e */
        case 218:  /* *extendqihi2 */
        case 219:  /* *extendqihi2_seb */
        case 250:  /* mov_lwl */
        case 251:  /* mov_ldl */
        case 252:  /* mov_lwr */
        case 253:  /* mov_ldr */
        case 264:  /* *xgot_losi */
        case 265:  /* *xgot_lodi */
        case 266:  /* *got_dispsi */
        case 267:  /* *got_dispdi */
        case 268:  /* *got_pagesi */
        case 269:  /* *got_pagedi */
        case 270:  /* load_gotsi */
        case 271:  /* load_gotdi */
        case 278:  /* *movdi_32bit */
        case 279:  /* *movdi_32bit_mips16 */
        case 280:  /* *movdi_64bit */
        case 281:  /* *movdi_64bit_mips16 */
        case 282:  /* *movsi_internal */
        case 283:  /* *movv2hi_internal */
        case 284:  /* *movv4qi_internal */
        case 285:  /* *movv2hq_internal */
        case 286:  /* *movv2uhq_internal */
        case 287:  /* *movv2ha_internal */
        case 288:  /* *movv2uha_internal */
        case 289:  /* *movv4qq_internal */
        case 290:  /* *movv4uqq_internal */
        case 291:  /* *movsi_mips16 */
        case 292:  /* *movv2hi_mips16 */
        case 293:  /* *movv4qi_mips16 */
        case 294:  /* *movv2hq_mips16 */
        case 295:  /* *movv2uhq_mips16 */
        case 296:  /* *movv2ha_mips16 */
        case 297:  /* *movv2uha_mips16 */
        case 298:  /* *movv4qq_mips16 */
        case 299:  /* *movv4uqq_mips16 */
        case 300:  /* *lwxc1_si */
        case 301:  /* *ldxc1_si */
        case 302:  /* *ldxc1_si */
        case 303:  /* *lwxc1_di */
        case 304:  /* *ldxc1_di */
        case 305:  /* *ldxc1_di */
        case 312:  /* *lwxs */
        case 313:  /* *lwxs */
        case 314:  /* *lwxs */
        case 315:  /* *lwxs */
        case 316:  /* *lwxs */
        case 317:  /* *lwxs */
        case 318:  /* *lwxs */
        case 319:  /* *lwxs */
        case 320:  /* *lwxs */
        case 321:  /* *lwxs */
        case 322:  /* *lwxs */
        case 323:  /* *lwxs */
        case 324:  /* *lwxs */
        case 325:  /* *lwxs */
        case 326:  /* *lwxs */
        case 327:  /* *lwxs */
        case 328:  /* *lwxs */
        case 329:  /* *lwxs */
        case 330:  /* *movhi_internal */
        case 331:  /* *movhi_mips16 */
        case 332:  /* *movqi_internal */
        case 333:  /* *movqi_mips16 */
        case 334:  /* *movsf_hardfloat */
        case 335:  /* *movsf_softfloat */
        case 336:  /* *movsf_mips16 */
        case 337:  /* *movdf_hardfloat */
        case 338:  /* *movdf_softfloat */
        case 339:  /* *movdf_mips16 */
        case 340:  /* *movti */
        case 341:  /* *movti_mips16 */
        case 342:  /* *movtf */
        case 343:  /* *movtf_mips16 */
        case 344:  /* *movv2sf */
        case 345:  /* mfhisi_di */
        case 346:  /* mfhisi_ti */
        case 347:  /* mfhidi_ti */
        case 351:  /* load_lowdf */
        case 352:  /* load_lowdi */
        case 353:  /* load_lowv2sf */
        case 354:  /* load_lowv2si */
        case 355:  /* load_lowv4hi */
        case 356:  /* load_lowv8qi */
        case 357:  /* load_lowtf */
        case 358:  /* load_highdf */
        case 359:  /* load_highdi */
        case 360:  /* load_highv2sf */
        case 361:  /* load_highv2si */
        case 362:  /* load_highv4hi */
        case 363:  /* load_highv8qi */
        case 364:  /* load_hightf */
        case 365:  /* store_worddf */
        case 366:  /* store_worddi */
        case 367:  /* store_wordv2sf */
        case 368:  /* store_wordv2si */
        case 369:  /* store_wordv4hi */
        case 370:  /* store_wordv8qi */
        case 371:  /* store_wordtf */
        case 372:  /* mthc1df */
        case 373:  /* mthc1di */
        case 374:  /* mthc1v2sf */
        case 375:  /* mthc1v2si */
        case 376:  /* mthc1v4hi */
        case 377:  /* mthc1v8qi */
        case 378:  /* mthc1tf */
        case 379:  /* mfhc1df */
        case 380:  /* mfhc1di */
        case 381:  /* mfhc1v2sf */
        case 382:  /* mfhc1v2si */
        case 383:  /* mfhc1v4hi */
        case 384:  /* mfhc1v8qi */
        case 385:  /* mfhc1tf */
        case 424:  /* *mips.md:5359 */
        case 531:  /* sunordered_sf */
        case 532:  /* suneq_sf */
        case 533:  /* sunlt_sf */
        case 534:  /* sunle_sf */
        case 535:  /* seq_sf */
        case 536:  /* slt_sf */
        case 537:  /* sle_sf */
        case 538:  /* sunordered_df */
        case 539:  /* suneq_df */
        case 540:  /* sunlt_df */
        case 541:  /* sunle_df */
        case 542:  /* seq_df */
        case 543:  /* slt_df */
        case 544:  /* sle_df */
        case 545:  /* sge_sf */
        case 546:  /* sgt_sf */
        case 547:  /* sunge_sf */
        case 548:  /* sungt_sf */
        case 549:  /* sge_df */
        case 550:  /* sgt_df */
        case 551:  /* sunge_df */
        case 552:  /* sungt_df */
        case 576:  /* cop0_move */
        case 583:  /* load_callsi */
        case 584:  /* load_calldi */
        case 714:  /* mips_cabs_cond_s */
        case 715:  /* mips_cabs_cond_d */
        case 716:  /* mips_c_cond_4s */
        case 717:  /* mips_cabs_cond_4s */
        case 718:  /* mips_c_cond_ps */
        case 719:  /* mips_cabs_cond_ps */
        case 720:  /* sunordered_ps */
        case 721:  /* suneq_ps */
        case 722:  /* sunlt_ps */
        case 723:  /* sunle_ps */
        case 724:  /* seq_ps */
        case 725:  /* slt_ps */
        case 726:  /* sle_ps */
        case 727:  /* sge_ps */
        case 728:  /* sgt_ps */
        case 729:  /* sunge_ps */
        case 730:  /* sungt_ps */
        case 831:  /* mips_lbx_extsi_si */
        case 832:  /* mips_lbux_extsi_si */
        case 833:  /* mips_lbx_extdi_si */
        case 834:  /* mips_lbux_extdi_si */
        case 835:  /* mips_lhx_extsi_si */
        case 836:  /* mips_lhux_extsi_si */
        case 837:  /* mips_lhx_extdi_si */
        case 838:  /* mips_lhux_extdi_si */
        case 839:  /* mips_lbx_extsi_di */
        case 840:  /* mips_lbux_extsi_di */
        case 841:  /* mips_lbx_extdi_di */
        case 842:  /* mips_lbux_extdi_di */
        case 843:  /* mips_lhx_extsi_di */
        case 844:  /* mips_lhux_extsi_di */
        case 845:  /* mips_lhx_extdi_di */
        case 846:  /* mips_lhux_extdi_di */
        case 847:  /* mips_lwx_si */
        case 848:  /* mips_ldx_si */
        case 849:  /* mips_lwx_di */
        case 850:  /* mips_ldx_di */
        case 851:  /* *mips_lwx_si_ext */
        case 852:  /* *mips_lwux_si_ext */
        case 853:  /* *mips_lwx_di_ext */
        case 854:  /* *mips_lwux_di_ext */
        case 956:  /* movv2si_internal */
        case 957:  /* movv4hi_internal */
        case 958:  /* movv8qi_internal */
        case 959:  /* loongson_vec_init1_v4hi */
        case 960:  /* loongson_vec_init1_v8qi */
	  if (get_attr_can_delay (insn) == CAN_DELAY_YES)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case 855:  /* mips_bposge */
        case 736:  /* *branch_upper_lower_inverted */
        case 735:  /* *branch_upper_lower */
        case 734:  /* bc1any2f */
        case 733:  /* bc1any2t */
        case 732:  /* bc1any4f */
        case 731:  /* bc1any4t */
        case 629:  /* *tls_get_tp_mips16_call_di */
        case 628:  /* *tls_get_tp_mips16_call_si */
        case 625:  /* *tls_get_tp_di_split */
        case 624:  /* *tls_get_tp_si_split */
        case 623:  /* tls_get_tp_di */
        case 622:  /* tls_get_tp_si */
        case 599:  /* call_value_multiple_split */
        case 598:  /* call_value_multiple_internal */
        case 597:  /* call_value_direct_split */
        case 596:  /* call_value_internal_direct */
        case 595:  /* call_value_split */
        case 594:  /* call_value_internal */
        case 593:  /* call_direct_split */
        case 592:  /* call_internal_direct */
        case 591:  /* call_split */
        case 590:  /* call_internal */
        case 589:  /* sibcall_value_multiple_internal */
        case 588:  /* sibcall_value_internal */
        case 587:  /* sibcall_internal */
        case 570:  /* simple_return_internal */
        case 569:  /* return_internal */
        case 568:  /* *simple_return */
        case 567:  /* *return */
        case 566:  /* probe_stack_range_di */
        case 565:  /* probe_stack_range_si */
        case 561:  /* tablejump_di */
        case 560:  /* tablejump_si */
        case 557:  /* indirect_jump_di */
        case 556:  /* indirect_jump_si */
        case 555:  /* *jump_mips16 */
        case 554:  /* *jump_pic */
        case 553:  /* *jump_absolute */
        case 454:  /* *branch_bit1di_inverted */
        case 453:  /* *branch_bit0di_inverted */
        case 452:  /* *branch_bit1si_inverted */
        case 451:  /* *branch_bit0si_inverted */
        case 450:  /* *branch_bit1di */
        case 449:  /* *branch_bit0di */
        case 448:  /* *branch_bit1si */
        case 447:  /* *branch_bit0si */
        case 446:  /* *branch_equalitydi_mips16_inverted */
        case 445:  /* *branch_equalitysi_mips16_inverted */
        case 444:  /* *branch_equalitydi_mips16 */
        case 443:  /* *branch_equalitysi_mips16 */
        case 442:  /* *branch_equalitydi_inverted */
        case 441:  /* *branch_equalitysi_inverted */
        case 440:  /* *branch_equalitydi */
        case 439:  /* *branch_equalitysi */
        case 438:  /* *branch_orderdi_inverted */
        case 437:  /* *branch_ordersi_inverted */
        case 436:  /* *branch_orderdi */
        case 435:  /* *branch_ordersi */
        case 434:  /* *branch_fp_inverted */
        case 433:  /* *branch_fp */
        case 408:  /* r10k_cache_barrier */
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 34:  /* mulsi3_mul3 */
        case 35:  /* muldi3_mul3 */
        case 36:  /* mulsi3_internal */
        case 37:  /* muldi3_internal */
        case 38:  /* mulsi3_r4000 */
        case 39:  /* muldi3_r4000 */
        case 48:  /* *muls */
        case 49:  /* mulsidi3_32bit */
        case 50:  /* umulsidi3_32bit */
        case 51:  /* mulsidi3_32bit_r4000 */
        case 52:  /* umulsidi3_32bit_r4000 */
        case 53:  /* mulsidi3_64bit */
        case 54:  /* umulsidi3_64bit */
        case 55:  /* mulsidi3_64bit_hilo */
        case 56:  /* umulsidi3_64bit_hilo */
        case 58:  /* *muls_di */
        case 59:  /* *mulsu_di */
        case 62:  /* smulsi3_highpart_internal */
        case 63:  /* umulsi3_highpart_internal */
        case 68:  /* smuldi3_highpart_internal */
        case 69:  /* umuldi3_highpart_internal */
        case 70:  /* mulditi3_internal */
        case 71:  /* umulditi3_internal */
        case 72:  /* mulditi3_r4000 */
        case 73:  /* umulditi3_r4000 */
        case 153:  /* *andsi3 */
        case 154:  /* *anddi3 */
        case 155:  /* *andsi3_mips16 */
        case 156:  /* *anddi3_mips16 */
        case 183:  /* *zero_extendsidi2 */
        case 184:  /* *zero_extendsidi2_dext */
        case 185:  /* *zero_extendqisi2 */
        case 186:  /* *zero_extendqidi2 */
        case 187:  /* *zero_extendhisi2 */
        case 188:  /* *zero_extendhidi2 */
        case 193:  /* *zero_extendqisi2_mips16 */
        case 194:  /* *zero_extendqidi2_mips16 */
        case 195:  /* *zero_extendhisi2_mips16 */
        case 196:  /* *zero_extendhidi2_mips16 */
        case 197:  /* *zero_extendqihi2 */
        case 198:  /* *zero_extendqihi2_mips16 */
        case 204:  /* extendsidi2 */
        case 205:  /* *extendqisi2_mips16e */
        case 206:  /* *extendqidi2_mips16e */
        case 207:  /* *extendhisi2_mips16e */
        case 208:  /* *extendhidi2_mips16e */
        case 209:  /* *extendqisi2 */
        case 210:  /* *extendqidi2 */
        case 211:  /* *extendhisi2 */
        case 212:  /* *extendhidi2 */
        case 213:  /* *extendqisi2_seb */
        case 214:  /* *extendqidi2_seb */
        case 215:  /* *extendhisi2_seh */
        case 216:  /* *extendhidi2_seh */
        case 217:  /* *extendqihi2_mips16e */
        case 218:  /* *extendqihi2 */
        case 219:  /* *extendqihi2_seb */
        case 250:  /* mov_lwl */
        case 251:  /* mov_ldl */
        case 252:  /* mov_lwr */
        case 253:  /* mov_ldr */
        case 264:  /* *xgot_losi */
        case 265:  /* *xgot_lodi */
        case 266:  /* *got_dispsi */
        case 267:  /* *got_dispdi */
        case 268:  /* *got_pagesi */
        case 269:  /* *got_pagedi */
        case 270:  /* load_gotsi */
        case 271:  /* load_gotdi */
        case 278:  /* *movdi_32bit */
        case 279:  /* *movdi_32bit_mips16 */
        case 280:  /* *movdi_64bit */
        case 281:  /* *movdi_64bit_mips16 */
        case 282:  /* *movsi_internal */
        case 283:  /* *movv2hi_internal */
        case 284:  /* *movv4qi_internal */
        case 285:  /* *movv2hq_internal */
        case 286:  /* *movv2uhq_internal */
        case 287:  /* *movv2ha_internal */
        case 288:  /* *movv2uha_internal */
        case 289:  /* *movv4qq_internal */
        case 290:  /* *movv4uqq_internal */
        case 291:  /* *movsi_mips16 */
        case 292:  /* *movv2hi_mips16 */
        case 293:  /* *movv4qi_mips16 */
        case 294:  /* *movv2hq_mips16 */
        case 295:  /* *movv2uhq_mips16 */
        case 296:  /* *movv2ha_mips16 */
        case 297:  /* *movv2uha_mips16 */
        case 298:  /* *movv4qq_mips16 */
        case 299:  /* *movv4uqq_mips16 */
        case 300:  /* *lwxc1_si */
        case 301:  /* *ldxc1_si */
        case 302:  /* *ldxc1_si */
        case 303:  /* *lwxc1_di */
        case 304:  /* *ldxc1_di */
        case 305:  /* *ldxc1_di */
        case 312:  /* *lwxs */
        case 313:  /* *lwxs */
        case 314:  /* *lwxs */
        case 315:  /* *lwxs */
        case 316:  /* *lwxs */
        case 317:  /* *lwxs */
        case 318:  /* *lwxs */
        case 319:  /* *lwxs */
        case 320:  /* *lwxs */
        case 321:  /* *lwxs */
        case 322:  /* *lwxs */
        case 323:  /* *lwxs */
        case 324:  /* *lwxs */
        case 325:  /* *lwxs */
        case 326:  /* *lwxs */
        case 327:  /* *lwxs */
        case 328:  /* *lwxs */
        case 329:  /* *lwxs */
        case 330:  /* *movhi_internal */
        case 331:  /* *movhi_mips16 */
        case 332:  /* *movqi_internal */
        case 333:  /* *movqi_mips16 */
        case 334:  /* *movsf_hardfloat */
        case 335:  /* *movsf_softfloat */
        case 336:  /* *movsf_mips16 */
        case 337:  /* *movdf_hardfloat */
        case 338:  /* *movdf_softfloat */
        case 339:  /* *movdf_mips16 */
        case 340:  /* *movti */
        case 341:  /* *movti_mips16 */
        case 342:  /* *movtf */
        case 343:  /* *movtf_mips16 */
        case 344:  /* *movv2sf */
        case 345:  /* mfhisi_di */
        case 346:  /* mfhisi_ti */
        case 347:  /* mfhidi_ti */
        case 351:  /* load_lowdf */
        case 352:  /* load_lowdi */
        case 353:  /* load_lowv2sf */
        case 354:  /* load_lowv2si */
        case 355:  /* load_lowv4hi */
        case 356:  /* load_lowv8qi */
        case 357:  /* load_lowtf */
        case 358:  /* load_highdf */
        case 359:  /* load_highdi */
        case 360:  /* load_highv2sf */
        case 361:  /* load_highv2si */
        case 362:  /* load_highv4hi */
        case 363:  /* load_highv8qi */
        case 364:  /* load_hightf */
        case 365:  /* store_worddf */
        case 366:  /* store_worddi */
        case 367:  /* store_wordv2sf */
        case 368:  /* store_wordv2si */
        case 369:  /* store_wordv4hi */
        case 370:  /* store_wordv8qi */
        case 371:  /* store_wordtf */
        case 372:  /* mthc1df */
        case 373:  /* mthc1di */
        case 374:  /* mthc1v2sf */
        case 375:  /* mthc1v2si */
        case 376:  /* mthc1v4hi */
        case 377:  /* mthc1v8qi */
        case 378:  /* mthc1tf */
        case 379:  /* mfhc1df */
        case 380:  /* mfhc1di */
        case 381:  /* mfhc1v2sf */
        case 382:  /* mfhc1v2si */
        case 383:  /* mfhc1v4hi */
        case 384:  /* mfhc1v8qi */
        case 385:  /* mfhc1tf */
        case 424:  /* *mips.md:5359 */
        case 531:  /* sunordered_sf */
        case 532:  /* suneq_sf */
        case 533:  /* sunlt_sf */
        case 534:  /* sunle_sf */
        case 535:  /* seq_sf */
        case 536:  /* slt_sf */
        case 537:  /* sle_sf */
        case 538:  /* sunordered_df */
        case 539:  /* suneq_df */
        case 540:  /* sunlt_df */
        case 541:  /* sunle_df */
        case 542:  /* seq_df */
        case 543:  /* slt_df */
        case 544:  /* sle_df */
        case 545:  /* sge_sf */
        case 546:  /* sgt_sf */
        case 547:  /* sunge_sf */
        case 548:  /* sungt_sf */
        case 549:  /* sge_df */
        case 550:  /* sgt_df */
        case 551:  /* sunge_df */
        case 552:  /* sungt_df */
        case 576:  /* cop0_move */
        case 583:  /* load_callsi */
        case 584:  /* load_calldi */
        case 714:  /* mips_cabs_cond_s */
        case 715:  /* mips_cabs_cond_d */
        case 716:  /* mips_c_cond_4s */
        case 717:  /* mips_cabs_cond_4s */
        case 718:  /* mips_c_cond_ps */
        case 719:  /* mips_cabs_cond_ps */
        case 720:  /* sunordered_ps */
        case 721:  /* suneq_ps */
        case 722:  /* sunlt_ps */
        case 723:  /* sunle_ps */
        case 724:  /* seq_ps */
        case 725:  /* slt_ps */
        case 726:  /* sle_ps */
        case 727:  /* sge_ps */
        case 728:  /* sgt_ps */
        case 729:  /* sunge_ps */
        case 730:  /* sungt_ps */
        case 831:  /* mips_lbx_extsi_si */
        case 832:  /* mips_lbux_extsi_si */
        case 833:  /* mips_lbx_extdi_si */
        case 834:  /* mips_lbux_extdi_si */
        case 835:  /* mips_lhx_extsi_si */
        case 836:  /* mips_lhux_extsi_si */
        case 837:  /* mips_lhx_extdi_si */
        case 838:  /* mips_lhux_extdi_si */
        case 839:  /* mips_lbx_extsi_di */
        case 840:  /* mips_lbux_extsi_di */
        case 841:  /* mips_lbx_extdi_di */
        case 842:  /* mips_lbux_extdi_di */
        case 843:  /* mips_lhx_extsi_di */
        case 844:  /* mips_lhux_extsi_di */
        case 845:  /* mips_lhx_extdi_di */
        case 846:  /* mips_lhux_extdi_di */
        case 847:  /* mips_lwx_si */
        case 848:  /* mips_ldx_si */
        case 849:  /* mips_lwx_di */
        case 850:  /* mips_ldx_di */
        case 851:  /* *mips_lwx_si_ext */
        case 852:  /* *mips_lwux_si_ext */
        case 853:  /* *mips_lwx_di_ext */
        case 854:  /* *mips_lwux_di_ext */
        case 956:  /* movv2si_internal */
        case 957:  /* movv4hi_internal */
        case 958:  /* movv8qi_internal */
        case 959:  /* loongson_vec_init1_v4hi */
        case 960:  /* loongson_vec_init1_v8qi */
	  if (get_attr_can_delay (insn) == CAN_DELAY_YES)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 855:  /* mips_bposge */
        case 736:  /* *branch_upper_lower_inverted */
        case 735:  /* *branch_upper_lower */
        case 734:  /* bc1any2f */
        case 733:  /* bc1any2t */
        case 732:  /* bc1any4f */
        case 731:  /* bc1any4t */
        case 629:  /* *tls_get_tp_mips16_call_di */
        case 628:  /* *tls_get_tp_mips16_call_si */
        case 625:  /* *tls_get_tp_di_split */
        case 624:  /* *tls_get_tp_si_split */
        case 623:  /* tls_get_tp_di */
        case 622:  /* tls_get_tp_si */
        case 599:  /* call_value_multiple_split */
        case 598:  /* call_value_multiple_internal */
        case 597:  /* call_value_direct_split */
        case 596:  /* call_value_internal_direct */
        case 595:  /* call_value_split */
        case 594:  /* call_value_internal */
        case 593:  /* call_direct_split */
        case 592:  /* call_internal_direct */
        case 591:  /* call_split */
        case 590:  /* call_internal */
        case 589:  /* sibcall_value_multiple_internal */
        case 588:  /* sibcall_value_internal */
        case 587:  /* sibcall_internal */
        case 570:  /* simple_return_internal */
        case 569:  /* return_internal */
        case 568:  /* *simple_return */
        case 567:  /* *return */
        case 566:  /* probe_stack_range_di */
        case 565:  /* probe_stack_range_si */
        case 561:  /* tablejump_di */
        case 560:  /* tablejump_si */
        case 557:  /* indirect_jump_di */
        case 556:  /* indirect_jump_si */
        case 555:  /* *jump_mips16 */
        case 554:  /* *jump_pic */
        case 553:  /* *jump_absolute */
        case 454:  /* *branch_bit1di_inverted */
        case 453:  /* *branch_bit0di_inverted */
        case 452:  /* *branch_bit1si_inverted */
        case 451:  /* *branch_bit0si_inverted */
        case 450:  /* *branch_bit1di */
        case 449:  /* *branch_bit0di */
        case 448:  /* *branch_bit1si */
        case 447:  /* *branch_bit0si */
        case 446:  /* *branch_equalitydi_mips16_inverted */
        case 445:  /* *branch_equalitysi_mips16_inverted */
        case 444:  /* *branch_equalitydi_mips16 */
        case 443:  /* *branch_equalitysi_mips16 */
        case 442:  /* *branch_equalitydi_inverted */
        case 441:  /* *branch_equalitysi_inverted */
        case 440:  /* *branch_equalitydi */
        case 439:  /* *branch_equalitysi */
        case 438:  /* *branch_orderdi_inverted */
        case 437:  /* *branch_ordersi_inverted */
        case 436:  /* *branch_orderdi */
        case 435:  /* *branch_ordersi */
        case 434:  /* *branch_fp_inverted */
        case 433:  /* *branch_fp */
        case 408:  /* r10k_cache_barrier */
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 34:  /* mulsi3_mul3 */
        case 35:  /* muldi3_mul3 */
        case 36:  /* mulsi3_internal */
        case 37:  /* muldi3_internal */
        case 38:  /* mulsi3_r4000 */
        case 39:  /* muldi3_r4000 */
        case 48:  /* *muls */
        case 49:  /* mulsidi3_32bit */
        case 50:  /* umulsidi3_32bit */
        case 51:  /* mulsidi3_32bit_r4000 */
        case 52:  /* umulsidi3_32bit_r4000 */
        case 53:  /* mulsidi3_64bit */
        case 54:  /* umulsidi3_64bit */
        case 55:  /* mulsidi3_64bit_hilo */
        case 56:  /* umulsidi3_64bit_hilo */
        case 58:  /* *muls_di */
        case 59:  /* *mulsu_di */
        case 62:  /* smulsi3_highpart_internal */
        case 63:  /* umulsi3_highpart_internal */
        case 68:  /* smuldi3_highpart_internal */
        case 69:  /* umuldi3_highpart_internal */
        case 70:  /* mulditi3_internal */
        case 71:  /* umulditi3_internal */
        case 72:  /* mulditi3_r4000 */
        case 73:  /* umulditi3_r4000 */
        case 153:  /* *andsi3 */
        case 154:  /* *anddi3 */
        case 155:  /* *andsi3_mips16 */
        case 156:  /* *anddi3_mips16 */
        case 183:  /* *zero_extendsidi2 */
        case 184:  /* *zero_extendsidi2_dext */
        case 185:  /* *zero_extendqisi2 */
        case 186:  /* *zero_extendqidi2 */
        case 187:  /* *zero_extendhisi2 */
        case 188:  /* *zero_extendhidi2 */
        case 193:  /* *zero_extendqisi2_mips16 */
        case 194:  /* *zero_extendqidi2_mips16 */
        case 195:  /* *zero_extendhisi2_mips16 */
        case 196:  /* *zero_extendhidi2_mips16 */
        case 197:  /* *zero_extendqihi2 */
        case 198:  /* *zero_extendqihi2_mips16 */
        case 204:  /* extendsidi2 */
        case 205:  /* *extendqisi2_mips16e */
        case 206:  /* *extendqidi2_mips16e */
        case 207:  /* *extendhisi2_mips16e */
        case 208:  /* *extendhidi2_mips16e */
        case 209:  /* *extendqisi2 */
        case 210:  /* *extendqidi2 */
        case 211:  /* *extendhisi2 */
        case 212:  /* *extendhidi2 */
        case 213:  /* *extendqisi2_seb */
        case 214:  /* *extendqidi2_seb */
        case 215:  /* *extendhisi2_seh */
        case 216:  /* *extendhidi2_seh */
        case 217:  /* *extendqihi2_mips16e */
        case 218:  /* *extendqihi2 */
        case 219:  /* *extendqihi2_seb */
        case 250:  /* mov_lwl */
        case 251:  /* mov_ldl */
        case 252:  /* mov_lwr */
        case 253:  /* mov_ldr */
        case 264:  /* *xgot_losi */
        case 265:  /* *xgot_lodi */
        case 266:  /* *got_dispsi */
        case 267:  /* *got_dispdi */
        case 268:  /* *got_pagesi */
        case 269:  /* *got_pagedi */
        case 270:  /* load_gotsi */
        case 271:  /* load_gotdi */
        case 278:  /* *movdi_32bit */
        case 279:  /* *movdi_32bit_mips16 */
        case 280:  /* *movdi_64bit */
        case 281:  /* *movdi_64bit_mips16 */
        case 282:  /* *movsi_internal */
        case 283:  /* *movv2hi_internal */
        case 284:  /* *movv4qi_internal */
        case 285:  /* *movv2hq_internal */
        case 286:  /* *movv2uhq_internal */
        case 287:  /* *movv2ha_internal */
        case 288:  /* *movv2uha_internal */
        case 289:  /* *movv4qq_internal */
        case 290:  /* *movv4uqq_internal */
        case 291:  /* *movsi_mips16 */
        case 292:  /* *movv2hi_mips16 */
        case 293:  /* *movv4qi_mips16 */
        case 294:  /* *movv2hq_mips16 */
        case 295:  /* *movv2uhq_mips16 */
        case 296:  /* *movv2ha_mips16 */
        case 297:  /* *movv2uha_mips16 */
        case 298:  /* *movv4qq_mips16 */
        case 299:  /* *movv4uqq_mips16 */
        case 300:  /* *lwxc1_si */
        case 301:  /* *ldxc1_si */
        case 302:  /* *ldxc1_si */
        case 303:  /* *lwxc1_di */
        case 304:  /* *ldxc1_di */
        case 305:  /* *ldxc1_di */
        case 312:  /* *lwxs */
        case 313:  /* *lwxs */
        case 314:  /* *lwxs */
        case 315:  /* *lwxs */
        case 316:  /* *lwxs */
        case 317:  /* *lwxs */
        case 318:  /* *lwxs */
        case 319:  /* *lwxs */
        case 320:  /* *lwxs */
        case 321:  /* *lwxs */
        case 322:  /* *lwxs */
        case 323:  /* *lwxs */
        case 324:  /* *lwxs */
        case 325:  /* *lwxs */
        case 326:  /* *lwxs */
        case 327:  /* *lwxs */
        case 328:  /* *lwxs */
        case 329:  /* *lwxs */
        case 330:  /* *movhi_internal */
        case 331:  /* *movhi_mips16 */
        case 332:  /* *movqi_internal */
        case 333:  /* *movqi_mips16 */
        case 334:  /* *movsf_hardfloat */
        case 335:  /* *movsf_softfloat */
        case 336:  /* *movsf_mips16 */
        case 337:  /* *movdf_hardfloat */
        case 338:  /* *movdf_softfloat */
        case 339:  /* *movdf_mips16 */
        case 340:  /* *movti */
        case 341:  /* *movti_mips16 */
        case 342:  /* *movtf */
        case 343:  /* *movtf_mips16 */
        case 344:  /* *movv2sf */
        case 345:  /* mfhisi_di */
        case 346:  /* mfhisi_ti */
        case 347:  /* mfhidi_ti */
        case 351:  /* load_lowdf */
        case 352:  /* load_lowdi */
        case 353:  /* load_lowv2sf */
        case 354:  /* load_lowv2si */
        case 355:  /* load_lowv4hi */
        case 356:  /* load_lowv8qi */
        case 357:  /* load_lowtf */
        case 358:  /* load_highdf */
        case 359:  /* load_highdi */
        case 360:  /* load_highv2sf */
        case 361:  /* load_highv2si */
        case 362:  /* load_highv4hi */
        case 363:  /* load_highv8qi */
        case 364:  /* load_hightf */
        case 365:  /* store_worddf */
        case 366:  /* store_worddi */
        case 367:  /* store_wordv2sf */
        case 368:  /* store_wordv2si */
        case 369:  /* store_wordv4hi */
        case 370:  /* store_wordv8qi */
        case 371:  /* store_wordtf */
        case 372:  /* mthc1df */
        case 373:  /* mthc1di */
        case 374:  /* mthc1v2sf */
        case 375:  /* mthc1v2si */
        case 376:  /* mthc1v4hi */
        case 377:  /* mthc1v8qi */
        case 378:  /* mthc1tf */
        case 379:  /* mfhc1df */
        case 380:  /* mfhc1di */
        case 381:  /* mfhc1v2sf */
        case 382:  /* mfhc1v2si */
        case 383:  /* mfhc1v4hi */
        case 384:  /* mfhc1v8qi */
        case 385:  /* mfhc1tf */
        case 424:  /* *mips.md:5359 */
        case 531:  /* sunordered_sf */
        case 532:  /* suneq_sf */
        case 533:  /* sunlt_sf */
        case 534:  /* sunle_sf */
        case 535:  /* seq_sf */
        case 536:  /* slt_sf */
        case 537:  /* sle_sf */
        case 538:  /* sunordered_df */
        case 539:  /* suneq_df */
        case 540:  /* sunlt_df */
        case 541:  /* sunle_df */
        case 542:  /* seq_df */
        case 543:  /* slt_df */
        case 544:  /* sle_df */
        case 545:  /* sge_sf */
        case 546:  /* sgt_sf */
        case 547:  /* sunge_sf */
        case 548:  /* sungt_sf */
        case 549:  /* sge_df */
        case 550:  /* sgt_df */
        case 551:  /* sunge_df */
        case 552:  /* sungt_df */
        case 576:  /* cop0_move */
        case 583:  /* load_callsi */
        case 584:  /* load_calldi */
        case 714:  /* mips_cabs_cond_s */
        case 715:  /* mips_cabs_cond_d */
        case 716:  /* mips_c_cond_4s */
        case 717:  /* mips_cabs_cond_4s */
        case 718:  /* mips_c_cond_ps */
        case 719:  /* mips_cabs_cond_ps */
        case 720:  /* sunordered_ps */
        case 721:  /* suneq_ps */
        case 722:  /* sunlt_ps */
        case 723:  /* sunle_ps */
        case 724:  /* seq_ps */
        case 725:  /* slt_ps */
        case 726:  /* sle_ps */
        case 727:  /* sge_ps */
        case 728:  /* sgt_ps */
        case 729:  /* sunge_ps */
        case 730:  /* sungt_ps */
        case 831:  /* mips_lbx_extsi_si */
        case 832:  /* mips_lbux_extsi_si */
        case 833:  /* mips_lbx_extdi_si */
        case 834:  /* mips_lbux_extdi_si */
        case 835:  /* mips_lhx_extsi_si */
        case 836:  /* mips_lhux_extsi_si */
        case 837:  /* mips_lhx_extdi_si */
        case 838:  /* mips_lhux_extdi_si */
        case 839:  /* mips_lbx_extsi_di */
        case 840:  /* mips_lbux_extsi_di */
        case 841:  /* mips_lbx_extdi_di */
        case 842:  /* mips_lbux_extdi_di */
        case 843:  /* mips_lhx_extsi_di */
        case 844:  /* mips_lhux_extsi_di */
        case 845:  /* mips_lhx_extdi_di */
        case 846:  /* mips_lhux_extdi_di */
        case 847:  /* mips_lwx_si */
        case 848:  /* mips_ldx_si */
        case 849:  /* mips_lwx_di */
        case 850:  /* mips_ldx_di */
        case 851:  /* *mips_lwx_si_ext */
        case 852:  /* *mips_lwux_si_ext */
        case 853:  /* *mips_lwx_di_ext */
        case 854:  /* *mips_lwux_di_ext */
        case 956:  /* movv2si_internal */
        case 957:  /* movv4hi_internal */
        case 958:  /* movv8qi_internal */
        case 959:  /* loongson_vec_init1_v4hi */
        case 960:  /* loongson_vec_init1_v8qi */
	  if (get_attr_can_delay (insn) == CAN_DELAY_YES)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    default:
      gcc_unreachable ();
    }
}

int
eligible_for_annul_false (rtx delay_insn ATTRIBUTE_UNUSED, int slot, 
		   rtx candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx insn;

  gcc_assert (slot < 1);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 596:  /* call_value_internal_direct */
    case 592:  /* call_internal_direct */
      extract_constrain_insn_cached (insn);
      if ((
#line 186 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((TARGET_CALL_CLOBBERED_GP || !TARGET_ABSOLUTE_JUMPS
		       ? JAL_MACRO_YES : JAL_MACRO_NO))) == (
(JAL_MACRO_NO)))
        {
	  slot += 4 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 598:  /* call_value_multiple_internal */
    case 594:  /* call_value_internal */
    case 590:  /* call_internal */
      if (get_attr_jal_macro (insn) == JAL_MACRO_NO)
        {
	  slot += 4 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 629:  /* *tls_get_tp_mips16_call_di */
    case 628:  /* *tls_get_tp_mips16_call_si */
    case 599:  /* call_value_multiple_split */
    case 597:  /* call_value_direct_split */
    case 595:  /* call_value_split */
    case 593:  /* call_direct_split */
    case 591:  /* call_split */
    case 589:  /* sibcall_value_multiple_internal */
    case 588:  /* sibcall_value_internal */
    case 587:  /* sibcall_internal */
      slot += 4 * 1;
      break;
      break;

    case 570:  /* simple_return_internal */
    case 569:  /* return_internal */
    case 568:  /* *simple_return */
    case 567:  /* *return */
    case 561:  /* tablejump_di */
    case 560:  /* tablejump_si */
    case 557:  /* indirect_jump_di */
    case 556:  /* indirect_jump_si */
    case 553:  /* *jump_absolute */
      slot += 3 * 1;
      break;
      break;

    case 454:  /* *branch_bit1di_inverted */
    case 453:  /* *branch_bit0di_inverted */
    case 452:  /* *branch_bit1si_inverted */
    case 451:  /* *branch_bit0si_inverted */
    case 450:  /* *branch_bit1di */
    case 449:  /* *branch_bit0di */
    case 448:  /* *branch_bit1si */
    case 447:  /* *branch_bit0si */
      extract_constrain_insn_cached (insn);
      if (! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16)))
        {
	  slot += 2 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 855:  /* mips_bposge */
    case 736:  /* *branch_upper_lower_inverted */
    case 735:  /* *branch_upper_lower */
    case 734:  /* bc1any2f */
    case 733:  /* bc1any2t */
    case 732:  /* bc1any4f */
    case 731:  /* bc1any4t */
    case 555:  /* *jump_mips16 */
    case 554:  /* *jump_pic */
    case 446:  /* *branch_equalitydi_mips16_inverted */
    case 445:  /* *branch_equalitysi_mips16_inverted */
    case 444:  /* *branch_equalitydi_mips16 */
    case 443:  /* *branch_equalitysi_mips16 */
    case 442:  /* *branch_equalitydi_inverted */
    case 441:  /* *branch_equalitysi_inverted */
    case 440:  /* *branch_equalitydi */
    case 439:  /* *branch_equalitysi */
    case 438:  /* *branch_orderdi_inverted */
    case 437:  /* *branch_ordersi_inverted */
    case 436:  /* *branch_orderdi */
    case 435:  /* *branch_ordersi */
    case 434:  /* *branch_fp_inverted */
    case 433:  /* *branch_fp */
      extract_constrain_insn_cached (insn);
      if ((! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (! (
#line 696 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY))))
        {
	  slot += 2 * 1;
      break;
        }
      else if ((! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (
#line 696 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(GENERATE_BRANCHLIKELY)))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_CALL) && (get_attr_jal_macro (insn) == JAL_MACRO_NO))
        {
	  slot += 4 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_JUMP)
        {
	  slot += 3 * 1;
      break;
        }
      else if ((get_attr_type (insn) == TYPE_BRANCH) && ((! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (get_attr_branch_likely (insn) == BRANCH_LIKELY_NO)))
        {
	  slot += 2 * 1;
      break;
        }
      else if ((get_attr_type (insn) == TYPE_BRANCH) && ((! (
#line 458 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
(TARGET_MIPS16))) && (get_attr_branch_likely (insn) == BRANCH_LIKELY_YES)))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    default:
      slot += 0 * 1;
      break;
      break;

    }

  gcc_assert (slot >= 1);

  insn = candidate_insn;
  switch (slot)
    {
    case 4:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 3:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 855:  /* mips_bposge */
        case 736:  /* *branch_upper_lower_inverted */
        case 735:  /* *branch_upper_lower */
        case 734:  /* bc1any2f */
        case 733:  /* bc1any2t */
        case 732:  /* bc1any4f */
        case 731:  /* bc1any4t */
        case 629:  /* *tls_get_tp_mips16_call_di */
        case 628:  /* *tls_get_tp_mips16_call_si */
        case 625:  /* *tls_get_tp_di_split */
        case 624:  /* *tls_get_tp_si_split */
        case 623:  /* tls_get_tp_di */
        case 622:  /* tls_get_tp_si */
        case 599:  /* call_value_multiple_split */
        case 598:  /* call_value_multiple_internal */
        case 597:  /* call_value_direct_split */
        case 596:  /* call_value_internal_direct */
        case 595:  /* call_value_split */
        case 594:  /* call_value_internal */
        case 593:  /* call_direct_split */
        case 592:  /* call_internal_direct */
        case 591:  /* call_split */
        case 590:  /* call_internal */
        case 589:  /* sibcall_value_multiple_internal */
        case 588:  /* sibcall_value_internal */
        case 587:  /* sibcall_internal */
        case 570:  /* simple_return_internal */
        case 569:  /* return_internal */
        case 568:  /* *simple_return */
        case 567:  /* *return */
        case 566:  /* probe_stack_range_di */
        case 565:  /* probe_stack_range_si */
        case 561:  /* tablejump_di */
        case 560:  /* tablejump_si */
        case 557:  /* indirect_jump_di */
        case 556:  /* indirect_jump_si */
        case 555:  /* *jump_mips16 */
        case 554:  /* *jump_pic */
        case 553:  /* *jump_absolute */
        case 454:  /* *branch_bit1di_inverted */
        case 453:  /* *branch_bit0di_inverted */
        case 452:  /* *branch_bit1si_inverted */
        case 451:  /* *branch_bit0si_inverted */
        case 450:  /* *branch_bit1di */
        case 449:  /* *branch_bit0di */
        case 448:  /* *branch_bit1si */
        case 447:  /* *branch_bit0si */
        case 446:  /* *branch_equalitydi_mips16_inverted */
        case 445:  /* *branch_equalitysi_mips16_inverted */
        case 444:  /* *branch_equalitydi_mips16 */
        case 443:  /* *branch_equalitysi_mips16 */
        case 442:  /* *branch_equalitydi_inverted */
        case 441:  /* *branch_equalitysi_inverted */
        case 440:  /* *branch_equalitydi */
        case 439:  /* *branch_equalitysi */
        case 438:  /* *branch_orderdi_inverted */
        case 437:  /* *branch_ordersi_inverted */
        case 436:  /* *branch_orderdi */
        case 435:  /* *branch_ordersi */
        case 434:  /* *branch_fp_inverted */
        case 433:  /* *branch_fp */
        case 408:  /* r10k_cache_barrier */
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 34:  /* mulsi3_mul3 */
        case 35:  /* muldi3_mul3 */
        case 36:  /* mulsi3_internal */
        case 37:  /* muldi3_internal */
        case 38:  /* mulsi3_r4000 */
        case 39:  /* muldi3_r4000 */
        case 48:  /* *muls */
        case 49:  /* mulsidi3_32bit */
        case 50:  /* umulsidi3_32bit */
        case 51:  /* mulsidi3_32bit_r4000 */
        case 52:  /* umulsidi3_32bit_r4000 */
        case 53:  /* mulsidi3_64bit */
        case 54:  /* umulsidi3_64bit */
        case 55:  /* mulsidi3_64bit_hilo */
        case 56:  /* umulsidi3_64bit_hilo */
        case 58:  /* *muls_di */
        case 59:  /* *mulsu_di */
        case 62:  /* smulsi3_highpart_internal */
        case 63:  /* umulsi3_highpart_internal */
        case 68:  /* smuldi3_highpart_internal */
        case 69:  /* umuldi3_highpart_internal */
        case 70:  /* mulditi3_internal */
        case 71:  /* umulditi3_internal */
        case 72:  /* mulditi3_r4000 */
        case 73:  /* umulditi3_r4000 */
        case 153:  /* *andsi3 */
        case 154:  /* *anddi3 */
        case 155:  /* *andsi3_mips16 */
        case 156:  /* *anddi3_mips16 */
        case 183:  /* *zero_extendsidi2 */
        case 184:  /* *zero_extendsidi2_dext */
        case 185:  /* *zero_extendqisi2 */
        case 186:  /* *zero_extendqidi2 */
        case 187:  /* *zero_extendhisi2 */
        case 188:  /* *zero_extendhidi2 */
        case 193:  /* *zero_extendqisi2_mips16 */
        case 194:  /* *zero_extendqidi2_mips16 */
        case 195:  /* *zero_extendhisi2_mips16 */
        case 196:  /* *zero_extendhidi2_mips16 */
        case 197:  /* *zero_extendqihi2 */
        case 198:  /* *zero_extendqihi2_mips16 */
        case 204:  /* extendsidi2 */
        case 205:  /* *extendqisi2_mips16e */
        case 206:  /* *extendqidi2_mips16e */
        case 207:  /* *extendhisi2_mips16e */
        case 208:  /* *extendhidi2_mips16e */
        case 209:  /* *extendqisi2 */
        case 210:  /* *extendqidi2 */
        case 211:  /* *extendhisi2 */
        case 212:  /* *extendhidi2 */
        case 213:  /* *extendqisi2_seb */
        case 214:  /* *extendqidi2_seb */
        case 215:  /* *extendhisi2_seh */
        case 216:  /* *extendhidi2_seh */
        case 217:  /* *extendqihi2_mips16e */
        case 218:  /* *extendqihi2 */
        case 219:  /* *extendqihi2_seb */
        case 250:  /* mov_lwl */
        case 251:  /* mov_ldl */
        case 252:  /* mov_lwr */
        case 253:  /* mov_ldr */
        case 264:  /* *xgot_losi */
        case 265:  /* *xgot_lodi */
        case 266:  /* *got_dispsi */
        case 267:  /* *got_dispdi */
        case 268:  /* *got_pagesi */
        case 269:  /* *got_pagedi */
        case 270:  /* load_gotsi */
        case 271:  /* load_gotdi */
        case 278:  /* *movdi_32bit */
        case 279:  /* *movdi_32bit_mips16 */
        case 280:  /* *movdi_64bit */
        case 281:  /* *movdi_64bit_mips16 */
        case 282:  /* *movsi_internal */
        case 283:  /* *movv2hi_internal */
        case 284:  /* *movv4qi_internal */
        case 285:  /* *movv2hq_internal */
        case 286:  /* *movv2uhq_internal */
        case 287:  /* *movv2ha_internal */
        case 288:  /* *movv2uha_internal */
        case 289:  /* *movv4qq_internal */
        case 290:  /* *movv4uqq_internal */
        case 291:  /* *movsi_mips16 */
        case 292:  /* *movv2hi_mips16 */
        case 293:  /* *movv4qi_mips16 */
        case 294:  /* *movv2hq_mips16 */
        case 295:  /* *movv2uhq_mips16 */
        case 296:  /* *movv2ha_mips16 */
        case 297:  /* *movv2uha_mips16 */
        case 298:  /* *movv4qq_mips16 */
        case 299:  /* *movv4uqq_mips16 */
        case 300:  /* *lwxc1_si */
        case 301:  /* *ldxc1_si */
        case 302:  /* *ldxc1_si */
        case 303:  /* *lwxc1_di */
        case 304:  /* *ldxc1_di */
        case 305:  /* *ldxc1_di */
        case 312:  /* *lwxs */
        case 313:  /* *lwxs */
        case 314:  /* *lwxs */
        case 315:  /* *lwxs */
        case 316:  /* *lwxs */
        case 317:  /* *lwxs */
        case 318:  /* *lwxs */
        case 319:  /* *lwxs */
        case 320:  /* *lwxs */
        case 321:  /* *lwxs */
        case 322:  /* *lwxs */
        case 323:  /* *lwxs */
        case 324:  /* *lwxs */
        case 325:  /* *lwxs */
        case 326:  /* *lwxs */
        case 327:  /* *lwxs */
        case 328:  /* *lwxs */
        case 329:  /* *lwxs */
        case 330:  /* *movhi_internal */
        case 331:  /* *movhi_mips16 */
        case 332:  /* *movqi_internal */
        case 333:  /* *movqi_mips16 */
        case 334:  /* *movsf_hardfloat */
        case 335:  /* *movsf_softfloat */
        case 336:  /* *movsf_mips16 */
        case 337:  /* *movdf_hardfloat */
        case 338:  /* *movdf_softfloat */
        case 339:  /* *movdf_mips16 */
        case 340:  /* *movti */
        case 341:  /* *movti_mips16 */
        case 342:  /* *movtf */
        case 343:  /* *movtf_mips16 */
        case 344:  /* *movv2sf */
        case 345:  /* mfhisi_di */
        case 346:  /* mfhisi_ti */
        case 347:  /* mfhidi_ti */
        case 351:  /* load_lowdf */
        case 352:  /* load_lowdi */
        case 353:  /* load_lowv2sf */
        case 354:  /* load_lowv2si */
        case 355:  /* load_lowv4hi */
        case 356:  /* load_lowv8qi */
        case 357:  /* load_lowtf */
        case 358:  /* load_highdf */
        case 359:  /* load_highdi */
        case 360:  /* load_highv2sf */
        case 361:  /* load_highv2si */
        case 362:  /* load_highv4hi */
        case 363:  /* load_highv8qi */
        case 364:  /* load_hightf */
        case 365:  /* store_worddf */
        case 366:  /* store_worddi */
        case 367:  /* store_wordv2sf */
        case 368:  /* store_wordv2si */
        case 369:  /* store_wordv4hi */
        case 370:  /* store_wordv8qi */
        case 371:  /* store_wordtf */
        case 372:  /* mthc1df */
        case 373:  /* mthc1di */
        case 374:  /* mthc1v2sf */
        case 375:  /* mthc1v2si */
        case 376:  /* mthc1v4hi */
        case 377:  /* mthc1v8qi */
        case 378:  /* mthc1tf */
        case 379:  /* mfhc1df */
        case 380:  /* mfhc1di */
        case 381:  /* mfhc1v2sf */
        case 382:  /* mfhc1v2si */
        case 383:  /* mfhc1v4hi */
        case 384:  /* mfhc1v8qi */
        case 385:  /* mfhc1tf */
        case 424:  /* *mips.md:5359 */
        case 531:  /* sunordered_sf */
        case 532:  /* suneq_sf */
        case 533:  /* sunlt_sf */
        case 534:  /* sunle_sf */
        case 535:  /* seq_sf */
        case 536:  /* slt_sf */
        case 537:  /* sle_sf */
        case 538:  /* sunordered_df */
        case 539:  /* suneq_df */
        case 540:  /* sunlt_df */
        case 541:  /* sunle_df */
        case 542:  /* seq_df */
        case 543:  /* slt_df */
        case 544:  /* sle_df */
        case 545:  /* sge_sf */
        case 546:  /* sgt_sf */
        case 547:  /* sunge_sf */
        case 548:  /* sungt_sf */
        case 549:  /* sge_df */
        case 550:  /* sgt_df */
        case 551:  /* sunge_df */
        case 552:  /* sungt_df */
        case 576:  /* cop0_move */
        case 583:  /* load_callsi */
        case 584:  /* load_calldi */
        case 714:  /* mips_cabs_cond_s */
        case 715:  /* mips_cabs_cond_d */
        case 716:  /* mips_c_cond_4s */
        case 717:  /* mips_cabs_cond_4s */
        case 718:  /* mips_c_cond_ps */
        case 719:  /* mips_cabs_cond_ps */
        case 720:  /* sunordered_ps */
        case 721:  /* suneq_ps */
        case 722:  /* sunlt_ps */
        case 723:  /* sunle_ps */
        case 724:  /* seq_ps */
        case 725:  /* slt_ps */
        case 726:  /* sle_ps */
        case 727:  /* sge_ps */
        case 728:  /* sgt_ps */
        case 729:  /* sunge_ps */
        case 730:  /* sungt_ps */
        case 831:  /* mips_lbx_extsi_si */
        case 832:  /* mips_lbux_extsi_si */
        case 833:  /* mips_lbx_extdi_si */
        case 834:  /* mips_lbux_extdi_si */
        case 835:  /* mips_lhx_extsi_si */
        case 836:  /* mips_lhux_extsi_si */
        case 837:  /* mips_lhx_extdi_si */
        case 838:  /* mips_lhux_extdi_si */
        case 839:  /* mips_lbx_extsi_di */
        case 840:  /* mips_lbux_extsi_di */
        case 841:  /* mips_lbx_extdi_di */
        case 842:  /* mips_lbux_extdi_di */
        case 843:  /* mips_lhx_extsi_di */
        case 844:  /* mips_lhux_extsi_di */
        case 845:  /* mips_lhx_extdi_di */
        case 846:  /* mips_lhux_extdi_di */
        case 847:  /* mips_lwx_si */
        case 848:  /* mips_ldx_si */
        case 849:  /* mips_lwx_di */
        case 850:  /* mips_ldx_di */
        case 851:  /* *mips_lwx_si_ext */
        case 852:  /* *mips_lwux_si_ext */
        case 853:  /* *mips_lwx_di_ext */
        case 854:  /* *mips_lwux_di_ext */
        case 956:  /* movv2si_internal */
        case 957:  /* movv4hi_internal */
        case 958:  /* movv8qi_internal */
        case 959:  /* loongson_vec_init1_v4hi */
        case 960:  /* loongson_vec_init1_v8qi */
	  if (get_attr_can_delay (insn) == CAN_DELAY_YES)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if ((
#line 682 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)
		? SINGLE_INSN_YES : SINGLE_INSN_NO))) == (
(SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    default:
      gcc_unreachable ();
    }
}

int
const_num_delay_slots (rtx insn)
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}

EXPORTED_CONST int length_unit_log = 0;
