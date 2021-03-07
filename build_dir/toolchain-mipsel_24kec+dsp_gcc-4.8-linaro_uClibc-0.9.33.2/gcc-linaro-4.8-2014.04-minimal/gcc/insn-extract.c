/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 960:  /* loongson_vec_init1_v8qi */
    case 959:  /* loongson_vec_init1_v4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 955:  /* ssmsubsqdq4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 954:  /* ssmaddsqdq4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 953:  /* ssmulsq3 */
    case 952:  /* ssmulhq3 */
    case 951:  /* ssmulv2hq3 */
    case 868:  /* mulv2hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 855:  /* mips_bposge */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 829:  /* mips_wrdsp */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 5), 1), 0, 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 5), 1), 0, 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0, 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0, 0);
      recog_data.dup_num[3] = 0;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0, 1);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0, 0);
      recog_data.dup_num[5] = 0;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[7] = 0;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 0;
      break;

    case 826:  /* mips_extpdp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 1;
      break;

    case 898:  /* mips_dpsqx_sa_w_ph */
    case 897:  /* mips_dpsqx_s_w_ph */
    case 896:  /* mips_dpaqx_sa_w_ph */
    case 895:  /* mips_dpaqx_s_w_ph */
    case 804:  /* mips_maq_sa_w_phr */
    case 803:  /* mips_maq_sa_w_phl */
    case 802:  /* mips_maq_s_w_phr */
    case 801:  /* mips_maq_s_w_phl */
    case 800:  /* mips_dpsq_sa_l_w */
    case 799:  /* mips_dpaq_sa_l_w */
    case 798:  /* mips_mulsaq_s_w_ph */
    case 797:  /* mips_dpsq_s_w_ph */
    case 796:  /* mips_dpaq_s_w_ph */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 872:  /* mips_mulq_s_w */
    case 871:  /* mips_mulq_s_ph */
    case 870:  /* mips_mulq_rs_w */
    case 869:  /* mips_mul_s_ph */
    case 791:  /* mips_muleq_s_w_phr */
    case 790:  /* mips_muleq_s_w_phl */
    case 789:  /* mips_mulq_rs_ph */
    case 788:  /* mips_muleu_s_ph_qbr */
    case 787:  /* mips_muleu_s_ph_qbl */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 856:  /* mips_absq_s_qb */
    case 764:  /* mips_absq_s_ph */
    case 763:  /* mips_absq_s_w */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 882:  /* mips_subu_s_ph */
    case 881:  /* mips_subu_ph */
    case 865:  /* mips_cmpgdu_le_qb */
    case 864:  /* mips_cmpgdu_lt_qb */
    case 863:  /* mips_cmpgdu_eq_qb */
    case 858:  /* mips_addu_s_ph */
    case 828:  /* mips_mthlip */
    case 825:  /* mips_extp */
    case 824:  /* mips_extr_s_h */
    case 823:  /* mips_extr_rs_w */
    case 822:  /* mips_extr_r_w */
    case 821:  /* mips_extr_w */
    case 782:  /* mips_shll_s_ph */
    case 781:  /* mips_shll_s_w */
    case 780:  /* mips_shll_qb */
    case 779:  /* mips_shll_ph */
    case 768:  /* mips_precrqu_s_qb_ph */
    case 767:  /* mips_precrq_rs_ph_w */
    case 760:  /* mips_addwc */
    case 759:  /* mips_addsc */
    case 758:  /* mips_subu_s_qb */
    case 757:  /* mips_subq_s_ph */
    case 756:  /* mips_subq_s_w */
    case 753:  /* mips_addu_s_qb */
    case 752:  /* mips_addq_s_ph */
    case 751:  /* mips_addq_s_w */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 950:  /* sssubv2ha3 */
    case 949:  /* sssubv2hq3 */
    case 948:  /* sssubsa3 */
    case 947:  /* sssubha3 */
    case 946:  /* sssubsq3 */
    case 945:  /* sssubhq3 */
    case 944:  /* ussubv2uha3 */
    case 943:  /* ussubv2uhq3 */
    case 942:  /* ussubv4uqq3 */
    case 941:  /* ussubuha3 */
    case 940:  /* ussubuhq3 */
    case 939:  /* ussubuqq3 */
    case 924:  /* ssaddv2ha3 */
    case 923:  /* ssaddv2hq3 */
    case 922:  /* ssaddsa3 */
    case 921:  /* ssaddha3 */
    case 920:  /* ssaddsq3 */
    case 919:  /* ssaddhq3 */
    case 918:  /* usaddv2uha3 */
    case 917:  /* usaddv2uhq3 */
    case 916:  /* usaddv4uqq3 */
    case 915:  /* usadduha3 */
    case 914:  /* usadduhq3 */
    case 913:  /* usadduqq3 */
    case 857:  /* mips_addu_ph */
    case 755:  /* subv4qi3 */
    case 754:  /* subv2hi3 */
    case 750:  /* addv4qi3 */
    case 749:  /* addv2hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 736:  /* *branch_upper_lower_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 735:  /* *branch_upper_lower */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 734:  /* bc1any2f */
    case 733:  /* bc1any2t */
    case 732:  /* bc1any4f */
    case 731:  /* bc1any4t */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 717:  /* mips_cabs_cond_4s */
    case 716:  /* mips_c_cond_4s */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 4));
      break;

    case 709:  /* reduc_splus_v2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 1;
      break;

    case 706:  /* vec_extractv2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 704:  /* vec_perm_const_ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 700:  /* atomic_fetch_adddi_ldadd */
    case 699:  /* atomic_fetch_addsi_ldadd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 698:  /* atomic_fetch_adddi_llsc */
    case 697:  /* atomic_fetch_addsi_llsc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 696:  /* atomic_exchangedi_swap */
    case 695:  /* atomic_exchangesi_swap */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 694:  /* atomic_exchangedi_llsc */
    case 693:  /* atomic_exchangesi_llsc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 692:  /* atomic_compare_and_swapdi */
    case 691:  /* atomic_compare_and_swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 3), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 3), 0, 1));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (pat, 0, 3), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 690:  /* test_and_set_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 689:  /* sync_lock_test_and_setdi */
    case 688:  /* sync_lock_test_and_setsi */
    case 687:  /* sync_new_nanddi */
    case 686:  /* sync_new_nandsi */
    case 685:  /* sync_old_nanddi */
    case 684:  /* sync_old_nandsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 669:  /* sync_anddi */
    case 668:  /* sync_xordi */
    case 667:  /* sync_iordi */
    case 666:  /* sync_andsi */
    case 665:  /* sync_xorsi */
    case 664:  /* sync_iorsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 663:  /* sync_new_subdi */
    case 662:  /* sync_new_subsi */
    case 661:  /* sync_new_adddi */
    case 660:  /* sync_new_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 659:  /* sync_old_subdi */
    case 658:  /* sync_old_subsi */
    case 657:  /* sync_old_adddi */
    case 656:  /* sync_old_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 653:  /* sync_new_nand_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 652:  /* sync_old_nand_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 651:  /* sync_nand_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 650:  /* sync_new_and_12 */
    case 649:  /* sync_new_xor_12 */
    case 648:  /* sync_new_ior_12 */
    case 647:  /* sync_new_sub_12 */
    case 646:  /* sync_new_add_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0);
      recog_data.dup_num[5] = 0;
      break;

    case 645:  /* sync_old_and_12 */
    case 644:  /* sync_old_xor_12 */
    case 643:  /* sync_old_ior_12 */
    case 642:  /* sync_old_sub_12 */
    case 641:  /* sync_old_add_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 640:  /* sync_and_12 */
    case 639:  /* sync_xor_12 */
    case 638:  /* sync_ior_12 */
    case 637:  /* sync_sub_12 */
    case 636:  /* sync_add_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 655:  /* sync_subdi */
    case 654:  /* sync_subsi */
    case 635:  /* sync_adddi */
    case 634:  /* sync_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 633:  /* compare_and_swap_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 632:  /* sync_compare_and_swapdi */
    case 631:  /* sync_compare_and_swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 630:  /* *memory_barrier */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 629:  /* *tls_get_tp_mips16_call_di */
    case 628:  /* *tls_get_tp_mips16_call_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 627:  /* tls_get_tp_mips16_di */
    case 626:  /* tls_get_tp_mips16_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 623:  /* tls_get_tp_di */
    case 622:  /* tls_get_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 621:  /* *mips16e_save_restore */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 618:  /* consttable_int */
    case 617:  /* consttable_tls_reloc */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 702:  /* *movcc_v2sf_di */
    case 701:  /* *movcc_v2sf_si */
    case 616:  /* *movdf_on_cc */
    case 615:  /* *movdf_on_di */
    case 614:  /* *movdf_on_si */
    case 613:  /* *movsf_on_cc */
    case 612:  /* *movsf_on_di */
    case 611:  /* *movsf_on_si */
    case 610:  /* *movdi_on_cc */
    case 609:  /* *movsi_on_cc */
    case 608:  /* *movdi_on_di */
    case 607:  /* *movsi_on_di */
    case 606:  /* *movdi_on_si */
    case 605:  /* *movsi_on_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 602:  /* *prefetch_indexed_di */
    case 601:  /* *prefetch_indexed_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 2));
      break;

    case 600:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 597:  /* call_value_direct_split */
    case 596:  /* call_value_internal_direct */
    case 595:  /* call_value_split */
    case 594:  /* call_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 593:  /* call_direct_split */
    case 592:  /* call_internal_direct */
    case 591:  /* call_split */
    case 590:  /* call_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 599:  /* call_value_multiple_split */
    case 598:  /* call_value_multiple_internal */
    case 589:  /* sibcall_value_multiple_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 976:  /* loongson_pandn_d */
    case 975:  /* loongson_pandn_b */
    case 974:  /* loongson_pandn_h */
    case 973:  /* loongson_pandn_w */
    case 588:  /* sibcall_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 587:  /* sibcall_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 578:  /* eh_set_lr_di */
    case 577:  /* eh_set_lr_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 580:  /* restore_gp_di */
    case 579:  /* restore_gp_si */
    case 570:  /* simple_return_internal */
    case 569:  /* return_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 563:  /* casesi_internal_mips16_di */
    case 562:  /* casesi_internal_mips16_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 561:  /* tablejump_di */
    case 560:  /* tablejump_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 559:  /* indirect_jump_and_restore_di */
    case 558:  /* indirect_jump_and_restore_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      break;

    case 555:  /* *jump_mips16 */
    case 554:  /* *jump_pic */
    case 553:  /* *jump_absolute */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 454:  /* *branch_bit1di_inverted */
    case 453:  /* *branch_bit0di_inverted */
    case 452:  /* *branch_bit1si_inverted */
    case 451:  /* *branch_bit0si_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      break;

    case 450:  /* *branch_bit1di */
    case 449:  /* *branch_bit0di */
    case 448:  /* *branch_bit1si */
    case 447:  /* *branch_bit0si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      break;

    case 442:  /* *branch_equalitydi_inverted */
    case 441:  /* *branch_equalitysi_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 440:  /* *branch_equalitydi */
    case 439:  /* *branch_equalitysi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 446:  /* *branch_equalitydi_mips16_inverted */
    case 445:  /* *branch_equalitysi_mips16_inverted */
    case 438:  /* *branch_orderdi_inverted */
    case 437:  /* *branch_ordersi_inverted */
    case 434:  /* *branch_fp_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 444:  /* *branch_equalitydi_mips16 */
    case 443:  /* *branch_equalitysi_mips16 */
    case 436:  /* *branch_orderdi */
    case 435:  /* *branch_ordersi */
    case 433:  /* *branch_fp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 814:  /* mips_cmpu_le_qb */
    case 813:  /* mips_cmp_le_ph */
    case 812:  /* mips_cmpu_lt_qb */
    case 811:  /* mips_cmp_lt_ph */
    case 810:  /* mips_cmpu_eq_qb */
    case 809:  /* mips_cmp_eq_ph */
    case 407:  /* mips_cache */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 620:  /* align */
    case 619:  /* consttable_float */
    case 402:  /* synci */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 557:  /* indirect_jump_di */
    case 556:  /* indirect_jump_si */
    case 400:  /* use_cprestore_di */
    case 399:  /* use_cprestore_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 396:  /* potential_cprestore_di */
    case 395:  /* potential_cprestore_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 311:  /* *sdxc1_di */
    case 310:  /* *sdxc1_di */
    case 309:  /* *swxc1_di */
    case 308:  /* *sdxc1_si */
    case 307:  /* *sdxc1_si */
    case 306:  /* *swxc1_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 404:  /* rdhwr_synci_step_di */
    case 403:  /* rdhwr_synci_step_si */
    case 277:  /* *movdi_ra */
    case 276:  /* *movsi_ra */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 958:  /* movv8qi_internal */
    case 957:  /* movv4hi_internal */
    case 956:  /* movv2si_internal */
    case 344:  /* *movv2sf */
    case 343:  /* *movtf_mips16 */
    case 342:  /* *movtf */
    case 341:  /* *movti_mips16 */
    case 340:  /* *movti */
    case 339:  /* *movdf_mips16 */
    case 338:  /* *movdf_softfloat */
    case 337:  /* *movdf_hardfloat */
    case 336:  /* *movsf_mips16 */
    case 335:  /* *movsf_softfloat */
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
    case 267:  /* *got_dispdi */
    case 266:  /* *got_dispsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 1018:  /* reduc_uplus_v8qi */
    case 1017:  /* loongson_biadd */
    case 1011:  /* loongson_pmovmskb */
    case 830:  /* mips_rddsp */
    case 808:  /* mips_repl_ph */
    case 807:  /* mips_repl_qb */
    case 805:  /* mips_bitrev */
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
    case 762:  /* mips_raddu_w_qb */
    case 745:  /* mips_recip1_ps */
    case 744:  /* mips_recip1_d */
    case 743:  /* mips_recip1_s */
    case 739:  /* mips_rsqrt1_ps */
    case 738:  /* mips_rsqrt1_d */
    case 737:  /* mips_rsqrt1_s */
    case 713:  /* *mips_abs_ps */
    case 711:  /* mips_cvt_ps_pw */
    case 710:  /* mips_cvt_pw_ps */
    case 683:  /* sync_nanddi */
    case 682:  /* sync_nandsi */
    case 582:  /* move_gpdi */
    case 581:  /* move_gpsi */
    case 576:  /* cop0_move */
    case 575:  /* mips_rdpgpr */
    case 432:  /* dshd */
    case 431:  /* dsbh */
    case 430:  /* wsbh */
    case 398:  /* cprestore_di */
    case 397:  /* cprestore_si */
    case 394:  /* copygp_mips16_di */
    case 393:  /* copygp_mips16_si */
    case 389:  /* loadgp_absolute_di */
    case 388:  /* loadgp_absolute_si */
    case 385:  /* mfhc1tf */
    case 384:  /* mfhc1v8qi */
    case 383:  /* mfhc1v4hi */
    case 382:  /* mfhc1v2si */
    case 381:  /* mfhc1v2sf */
    case 380:  /* mfhc1di */
    case 379:  /* mfhc1df */
    case 357:  /* load_lowtf */
    case 356:  /* load_lowv8qi */
    case 355:  /* load_lowv4hi */
    case 354:  /* load_lowv2si */
    case 353:  /* load_lowv2sf */
    case 352:  /* load_lowdi */
    case 351:  /* load_lowdf */
    case 347:  /* mfhidi_ti */
    case 346:  /* mfhisi_ti */
    case 345:  /* mfhisi_di */
    case 261:  /* *unshifted_high */
    case 260:  /* *unshifted_high */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 259:  /* *lea64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 257:  /* mov_sdr */
    case 256:  /* mov_swr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 1005:  /* *vec_setv4hi */
    case 894:  /* mips_dpsx_w_ph */
    case 893:  /* mips_dpax_w_ph */
    case 877:  /* mips_prepend */
    case 876:  /* mips_precr_sra_r_ph_w */
    case 875:  /* mips_precr_sra_ph_w */
    case 873:  /* mips_mulsa_w_ph */
    case 867:  /* mips_dps_w_ph */
    case 866:  /* mips_dpa_w_ph */
    case 862:  /* mips_balign */
    case 861:  /* mips_append */
    case 795:  /* mips_dpsu_h_qbr */
    case 794:  /* mips_dpsu_h_qbl */
    case 793:  /* mips_dpau_h_qbr */
    case 792:  /* mips_dpau_h_qbl */
    case 719:  /* mips_cabs_cond_ps */
    case 718:  /* mips_c_cond_ps */
    case 715:  /* mips_cabs_cond_d */
    case 714:  /* mips_cabs_cond_s */
    case 707:  /* mips_alnv_ps */
    case 703:  /* mips_cond_move_tf_ps */
    case 253:  /* mov_ldr */
    case 252:  /* mov_lwr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1054:  /* vec_shr_di */
    case 1053:  /* vec_shr_v8qi */
    case 1052:  /* vec_shr_v4hi */
    case 1051:  /* vec_shr_v2si */
    case 1050:  /* vec_shl_di */
    case 1049:  /* vec_shl_v8qi */
    case 1048:  /* vec_shl_v4hi */
    case 1047:  /* vec_shl_v2si */
    case 1030:  /* loongson_psubd */
    case 1020:  /* loongson_pshufh */
    case 1019:  /* loongson_psadbh */
    case 1016:  /* loongson_pasubub */
    case 1015:  /* loongson_pmuluw */
    case 1013:  /* smulv4hi3_highpart */
    case 1012:  /* umulv4hi3_highpart */
    case 1006:  /* loongson_pmaddhw */
    case 1000:  /* loongson_pextrh */
    case 999:  /* loongson_pcmpgtb */
    case 998:  /* loongson_pcmpgth */
    case 997:  /* loongson_pcmpgtw */
    case 996:  /* loongson_pcmpeqb */
    case 995:  /* loongson_pcmpeqh */
    case 994:  /* loongson_pcmpeqw */
    case 993:  /* loongson_pavgb */
    case 992:  /* loongson_pavgh */
    case 968:  /* loongson_paddd */
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
    case 880:  /* mips_shrl_ph */
    case 879:  /* mips_shra_r_qb */
    case 878:  /* mips_shra_qb */
    case 874:  /* mips_precr_qb_ph */
    case 860:  /* mips_adduh_r_qb */
    case 859:  /* mips_adduh_qb */
    case 827:  /* mips_shilo */
    case 820:  /* mips_packrl_ph */
    case 819:  /* mips_pick_qb */
    case 818:  /* mips_pick_ph */
    case 817:  /* mips_cmpgu_le_qb */
    case 816:  /* mips_cmpgu_lt_qb */
    case 815:  /* mips_cmpgu_eq_qb */
    case 806:  /* mips_insv */
    case 786:  /* mips_shra_r_ph */
    case 785:  /* mips_shra_r_w */
    case 784:  /* mips_shra_ph */
    case 783:  /* mips_shrl_qb */
    case 766:  /* mips_precrq_ph_w */
    case 765:  /* mips_precrq_qb_ph */
    case 761:  /* mips_modsub */
    case 748:  /* mips_recip2_ps */
    case 747:  /* mips_recip2_d */
    case 746:  /* mips_recip2_s */
    case 742:  /* mips_rsqrt2_ps */
    case 741:  /* mips_rsqrt2_d */
    case 740:  /* mips_rsqrt2_s */
    case 712:  /* mips_mulr_ps */
    case 708:  /* mips_addr_ps */
    case 584:  /* load_calldi */
    case 583:  /* load_callsi */
    case 566:  /* probe_stack_range_di */
    case 565:  /* probe_stack_range_si */
    case 392:  /* loadgp_rtp_di */
    case 391:  /* loadgp_rtp_si */
    case 387:  /* loadgp_newabi_di */
    case 386:  /* loadgp_newabi_si */
    case 378:  /* mthc1tf */
    case 377:  /* mthc1v8qi */
    case 376:  /* mthc1v4hi */
    case 375:  /* mthc1v2si */
    case 374:  /* mthc1v2sf */
    case 373:  /* mthc1di */
    case 372:  /* mthc1df */
    case 371:  /* store_wordtf */
    case 370:  /* store_wordv8qi */
    case 369:  /* store_wordv4hi */
    case 368:  /* store_wordv2si */
    case 367:  /* store_wordv2sf */
    case 366:  /* store_worddi */
    case 365:  /* store_worddf */
    case 364:  /* load_hightf */
    case 363:  /* load_highv8qi */
    case 362:  /* load_highv4hi */
    case 361:  /* load_highv2si */
    case 360:  /* load_highv2sf */
    case 359:  /* load_highdi */
    case 358:  /* load_highdf */
    case 350:  /* mthidi_ti */
    case 349:  /* mthisi_ti */
    case 348:  /* mthisi_di */
    case 271:  /* load_gotdi */
    case 270:  /* load_gotsi */
    case 255:  /* mov_sdl */
    case 254:  /* mov_swl */
    case 251:  /* mov_ldl */
    case 250:  /* mov_lwl */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 247:  /* *insvdi */
    case 246:  /* *insvsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 245:  /* *extzv_truncsi_exts */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 244:  /* *extzvdi */
    case 243:  /* *extzvsi */
    case 242:  /* *extvdi */
    case 241:  /* *extvsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 234:  /* fix_truncsfsi2_macro */
    case 232:  /* fix_truncdfsi2_macro */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 229:  /* *extendhi_truncateqi_exts */
    case 228:  /* *extenddi_truncatehi_exts */
    case 227:  /* *extendsi_truncatehi_exts */
    case 226:  /* *extenddi_truncateqi_exts */
    case 225:  /* *extendsi_truncateqi_exts */
    case 224:  /* *extendhi_truncateqi */
    case 223:  /* *extendsi_truncatehi */
    case 222:  /* *extendsi_truncateqi */
    case 221:  /* *extenddi_truncatehi */
    case 220:  /* *extenddi_truncateqi */
    case 203:  /* *zero_extendhi_truncqi */
    case 202:  /* *zero_extenddi_trunchi */
    case 201:  /* *zero_extendsi_trunchi */
    case 200:  /* *zero_extenddi_truncqi */
    case 199:  /* *zero_extendsi_truncqi */
    case 176:  /* *lshr32_truncsi */
    case 175:  /* *lshr32_trunchi */
    case 174:  /* *lshr32_truncqi */
    case 145:  /* *popcountdi2_trunc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 134:  /* *rsqrtv2sfa */
    case 133:  /* *rsqrtdfa */
    case 132:  /* *rsqrtsfa */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 991:  /* one_cmplv8qi2 */
    case 990:  /* one_cmplv4hi2 */
    case 989:  /* one_cmplv2si2 */
    case 498:  /* *sgeu_didi */
    case 497:  /* *sge_didi */
    case 496:  /* *sgeu_sidi */
    case 495:  /* *sge_sidi */
    case 494:  /* *sgeu_disi */
    case 493:  /* *sge_disi */
    case 492:  /* *sgeu_sisi */
    case 491:  /* *sge_sisi */
    case 470:  /* *sne_zero_didi */
    case 469:  /* *sne_zero_sidi */
    case 468:  /* *sne_zero_disi */
    case 467:  /* *sne_zero_sisi */
    case 462:  /* *seq_zero_didi_mips16 */
    case 461:  /* *seq_zero_sidi_mips16 */
    case 460:  /* *seq_zero_disi_mips16 */
    case 459:  /* *seq_zero_sisi_mips16 */
    case 458:  /* *seq_zero_didi */
    case 457:  /* *seq_zero_sidi */
    case 456:  /* *seq_zero_disi */
    case 455:  /* *seq_zero_sisi */
    case 429:  /* bswapdi2 */
    case 428:  /* bswapsi2 */
    case 427:  /* bswaphi2 */
    case 269:  /* *got_pagedi */
    case 268:  /* *got_pagesi */
    case 263:  /* *xgot_hidi */
    case 262:  /* *xgot_hisi */
    case 258:  /* *lea_high64 */
    case 240:  /* floatdisf2 */
    case 239:  /* floatsisf2 */
    case 238:  /* floatdidf2 */
    case 237:  /* floatsidf2 */
    case 236:  /* fix_truncsfdi2 */
    case 235:  /* fix_truncdfdi2 */
    case 233:  /* fix_truncsfsi2_insn */
    case 231:  /* fix_truncdfsi2_insn */
    case 230:  /* extendsfdf2 */
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
    case 204:  /* extendsidi2 */
    case 198:  /* *zero_extendqihi2_mips16 */
    case 197:  /* *zero_extendqihi2 */
    case 196:  /* *zero_extendhidi2_mips16 */
    case 195:  /* *zero_extendhisi2_mips16 */
    case 194:  /* *zero_extendqidi2_mips16 */
    case 193:  /* *zero_extendqisi2_mips16 */
    case 192:  /* *zero_extendhidi2_mips16e */
    case 191:  /* *zero_extendhisi2_mips16e */
    case 190:  /* *zero_extendqidi2_mips16e */
    case 189:  /* *zero_extendqisi2_mips16e */
    case 188:  /* *zero_extendhidi2 */
    case 187:  /* *zero_extendhisi2 */
    case 186:  /* *zero_extendqidi2 */
    case 185:  /* *zero_extendqisi2 */
    case 184:  /* *zero_extendsidi2_dext */
    case 183:  /* *zero_extendsidi2 */
    case 170:  /* truncdisi2 */
    case 169:  /* truncdihi2 */
    case 168:  /* truncdiqi2 */
    case 167:  /* truncdfsf2 */
    case 152:  /* one_cmpldi2 */
    case 151:  /* one_cmplsi2 */
    case 150:  /* negv2sf2 */
    case 149:  /* negdf2 */
    case 148:  /* negsf2 */
    case 147:  /* negdi2 */
    case 146:  /* negsi2 */
    case 144:  /* popcountdi2 */
    case 143:  /* popcountsi2 */
    case 142:  /* clzdi2 */
    case 141:  /* clzsi2 */
    case 140:  /* absv2sf2 */
    case 139:  /* absdf2 */
    case 138:  /* abssf2 */
    case 131:  /* sqrtv2sf2 */
    case 130:  /* sqrtdf2 */
    case 129:  /* sqrtsf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

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
    case 128:  /* udivmoddi4_hilo_ti */
    case 127:  /* divmoddi4_hilo_ti */
    case 126:  /* udivmodsi4_hilo_ti */
    case 125:  /* divmodsi4_hilo_ti */
    case 124:  /* udivmodsi4_hilo_di */
    case 123:  /* divmodsi4_hilo_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 122:  /* udivmoddi4_internal */
    case 121:  /* udivmodsi4_internal */
    case 120:  /* divmoddi4_internal */
    case 119:  /* divmodsi4_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 112:  /* *nmsub3v2sf_fastmath */
    case 111:  /* *nmsub3df_fastmath */
    case 110:  /* *nmsub3sf_fastmath */
    case 109:  /* *nmsub4v2sf_fastmath */
    case 108:  /* *nmsub4df_fastmath */
    case 107:  /* *nmsub4sf_fastmath */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 106:  /* *nmsub3v2sf */
    case 105:  /* *nmsub3df */
    case 104:  /* *nmsub3sf */
    case 103:  /* *nmsub4v2sf */
    case 102:  /* *nmsub4df */
    case 101:  /* *nmsub4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 100:  /* *nmadd3v2sf_fastmath */
    case 99:  /* *nmadd3df_fastmath */
    case 98:  /* *nmadd3sf_fastmath */
    case 97:  /* *nmadd4v2sf_fastmath */
    case 96:  /* *nmadd4df_fastmath */
    case 95:  /* *nmadd4sf_fastmath */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 94:  /* *nmadd3v2sf */
    case 93:  /* *nmadd3df */
    case 92:  /* *nmadd3sf */
    case 91:  /* *nmadd4v2sf */
    case 90:  /* *nmadd4df */
    case 89:  /* *nmadd4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 249:  /* *cinsdi */
    case 248:  /* *cinssi */
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
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 76:  /* umaddsidi4 */
    case 75:  /* maddsidi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 74:  /* madsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 67:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 66:  /* *smulsi3_highpart_neg_mulhi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 69:  /* umuldi3_highpart_internal */
    case 68:  /* smuldi3_highpart_internal */
    case 65:  /* umulsi3_highpart_mulhi_internal */
    case 64:  /* smulsi3_highpart_mulhi_internal */
    case 63:  /* umulsi3_highpart_internal */
    case 62:  /* smulsi3_highpart_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 61:  /* umsubsidi4 */
    case 60:  /* msubsidi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 59:  /* *mulsu_di */
    case 58:  /* *muls_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 56:  /* umulsidi3_64bit_hilo */
    case 55:  /* mulsidi3_64bit_hilo */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 54:  /* umulsidi3_64bit */
    case 53:  /* mulsidi3_64bit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 73:  /* umulditi3_r4000 */
    case 72:  /* mulditi3_r4000 */
    case 57:  /* mulsidi3_64bit_dmul */
    case 52:  /* umulsidi3_32bit_r4000 */
    case 51:  /* mulsidi3_32bit_r4000 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 988:  /* *loongson_nor */
    case 987:  /* *loongson_nor */
    case 986:  /* *loongson_nor */
    case 964:  /* vec_pack_usat_v4hi */
    case 963:  /* vec_pack_ssat_v4hi */
    case 962:  /* vec_pack_ssat_v2si */
    case 166:  /* *nordi3 */
    case 165:  /* *norsi3 */
    case 71:  /* umulditi3_internal */
    case 70:  /* mulditi3_internal */
    case 50:  /* umulsidi3_32bit */
    case 49:  /* mulsidi3_32bit */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 48:  /* *muls */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 46:  /* *msac2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 0;
      break;

    case 45:  /* *macc2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 0;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[3] = 0;
      break;

    case 47:  /* *mul_sub_si */
    case 44:  /* *msac_using_macc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 43:  /* *msac */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 42:  /* *macc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 41:  /* *mul_acc_si_r3900 */
    case 40:  /* *mul_acc_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 39:  /* muldi3_r4000 */
    case 38:  /* mulsi3_r4000 */
    case 35:  /* muldi3_mul3 */
    case 34:  /* mulsi3_mul3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 854:  /* *mips_lwux_di_ext */
    case 853:  /* *mips_lwx_di_ext */
    case 852:  /* *mips_lwux_si_ext */
    case 851:  /* *mips_lwx_si_ext */
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
    case 20:  /* *baddu_didi */
    case 19:  /* *baddu_disi */
    case 18:  /* *baddu_si_el */
    case 17:  /* *baddu_si_eb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

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
    case 1004:  /* loongson_pinsrh_3 */
    case 1003:  /* loongson_pinsrh_2 */
    case 1002:  /* loongson_pinsrh_1 */
    case 1001:  /* loongson_pinsrh_0 */
    case 850:  /* mips_ldx_di */
    case 849:  /* mips_lwx_di */
    case 848:  /* mips_ldx_si */
    case 847:  /* mips_lwx_si */
    case 417:  /* *lshrsi3_extend */
    case 416:  /* *ashrsi3_extend */
    case 415:  /* *ashlsi3_extend */
    case 305:  /* *ldxc1_di */
    case 304:  /* *ldxc1_di */
    case 303:  /* *lwxc1_di */
    case 302:  /* *ldxc1_si */
    case 301:  /* *ldxc1_si */
    case 300:  /* *lwxc1_si */
    case 182:  /* *lshr_truncsi_exts */
    case 181:  /* *ashr_truncsi_exts */
    case 180:  /* *lshr_trunchi_exts */
    case 179:  /* *ashr_trunchi_exts */
    case 178:  /* *lshr_truncqi_exts */
    case 177:  /* *ashr_truncqi_exts */
    case 173:  /* *ashr_truncsi */
    case 172:  /* *ashr_trunchi */
    case 171:  /* *ashr_truncqi */
    case 137:  /* *rsqrtv2sfb */
    case 136:  /* *rsqrtdfb */
    case 135:  /* *rsqrtsfb */
    case 26:  /* *subsi3_extended */
    case 16:  /* *addsi3_extended_mips16 */
    case 15:  /* *addsi3_extended */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1062:  /* umoddi3 */
    case 1061:  /* moddi3 */
    case 1060:  /* umodsi3 */
    case 1059:  /* modsi3 */
    case 1058:  /* udivdi3 */
    case 1057:  /* divdi3 */
    case 1056:  /* udivsi3 */
    case 1055:  /* divsi3 */
    case 1034:  /* ussubv8qi3 */
    case 1033:  /* ussubv4hi3 */
    case 1032:  /* sssubv8qi3 */
    case 1031:  /* sssubv4hi3 */
    case 1029:  /* subv8qi3 */
    case 1028:  /* subv4hi3 */
    case 1027:  /* subv2si3 */
    case 1026:  /* lshrv4hi3 */
    case 1025:  /* lshrv2si3 */
    case 1024:  /* ashrv4hi3 */
    case 1023:  /* ashrv2si3 */
    case 1022:  /* ashlv4hi3 */
    case 1021:  /* ashlv2si3 */
    case 1014:  /* mulv4hi3 */
    case 1010:  /* uminv8qi3 */
    case 1009:  /* sminv4hi3 */
    case 1008:  /* umaxv8qi3 */
    case 1007:  /* smaxv4hi3 */
    case 985:  /* xorv8qi3 */
    case 984:  /* xorv4hi3 */
    case 983:  /* xorv2si3 */
    case 982:  /* iorv8qi3 */
    case 981:  /* iorv4hi3 */
    case 980:  /* iorv2si3 */
    case 979:  /* andv8qi3 */
    case 978:  /* andv4hi3 */
    case 977:  /* andv2si3 */
    case 972:  /* usaddv8qi3 */
    case 971:  /* usaddv4hi3 */
    case 970:  /* ssaddv8qi3 */
    case 969:  /* ssaddv4hi3 */
    case 967:  /* addv8qi3 */
    case 966:  /* addv4hi3 */
    case 965:  /* addv2si3 */
    case 961:  /* *vec_concatv2si */
    case 938:  /* subuda3 */
    case 937:  /* subusa3 */
    case 936:  /* subuha3 */
    case 935:  /* subda3 */
    case 934:  /* subsa3 */
    case 933:  /* subha3 */
    case 932:  /* subudq3 */
    case 931:  /* subusq3 */
    case 930:  /* subuhq3 */
    case 929:  /* subuqq3 */
    case 928:  /* subdq3 */
    case 927:  /* subsq3 */
    case 926:  /* subhq3 */
    case 925:  /* subqq3 */
    case 912:  /* adduda3 */
    case 911:  /* addusa3 */
    case 910:  /* adduha3 */
    case 909:  /* addda3 */
    case 908:  /* addsa3 */
    case 907:  /* addha3 */
    case 906:  /* addudq3 */
    case 905:  /* addusq3 */
    case 904:  /* adduhq3 */
    case 903:  /* adduqq3 */
    case 902:  /* adddq3 */
    case 901:  /* addsq3 */
    case 900:  /* addhq3 */
    case 899:  /* addqq3 */
    case 705:  /* vec_concatv2sf */
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
    case 530:  /* *sleu_didi_mips16 */
    case 529:  /* *sle_didi_mips16 */
    case 528:  /* *sleu_sidi_mips16 */
    case 527:  /* *sle_sidi_mips16 */
    case 526:  /* *sleu_disi_mips16 */
    case 525:  /* *sle_disi_mips16 */
    case 524:  /* *sleu_sisi_mips16 */
    case 523:  /* *sle_sisi_mips16 */
    case 522:  /* *sleu_didi */
    case 521:  /* *sle_didi */
    case 520:  /* *sleu_sidi */
    case 519:  /* *sle_sidi */
    case 518:  /* *sleu_disi */
    case 517:  /* *sle_disi */
    case 516:  /* *sleu_sisi */
    case 515:  /* *sle_sisi */
    case 514:  /* *sltu_didi_mips16 */
    case 513:  /* *slt_didi_mips16 */
    case 512:  /* *sltu_sidi_mips16 */
    case 511:  /* *slt_sidi_mips16 */
    case 510:  /* *sltu_disi_mips16 */
    case 509:  /* *slt_disi_mips16 */
    case 508:  /* *sltu_sisi_mips16 */
    case 507:  /* *slt_sisi_mips16 */
    case 506:  /* *sltu_didi */
    case 505:  /* *slt_didi */
    case 504:  /* *sltu_sidi */
    case 503:  /* *slt_sidi */
    case 502:  /* *sltu_disi */
    case 501:  /* *slt_disi */
    case 500:  /* *sltu_sisi */
    case 499:  /* *slt_sisi */
    case 490:  /* *sgtu_didi_mips16 */
    case 489:  /* *sgt_didi_mips16 */
    case 488:  /* *sgtu_sidi_mips16 */
    case 487:  /* *sgt_sidi_mips16 */
    case 486:  /* *sgtu_disi_mips16 */
    case 485:  /* *sgt_disi_mips16 */
    case 484:  /* *sgtu_sisi_mips16 */
    case 483:  /* *sgt_sisi_mips16 */
    case 482:  /* *sgtu_didi */
    case 481:  /* *sgt_didi */
    case 480:  /* *sgtu_sidi */
    case 479:  /* *sgt_sidi */
    case 478:  /* *sgtu_disi */
    case 477:  /* *sgt_disi */
    case 476:  /* *sgtu_sisi */
    case 475:  /* *sgt_sisi */
    case 474:  /* *sne_didi_sne */
    case 473:  /* *sne_sidi_sne */
    case 472:  /* *sne_disi_sne */
    case 471:  /* *sne_sisi_sne */
    case 466:  /* *seq_didi_seq */
    case 465:  /* *seq_sidi_seq */
    case 464:  /* *seq_disi_seq */
    case 463:  /* *seq_sisi_seq */
    case 426:  /* rotrdi3 */
    case 425:  /* rotrsi3 */
    case 424:  /* *mips.md:5359 */
    case 423:  /* *lshrdi3_mips16 */
    case 422:  /* *ashrdi3_mips16 */
    case 421:  /* *ashldi3_mips16 */
    case 420:  /* *lshrsi3_mips16 */
    case 419:  /* *ashrsi3_mips16 */
    case 418:  /* *ashlsi3_mips16 */
    case 414:  /* *lshrdi3 */
    case 413:  /* *ashrdi3 */
    case 412:  /* *ashldi3 */
    case 411:  /* *lshrsi3 */
    case 410:  /* *ashrsi3 */
    case 409:  /* *ashlsi3 */
    case 275:  /* *lowdi_mips16 */
    case 274:  /* *lowsi_mips16 */
    case 273:  /* *lowdi */
    case 272:  /* *lowsi */
    case 265:  /* *xgot_lodi */
    case 264:  /* *xgot_losi */
    case 164:  /* *mips.md:2992 */
    case 163:  /* *mips.md:2992 */
    case 162:  /* *mips.md:2981 */
    case 161:  /* *mips.md:2981 */
    case 160:  /* *iordi3_mips16 */
    case 159:  /* *iorsi3_mips16 */
    case 158:  /* *iordi3 */
    case 157:  /* *iorsi3 */
    case 156:  /* *anddi3_mips16 */
    case 155:  /* *andsi3_mips16 */
    case 154:  /* *anddi3 */
    case 153:  /* *andsi3 */
    case 118:  /* *recipv2sf3 */
    case 117:  /* *recipdf3 */
    case 116:  /* *recipsf3 */
    case 115:  /* *divv2sf3 */
    case 114:  /* *divdf3 */
    case 113:  /* *divsf3 */
    case 37:  /* muldi3_internal */
    case 36:  /* mulsi3_internal */
    case 33:  /* muldi3_mul3_loongson */
    case 32:  /* mulsi3_mul3_loongson */
    case 31:  /* mulv2sf3 */
    case 30:  /* *muldf3_r4300 */
    case 29:  /* *mulsf3_r4300 */
    case 28:  /* *muldf3 */
    case 27:  /* *mulsf3 */
    case 25:  /* subdi3 */
    case 24:  /* subsi3 */
    case 23:  /* subv2sf3 */
    case 22:  /* subdf3 */
    case 21:  /* subsf3 */
    case 14:  /* *adddi3_mips16 */
    case 13:  /* *addsi3_mips16 */
    case 12:  /* *adddi3 */
    case 11:  /* *addsi3 */
    case 10:  /* addv2sf3 */
    case 9:  /* adddf3 */
    case 8:  /* addsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7:  /* *conditional_trapdi */
    case 6:  /* *conditional_trapsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 625:  /* *tls_get_tp_di_split */
    case 624:  /* *tls_get_tp_si_split */
    case 604:  /* hazard_nop */
    case 603:  /* nop */
    case 586:  /* update_got_version */
    case 585:  /* set_got_version */
    case 574:  /* mips_ehb */
    case 573:  /* mips_di */
    case 572:  /* mips_deret */
    case 571:  /* mips_eret */
    case 568:  /* *simple_return */
    case 567:  /* *return */
    case 564:  /* blockage */
    case 408:  /* r10k_cache_barrier */
    case 406:  /* clear_hazard_di */
    case 405:  /* clear_hazard_si */
    case 401:  /* sync */
    case 390:  /* loadgp_blockage */
    case 5:  /* trap */
    case 4:  /* ls2_falu2_turn_enabled_insn */
    case 3:  /* ls2_falu1_turn_enabled_insn */
    case 2:  /* ls2_alu2_turn_enabled_insn */
    case 1:  /* ls2_alu1_turn_enabled_insn */
      break;

    }
}
