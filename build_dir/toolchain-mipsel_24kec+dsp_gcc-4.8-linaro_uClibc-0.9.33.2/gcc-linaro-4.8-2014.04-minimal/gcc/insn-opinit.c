/* Generated automatically by the program `genopinit'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expr.h"
#include "optabs.h"

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x010708, CODE_FOR_extendqihi2 },
  { 0x010709, CODE_FOR_extendqisi2 },
  { 0x01070a, CODE_FOR_extendqidi2 },
  { 0x010809, CODE_FOR_extendhisi2 },
  { 0x01080a, CODE_FOR_extendhidi2 },
  { 0x01090a, CODE_FOR_extendsidi2 },
  { 0x011e1f, CODE_FOR_extendsfdf2 },
  { 0x020a07, CODE_FOR_truncdiqi2 },
  { 0x020a08, CODE_FOR_truncdihi2 },
  { 0x020a09, CODE_FOR_truncdisi2 },
  { 0x021f1e, CODE_FOR_truncdfsf2 },
  { 0x030708, CODE_FOR_zero_extendqihi2 },
  { 0x030709, CODE_FOR_zero_extendqisi2 },
  { 0x03070a, CODE_FOR_zero_extendqidi2 },
  { 0x030809, CODE_FOR_zero_extendhisi2 },
  { 0x03080a, CODE_FOR_zero_extendhidi2 },
  { 0x03090a, CODE_FOR_zero_extendsidi2 },
  { 0x06091e, CODE_FOR_floatsisf2 },
  { 0x06091f, CODE_FOR_floatsidf2 },
  { 0x060a1e, CODE_FOR_floatdisf2 },
  { 0x060a1f, CODE_FOR_floatdidf2 },
  { 0x101e09, CODE_FOR_fix_truncsfsi2 },
  { 0x101e0a, CODE_FOR_fix_truncsfdi2 },
  { 0x101f09, CODE_FOR_fix_truncdfsi2 },
  { 0x101f0a, CODE_FOR_fix_truncdfdi2 },
  { 0x111e09, CODE_FOR_fixuns_truncsfsi2 },
  { 0x111e0a, CODE_FOR_fixuns_truncsfdi2 },
  { 0x111f09, CODE_FOR_fixuns_truncdfsi2 },
  { 0x111f0a, CODE_FOR_fixuns_truncdfdi2 },
  { 0x12090a, CODE_FOR_mulsidi3 },
  { 0x120a0b, CODE_FOR_mulditi3 },
  { 0x13090a, CODE_FOR_umulsidi3 },
  { 0x130a0b, CODE_FOR_umulditi3 },
  { 0x15090a, CODE_FOR_maddsidi4 },
  { 0x16090a, CODE_FOR_umaddsidi4 },
  { 0x170e0f, CODE_FOR_ssmaddsqdq4 },
  { 0x19090a, CODE_FOR_msubsidi4 },
  { 0x1a090a, CODE_FOR_umsubsidi4 },
  { 0x1b0e0f, CODE_FOR_ssmsubsqdq4 },
  { 0x1f3a3a, CODE_FOR_vcondv2sfv2sf },
  { 0x210009, CODE_FOR_addsi3 },
  { 0x21000a, CODE_FOR_adddi3 },
  { 0x21000c, CODE_FOR_addqq3 },
  { 0x21000d, CODE_FOR_addhq3 },
  { 0x21000e, CODE_FOR_addsq3 },
  { 0x21000f, CODE_FOR_adddq3 },
  { 0x210011, CODE_FOR_adduqq3 },
  { 0x210012, CODE_FOR_adduhq3 },
  { 0x210013, CODE_FOR_addusq3 },
  { 0x210014, CODE_FOR_addudq3 },
  { 0x210016, CODE_FOR_addha3 },
  { 0x210017, CODE_FOR_addsa3 },
  { 0x210018, CODE_FOR_addda3 },
  { 0x21001a, CODE_FOR_adduha3 },
  { 0x21001b, CODE_FOR_addusa3 },
  { 0x21001c, CODE_FOR_adduda3 },
  { 0x21001e, CODE_FOR_addsf3 },
  { 0x21001f, CODE_FOR_adddf3 },
  { 0x21002c, CODE_FOR_addv4qi3 },
  { 0x21002d, CODE_FOR_addv2hi3 },
  { 0x21002e, CODE_FOR_addv8qi3 },
  { 0x21002f, CODE_FOR_addv4hi3 },
  { 0x210030, CODE_FOR_addv2si3 },
  { 0x21003a, CODE_FOR_addv2sf3 },
  { 0x23000d, CODE_FOR_ssaddhq3 },
  { 0x23000e, CODE_FOR_ssaddsq3 },
  { 0x230016, CODE_FOR_ssaddha3 },
  { 0x230017, CODE_FOR_ssaddsa3 },
  { 0x230035, CODE_FOR_ssaddv2hq3 },
  { 0x230038, CODE_FOR_ssaddv2ha3 },
  { 0x240011, CODE_FOR_usadduqq3 },
  { 0x240012, CODE_FOR_usadduhq3 },
  { 0x24001a, CODE_FOR_usadduha3 },
  { 0x240036, CODE_FOR_usaddv4uqq3 },
  { 0x240037, CODE_FOR_usaddv2uhq3 },
  { 0x240039, CODE_FOR_usaddv2uha3 },
  { 0x250009, CODE_FOR_subsi3 },
  { 0x25000a, CODE_FOR_subdi3 },
  { 0x25000c, CODE_FOR_subqq3 },
  { 0x25000d, CODE_FOR_subhq3 },
  { 0x25000e, CODE_FOR_subsq3 },
  { 0x25000f, CODE_FOR_subdq3 },
  { 0x250011, CODE_FOR_subuqq3 },
  { 0x250012, CODE_FOR_subuhq3 },
  { 0x250013, CODE_FOR_subusq3 },
  { 0x250014, CODE_FOR_subudq3 },
  { 0x250016, CODE_FOR_subha3 },
  { 0x250017, CODE_FOR_subsa3 },
  { 0x250018, CODE_FOR_subda3 },
  { 0x25001a, CODE_FOR_subuha3 },
  { 0x25001b, CODE_FOR_subusa3 },
  { 0x25001c, CODE_FOR_subuda3 },
  { 0x25001e, CODE_FOR_subsf3 },
  { 0x25001f, CODE_FOR_subdf3 },
  { 0x25002c, CODE_FOR_subv4qi3 },
  { 0x25002d, CODE_FOR_subv2hi3 },
  { 0x25002e, CODE_FOR_subv8qi3 },
  { 0x25002f, CODE_FOR_subv4hi3 },
  { 0x250030, CODE_FOR_subv2si3 },
  { 0x25003a, CODE_FOR_subv2sf3 },
  { 0x27000d, CODE_FOR_sssubhq3 },
  { 0x27000e, CODE_FOR_sssubsq3 },
  { 0x270016, CODE_FOR_sssubha3 },
  { 0x270017, CODE_FOR_sssubsa3 },
  { 0x270035, CODE_FOR_sssubv2hq3 },
  { 0x270038, CODE_FOR_sssubv2ha3 },
  { 0x280011, CODE_FOR_ussubuqq3 },
  { 0x280012, CODE_FOR_ussubuhq3 },
  { 0x28001a, CODE_FOR_ussubuha3 },
  { 0x280036, CODE_FOR_ussubv4uqq3 },
  { 0x280037, CODE_FOR_ussubv2uhq3 },
  { 0x280039, CODE_FOR_ussubv2uha3 },
  { 0x290009, CODE_FOR_mulsi3 },
  { 0x29000a, CODE_FOR_muldi3 },
  { 0x29001e, CODE_FOR_mulsf3 },
  { 0x29001f, CODE_FOR_muldf3 },
  { 0x29002d, CODE_FOR_mulv2hi3 },
  { 0x29002f, CODE_FOR_mulv4hi3 },
  { 0x29003a, CODE_FOR_mulv2sf3 },
  { 0x2b000d, CODE_FOR_ssmulhq3 },
  { 0x2b000e, CODE_FOR_ssmulsq3 },
  { 0x2b0035, CODE_FOR_ssmulv2hq3 },
  { 0x2d0009, CODE_FOR_divsi3 },
  { 0x2d000a, CODE_FOR_divdi3 },
  { 0x2d001e, CODE_FOR_divsf3 },
  { 0x2d001f, CODE_FOR_divdf3 },
  { 0x2d003a, CODE_FOR_divv2sf3 },
  { 0x300009, CODE_FOR_udivsi3 },
  { 0x30000a, CODE_FOR_udivdi3 },
  { 0x320009, CODE_FOR_divmodsi4 },
  { 0x32000a, CODE_FOR_divmoddi4 },
  { 0x330009, CODE_FOR_udivmodsi4 },
  { 0x33000a, CODE_FOR_udivmoddi4 },
  { 0x340009, CODE_FOR_modsi3 },
  { 0x34000a, CODE_FOR_moddi3 },
  { 0x350009, CODE_FOR_umodsi3 },
  { 0x35000a, CODE_FOR_umoddi3 },
  { 0x370009, CODE_FOR_andsi3 },
  { 0x37000a, CODE_FOR_anddi3 },
  { 0x37002e, CODE_FOR_andv8qi3 },
  { 0x37002f, CODE_FOR_andv4hi3 },
  { 0x370030, CODE_FOR_andv2si3 },
  { 0x380009, CODE_FOR_iorsi3 },
  { 0x38000a, CODE_FOR_iordi3 },
  { 0x38002e, CODE_FOR_iorv8qi3 },
  { 0x38002f, CODE_FOR_iorv4hi3 },
  { 0x380030, CODE_FOR_iorv2si3 },
  { 0x390009, CODE_FOR_xorsi3 },
  { 0x39000a, CODE_FOR_xordi3 },
  { 0x39002e, CODE_FOR_xorv8qi3 },
  { 0x39002f, CODE_FOR_xorv4hi3 },
  { 0x390030, CODE_FOR_xorv2si3 },
  { 0x3a0009, CODE_FOR_ashlsi3 },
  { 0x3a000a, CODE_FOR_ashldi3 },
  { 0x3a002f, CODE_FOR_ashlv4hi3 },
  { 0x3a0030, CODE_FOR_ashlv2si3 },
  { 0x3d0009, CODE_FOR_ashrsi3 },
  { 0x3d000a, CODE_FOR_ashrdi3 },
  { 0x3d002f, CODE_FOR_ashrv4hi3 },
  { 0x3d0030, CODE_FOR_ashrv2si3 },
  { 0x3e0009, CODE_FOR_lshrsi3 },
  { 0x3e000a, CODE_FOR_lshrdi3 },
  { 0x3e002f, CODE_FOR_lshrv4hi3 },
  { 0x3e0030, CODE_FOR_lshrv2si3 },
  { 0x400009, CODE_FOR_rotrsi3 },
  { 0x40000a, CODE_FOR_rotrdi3 },
  { 0x46002e, CODE_FOR_sminv8qi3 },
  { 0x46002f, CODE_FOR_sminv4hi3 },
  { 0x460030, CODE_FOR_sminv2si3 },
  { 0x46003a, CODE_FOR_sminv2sf3 },
  { 0x47002e, CODE_FOR_smaxv8qi3 },
  { 0x47002f, CODE_FOR_smaxv4hi3 },
  { 0x470030, CODE_FOR_smaxv2si3 },
  { 0x47003a, CODE_FOR_smaxv2sf3 },
  { 0x48002e, CODE_FOR_uminv8qi3 },
  { 0x49002e, CODE_FOR_umaxv8qi3 },
  { 0x4a0009, CODE_FOR_negsi2 },
  { 0x4a000a, CODE_FOR_negdi2 },
  { 0x4a001e, CODE_FOR_negsf2 },
  { 0x4a001f, CODE_FOR_negdf2 },
  { 0x4a003a, CODE_FOR_negv2sf2 },
  { 0x4e001e, CODE_FOR_abssf2 },
  { 0x4e001f, CODE_FOR_absdf2 },
  { 0x4e003a, CODE_FOR_absv2sf2 },
  { 0x500009, CODE_FOR_one_cmplsi2 },
  { 0x50000a, CODE_FOR_one_cmpldi2 },
  { 0x50002e, CODE_FOR_one_cmplv8qi2 },
  { 0x50002f, CODE_FOR_one_cmplv4hi2 },
  { 0x500030, CODE_FOR_one_cmplv2si2 },
  { 0x510008, CODE_FOR_bswaphi2 },
  { 0x510009, CODE_FOR_bswapsi2 },
  { 0x51000a, CODE_FOR_bswapdi2 },
  { 0x530009, CODE_FOR_clzsi2 },
  { 0x53000a, CODE_FOR_clzdi2 },
  { 0x560009, CODE_FOR_popcountsi2 },
  { 0x56000a, CODE_FOR_popcountdi2 },
  { 0x62001e, CODE_FOR_sqrtsf2 },
  { 0x62001f, CODE_FOR_sqrtdf2 },
  { 0x62003a, CODE_FOR_sqrtv2sf2 },
  { 0x630007, CODE_FOR_sync_old_addqi },
  { 0x630008, CODE_FOR_sync_old_addhi },
  { 0x630009, CODE_FOR_sync_old_addsi },
  { 0x63000a, CODE_FOR_sync_old_adddi },
  { 0x640007, CODE_FOR_sync_old_subqi },
  { 0x640008, CODE_FOR_sync_old_subhi },
  { 0x640009, CODE_FOR_sync_old_subsi },
  { 0x64000a, CODE_FOR_sync_old_subdi },
  { 0x650007, CODE_FOR_sync_old_iorqi },
  { 0x650008, CODE_FOR_sync_old_iorhi },
  { 0x650009, CODE_FOR_sync_old_iorsi },
  { 0x65000a, CODE_FOR_sync_old_iordi },
  { 0x660007, CODE_FOR_sync_old_andqi },
  { 0x660008, CODE_FOR_sync_old_andhi },
  { 0x660009, CODE_FOR_sync_old_andsi },
  { 0x66000a, CODE_FOR_sync_old_anddi },
  { 0x670007, CODE_FOR_sync_old_xorqi },
  { 0x670008, CODE_FOR_sync_old_xorhi },
  { 0x670009, CODE_FOR_sync_old_xorsi },
  { 0x67000a, CODE_FOR_sync_old_xordi },
  { 0x680007, CODE_FOR_sync_old_nandqi },
  { 0x680008, CODE_FOR_sync_old_nandhi },
  { 0x680009, CODE_FOR_sync_old_nandsi },
  { 0x68000a, CODE_FOR_sync_old_nanddi },
  { 0x690007, CODE_FOR_sync_new_addqi },
  { 0x690008, CODE_FOR_sync_new_addhi },
  { 0x690009, CODE_FOR_sync_new_addsi },
  { 0x69000a, CODE_FOR_sync_new_adddi },
  { 0x6a0007, CODE_FOR_sync_new_subqi },
  { 0x6a0008, CODE_FOR_sync_new_subhi },
  { 0x6a0009, CODE_FOR_sync_new_subsi },
  { 0x6a000a, CODE_FOR_sync_new_subdi },
  { 0x6b0007, CODE_FOR_sync_new_iorqi },
  { 0x6b0008, CODE_FOR_sync_new_iorhi },
  { 0x6b0009, CODE_FOR_sync_new_iorsi },
  { 0x6b000a, CODE_FOR_sync_new_iordi },
  { 0x6c0007, CODE_FOR_sync_new_andqi },
  { 0x6c0008, CODE_FOR_sync_new_andhi },
  { 0x6c0009, CODE_FOR_sync_new_andsi },
  { 0x6c000a, CODE_FOR_sync_new_anddi },
  { 0x6d0007, CODE_FOR_sync_new_xorqi },
  { 0x6d0008, CODE_FOR_sync_new_xorhi },
  { 0x6d0009, CODE_FOR_sync_new_xorsi },
  { 0x6d000a, CODE_FOR_sync_new_xordi },
  { 0x6e0007, CODE_FOR_sync_new_nandqi },
  { 0x6e0008, CODE_FOR_sync_new_nandhi },
  { 0x6e0009, CODE_FOR_sync_new_nandsi },
  { 0x6e000a, CODE_FOR_sync_new_nanddi },
  { 0x6f0007, CODE_FOR_sync_compare_and_swapqi },
  { 0x6f0008, CODE_FOR_sync_compare_and_swaphi },
  { 0x6f0009, CODE_FOR_sync_compare_and_swapsi },
  { 0x6f000a, CODE_FOR_sync_compare_and_swapdi },
  { 0x700007, CODE_FOR_sync_lock_test_and_setqi },
  { 0x700008, CODE_FOR_sync_lock_test_and_sethi },
  { 0x700009, CODE_FOR_sync_lock_test_and_setsi },
  { 0x70000a, CODE_FOR_sync_lock_test_and_setdi },
  { 0x710007, CODE_FOR_movqi },
  { 0x710008, CODE_FOR_movhi },
  { 0x710009, CODE_FOR_movsi },
  { 0x71000a, CODE_FOR_movdi },
  { 0x71000b, CODE_FOR_movti },
  { 0x71001e, CODE_FOR_movsf },
  { 0x71001f, CODE_FOR_movdf },
  { 0x710020, CODE_FOR_movtf },
  { 0x71002c, CODE_FOR_movv4qi },
  { 0x71002d, CODE_FOR_movv2hi },
  { 0x71002e, CODE_FOR_movv8qi },
  { 0x71002f, CODE_FOR_movv4hi },
  { 0x710030, CODE_FOR_movv2si },
  { 0x710034, CODE_FOR_movv4qq },
  { 0x710035, CODE_FOR_movv2hq },
  { 0x710036, CODE_FOR_movv4uqq },
  { 0x710037, CODE_FOR_movv2uhq },
  { 0x710038, CODE_FOR_movv2ha },
  { 0x710039, CODE_FOR_movv2uha },
  { 0x71003a, CODE_FOR_movv2sf },
  { 0x750009, CODE_FOR_insvsi },
  { 0x75000a, CODE_FOR_insvdi },
  { 0x760009, CODE_FOR_extvsi },
  { 0x76000a, CODE_FOR_extvdi },
  { 0x770009, CODE_FOR_extzvsi },
  { 0x77000a, CODE_FOR_extzvdi },
  { 0x780009, CODE_FOR_insvmisalignsi },
  { 0x78000a, CODE_FOR_insvmisaligndi },
  { 0x790009, CODE_FOR_extvmisalignsi },
  { 0x79000a, CODE_FOR_extvmisaligndi },
  { 0x7a0009, CODE_FOR_extzvmisalignsi },
  { 0x7a000a, CODE_FOR_extzvmisaligndi },
  { 0x7e0009, CODE_FOR_cbranchsi4 },
  { 0x7e000a, CODE_FOR_cbranchdi4 },
  { 0x7e001e, CODE_FOR_cbranchsf4 },
  { 0x7e001f, CODE_FOR_cbranchdf4 },
  { 0x800009, CODE_FOR_movsicc },
  { 0x80000a, CODE_FOR_movdicc },
  { 0x80001e, CODE_FOR_movsfcc },
  { 0x80001f, CODE_FOR_movdfcc },
  { 0x80003a, CODE_FOR_movv2sfcc },
  { 0x820009, CODE_FOR_cstoresi4 },
  { 0x82000a, CODE_FOR_cstoredi4 },
  { 0x830009, CODE_FOR_ctrapsi4 },
  { 0x83000a, CODE_FOR_ctrapdi4 },
  { 0x840009, CODE_FOR_smulsi3_highpart },
  { 0x84000a, CODE_FOR_smuldi3_highpart },
  { 0x84002f, CODE_FOR_smulv4hi3_highpart },
  { 0x850009, CODE_FOR_umulsi3_highpart },
  { 0x85000a, CODE_FOR_umuldi3_highpart },
  { 0x85002f, CODE_FOR_umulv4hi3_highpart },
  { 0x890009, CODE_FOR_movmemsi },
  { 0xb1002e, CODE_FOR_reduc_smax_v8qi },
  { 0xb1002f, CODE_FOR_reduc_smax_v4hi },
  { 0xb10030, CODE_FOR_reduc_smax_v2si },
  { 0xb1003a, CODE_FOR_reduc_smax_v2sf },
  { 0xb2002e, CODE_FOR_reduc_smin_v8qi },
  { 0xb2002f, CODE_FOR_reduc_smin_v4hi },
  { 0xb20030, CODE_FOR_reduc_smin_v2si },
  { 0xb2003a, CODE_FOR_reduc_smin_v2sf },
  { 0xb3002e, CODE_FOR_reduc_splus_v8qi },
  { 0xb3002f, CODE_FOR_reduc_splus_v4hi },
  { 0xb30030, CODE_FOR_reduc_splus_v2si },
  { 0xb3003a, CODE_FOR_reduc_splus_v2sf },
  { 0xb4002e, CODE_FOR_reduc_umax_v8qi },
  { 0xb5002e, CODE_FOR_reduc_umin_v8qi },
  { 0xb6002e, CODE_FOR_reduc_uplus_v8qi },
  { 0xb6002f, CODE_FOR_reduc_uplus_v4hi },
  { 0xb60030, CODE_FOR_reduc_uplus_v2si },
  { 0xb7002f, CODE_FOR_sdot_prodv4hi },
  { 0xbb003a, CODE_FOR_vec_extractv2sf },
  { 0xbc002e, CODE_FOR_vec_initv8qi },
  { 0xbc002f, CODE_FOR_vec_initv4hi },
  { 0xbc0030, CODE_FOR_vec_initv2si },
  { 0xbc003a, CODE_FOR_vec_initv2sf },
  { 0xbe002f, CODE_FOR_vec_pack_ssat_v4hi },
  { 0xbe0030, CODE_FOR_vec_pack_ssat_v2si },
  { 0xc1002f, CODE_FOR_vec_pack_usat_v4hi },
  { 0xc2002e, CODE_FOR_vec_perm_constv8qi },
  { 0xc2002f, CODE_FOR_vec_perm_constv4hi },
  { 0xc20030, CODE_FOR_vec_perm_constv2si },
  { 0xc2003a, CODE_FOR_vec_perm_constv2sf },
  { 0xc5002f, CODE_FOR_vec_setv4hi },
  { 0xc5003a, CODE_FOR_vec_setv2sf },
  { 0xc6000a, CODE_FOR_vec_shl_di },
  { 0xc6002e, CODE_FOR_vec_shl_v8qi },
  { 0xc6002f, CODE_FOR_vec_shl_v4hi },
  { 0xc60030, CODE_FOR_vec_shl_v2si },
  { 0xc7000a, CODE_FOR_vec_shr_di },
  { 0xc7002e, CODE_FOR_vec_shr_v8qi },
  { 0xc7002f, CODE_FOR_vec_shr_v4hi },
  { 0xc70030, CODE_FOR_vec_shr_v2si },
  { 0xca002e, CODE_FOR_vec_unpacks_hi_v8qi },
  { 0xca002f, CODE_FOR_vec_unpacks_hi_v4hi },
  { 0xcb002e, CODE_FOR_vec_unpacks_lo_v8qi },
  { 0xcb002f, CODE_FOR_vec_unpacks_lo_v4hi },
  { 0xce002e, CODE_FOR_vec_unpacku_hi_v8qi },
  { 0xce002f, CODE_FOR_vec_unpacku_hi_v4hi },
  { 0xcf002e, CODE_FOR_vec_unpacku_lo_v8qi },
  { 0xcf002f, CODE_FOR_vec_unpacku_lo_v4hi },
  { 0xdc0007, CODE_FOR_sync_addqi },
  { 0xdc0008, CODE_FOR_sync_addhi },
  { 0xdc0009, CODE_FOR_sync_addsi },
  { 0xdc000a, CODE_FOR_sync_adddi },
  { 0xdd0007, CODE_FOR_sync_andqi },
  { 0xdd0008, CODE_FOR_sync_andhi },
  { 0xdd0009, CODE_FOR_sync_andsi },
  { 0xdd000a, CODE_FOR_sync_anddi },
  { 0xde0007, CODE_FOR_sync_iorqi },
  { 0xde0008, CODE_FOR_sync_iorhi },
  { 0xde0009, CODE_FOR_sync_iorsi },
  { 0xde000a, CODE_FOR_sync_iordi },
  { 0xe00007, CODE_FOR_sync_nandqi },
  { 0xe00008, CODE_FOR_sync_nandhi },
  { 0xe00009, CODE_FOR_sync_nandsi },
  { 0xe0000a, CODE_FOR_sync_nanddi },
  { 0xe10007, CODE_FOR_sync_subqi },
  { 0xe10008, CODE_FOR_sync_subhi },
  { 0xe10009, CODE_FOR_sync_subsi },
  { 0xe1000a, CODE_FOR_sync_subdi },
  { 0xe20007, CODE_FOR_sync_xorqi },
  { 0xe20008, CODE_FOR_sync_xorhi },
  { 0xe20009, CODE_FOR_sync_xorsi },
  { 0xe2000a, CODE_FOR_sync_xordi },
  { 0xe70009, CODE_FOR_atomic_compare_and_swapsi },
  { 0xe7000a, CODE_FOR_atomic_compare_and_swapdi },
  { 0xe80009, CODE_FOR_atomic_exchangesi },
  { 0xe8000a, CODE_FOR_atomic_exchangedi },
  { 0xe90009, CODE_FOR_atomic_fetch_addsi },
  { 0xe9000a, CODE_FOR_atomic_fetch_adddi },
  { 0xf90009, CODE_FOR_get_thread_pointersi },
  { 0xf9000a, CODE_FOR_get_thread_pointerdi },
};

void
init_all_optabs (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendqidi2;
  ena[3] = HAVE_extendhisi2;
  ena[4] = HAVE_extendhidi2;
  ena[5] = HAVE_extendsidi2;
  ena[6] = HAVE_extendsfdf2;
  ena[7] = HAVE_truncdiqi2;
  ena[8] = HAVE_truncdihi2;
  ena[9] = HAVE_truncdisi2;
  ena[10] = HAVE_truncdfsf2;
  ena[11] = HAVE_zero_extendqihi2;
  ena[12] = HAVE_zero_extendqisi2;
  ena[13] = HAVE_zero_extendqidi2;
  ena[14] = HAVE_zero_extendhisi2;
  ena[15] = HAVE_zero_extendhidi2;
  ena[16] = HAVE_zero_extendsidi2;
  ena[17] = HAVE_floatsisf2;
  ena[18] = HAVE_floatsidf2;
  ena[19] = HAVE_floatdisf2;
  ena[20] = HAVE_floatdidf2;
  ena[21] = HAVE_fix_truncsfsi2;
  ena[22] = HAVE_fix_truncsfdi2;
  ena[23] = HAVE_fix_truncdfsi2;
  ena[24] = HAVE_fix_truncdfdi2;
  ena[25] = HAVE_fixuns_truncsfsi2;
  ena[26] = HAVE_fixuns_truncsfdi2;
  ena[27] = HAVE_fixuns_truncdfsi2;
  ena[28] = HAVE_fixuns_truncdfdi2;
  ena[29] = HAVE_mulsidi3;
  ena[30] = HAVE_mulditi3;
  ena[31] = HAVE_umulsidi3;
  ena[32] = HAVE_umulditi3;
  ena[33] = HAVE_maddsidi4;
  ena[34] = HAVE_umaddsidi4;
  ena[35] = HAVE_ssmaddsqdq4;
  ena[36] = HAVE_msubsidi4;
  ena[37] = HAVE_umsubsidi4;
  ena[38] = HAVE_ssmsubsqdq4;
  ena[39] = HAVE_vcondv2sfv2sf;
  ena[40] = HAVE_addsi3;
  ena[41] = HAVE_adddi3;
  ena[42] = HAVE_addqq3;
  ena[43] = HAVE_addhq3;
  ena[44] = HAVE_addsq3;
  ena[45] = HAVE_adddq3;
  ena[46] = HAVE_adduqq3;
  ena[47] = HAVE_adduhq3;
  ena[48] = HAVE_addusq3;
  ena[49] = HAVE_addudq3;
  ena[50] = HAVE_addha3;
  ena[51] = HAVE_addsa3;
  ena[52] = HAVE_addda3;
  ena[53] = HAVE_adduha3;
  ena[54] = HAVE_addusa3;
  ena[55] = HAVE_adduda3;
  ena[56] = HAVE_addsf3;
  ena[57] = HAVE_adddf3;
  ena[58] = HAVE_addv4qi3;
  ena[59] = HAVE_addv2hi3;
  ena[60] = HAVE_addv8qi3;
  ena[61] = HAVE_addv4hi3;
  ena[62] = HAVE_addv2si3;
  ena[63] = HAVE_addv2sf3;
  ena[64] = HAVE_ssaddhq3;
  ena[65] = HAVE_ssaddsq3;
  ena[66] = HAVE_ssaddha3;
  ena[67] = HAVE_ssaddsa3;
  ena[68] = HAVE_ssaddv2hq3;
  ena[69] = HAVE_ssaddv2ha3;
  ena[70] = HAVE_usadduqq3;
  ena[71] = HAVE_usadduhq3;
  ena[72] = HAVE_usadduha3;
  ena[73] = HAVE_usaddv4uqq3;
  ena[74] = HAVE_usaddv2uhq3;
  ena[75] = HAVE_usaddv2uha3;
  ena[76] = HAVE_subsi3;
  ena[77] = HAVE_subdi3;
  ena[78] = HAVE_subqq3;
  ena[79] = HAVE_subhq3;
  ena[80] = HAVE_subsq3;
  ena[81] = HAVE_subdq3;
  ena[82] = HAVE_subuqq3;
  ena[83] = HAVE_subuhq3;
  ena[84] = HAVE_subusq3;
  ena[85] = HAVE_subudq3;
  ena[86] = HAVE_subha3;
  ena[87] = HAVE_subsa3;
  ena[88] = HAVE_subda3;
  ena[89] = HAVE_subuha3;
  ena[90] = HAVE_subusa3;
  ena[91] = HAVE_subuda3;
  ena[92] = HAVE_subsf3;
  ena[93] = HAVE_subdf3;
  ena[94] = HAVE_subv4qi3;
  ena[95] = HAVE_subv2hi3;
  ena[96] = HAVE_subv8qi3;
  ena[97] = HAVE_subv4hi3;
  ena[98] = HAVE_subv2si3;
  ena[99] = HAVE_subv2sf3;
  ena[100] = HAVE_sssubhq3;
  ena[101] = HAVE_sssubsq3;
  ena[102] = HAVE_sssubha3;
  ena[103] = HAVE_sssubsa3;
  ena[104] = HAVE_sssubv2hq3;
  ena[105] = HAVE_sssubv2ha3;
  ena[106] = HAVE_ussubuqq3;
  ena[107] = HAVE_ussubuhq3;
  ena[108] = HAVE_ussubuha3;
  ena[109] = HAVE_ussubv4uqq3;
  ena[110] = HAVE_ussubv2uhq3;
  ena[111] = HAVE_ussubv2uha3;
  ena[112] = HAVE_mulsi3;
  ena[113] = HAVE_muldi3;
  ena[114] = HAVE_mulsf3;
  ena[115] = HAVE_muldf3;
  ena[116] = HAVE_mulv2hi3;
  ena[117] = HAVE_mulv4hi3;
  ena[118] = HAVE_mulv2sf3;
  ena[119] = HAVE_ssmulhq3;
  ena[120] = HAVE_ssmulsq3;
  ena[121] = HAVE_ssmulv2hq3;
  ena[122] = HAVE_divsi3;
  ena[123] = HAVE_divdi3;
  ena[124] = HAVE_divsf3;
  ena[125] = HAVE_divdf3;
  ena[126] = HAVE_divv2sf3;
  ena[127] = HAVE_udivsi3;
  ena[128] = HAVE_udivdi3;
  ena[129] = HAVE_divmodsi4;
  ena[130] = HAVE_divmoddi4;
  ena[131] = HAVE_udivmodsi4;
  ena[132] = HAVE_udivmoddi4;
  ena[133] = HAVE_modsi3;
  ena[134] = HAVE_moddi3;
  ena[135] = HAVE_umodsi3;
  ena[136] = HAVE_umoddi3;
  ena[137] = HAVE_andsi3;
  ena[138] = HAVE_anddi3;
  ena[139] = HAVE_andv8qi3;
  ena[140] = HAVE_andv4hi3;
  ena[141] = HAVE_andv2si3;
  ena[142] = HAVE_iorsi3;
  ena[143] = HAVE_iordi3;
  ena[144] = HAVE_iorv8qi3;
  ena[145] = HAVE_iorv4hi3;
  ena[146] = HAVE_iorv2si3;
  ena[147] = HAVE_xorsi3;
  ena[148] = HAVE_xordi3;
  ena[149] = HAVE_xorv8qi3;
  ena[150] = HAVE_xorv4hi3;
  ena[151] = HAVE_xorv2si3;
  ena[152] = HAVE_ashlsi3;
  ena[153] = HAVE_ashldi3;
  ena[154] = HAVE_ashlv4hi3;
  ena[155] = HAVE_ashlv2si3;
  ena[156] = HAVE_ashrsi3;
  ena[157] = HAVE_ashrdi3;
  ena[158] = HAVE_ashrv4hi3;
  ena[159] = HAVE_ashrv2si3;
  ena[160] = HAVE_lshrsi3;
  ena[161] = HAVE_lshrdi3;
  ena[162] = HAVE_lshrv4hi3;
  ena[163] = HAVE_lshrv2si3;
  ena[164] = HAVE_rotrsi3;
  ena[165] = HAVE_rotrdi3;
  ena[166] = HAVE_sminv8qi3;
  ena[167] = HAVE_sminv4hi3;
  ena[168] = HAVE_sminv2si3;
  ena[169] = HAVE_sminv2sf3;
  ena[170] = HAVE_smaxv8qi3;
  ena[171] = HAVE_smaxv4hi3;
  ena[172] = HAVE_smaxv2si3;
  ena[173] = HAVE_smaxv2sf3;
  ena[174] = HAVE_uminv8qi3;
  ena[175] = HAVE_umaxv8qi3;
  ena[176] = HAVE_negsi2;
  ena[177] = HAVE_negdi2;
  ena[178] = HAVE_negsf2;
  ena[179] = HAVE_negdf2;
  ena[180] = HAVE_negv2sf2;
  ena[181] = HAVE_abssf2;
  ena[182] = HAVE_absdf2;
  ena[183] = HAVE_absv2sf2;
  ena[184] = HAVE_one_cmplsi2;
  ena[185] = HAVE_one_cmpldi2;
  ena[186] = HAVE_one_cmplv8qi2;
  ena[187] = HAVE_one_cmplv4hi2;
  ena[188] = HAVE_one_cmplv2si2;
  ena[189] = HAVE_bswaphi2;
  ena[190] = HAVE_bswapsi2;
  ena[191] = HAVE_bswapdi2;
  ena[192] = HAVE_clzsi2;
  ena[193] = HAVE_clzdi2;
  ena[194] = HAVE_popcountsi2;
  ena[195] = HAVE_popcountdi2;
  ena[196] = HAVE_sqrtsf2;
  ena[197] = HAVE_sqrtdf2;
  ena[198] = HAVE_sqrtv2sf2;
  ena[199] = HAVE_sync_old_addqi;
  ena[200] = HAVE_sync_old_addhi;
  ena[201] = HAVE_sync_old_addsi;
  ena[202] = HAVE_sync_old_adddi;
  ena[203] = HAVE_sync_old_subqi;
  ena[204] = HAVE_sync_old_subhi;
  ena[205] = HAVE_sync_old_subsi;
  ena[206] = HAVE_sync_old_subdi;
  ena[207] = HAVE_sync_old_iorqi;
  ena[208] = HAVE_sync_old_iorhi;
  ena[209] = HAVE_sync_old_iorsi;
  ena[210] = HAVE_sync_old_iordi;
  ena[211] = HAVE_sync_old_andqi;
  ena[212] = HAVE_sync_old_andhi;
  ena[213] = HAVE_sync_old_andsi;
  ena[214] = HAVE_sync_old_anddi;
  ena[215] = HAVE_sync_old_xorqi;
  ena[216] = HAVE_sync_old_xorhi;
  ena[217] = HAVE_sync_old_xorsi;
  ena[218] = HAVE_sync_old_xordi;
  ena[219] = HAVE_sync_old_nandqi;
  ena[220] = HAVE_sync_old_nandhi;
  ena[221] = HAVE_sync_old_nandsi;
  ena[222] = HAVE_sync_old_nanddi;
  ena[223] = HAVE_sync_new_addqi;
  ena[224] = HAVE_sync_new_addhi;
  ena[225] = HAVE_sync_new_addsi;
  ena[226] = HAVE_sync_new_adddi;
  ena[227] = HAVE_sync_new_subqi;
  ena[228] = HAVE_sync_new_subhi;
  ena[229] = HAVE_sync_new_subsi;
  ena[230] = HAVE_sync_new_subdi;
  ena[231] = HAVE_sync_new_iorqi;
  ena[232] = HAVE_sync_new_iorhi;
  ena[233] = HAVE_sync_new_iorsi;
  ena[234] = HAVE_sync_new_iordi;
  ena[235] = HAVE_sync_new_andqi;
  ena[236] = HAVE_sync_new_andhi;
  ena[237] = HAVE_sync_new_andsi;
  ena[238] = HAVE_sync_new_anddi;
  ena[239] = HAVE_sync_new_xorqi;
  ena[240] = HAVE_sync_new_xorhi;
  ena[241] = HAVE_sync_new_xorsi;
  ena[242] = HAVE_sync_new_xordi;
  ena[243] = HAVE_sync_new_nandqi;
  ena[244] = HAVE_sync_new_nandhi;
  ena[245] = HAVE_sync_new_nandsi;
  ena[246] = HAVE_sync_new_nanddi;
  ena[247] = HAVE_sync_compare_and_swapqi;
  ena[248] = HAVE_sync_compare_and_swaphi;
  ena[249] = HAVE_sync_compare_and_swapsi;
  ena[250] = HAVE_sync_compare_and_swapdi;
  ena[251] = HAVE_sync_lock_test_and_setqi;
  ena[252] = HAVE_sync_lock_test_and_sethi;
  ena[253] = HAVE_sync_lock_test_and_setsi;
  ena[254] = HAVE_sync_lock_test_and_setdi;
  ena[255] = HAVE_movqi;
  ena[256] = HAVE_movhi;
  ena[257] = HAVE_movsi;
  ena[258] = HAVE_movdi;
  ena[259] = HAVE_movti;
  ena[260] = HAVE_movsf;
  ena[261] = HAVE_movdf;
  ena[262] = HAVE_movtf;
  ena[263] = HAVE_movv4qi;
  ena[264] = HAVE_movv2hi;
  ena[265] = HAVE_movv8qi;
  ena[266] = HAVE_movv4hi;
  ena[267] = HAVE_movv2si;
  ena[268] = HAVE_movv4qq;
  ena[269] = HAVE_movv2hq;
  ena[270] = HAVE_movv4uqq;
  ena[271] = HAVE_movv2uhq;
  ena[272] = HAVE_movv2ha;
  ena[273] = HAVE_movv2uha;
  ena[274] = HAVE_movv2sf;
  ena[275] = HAVE_insvsi;
  ena[276] = HAVE_insvdi;
  ena[277] = HAVE_extvsi;
  ena[278] = HAVE_extvdi;
  ena[279] = HAVE_extzvsi;
  ena[280] = HAVE_extzvdi;
  ena[281] = HAVE_insvmisalignsi;
  ena[282] = HAVE_insvmisaligndi;
  ena[283] = HAVE_extvmisalignsi;
  ena[284] = HAVE_extvmisaligndi;
  ena[285] = HAVE_extzvmisalignsi;
  ena[286] = HAVE_extzvmisaligndi;
  ena[287] = HAVE_cbranchsi4;
  ena[288] = HAVE_cbranchdi4;
  ena[289] = HAVE_cbranchsf4;
  ena[290] = HAVE_cbranchdf4;
  ena[291] = HAVE_movsicc;
  ena[292] = HAVE_movdicc;
  ena[293] = HAVE_movsfcc;
  ena[294] = HAVE_movdfcc;
  ena[295] = HAVE_movv2sfcc;
  ena[296] = HAVE_cstoresi4;
  ena[297] = HAVE_cstoredi4;
  ena[298] = HAVE_ctrapsi4;
  ena[299] = HAVE_ctrapdi4;
  ena[300] = HAVE_smulsi3_highpart;
  ena[301] = HAVE_smuldi3_highpart;
  ena[302] = HAVE_smulv4hi3_highpart;
  ena[303] = HAVE_umulsi3_highpart;
  ena[304] = HAVE_umuldi3_highpart;
  ena[305] = HAVE_umulv4hi3_highpart;
  ena[306] = HAVE_movmemsi;
  ena[307] = HAVE_reduc_smax_v8qi;
  ena[308] = HAVE_reduc_smax_v4hi;
  ena[309] = HAVE_reduc_smax_v2si;
  ena[310] = HAVE_reduc_smax_v2sf;
  ena[311] = HAVE_reduc_smin_v8qi;
  ena[312] = HAVE_reduc_smin_v4hi;
  ena[313] = HAVE_reduc_smin_v2si;
  ena[314] = HAVE_reduc_smin_v2sf;
  ena[315] = HAVE_reduc_splus_v8qi;
  ena[316] = HAVE_reduc_splus_v4hi;
  ena[317] = HAVE_reduc_splus_v2si;
  ena[318] = HAVE_reduc_splus_v2sf;
  ena[319] = HAVE_reduc_umax_v8qi;
  ena[320] = HAVE_reduc_umin_v8qi;
  ena[321] = HAVE_reduc_uplus_v8qi;
  ena[322] = HAVE_reduc_uplus_v4hi;
  ena[323] = HAVE_reduc_uplus_v2si;
  ena[324] = HAVE_sdot_prodv4hi;
  ena[325] = HAVE_vec_extractv2sf;
  ena[326] = HAVE_vec_initv8qi;
  ena[327] = HAVE_vec_initv4hi;
  ena[328] = HAVE_vec_initv2si;
  ena[329] = HAVE_vec_initv2sf;
  ena[330] = HAVE_vec_pack_ssat_v4hi;
  ena[331] = HAVE_vec_pack_ssat_v2si;
  ena[332] = HAVE_vec_pack_usat_v4hi;
  ena[333] = HAVE_vec_perm_constv8qi;
  ena[334] = HAVE_vec_perm_constv4hi;
  ena[335] = HAVE_vec_perm_constv2si;
  ena[336] = HAVE_vec_perm_constv2sf;
  ena[337] = HAVE_vec_setv4hi;
  ena[338] = HAVE_vec_setv2sf;
  ena[339] = HAVE_vec_shl_di;
  ena[340] = HAVE_vec_shl_v8qi;
  ena[341] = HAVE_vec_shl_v4hi;
  ena[342] = HAVE_vec_shl_v2si;
  ena[343] = HAVE_vec_shr_di;
  ena[344] = HAVE_vec_shr_v8qi;
  ena[345] = HAVE_vec_shr_v4hi;
  ena[346] = HAVE_vec_shr_v2si;
  ena[347] = HAVE_vec_unpacks_hi_v8qi;
  ena[348] = HAVE_vec_unpacks_hi_v4hi;
  ena[349] = HAVE_vec_unpacks_lo_v8qi;
  ena[350] = HAVE_vec_unpacks_lo_v4hi;
  ena[351] = HAVE_vec_unpacku_hi_v8qi;
  ena[352] = HAVE_vec_unpacku_hi_v4hi;
  ena[353] = HAVE_vec_unpacku_lo_v8qi;
  ena[354] = HAVE_vec_unpacku_lo_v4hi;
  ena[355] = HAVE_sync_addqi;
  ena[356] = HAVE_sync_addhi;
  ena[357] = HAVE_sync_addsi;
  ena[358] = HAVE_sync_adddi;
  ena[359] = HAVE_sync_andqi;
  ena[360] = HAVE_sync_andhi;
  ena[361] = HAVE_sync_andsi;
  ena[362] = HAVE_sync_anddi;
  ena[363] = HAVE_sync_iorqi;
  ena[364] = HAVE_sync_iorhi;
  ena[365] = HAVE_sync_iorsi;
  ena[366] = HAVE_sync_iordi;
  ena[367] = HAVE_sync_nandqi;
  ena[368] = HAVE_sync_nandhi;
  ena[369] = HAVE_sync_nandsi;
  ena[370] = HAVE_sync_nanddi;
  ena[371] = HAVE_sync_subqi;
  ena[372] = HAVE_sync_subhi;
  ena[373] = HAVE_sync_subsi;
  ena[374] = HAVE_sync_subdi;
  ena[375] = HAVE_sync_xorqi;
  ena[376] = HAVE_sync_xorhi;
  ena[377] = HAVE_sync_xorsi;
  ena[378] = HAVE_sync_xordi;
  ena[379] = HAVE_atomic_compare_and_swapsi;
  ena[380] = HAVE_atomic_compare_and_swapdi;
  ena[381] = HAVE_atomic_exchangesi;
  ena[382] = HAVE_atomic_exchangedi;
  ena[383] = HAVE_atomic_fetch_addsi;
  ena[384] = HAVE_atomic_fetch_adddi;
  ena[385] = HAVE_get_thread_pointersi;
  ena[386] = HAVE_get_thread_pointerdi;
}

static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, enum machine_mode m, bool set)
{
  unsigned scode = (op << 16) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '4', "divmod", gen_int_libfunc },
  { '4', "udivmod", gen_int_libfunc },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};

