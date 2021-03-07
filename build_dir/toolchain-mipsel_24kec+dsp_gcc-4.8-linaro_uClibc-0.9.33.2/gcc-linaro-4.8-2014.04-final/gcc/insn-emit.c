/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "dfp.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "diagnostic-core.h"
#include "regs.h"
#include "tm-constrs.h"
#include "ggc.h"
#include "basic-block.h"
#include "target.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md:105 */
rtx
gen_ls2_alu1_turn_enabled_insn (void)
{
  return gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	49);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md:116 */
rtx
gen_ls2_alu2_turn_enabled_insn (void)
{
  return gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	50);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md:127 */
rtx
gen_ls2_falu1_turn_enabled_insn (void)
{
  return gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	51);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson2ef.md:138 */
rtx
gen_ls2_falu2_turn_enabled_insn (void)
{
  return gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	52);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1065 */
rtx
gen_trap (void)
{
  return gen_rtx_TRAP_IF (VOIDmode,
	const1_rtx,
	const0_rtx);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1106 */
rtx
gen_addsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1106 */
rtx
gen_adddf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1106 */
rtx
gen_addv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SFmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1340 */
rtx
gen_subsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1340 */
rtx
gen_subdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1340 */
rtx
gen_subv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SFmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1349 */
rtx
gen_subsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1349 */
rtx
gen_subdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1406 */
rtx
gen_mulv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2SFmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1488 */
rtx
gen_mulsi3_mul3_loongson (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1488 */
rtx
gen_muldi3_mul3_loongson (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1502 */
rtx
gen_mulsi3_mul3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1502 */
rtx
gen_muldi3_mul3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1541 */
rtx
gen_mulsi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1541 */
rtx
gen_muldi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1550 */
rtx
gen_mulsi3_r4000 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1550 */
rtx
gen_muldi3_r4000 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1913 */
rtx
gen_mulsidi3_32bit (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1913 */
rtx
gen_umulsidi3_32bit (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1927 */
rtx
gen_mulsidi3_32bit_r4000 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1927 */
rtx
gen_umulsidi3_32bit_r4000 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1938 */
rtx
gen_mulsidi3_64bit (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (TImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1938 */
rtx
gen_umulsidi3_64bit (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (TImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2004 */
rtx
gen_mulsidi3_64bit_hilo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
	14));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2004 */
rtx
gen_umulsidi3_64bit_hilo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
	14));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2017 */
rtx
gen_mulsidi3_64bit_dmul (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2046 */
rtx
gen_msubsidi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand3,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2046 */
rtx
gen_umsubsidi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand3,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2090 */
rtx
gen_smulsi3_highpart_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2090 */
rtx
gen_umulsi3_highpart_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2137 */
rtx
gen_smulsi3_highpart_mulhi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2137 */
rtx
gen_umulsi3_highpart_mulhi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2187 */
rtx
gen_smuldi3_highpart_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2187 */
rtx
gen_umuldi3_highpart_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2249 */
rtx
gen_mulditi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2249 */
rtx
gen_umulditi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2260 */
rtx
gen_mulditi3_r4000 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (TImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2260 */
rtx
gen_umulditi3_r4000 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (TImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2276 */
rtx
gen_madsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	operand0));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2289 */
rtx
gen_maddsidi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	operand3));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2289 */
rtx
gen_umaddsidi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	operand3));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2568 */
rtx
gen_divmodsi4_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2568 */
rtx
gen_divmoddi4_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2608 */
rtx
gen_udivmodsi4_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2608 */
rtx
gen_udivmoddi4_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2652 */
rtx
gen_divmodsi4_hilo_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_DIV (SImode,
	operand1,
	operand2)),
	14));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2652 */
rtx
gen_udivmodsi4_hilo_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
	14));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2652 */
rtx
gen_divmodsi4_hilo_ti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TImode,
	gen_rtvec (1,
		gen_rtx_DIV (SImode,
	operand1,
	operand2)),
	14));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2652 */
rtx
gen_udivmodsi4_hilo_ti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TImode,
	gen_rtvec (1,
		gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
	14));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2652 */
rtx
gen_divmoddi4_hilo_ti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TImode,
	gen_rtvec (1,
		gen_rtx_DIV (DImode,
	operand1,
	operand2)),
	14));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2652 */
rtx
gen_udivmoddi4_hilo_ti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TImode,
	gen_rtvec (1,
		gen_rtx_UDIV (DImode,
	operand1,
	operand2)),
	14));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2673 */
rtx
gen_sqrtsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2673 */
rtx
gen_sqrtdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2673 */
rtx
gen_sqrtv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (V2SFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2740 */
rtx
gen_abssf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2740 */
rtx
gen_absdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2740 */
rtx
gen_absv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V2SFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2756 */
rtx
gen_clzsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (SImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2756 */
rtx
gen_clzdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (DImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2772 */
rtx
gen_popcountsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_POPCOUNT (SImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2772 */
rtx
gen_popcountdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_POPCOUNT (DImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2797 */
rtx
gen_negsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2810 */
rtx
gen_negdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2822 */
rtx
gen_negsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2822 */
rtx
gen_negdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2822 */
rtx
gen_negv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (V2SFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2830 */
rtx
gen_one_cmplsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2830 */
rtx
gen_one_cmpldi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (DImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3028 */
rtx
gen_truncdfsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3050 */
rtx
gen_truncdiqi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (QImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3050 */
rtx
gen_truncdihi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (HImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3050 */
rtx
gen_truncdisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3269 */
rtx
gen_extendsidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3460 */
rtx
gen_extendsfdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3488 */
rtx
gen_fix_truncdfsi2_insn (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3497 */
rtx
gen_fix_truncdfsi2_macro (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3525 */
rtx
gen_fix_truncsfsi2_insn (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3534 */
rtx
gen_fix_truncsfsi2_macro (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3551 */
rtx
gen_fix_truncdfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3561 */
rtx
gen_fix_truncsfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3571 */
rtx
gen_floatsidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3581 */
rtx
gen_floatdidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3591 */
rtx
gen_floatsisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3601 */
rtx
gen_floatdisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3954 */
rtx
gen_mov_lwl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	0));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3954 */
rtx
gen_mov_ldl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	0));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3964 */
rtx
gen_mov_lwr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3964 */
rtx
gen_mov_ldr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3975 */
rtx
gen_mov_swl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (2,
		operand1,
		operand2),
	2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3975 */
rtx
gen_mov_sdl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (2,
		operand1,
		operand2),
	2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3985 */
rtx
gen_mov_swr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	3));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3985 */
rtx
gen_mov_sdr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	3));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4169 */
rtx
gen_load_gotsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	26));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4169 */
rtx
gen_load_gotdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	26));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4841 */
rtx
gen_mfhisi_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	12));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4841 */
rtx
gen_mfhisi_ti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	12));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4841 */
rtx
gen_mfhidi_ti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	12));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4853 */
rtx
gen_mthisi_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	13));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4853 */
rtx
gen_mthisi_ti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TImode,
	gen_rtvec (2,
		operand1,
		operand2),
	13));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4853 */
rtx
gen_mthidi_ti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TImode,
	gen_rtvec (2,
		operand1,
		operand2),
	13));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
rtx
gen_load_lowdf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	7));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
rtx
gen_load_lowdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	7));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
rtx
gen_load_lowv2sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	7));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
rtx
gen_load_lowv2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	7));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
rtx
gen_load_lowv4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (1,
		operand1),
	7));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
rtx
gen_load_lowv8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (1,
		operand1),
	7));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4899 */
rtx
gen_load_lowtf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TFmode,
	gen_rtvec (1,
		operand1),
	7));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
rtx
gen_load_highdf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	8));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
rtx
gen_load_highdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	8));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
rtx
gen_load_highv2sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	8));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
rtx
gen_load_highv2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	8));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
rtx
gen_load_highv4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	8));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
rtx
gen_load_highv8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	8));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4913 */
rtx
gen_load_hightf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	8));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
rtx
gen_store_worddf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	9));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
rtx
gen_store_worddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	9));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
rtx
gen_store_wordv2sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	9));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
rtx
gen_store_wordv2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	9));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
rtx
gen_store_wordv4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	9));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
rtx
gen_store_wordv8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	9));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4928 */
rtx
gen_store_wordtf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	9));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
rtx
gen_mthc1df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	11));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
rtx
gen_mthc1di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	11));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
rtx
gen_mthc1v2sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	11));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
rtx
gen_mthc1v2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	11));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
rtx
gen_mthc1v4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	11));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
rtx
gen_mthc1v8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	11));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4943 */
rtx
gen_mthc1tf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	11));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
rtx
gen_mfhc1df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	10));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
rtx
gen_mfhc1di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	10));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
rtx
gen_mfhc1v2sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	10));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
rtx
gen_mfhc1v2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	10));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
rtx
gen_mfhc1v4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	10));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
rtx
gen_mfhc1v8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	10));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4954 */
rtx
gen_mfhc1tf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	10));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4971 */
rtx
gen_loadgp_newabi_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	15));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4971 */
rtx
gen_loadgp_newabi_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	15));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4990 */
rtx
gen_loadgp_absolute_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	15));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4990 */
rtx
gen_loadgp_absolute_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	15));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5006 */
rtx
gen_loadgp_blockage (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		gen_rtx_REG (SImode,
	28)),
	33);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5014 */
rtx
gen_loadgp_rtp_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	15));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5014 */
rtx
gen_loadgp_rtp_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	15));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5036 */
rtx
gen_copygp_mips16_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	16));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5036 */
rtx
gen_copygp_mips16_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	16));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5053 */
rtx
gen_potential_cprestore_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	18)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5053 */
rtx
gen_potential_cprestore_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	18)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5075 */
rtx
gen_cprestore_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		gen_rtx_REG (SImode,
	28)),
	19));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5075 */
rtx
gen_cprestore_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		gen_rtx_REG (DImode,
	28)),
	19));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5090 */
rtx
gen_use_cprestore_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	76),
	operand0);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5090 */
rtx
gen_use_cprestore_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	76),
	operand0);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5120 */
rtx
gen_sync (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	37);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5125 */
rtx
gen_synci (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	36);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5131 */
rtx
gen_rdhwr_synci_step_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const1_rtx),
	35));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5131 */
rtx
gen_rdhwr_synci_step_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const1_rtx),
	35));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5138 */
rtx
gen_clear_hazard_si (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	34),
		gen_hard_reg_clobber (SImode, 31)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5138 */
rtx
gen_clear_hazard_di (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	34),
		gen_hard_reg_clobber (DImode, 31)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5152 */
rtx
gen_mips_cache (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)),
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (2,
		operand0,
		operand1),
	38));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5164 */
rtx
gen_r10k_cache_barrier (void)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)),
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		const0_rtx),
	39));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5373 */
rtx
gen_rotrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5373 */
rtx
gen_rotrdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (DImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5388 */
rtx
gen_bswaphi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_BSWAP (HImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5395 */
rtx
gen_bswapsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_BSWAP (SImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5406 */
rtx
gen_bswapdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_BSWAP (DImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5417 */
rtx
gen_wsbh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	4));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5424 */
rtx
gen_dsbh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	5));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5431 */
rtx
gen_dshd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	6));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_sunordered_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNORDERED (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_suneq_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNEQ (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_sunlt_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLT (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_sunle_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLE (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_seq_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_slt_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_sle_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_sunordered_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNORDERED (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_suneq_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNEQ (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_sunlt_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLT (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_sunle_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLE (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_seq_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_slt_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5801 */
rtx
gen_sle_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
rtx
gen_sge_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
rtx
gen_sgt_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
rtx
gen_sunge_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGE (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
rtx
gen_sungt_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGT (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
rtx
gen_sge_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
rtx
gen_sgt_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
rtx
gen_sunge_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGE (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5810 */
rtx
gen_sungt_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGT (CCmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5896 */
rtx
gen_indirect_jump_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5896 */
rtx
gen_indirect_jump_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5906 */
rtx
gen_indirect_jump_and_restore_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand2)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5906 */
rtx
gen_indirect_jump_and_restore_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand2)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5938 */
rtx
gen_tablejump_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5938 */
rtx
gen_tablejump_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5987 */
rtx
gen_casesi_internal_mips16_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LEU (VOIDmode,
	operand0,
	operand1),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		gen_rtx_LABEL_REF (VOIDmode,
	operand2)),
	47),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (SImode, 24)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5987 */
rtx
gen_casesi_internal_mips16_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LEU (VOIDmode,
	operand0,
	operand1),
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		gen_rtx_LABEL_REF (VOIDmode,
	operand2)),
	47),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (SImode, 24)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6104 */
rtx
gen_blockage (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	33);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6111 */
rtx
gen_probe_stack_range_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	48));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6111 */
rtx
gen_probe_stack_range_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	48));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6160 */
rtx
gen_return_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		ret_rtx,
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6160 */
rtx
gen_simple_return_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		simple_return_rtx,
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6169 */
rtx
gen_mips_eret (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		ret_rtx,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	40)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6178 */
rtx
gen_mips_deret (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		ret_rtx,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	41)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6187 */
rtx
gen_mips_di (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	42);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6195 */
rtx
gen_mips_ehb (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	43);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6203 */
rtx
gen_mips_rdpgpr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	44));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6213 */
rtx
gen_cop0_move (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6239 */
rtx
gen_eh_set_lr_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	21),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6245 */
rtx
gen_eh_set_lr_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	21),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6287 */
rtx
gen_restore_gp_si (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	28),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	20)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6287 */
rtx
gen_restore_gp_di (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	28),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		const0_rtx),
	20)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6302 */
rtx
gen_move_gpsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	17));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6302 */
rtx
gen_move_gpdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	17));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6367 */
rtx
gen_load_callsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (SImode,
	79)),
	25));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6367 */
rtx
gen_load_calldi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (SImode,
	79)),
	25));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6377 */
rtx
gen_set_got_version (void)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	79),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	23));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6384 */
rtx
gen_update_got_version (void)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	79),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_REG (SImode,
	79)),
	24));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6416 */
rtx
gen_sibcall_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6436 */
rtx
gen_sibcall_value_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6445 */
rtx
gen_sibcall_value_multiple_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	copy_rtx (operand1)),
	copy_rtx (operand2)))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6504 */
rtx
gen_call_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1),
		gen_hard_reg_clobber (SImode, 31)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6518 */
rtx
gen_call_split (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1),
		gen_hard_reg_clobber (SImode, 31),
		gen_hard_reg_clobber (SImode, 28)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6532 */
rtx
gen_call_internal_direct (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1),
		const1_rtx,
		gen_hard_reg_clobber (SImode, 31)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6548 */
rtx
gen_call_direct_split (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1),
		const1_rtx,
		gen_hard_reg_clobber (SImode, 31),
		gen_hard_reg_clobber (SImode, 28)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6572 */
rtx
gen_call_value_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_hard_reg_clobber (SImode, 31)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6589 */
rtx
gen_call_value_split (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_hard_reg_clobber (SImode, 31),
		gen_hard_reg_clobber (SImode, 28)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6601 */
rtx
gen_call_value_internal_direct (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		const1_rtx,
		gen_hard_reg_clobber (SImode, 31)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6619 */
rtx
gen_call_value_direct_split (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		const1_rtx,
		gen_hard_reg_clobber (SImode, 31),
		gen_hard_reg_clobber (SImode, 28)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6632 */
rtx
gen_call_value_multiple_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	copy_rtx (operand1)),
	copy_rtx (operand2))),
		gen_hard_reg_clobber (SImode, 31)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6652 */
rtx
gen_call_value_multiple_split (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	copy_rtx (operand1)),
	copy_rtx (operand2))),
		gen_hard_reg_clobber (SImode, 31),
		gen_hard_reg_clobber (SImode, 28)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6698 */
rtx
gen_prefetch (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6724 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6732 */
rtx
gen_hazard_nop (void)
{
  return const1_rtx;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6809 */
rtx
gen_consttable_tls_reloc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	31);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6817 */
rtx
gen_consttable_int (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	31);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6830 */
rtx
gen_consttable_float (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	32);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6846 */
rtx
gen_align (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	30);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6892 */
rtx
gen_tls_get_tp_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	28)),
		gen_hard_reg_clobber (SImode, 3)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6892 */
rtx
gen_tls_get_tp_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	28)),
		gen_hard_reg_clobber (DImode, 3)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6931 */
rtx
gen_tls_get_tp_mips16_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	28)),
		gen_hard_reg_clobber (SImode, 3),
		gen_hard_reg_clobber (SImode, 25),
		gen_hard_reg_clobber (SImode, 31)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6931 */
rtx
gen_tls_get_tp_mips16_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	28)),
		gen_hard_reg_clobber (DImode, 3),
		gen_hard_reg_clobber (DImode, 25),
		gen_hard_reg_clobber (DImode, 31)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:60 */
rtx
gen_sync_compare_and_swapsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	53))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:60 */
rtx
gen_sync_compare_and_swapdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		operand2,
		operand3),
	53))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:90 */
rtx
gen_compare_and_swap_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5),
	54))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:108 */
rtx
gen_sync_addsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	operand0,
	operand1)),
	55));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:108 */
rtx
gen_sync_adddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_PLUS (DImode,
	operand0,
	operand1)),
	55));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:136 */
rtx
gen_sync_add_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand3)),
	58)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:136 */
rtx
gen_sync_sub_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_MINUS (SImode,
	copy_rtx (operand0),
	operand3)),
	58)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:136 */
rtx
gen_sync_ior_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_IOR (SImode,
	copy_rtx (operand0),
	operand3)),
	58)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:136 */
rtx
gen_sync_xor_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand3)),
	58)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:136 */
rtx
gen_sync_and_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand3)),
	58)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:175 */
rtx
gen_sync_old_add_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand2,
		operand3,
		gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand4)),
	58)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:175 */
rtx
gen_sync_old_sub_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand2,
		operand3,
		gen_rtx_MINUS (SImode,
	copy_rtx (operand0),
	operand4)),
	58)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:175 */
rtx
gen_sync_old_ior_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand2,
		operand3,
		gen_rtx_IOR (SImode,
	copy_rtx (operand0),
	operand4)),
	58)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:175 */
rtx
gen_sync_old_xor_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand2,
		operand3,
		gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand4)),
	58)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:175 */
rtx
gen_sync_old_and_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand2,
		operand3,
		gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand4)),
	58)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:217 */
rtx
gen_sync_new_add_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand4)),
	57)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		copy_rtx (operand1),
		copy_rtx (operand2),
		copy_rtx (operand3),
		copy_rtx (operand4)),
	57))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:217 */
rtx
gen_sync_new_sub_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		gen_rtx_MINUS (SImode,
	copy_rtx (operand0),
	operand4)),
	57)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		copy_rtx (operand1),
		copy_rtx (operand2),
		copy_rtx (operand3),
		copy_rtx (operand4)),
	57))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:217 */
rtx
gen_sync_new_ior_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		gen_rtx_IOR (SImode,
	copy_rtx (operand0),
	operand4)),
	57)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		copy_rtx (operand1),
		copy_rtx (operand2),
		copy_rtx (operand3),
		copy_rtx (operand4)),
	57))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:217 */
rtx
gen_sync_new_xor_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand4)),
	57)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		copy_rtx (operand1),
		copy_rtx (operand2),
		copy_rtx (operand3),
		copy_rtx (operand4)),
	57))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:217 */
rtx
gen_sync_new_and_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand4)),
	57)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		copy_rtx (operand1),
		copy_rtx (operand2),
		copy_rtx (operand3),
		copy_rtx (operand4)),
	57))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:259 */
rtx
gen_sync_nand_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		copy_rtx (operand0),
		operand3),
	58)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:297 */
rtx
gen_sync_old_nand_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand2,
		operand3,
		operand4),
	58)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:337 */
rtx
gen_sync_new_nand_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	57)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		copy_rtx (operand1),
		copy_rtx (operand2),
		copy_rtx (operand3),
		copy_rtx (operand4)),
	57))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:362 */
rtx
gen_sync_subsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_MINUS (SImode,
	operand0,
	operand1)),
	55));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:362 */
rtx
gen_sync_subdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_MINUS (DImode,
	operand0,
	operand1)),
	55));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:375 */
rtx
gen_sync_old_addsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	operand2)),
	55))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:375 */
rtx
gen_sync_old_adddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	operand2)),
	55))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:390 */
rtx
gen_sync_old_subsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	operand2)),
	55))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:390 */
rtx
gen_sync_old_subdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_MINUS (DImode,
	copy_rtx (operand1),
	operand2)),
	55))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:405 */
rtx
gen_sync_new_addsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
	56))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:405 */
rtx
gen_sync_new_adddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
	56))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:421 */
rtx
gen_sync_new_subsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
	56))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:421 */
rtx
gen_sync_new_subdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_MINUS (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
	56))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:437 */
rtx
gen_sync_iorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_IOR (SImode,
	operand1,
	operand0)),
	55));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:437 */
rtx
gen_sync_xorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_XOR (SImode,
	operand1,
	operand0)),
	55));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:437 */
rtx
gen_sync_andsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_AND (SImode,
	operand1,
	operand0)),
	55));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:437 */
rtx
gen_sync_iordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_IOR (DImode,
	operand1,
	operand0)),
	55));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:437 */
rtx
gen_sync_xordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_XOR (DImode,
	operand1,
	operand0)),
	55));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:437 */
rtx
gen_sync_anddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	operand1,
	operand0)),
	55));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:449 */
rtx
gen_sync_old_iorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_IOR (SImode,
	operand2,
	copy_rtx (operand1))),
	55))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:449 */
rtx
gen_sync_old_xorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_XOR (SImode,
	operand2,
	copy_rtx (operand1))),
	55))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:449 */
rtx
gen_sync_old_andsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_AND (SImode,
	operand2,
	copy_rtx (operand1))),
	55))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:449 */
rtx
gen_sync_old_iordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_IOR (DImode,
	operand2,
	copy_rtx (operand1))),
	55))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:449 */
rtx
gen_sync_old_xordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_XOR (DImode,
	operand2,
	copy_rtx (operand1))),
	55))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:449 */
rtx
gen_sync_old_anddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	operand2,
	copy_rtx (operand1))),
	55))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:464 */
rtx
gen_sync_new_iorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_IOR (SImode,
	operand2,
	copy_rtx (operand1))),
	56))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:464 */
rtx
gen_sync_new_xorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_XOR (SImode,
	operand2,
	copy_rtx (operand1))),
	56))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:464 */
rtx
gen_sync_new_andsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_AND (SImode,
	operand2,
	copy_rtx (operand1))),
	56))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:464 */
rtx
gen_sync_new_iordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_IOR (DImode,
	operand2,
	copy_rtx (operand1))),
	56))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:464 */
rtx
gen_sync_new_xordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_XOR (DImode,
	operand2,
	copy_rtx (operand1))),
	56))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:464 */
rtx
gen_sync_new_anddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	operand2,
	copy_rtx (operand1))),
	56))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:480 */
rtx
gen_sync_nandsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	55));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:480 */
rtx
gen_sync_nanddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	55));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:491 */
rtx
gen_sync_old_nandsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand2),
	55))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:491 */
rtx
gen_sync_old_nanddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand2),
	55))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:505 */
rtx
gen_sync_new_nandsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand2),
	56))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:505 */
rtx
gen_sync_new_nanddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand2),
	56))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:520 */
rtx
gen_sync_lock_test_and_setsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand2),
	59))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:520 */
rtx
gen_sync_lock_test_and_setdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand2),
	59))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:547 */
rtx
gen_test_and_set_12 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand2,
		operand3,
		operand4),
	60))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:566 */
rtx
gen_atomic_compare_and_swapsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	62)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		copy_rtx (operand2)),
	62)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		copy_rtx (operand2),
		copy_rtx (operand3),
		operand4),
	62)),
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand5,
		operand6,
		operand7),
	62)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:566 */
rtx
gen_atomic_compare_and_swapdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		operand2,
		operand3),
	62)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		copy_rtx (operand2)),
	62)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (3,
		copy_rtx (operand2),
		copy_rtx (operand3),
		operand4),
	62)),
		gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (3,
		operand5,
		operand6,
		operand7),
	62)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:630 */
rtx
gen_atomic_exchangesi_llsc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	63)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand2),
	63)),
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand3),
	63)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:630 */
rtx
gen_atomic_exchangedi_llsc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	63)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand2),
	63)),
		gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand3),
	63)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:648 */
rtx
gen_atomic_exchangesi_swap (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	63)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand2),
	63))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:648 */
rtx
gen_atomic_exchangedi_swap (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	63)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand2),
	63))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:685 */
rtx
gen_atomic_fetch_addsi_llsc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	64)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	operand2)),
	64)),
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand3),
	64)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:685 */
rtx
gen_atomic_fetch_adddi_llsc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	64)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	operand2)),
	64)),
		gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand3),
	64)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:705 */
rtx
gen_atomic_fetch_addsi_ldadd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	64)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	operand2)),
	64))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:705 */
rtx
gen_atomic_fetch_adddi_ldadd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	64)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	operand2)),
	64))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:59 */
rtx
gen_mips_cond_move_tf_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	65));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:92 */
rtx
gen_vec_perm_const_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	gen_rtx_VEC_CONCAT (V4SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand3,
		operand4))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:266 */
rtx
gen_vec_concatv2sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:285 */
rtx
gen_vec_extractv2sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:352 */
rtx
gen_mips_alnv_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	67));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:364 */
rtx
gen_mips_addr_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	69));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:374 */
rtx
gen_reduc_splus_v2sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand1),
	69));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:383 */
rtx
gen_mips_cvt_pw_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	70));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:393 */
rtx
gen_mips_cvt_ps_pw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	71));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:403 */
rtx
gen_mips_mulr_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	72));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:442 */
rtx
gen_mips_cabs_cond_s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	68));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:442 */
rtx
gen_mips_cabs_cond_d (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	68));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:458 */
rtx
gen_mips_c_cond_4s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV4mode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	66));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:487 */
rtx
gen_mips_cabs_cond_4s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV4mode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	68));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:521 */
rtx
gen_mips_c_cond_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	66));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:532 */
rtx
gen_mips_cabs_cond_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	68));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
rtx
gen_sunordered_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (1,
		gen_rtx_UNORDERED (VOIDmode,
	operand1,
	operand2)),
	79));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
rtx
gen_suneq_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (1,
		gen_rtx_UNEQ (VOIDmode,
	operand1,
	operand2)),
	79));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
rtx
gen_sunlt_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (1,
		gen_rtx_UNLT (VOIDmode,
	operand1,
	operand2)),
	79));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
rtx
gen_sunle_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (1,
		gen_rtx_UNLE (VOIDmode,
	operand1,
	operand2)),
	79));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
rtx
gen_seq_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (1,
		gen_rtx_EQ (VOIDmode,
	operand1,
	operand2)),
	79));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
rtx
gen_slt_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (1,
		gen_rtx_LT (VOIDmode,
	operand1,
	operand2)),
	79));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:548 */
rtx
gen_sle_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (1,
		gen_rtx_LE (VOIDmode,
	operand1,
	operand2)),
	79));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:559 */
rtx
gen_sge_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (1,
		gen_rtx_GE (VOIDmode,
	operand1,
	operand2)),
	79));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:559 */
rtx
gen_sgt_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (1,
		gen_rtx_GT (VOIDmode,
	operand1,
	operand2)),
	79));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:559 */
rtx
gen_sunge_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (1,
		gen_rtx_UNGE (VOIDmode,
	operand1,
	operand2)),
	79));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:559 */
rtx
gen_sungt_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (1,
		gen_rtx_UNGT (VOIDmode,
	operand1,
	operand2)),
	79));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:575 */
rtx
gen_bc1any4t (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:586 */
rtx
gen_bc1any4f (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	operand1,
	constm1_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:597 */
rtx
gen_bc1any2t (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:608 */
rtx
gen_bc1any2f (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	operand1,
	constm1_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:673 */
rtx
gen_mips_rsqrt1_s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	74));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:673 */
rtx
gen_mips_rsqrt1_d (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	74));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:673 */
rtx
gen_mips_rsqrt1_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	74));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:682 */
rtx
gen_mips_rsqrt2_s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	75));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:682 */
rtx
gen_mips_rsqrt2_d (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	75));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:682 */
rtx
gen_mips_rsqrt2_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	75));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:692 */
rtx
gen_mips_recip1_s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	76));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:692 */
rtx
gen_mips_recip1_d (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	76));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:692 */
rtx
gen_mips_recip1_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	76));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:701 */
rtx
gen_mips_recip2_s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	77));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:701 */
rtx
gen_mips_recip2_d (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	77));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:701 */
rtx
gen_mips_recip2_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	77));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:128 */
rtx
gen_addv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	80))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:128 */
rtx
gen_addv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4QImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	80))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:140 */
rtx
gen_mips_addq_s_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	81)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:140 */
rtx
gen_mips_addq_s_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	81)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:140 */
rtx
gen_mips_addu_s_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	81)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:154 */
rtx
gen_subv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	82))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:154 */
rtx
gen_subv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4QImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	82))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:166 */
rtx
gen_mips_subq_s_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	83)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:166 */
rtx
gen_mips_subq_s_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	83)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:166 */
rtx
gen_mips_subu_s_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	83)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:180 */
rtx
gen_mips_addsc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	84)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	184),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	84))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:194 */
rtx
gen_mips_addwc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (CCDSPmode,
	184)),
	85)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	85))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:209 */
rtx
gen_mips_modsub (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	86));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:220 */
rtx
gen_mips_raddu_w_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	87));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:230 */
rtx
gen_mips_absq_s_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	88)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (1,
		operand1),
	88))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:230 */
rtx
gen_mips_absq_s_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		operand1),
	88)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (1,
		operand1),
	88))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:243 */
rtx
gen_mips_precrq_qb_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	89));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:253 */
rtx
gen_mips_precrq_ph_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	90));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:263 */
rtx
gen_mips_precrq_rs_ph_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	91)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	91))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:278 */
rtx
gen_mips_precrqu_s_qb_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	92)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	92))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:293 */
rtx
gen_mips_preceq_w_phl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	93));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:302 */
rtx
gen_mips_preceq_w_phr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	94));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:312 */
rtx
gen_mips_precequ_ph_qbl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		operand1),
	95));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:321 */
rtx
gen_mips_precequ_ph_qbr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		operand1),
	96));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:330 */
rtx
gen_mips_precequ_ph_qbla (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		operand1),
	97));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:339 */
rtx
gen_mips_precequ_ph_qbra (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		operand1),
	98));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:349 */
rtx
gen_mips_preceu_ph_qbl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		operand1),
	99));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:358 */
rtx
gen_mips_preceu_ph_qbr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		operand1),
	100));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:367 */
rtx
gen_mips_preceu_ph_qbla (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		operand1),
	101));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:376 */
rtx
gen_mips_preceu_ph_qbra (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		operand1),
	102));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:387 */
rtx
gen_mips_shll_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	103)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	103))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:387 */
rtx
gen_mips_shll_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	103)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	103))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:409 */
rtx
gen_mips_shll_s_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	104)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	104))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:409 */
rtx
gen_mips_shll_s_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	104)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	104))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:432 */
rtx
gen_mips_shrl_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	105));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:451 */
rtx
gen_mips_shra_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	106));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:469 */
rtx
gen_mips_shra_r_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	107));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:469 */
rtx
gen_mips_shra_r_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	107));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:490 */
rtx
gen_mips_muleu_s_ph_qbl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	108)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	108)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:504 */
rtx
gen_mips_muleu_s_ph_qbr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	109)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	109)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:519 */
rtx
gen_mips_mulq_rs_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	110)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	110)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:534 */
rtx
gen_mips_muleq_s_w_phl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	111)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	111)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:548 */
rtx
gen_mips_muleq_s_w_phr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	112)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	112)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:563 */
rtx
gen_mips_dpau_h_qbl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	113));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:575 */
rtx
gen_mips_dpau_h_qbr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	114));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:588 */
rtx
gen_mips_dpsu_h_qbl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	115));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:600 */
rtx
gen_mips_dpsu_h_qbr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	116));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:613 */
rtx
gen_mips_dpaq_s_w_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	117)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	117))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:630 */
rtx
gen_mips_dpsq_s_w_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	118)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	118))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:647 */
rtx
gen_mips_mulsaq_s_w_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	119)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	119))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:664 */
rtx
gen_mips_dpaq_sa_l_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	120)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	120))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:681 */
rtx
gen_mips_dpsq_sa_l_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	121)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	121))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:698 */
rtx
gen_mips_maq_s_w_phl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	122)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	122))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:714 */
rtx
gen_mips_maq_s_w_phr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	123)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	123))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:731 */
rtx
gen_mips_maq_sa_w_phl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	124)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	124))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:747 */
rtx
gen_mips_maq_sa_w_phr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	125)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	125))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:765 */
rtx
gen_mips_bitrev (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	126));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:775 */
rtx
gen_mips_insv (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		gen_rtx_REG (CCDSPmode,
	183),
		gen_rtx_REG (CCDSPmode,
	182)),
	127));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:788 */
rtx
gen_mips_repl_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (1,
		operand1),
	128));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:805 */
rtx
gen_mips_repl_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		operand1),
	129));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:818 */
rtx
gen_mips_cmp_eq_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	186),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand0,
		operand1,
		gen_rtx_REG (CCDSPmode,
	186)),
	130));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:818 */
rtx
gen_mips_cmpu_eq_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	186),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand0,
		operand1,
		gen_rtx_REG (CCDSPmode,
	186)),
	130));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:829 */
rtx
gen_mips_cmp_lt_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	186),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand0,
		operand1,
		gen_rtx_REG (CCDSPmode,
	186)),
	131));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:829 */
rtx
gen_mips_cmpu_lt_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	186),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand0,
		operand1,
		gen_rtx_REG (CCDSPmode,
	186)),
	131));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:840 */
rtx
gen_mips_cmp_le_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	186),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand0,
		operand1,
		gen_rtx_REG (CCDSPmode,
	186)),
	132));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:840 */
rtx
gen_mips_cmpu_le_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	186),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand0,
		operand1,
		gen_rtx_REG (CCDSPmode,
	186)),
	132));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:851 */
rtx
gen_mips_cmpgu_eq_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	133));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:861 */
rtx
gen_mips_cmpgu_lt_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	134));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:871 */
rtx
gen_mips_cmpgu_le_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	135));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:882 */
rtx
gen_mips_pick_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (CCDSPmode,
	186)),
	136));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:882 */
rtx
gen_mips_pick_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (CCDSPmode,
	186)),
	136));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:894 */
rtx
gen_mips_packrl_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	137));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:906 */
rtx
gen_mips_extr_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	138)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	138))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:927 */
rtx
gen_mips_extr_r_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	139)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	139))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:948 */
rtx
gen_mips_extr_rs_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	140)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	140))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:970 */
rtx
gen_mips_extr_s_h (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	141)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	141))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:992 */
rtx
gen_mips_extp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (CCDSPmode,
	182)),
	142)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	187),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	142))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1014 */
rtx
gen_mips_extpdp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (CCDSPmode,
	182)),
	143)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	182),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (CCDSPmode,
	182)),
	143)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	187),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	143))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1040 */
rtx
gen_mips_shilo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	144));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1059 */
rtx
gen_mips_mthlip (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (CCDSPmode,
	182)),
	145)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	182),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (CCDSPmode,
	182)),
	145))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1075 */
rtx
gen_mips_wrdsp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	182),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand0,
		operand1),
	146)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	183),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand0,
		operand1),
	146)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	184),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand0,
		operand1),
	146)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand0,
		operand1),
	146)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	186),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand0,
		operand1),
	146)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	187),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand0,
		operand1),
	146))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1097 */
rtx
gen_mips_rddsp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (7,
		operand1,
		gen_rtx_REG (CCDSPmode,
	182),
		gen_rtx_REG (CCDSPmode,
	183),
		gen_rtx_REG (CCDSPmode,
	184),
		gen_rtx_REG (CCDSPmode,
	185),
		gen_rtx_REG (CCDSPmode,
	186),
		gen_rtx_REG (CCDSPmode,
	187)),
	147));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lbx_extsi_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lbux_extsi_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lbx_extdi_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lbux_extdi_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lhx_extsi_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MEM (HImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lhux_extsi_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_MEM (HImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lhx_extdi_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MEM (HImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lhux_extdi_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_MEM (HImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lbx_extsi_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lbux_extsi_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lbx_extdi_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lbux_extdi_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lhx_extsi_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MEM (HImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lhux_extsi_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_MEM (HImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lhx_extdi_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MEM (HImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1126 */
rtx
gen_mips_lhux_extdi_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_MEM (HImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1161 */
rtx
gen_mips_lwx_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1161 */
rtx
gen_mips_ldx_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1161 */
rtx
gen_mips_lwx_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1161 */
rtx
gen_mips_ldx_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1184 */
rtx
gen_mips_bposge (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GE (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	182),
	operand1),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:73 */
rtx
gen_mips_absq_s_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (1,
		operand1),
	148)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (1,
		operand1),
	148))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:85 */
rtx
gen_mips_addu_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	149))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:97 */
rtx
gen_mips_addu_s_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	150)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	150))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:110 */
rtx
gen_mips_adduh_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	151));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:120 */
rtx
gen_mips_adduh_r_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	152));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:130 */
rtx
gen_mips_append (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:145 */
rtx
gen_mips_balign (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	154));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:160 */
rtx
gen_mips_cmpgdu_eq_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	186),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (CCDSPmode,
	186)),
	155))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:175 */
rtx
gen_mips_cmpgdu_lt_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	156)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	186),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (CCDSPmode,
	186)),
	156))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:190 */
rtx
gen_mips_cmpgdu_le_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	157)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	186),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (CCDSPmode,
	186)),
	157))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:205 */
rtx
gen_mips_dpa_w_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	158));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:217 */
rtx
gen_mips_dps_w_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	159));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:229 */
rtx
gen_mulv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	164)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:242 */
rtx
gen_mips_mul_s_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	165)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	165)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:256 */
rtx
gen_mips_mulq_rs_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	166)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	166)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:270 */
rtx
gen_mips_mulq_s_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	167)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	167)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:284 */
rtx
gen_mips_mulq_s_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	168)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	168)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:298 */
rtx
gen_mips_mulsa_w_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	169));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:310 */
rtx
gen_mips_precr_qb_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	172));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:320 */
rtx
gen_mips_precr_sra_ph_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	173));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:335 */
rtx
gen_mips_precr_sra_r_ph_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	174));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:350 */
rtx
gen_mips_prepend (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	175));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:365 */
rtx
gen_mips_shra_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	176));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:384 */
rtx
gen_mips_shra_r_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	177));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:402 */
rtx
gen_mips_shrl_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	178));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:420 */
rtx
gen_mips_subu_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	179)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	179))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:433 */
rtx
gen_mips_subu_s_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	180)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	180))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:446 */
rtx
gen_mips_subuh_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	181));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:456 */
rtx
gen_mips_subuh_r_qb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	182));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:466 */
rtx
gen_mips_addqh_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	183));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:476 */
rtx
gen_mips_addqh_r_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	184));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:486 */
rtx
gen_mips_addqh_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	185));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:496 */
rtx
gen_mips_addqh_r_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	186));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:506 */
rtx
gen_mips_subqh_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	187));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:516 */
rtx
gen_mips_subqh_r_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	188));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:526 */
rtx
gen_mips_subqh_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	189));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:536 */
rtx
gen_mips_subqh_r_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	190));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:546 */
rtx
gen_mips_dpax_w_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	191));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:558 */
rtx
gen_mips_dpsx_w_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	192));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:570 */
rtx
gen_mips_dpaqx_s_w_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:586 */
rtx
gen_mips_dpaqx_sa_w_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	194)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	194))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:602 */
rtx
gen_mips_dpsqx_s_w_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	195)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	195))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dspr2.md:618 */
rtx
gen_mips_dpsqx_sa_w_ph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	196)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	196))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_addqq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_addhq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_addsq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_adddq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_adduqq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (UQQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_adduhq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (UHQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_addusq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (USQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_addudq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (UDQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_addha3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HAmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_addsa3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SAmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_addda3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DAmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_adduha3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (UHAmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_addusa3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (USAmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:45 */
rtx
gen_adduda3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (UDAmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:54 */
rtx
gen_usadduqq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (UQQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:54 */
rtx
gen_usadduhq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (UHQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:54 */
rtx
gen_usadduha3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (UHAmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:54 */
rtx
gen_usaddv4uqq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V4UQQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:54 */
rtx
gen_usaddv2uhq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V2UHQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:54 */
rtx
gen_usaddv2uha3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V2UHAmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:66 */
rtx
gen_ssaddhq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (HQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:66 */
rtx
gen_ssaddsq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (SQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:66 */
rtx
gen_ssaddha3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (HAmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:66 */
rtx
gen_ssaddsa3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (SAmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:66 */
rtx
gen_ssaddv2hq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V2HQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:66 */
rtx
gen_ssaddv2ha3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V2HAmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	81))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subqq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subhq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subsq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subdq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subuqq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (UQQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subuhq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (UHQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subusq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (USQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subudq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (UDQmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subha3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HAmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subsa3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SAmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subda3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DAmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subuha3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (UHAmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subusa3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (USAmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:78 */
rtx
gen_subuda3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (UDAmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:87 */
rtx
gen_ussubuqq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (UQQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:87 */
rtx
gen_ussubuhq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (UHQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:87 */
rtx
gen_ussubuha3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (UHAmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:87 */
rtx
gen_ussubv4uqq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V4UQQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:87 */
rtx
gen_ussubv2uhq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V2UHQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:87 */
rtx
gen_ussubv2uha3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V2UHAmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:99 */
rtx
gen_sssubhq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (HQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:99 */
rtx
gen_sssubsq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (SQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:99 */
rtx
gen_sssubha3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (HAmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:99 */
rtx
gen_sssubsa3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (SAmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:99 */
rtx
gen_sssubv2hq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V2HQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:99 */
rtx
gen_sssubv2ha3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V2HAmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	83))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:111 */
rtx
gen_ssmulv2hq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MULT (V2HQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	110)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:111 */
rtx
gen_ssmulhq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MULT (HQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	110)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:111 */
rtx
gen_ssmulsq3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MULT (SQmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (2,
		operand1,
		operand2),
	110)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:124 */
rtx
gen_ssmaddsqdq4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (DQmode,
	gen_rtx_SS_MULT (DQmode,
	gen_rtx_SAT_FRACT (DQmode,
	operand1),
	gen_rtx_SAT_FRACT (DQmode,
	operand2)),
	operand3)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	120))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-fixed.md:141 */
rtx
gen_ssmsubsqdq4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (DQmode,
	operand3,
	gen_rtx_SS_MULT (DQmode,
	gen_rtx_SAT_FRACT (DQmode,
	operand1),
	gen_rtx_SAT_FRACT (DQmode,
	operand2)))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCDSPmode,
	185),
	gen_rtx_UNSPEC (CCDSPmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	121))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:112 */
rtx
gen_movv2si_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:112 */
rtx
gen_movv4hi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:112 */
rtx
gen_movv8qi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:133 */
rtx
gen_loongson_vec_init1_v4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (1,
		gen_rtx_TRUNCATE (HImode,
	operand1)),
	202));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:133 */
rtx
gen_loongson_vec_init1_v8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (1,
		gen_rtx_TRUNCATE (QImode,
	operand1)),
	202));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:156 */
rtx
gen_vec_pack_ssat_v2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand2)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:156 */
rtx
gen_vec_pack_ssat_v4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand2)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:168 */
rtx
gen_vec_pack_usat_v4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_US_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_US_TRUNCATE (V4QImode,
	operand2)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:180 */
rtx
gen_addv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:180 */
rtx
gen_addv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:180 */
rtx
gen_addv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V8QImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:194 */
rtx
gen_loongson_paddd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	214));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:204 */
rtx
gen_ssaddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:204 */
rtx
gen_ssaddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V8QImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:213 */
rtx
gen_usaddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:213 */
rtx
gen_usaddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V8QImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:222 */
rtx
gen_loongson_pandn_w (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2SImode,
	gen_rtx_NOT (V2SImode,
	operand1),
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:222 */
rtx
gen_loongson_pandn_h (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4HImode,
	gen_rtx_NOT (V4HImode,
	operand1),
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:222 */
rtx
gen_loongson_pandn_b (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8QImode,
	gen_rtx_NOT (V8QImode,
	operand1),
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:222 */
rtx
gen_loongson_pandn_d (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	gen_rtx_NOT (DImode,
	operand1),
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:232 */
rtx
gen_andv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:232 */
rtx
gen_andv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:232 */
rtx
gen_andv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8QImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:241 */
rtx
gen_iorv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:241 */
rtx
gen_iorv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:241 */
rtx
gen_iorv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V8QImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:250 */
rtx
gen_xorv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:250 */
rtx
gen_xorv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:250 */
rtx
gen_xorv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V8QImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:269 */
rtx
gen_one_cmplv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V2SImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:269 */
rtx
gen_one_cmplv4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V4HImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:269 */
rtx
gen_one_cmplv8qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V8QImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:277 */
rtx
gen_loongson_pavgh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	197));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:277 */
rtx
gen_loongson_pavgb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	197));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:287 */
rtx
gen_loongson_pcmpeqw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	198));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:287 */
rtx
gen_loongson_pcmpeqh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	198));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:287 */
rtx
gen_loongson_pcmpeqb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	198));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:297 */
rtx
gen_loongson_pcmpgtw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	199));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:297 */
rtx
gen_loongson_pcmpgth (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	199));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:297 */
rtx
gen_loongson_pcmpgtb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	199));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:307 */
rtx
gen_loongson_pextrh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	200));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:317 */
rtx
gen_loongson_pinsrh_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:329 */
rtx
gen_loongson_pinsrh_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:341 */
rtx
gen_loongson_pinsrh_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:353 */
rtx
gen_loongson_pinsrh_3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)]))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:389 */
rtx
gen_loongson_pmaddhw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	203));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:412 */
rtx
gen_smaxv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:432 */
rtx
gen_umaxv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V8QImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:441 */
rtx
gen_sminv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:461 */
rtx
gen_uminv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V8QImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:470 */
rtx
gen_loongson_pmovmskb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (1,
		operand1),
	204));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:479 */
rtx
gen_umulv4hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	205));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:489 */
rtx
gen_smulv4hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	206));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:499 */
rtx
gen_mulv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:508 */
rtx
gen_loongson_pmuluw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	207));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:518 */
rtx
gen_loongson_pasubub (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	208));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:528 */
rtx
gen_loongson_biadd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (1,
		operand1),
	209));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:536 */
rtx
gen_reduc_uplus_v8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (1,
		operand1),
	209));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:545 */
rtx
gen_loongson_psadbh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	210));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:555 */
rtx
gen_loongson_pshufh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	211));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:565 */
rtx
gen_ashlv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:565 */
rtx
gen_ashlv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:574 */
rtx
gen_ashrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:574 */
rtx
gen_ashrv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:583 */
rtx
gen_lshrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:583 */
rtx
gen_lshrv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:592 */
rtx
gen_subv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:592 */
rtx
gen_subv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:592 */
rtx
gen_subv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8QImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:604 */
rtx
gen_loongson_psubd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	215));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:614 */
rtx
gen_sssubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:614 */
rtx
gen_sssubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V8QImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:623 */
rtx
gen_ussubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V4HImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:623 */
rtx
gen_ussubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8QImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:632 */
rtx
gen_loongson_punpckhbh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:646 */
rtx
gen_loongson_punpckhhw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:658 */
rtx
gen_loongson_punpckhhw_qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:672 */
rtx
gen_loongson_punpckhwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:683 */
rtx
gen_loongson_punpckhwd_qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:697 */
rtx
gen_loongson_punpckhwd_hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:710 */
rtx
gen_loongson_punpcklbh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:724 */
rtx
gen_loongson_punpcklhw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:750 */
rtx
gen_loongson_punpcklwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:837 */
rtx
gen_vec_shl_v2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	216));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:837 */
rtx
gen_vec_shl_v4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	216));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:837 */
rtx
gen_vec_shl_v8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	216));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:837 */
rtx
gen_vec_shl_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	216));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:846 */
rtx
gen_vec_shr_v2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	217));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:846 */
rtx
gen_vec_shr_v4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	217));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:846 */
rtx
gen_vec_shr_v8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	217));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:846 */
rtx
gen_vec_shr_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	217));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:913 */
rtx
gen_divsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:913 */
rtx
gen_udivsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:913 */
rtx
gen_divdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:913 */
rtx
gen_udivdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:927 */
rtx
gen_modsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MOD (SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:927 */
rtx
gen_umodsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMOD (SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:927 */
rtx
gen_moddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MOD (DImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:927 */
rtx
gen_umoddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMOD (DImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1078 */
rtx
gen_ctrapsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1084 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_conditional_trap (operands[0]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_TRAP_IF (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1078 */
rtx
gen_ctrapdi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1084 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_conditional_trap (operands[0]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_TRAP_IF (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1115 */
rtx
gen_addsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1115 */
rtx
gen_adddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1166 */
extern rtx gen_split_1067 (rtx, rtx *);
rtx
gen_split_1067 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1177 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val >= 0)
    {
      operands[1] = GEN_INT (0x7f);
      operands[2] = GEN_INT (val - 0x7f);
    }
  else
    {
      operands[1] = GEN_INT (- 0x80);
      operands[2] = GEN_INT (val + 0x80);
    }
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1192 */
extern rtx gen_split_1068 (rtx, rtx *);
rtx
gen_split_1068 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1204 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  HOST_WIDE_INT val = INTVAL (operands[2]);

  if (val >= 0)
    {
      operands[2] = GEN_INT (0x7);
      operands[3] = GEN_INT (val - 0x7);
    }
  else
    {
      operands[2] = GEN_INT (- 0x8);
      operands[3] = GEN_INT (val + 0x8);
    }
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1219 */
extern rtx gen_split_1069 (rtx, rtx *);
rtx
gen_split_1069 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1230 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val >= 0)
    {
      operands[1] = GEN_INT (0xf);
      operands[2] = GEN_INT (val - 0xf);
    }
  else
    {
      operands[1] = GEN_INT (- 0x10);
      operands[2] = GEN_INT (val + 0x10);
    }
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1245 */
extern rtx gen_split_1070 (rtx, rtx *);
rtx
gen_split_1070 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1257 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  HOST_WIDE_INT val = INTVAL (operands[2]);

  if (val >= 0)
    {
      operands[2] = GEN_INT (0x7);
      operands[3] = GEN_INT (val - 0x7);
    }
  else
    {
      operands[2] = GEN_INT (- 0x8);
      operands[3] = GEN_INT (val + 0x8);
    }
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1286 */
extern rtx gen_split_1071 (rtx, rtx *);
rtx
gen_split_1071 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1295 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[3] = gen_lowpart (SImode, operands[0]); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1376 */
rtx
gen_mulsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1376 */
rtx
gen_muldf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1461 */
rtx
gen_mulsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1466 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx lo;

  if (TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A)
    emit_insn (gen_mulsi3_mul3_loongson (operands[0], operands[1],
                                             operands[2]));
  else if (ISA_HAS_MUL3)
    emit_insn (gen_mulsi3_mul3 (operands[0], operands[1], operands[2]));
  else if (TARGET_MIPS16)
    {
      lo = gen_rtx_REG (SImode, LO_REGNUM);
      emit_insn (gen_mulsi3_internal (lo, operands[1], operands[2]));
      emit_move_insn (operands[0], lo);
    }
  else if (TARGET_FIX_R4000)
    emit_insn (gen_mulsi3_r4000 (operands[0], operands[1], operands[2]));
  else
    emit_insn
      (gen_mulsi3_internal (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1461 */
rtx
gen_muldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1466 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx lo;

  if (TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A)
    emit_insn (gen_muldi3_mul3_loongson (operands[0], operands[1],
                                             operands[2]));
  else if (ISA_HAS_DMUL3)
    emit_insn (gen_muldi3_mul3 (operands[0], operands[1], operands[2]));
  else if (TARGET_MIPS16)
    {
      lo = gen_rtx_REG (DImode, LO_REGNUM);
      emit_insn (gen_muldi3_internal (lo, operands[1], operands[2]));
      emit_move_insn (operands[0], lo);
    }
  else if (TARGET_FIX_R4000)
    emit_insn (gen_muldi3_r4000 (operands[0], operands[1], operands[2]));
  else
    emit_insn
      (gen_muldi3_internal (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1526 */
extern rtx gen_peephole2_1076 (rtx, rtx *);
rtx
gen_peephole2_1076 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1569 */
extern rtx gen_peephole2_1077 (rtx, rtx *);
rtx
gen_peephole2_1077 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	copy_rtx (operand0))),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2)),
	copy_rtx (operand0))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1642 */
extern rtx gen_split_1078 (rtx, rtx *);
rtx
gen_split_1078 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 1654 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand5),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1698 */
extern rtx gen_split_1079 (rtx, rtx *);
rtx
gen_split_1079 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 1716 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_NEG (SImode,
	operand3)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand2,
	copy_rtx (operand5)),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1759 */
extern rtx gen_peephole2_1080 (rtx, rtx *);
rtx
gen_peephole2_1080 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand2,
	copy_rtx (operand1)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1786 */
extern rtx gen_peephole2_1081 (rtx, rtx *);
rtx
gen_peephole2_1081 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 1, "d", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 1801 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[5] = XEXP (operands[4], GET_CODE (operands[4]) == PLUS ? 0 : 1);
  operands[6] = gen_rtx_fmt_ee (GET_CODE (operands[4]), SImode,
				operands[2], operands[0]);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  operand6 = operands[6];
  (void) operand6;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand5),
		gen_rtx_CLOBBER (VOIDmode,
	operand1))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand6));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1816 */
extern rtx gen_peephole2_1082 (rtx, rtx *);
rtx
gen_peephole2_1082 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 2, "d", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 1834 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[5] = XEXP (operands[3], GET_CODE (operands[3]) == PLUS ? 0 : 1);
  operands[6] = gen_rtx_fmt_ee (GET_CODE (operands[3]), SImode,
				operands[2], operands[0]);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  operand6 = operands[6];
  (void) operand6;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand5),
		gen_rtx_CLOBBER (VOIDmode,
	operand1))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand6));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1859 */
extern rtx gen_split_1083 (rtx, rtx *);
rtx
gen_split_1083 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 1871 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MULT (SImode,
	operand2,
	operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	copy_rtx (operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1885 */
rtx
gen_mulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1890 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mulsidi3_gen_fn fn = mips_mulsidi3_gen_fn (SIGN_EXTEND);
  emit_insn (fn (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1885 */
rtx
gen_umulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1890 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mulsidi3_gen_fn fn = mips_mulsidi3_gen_fn (ZERO_EXTEND);
  emit_insn (fn (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1896 */
rtx
gen_mulsidi3_32bit_mips16 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1901 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  hilo = gen_rtx_REG (DImode, MD_REG_FIRST);
  emit_insn (gen_mulsidi3_32bit (hilo, operands[1], operands[2]));
  emit_move_insn (operands[0], hilo);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1896 */
rtx
gen_umulsidi3_32bit_mips16 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1901 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  hilo = gen_rtx_REG (DImode, MD_REG_FIRST);
  emit_insn (gen_umulsidi3_32bit (hilo, operands[1], operands[2]));
  emit_move_insn (operands[0], hilo);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1938 */
extern rtx gen_split_1088 (rtx, rtx *);
rtx
gen_split_1088 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1948 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  emit_insn (gen_mulsidi3_64bit_split (operands[0], operands[1],
					  operands[2], operands[4]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1938 */
extern rtx gen_split_1089 (rtx, rtx *);
rtx
gen_split_1089 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1948 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  emit_insn (gen_umulsidi3_64bit_split (operands[0], operands[1],
					  operands[2], operands[4]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1960 */
rtx
gen_mulsidi3_64bit_mips16 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1965 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  emit_insn (gen_mulsidi3_64bit_split (operands[0], operands[1],
					  operands[2], gen_reg_rtx (DImode)));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1960 */
rtx
gen_umulsidi3_64bit_mips16 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1965 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  emit_insn (gen_umulsidi3_64bit_split (operands[0], operands[1],
					  operands[2], gen_reg_rtx (DImode)));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1971 */
rtx
gen_mulsidi3_64bit_split (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1977 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  hilo = gen_rtx_REG (TImode, MD_REG_FIRST);
  emit_insn (gen_mulsidi3_64bit_hilo (hilo, operands[1], operands[2]));

  emit_move_insn (operands[0], gen_rtx_REG (DImode, LO_REGNUM));
  emit_insn (gen_mfhidi_ti (operands[3], hilo));

  if (ISA_HAS_EXT_INS)
    emit_insn (gen_insvdi (operands[0], GEN_INT (32), GEN_INT (32),
			   operands[3]));
  else
    {
      /* Zero-extend the low part.  */
      mips_emit_binary (ASHIFT, operands[0], operands[0], GEN_INT (32));
      mips_emit_binary (LSHIFTRT, operands[0], operands[0], GEN_INT (32));

      /* Shift the high part into place.  */
      mips_emit_binary (ASHIFT, operands[3], operands[3], GEN_INT (32));

      /* OR the two halves together.  */
      mips_emit_binary (IOR, operands[0], operands[0], operands[3]);
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:1971 */
rtx
gen_umulsidi3_64bit_split (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1977 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  hilo = gen_rtx_REG (TImode, MD_REG_FIRST);
  emit_insn (gen_umulsidi3_64bit_hilo (hilo, operands[1], operands[2]));

  emit_move_insn (operands[0], gen_rtx_REG (DImode, LO_REGNUM));
  emit_insn (gen_mfhidi_ti (operands[3], hilo));

  if (ISA_HAS_EXT_INS)
    emit_insn (gen_insvdi (operands[0], GEN_INT (32), GEN_INT (32),
			   operands[3]));
  else
    {
      /* Zero-extend the low part.  */
      mips_emit_binary (ASHIFT, operands[0], operands[0], GEN_INT (32));
      mips_emit_binary (LSHIFTRT, operands[0], operands[0], GEN_INT (32));

      /* Shift the high part into place.  */
      mips_emit_binary (ASHIFT, operands[3], operands[3], GEN_INT (32));

      /* OR the two halves together.  */
      mips_emit_binary (IOR, operands[0], operands[0], operands[3]);
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2068 */
rtx
gen_smulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2076 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (ISA_HAS_MULHI)
    emit_insn (gen_smulsi3_highpart_mulhi_internal (operands[0],
						       operands[1],
						       operands[2]));
  else if (TARGET_MIPS16)
    emit_insn (gen_smulsi3_highpart_split (operands[0], operands[1],
					      operands[2]));
  else
    emit_insn (gen_smulsi3_highpart_internal (operands[0], operands[1],
					         operands[2]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2068 */
rtx
gen_umulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2076 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (ISA_HAS_MULHI)
    emit_insn (gen_umulsi3_highpart_mulhi_internal (operands[0],
						       operands[1],
						       operands[2]));
  else if (TARGET_MIPS16)
    emit_insn (gen_umulsi3_highpart_split (operands[0], operands[1],
					      operands[2]));
  else
    emit_insn (gen_umulsi3_highpart_internal (operands[0], operands[1],
					         operands[2]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2090 */
extern rtx gen_split_1096 (rtx, rtx *);
rtx
gen_split_1096 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2102 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  emit_insn (gen_smulsi3_highpart_split (operands[0], operands[1],
					    operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2090 */
extern rtx gen_split_1097 (rtx, rtx *);
rtx
gen_split_1097 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2102 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  emit_insn (gen_umulsi3_highpart_split (operands[0], operands[1],
					    operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2111 */
rtx
gen_smulsi3_highpart_split (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2119 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  if (TARGET_64BIT)
    {
      hilo = gen_rtx_REG (TImode, MD_REG_FIRST);
      emit_insn (gen_mulsidi3_64bit_hilo (hilo, operands[1], operands[2]));
      emit_insn (gen_mfhisi_ti (operands[0], hilo));
    }
  else
    {
      hilo = gen_rtx_REG (DImode, MD_REG_FIRST);
      emit_insn (gen_mulsidi3_32bit (hilo, operands[1], operands[2]));
      emit_insn (gen_mfhisi_di (operands[0], hilo));
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2111 */
rtx
gen_umulsi3_highpart_split (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2119 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  if (TARGET_64BIT)
    {
      hilo = gen_rtx_REG (TImode, MD_REG_FIRST);
      emit_insn (gen_umulsidi3_64bit_hilo (hilo, operands[1], operands[2]));
      emit_insn (gen_mfhisi_ti (operands[0], hilo));
    }
  else
    {
      hilo = gen_rtx_REG (DImode, MD_REG_FIRST);
      emit_insn (gen_umulsidi3_32bit (hilo, operands[1], operands[2]));
      emit_insn (gen_mfhisi_di (operands[0], hilo));
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2169 */
rtx
gen_smuldi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2177 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    emit_insn (gen_smuldi3_highpart_split (operands[0], operands[1],
					      operands[2]));
  else
    emit_insn (gen_smuldi3_highpart_internal (operands[0], operands[1],
						 operands[2]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2169 */
rtx
gen_umuldi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2177 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    emit_insn (gen_umuldi3_highpart_split (operands[0], operands[1],
					      operands[2]));
  else
    emit_insn (gen_umuldi3_highpart_internal (operands[0], operands[1],
						 operands[2]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2187 */
extern rtx gen_split_1102 (rtx, rtx *);
rtx
gen_split_1102 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2201 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  emit_insn (gen_smuldi3_highpart_split (operands[0], operands[1],
					    operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2187 */
extern rtx gen_split_1103 (rtx, rtx *);
rtx
gen_split_1103 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2201 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  emit_insn (gen_umuldi3_highpart_split (operands[0], operands[1],
					    operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2210 */
rtx
gen_smuldi3_highpart_split (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2218 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  hilo = gen_rtx_REG (TImode, MD_REG_FIRST);
  emit_insn (gen_mulditi3_internal (hilo, operands[1], operands[2]));
  emit_insn (gen_mfhidi_ti (operands[0], hilo));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2210 */
rtx
gen_umuldi3_highpart_split (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2218 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  hilo = gen_rtx_REG (TImode, MD_REG_FIRST);
  emit_insn (gen_umulditi3_internal (hilo, operands[1], operands[2]));
  emit_insn (gen_mfhidi_ti (operands[0], hilo));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2227 */
rtx
gen_mulditi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2232 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  if (TARGET_MIPS16)
    {
      hilo = gen_rtx_REG (TImode, MD_REG_FIRST);
      emit_insn (gen_mulditi3_internal (hilo, operands[1], operands[2]));
      emit_move_insn (operands[0], hilo);
    }
  else if (TARGET_FIX_R4000)
    emit_insn (gen_mulditi3_r4000 (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_mulditi3_internal (operands[0], operands[1],
					 operands[2]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2227 */
rtx
gen_umulditi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2232 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  if (TARGET_MIPS16)
    {
      hilo = gen_rtx_REG (TImode, MD_REG_FIRST);
      emit_insn (gen_umulditi3_internal (hilo, operands[1], operands[2]));
      emit_move_insn (operands[0], hilo);
    }
  else if (TARGET_FIX_R4000)
    emit_insn (gen_umulditi3_r4000 (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_umulditi3_internal (operands[0], operands[1],
					 operands[2]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2486 */
rtx
gen_divsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2491 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (const_1_operand (operands[1], SFmode))
    if (!(ISA_HAS_FP4 && flag_unsafe_math_optimizations))
      operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2486 */
rtx
gen_divdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2491 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (const_1_operand (operands[1], DFmode))
    if (!(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations))
      operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2486 */
rtx
gen_divv2sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2491 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (const_1_operand (operands[1], V2SFmode))
    if (!(TARGET_SB1 && flag_unsafe_math_optimizations))
      operands[1] = force_reg (V2SFmode, operands[1]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (V2SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2547 */
rtx
gen_divmodsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2555 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    {
      emit_insn (gen_divmodsi4_split (operands[3], operands[1],
					  operands[2]));
      emit_move_insn (operands[0], gen_rtx_REG (SImode, LO_REGNUM));
    }
  else
    emit_insn (gen_divmodsi4_internal (operands[0], operands[1],
					   operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2547 */
rtx
gen_divmoddi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2555 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    {
      emit_insn (gen_divmoddi4_split (operands[3], operands[1],
					  operands[2]));
      emit_move_insn (operands[0], gen_rtx_REG (DImode, LO_REGNUM));
    }
  else
    emit_insn (gen_divmoddi4_internal (operands[0], operands[1],
					   operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2568 */
extern rtx gen_split_1113 (rtx, rtx *);
rtx
gen_split_1113 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2579 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  emit_insn (gen_divmodsi4_split (operands[3], operands[1], operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2568 */
extern rtx gen_split_1114 (rtx, rtx *);
rtx
gen_split_1114 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2579 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  emit_insn (gen_divmoddi4_split (operands[3], operands[1], operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2587 */
rtx
gen_udivmodsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2595 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    {
      emit_insn (gen_udivmodsi4_split (operands[3], operands[1],
					   operands[2]));
      emit_move_insn (operands[0], gen_rtx_REG (SImode, LO_REGNUM));
    }
  else
    emit_insn (gen_udivmodsi4_internal (operands[0], operands[1],
					    operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2587 */
rtx
gen_udivmoddi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2595 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    {
      emit_insn (gen_udivmoddi4_split (operands[3], operands[1],
					   operands[2]));
      emit_move_insn (operands[0], gen_rtx_REG (DImode, LO_REGNUM));
    }
  else
    emit_insn (gen_udivmoddi4_internal (operands[0], operands[1],
					    operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2608 */
extern rtx gen_split_1117 (rtx, rtx *);
rtx
gen_split_1117 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2619 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  emit_insn (gen_udivmodsi4_split (operands[3], operands[1], operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2608 */
extern rtx gen_split_1118 (rtx, rtx *);
rtx
gen_split_1118 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2619 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  emit_insn (gen_udivmoddi4_split (operands[3], operands[1], operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2627 */
rtx
gen_divmodsi4_split (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2632 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  if (TARGET_64BIT)
    {
      hilo = gen_rtx_REG (TImode, MD_REG_FIRST);
      emit_insn (gen_divmodsi4_hilo_ti (hilo, operands[1],
					       operands[2]));
      emit_insn (gen_mfhisi_ti (operands[0], hilo));
    }
  else
    {
      hilo = gen_rtx_REG (DImode, MD_REG_FIRST);
      emit_insn (gen_divmodsi4_hilo_di (hilo, operands[1],
					       operands[2]));
      emit_insn (gen_mfhisi_di (operands[0], hilo));
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MOD (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2627 */
rtx
gen_udivmodsi4_split (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2632 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  if (TARGET_64BIT)
    {
      hilo = gen_rtx_REG (TImode, MD_REG_FIRST);
      emit_insn (gen_udivmodsi4_hilo_ti (hilo, operands[1],
					       operands[2]));
      emit_insn (gen_mfhisi_ti (operands[0], hilo));
    }
  else
    {
      hilo = gen_rtx_REG (DImode, MD_REG_FIRST);
      emit_insn (gen_udivmodsi4_hilo_di (hilo, operands[1],
					       operands[2]));
      emit_insn (gen_mfhisi_di (operands[0], hilo));
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMOD (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2627 */
rtx
gen_divmoddi4_split (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2632 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  if (TARGET_64BIT)
    {
      hilo = gen_rtx_REG (TImode, MD_REG_FIRST);
      emit_insn (gen_divmoddi4_hilo_ti (hilo, operands[1],
					       operands[2]));
      emit_insn (gen_mfhidi_ti (operands[0], hilo));
    }
  else
    {
      hilo = gen_rtx_REG (DImode, MD_REG_FIRST);
      emit_insn (gen_divmoddi4_hilo_di (hilo, operands[1],
					       operands[2]));
      emit_insn (gen_mfhidi_di (operands[0], hilo));
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MOD (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2627 */
rtx
gen_udivmoddi4_split (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2632 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx hilo;

  if (TARGET_64BIT)
    {
      hilo = gen_rtx_REG (TImode, MD_REG_FIRST);
      emit_insn (gen_udivmoddi4_hilo_ti (hilo, operands[1],
					       operands[2]));
      emit_insn (gen_mfhidi_ti (operands[0], hilo));
    }
  else
    {
      hilo = gen_rtx_REG (DImode, MD_REG_FIRST);
      emit_insn (gen_udivmoddi4_hilo_di (hilo, operands[1],
					       operands[2]));
      emit_insn (gen_mfhidi_di (operands[0], hilo));
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMOD (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2854 */
rtx
gen_andsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2854 */
rtx
gen_anddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2944 */
rtx
gen_iorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2949 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    operands[2] = force_reg (SImode, operands[2]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2944 */
rtx
gen_iordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2949 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    operands[2] = force_reg (DImode, operands[2]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2974 */
rtx
gen_xorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:2974 */
rtx
gen_xordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3104 */
rtx
gen_zero_extendsidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3109 */
extern rtx gen_split_1130 (rtx, rtx *);
rtx
gen_split_1130 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 3121 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[1] = gen_lowpart (DImode, operands[1]); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3138 */
extern rtx gen_split_1131 (rtx, rtx *);
rtx
gen_split_1131 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3148 */
rtx
gen_zero_extendqisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3152 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16 && !GENERATE_MIPS16E
      && !memory_operand (operands[1], QImode))
    {
      emit_insn (gen_andsi3 (operands[0],
				     gen_lowpart (SImode, operands[1]),
				     force_reg (SImode,
						GEN_INT (0x00ff))));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3148 */
rtx
gen_zero_extendqidi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3152 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16 && !GENERATE_MIPS16E
      && !memory_operand (operands[1], QImode))
    {
      emit_insn (gen_anddi3 (operands[0],
				     gen_lowpart (DImode, operands[1]),
				     force_reg (DImode,
						GEN_INT (0x00ff))));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3148 */
rtx
gen_zero_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3152 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16 && !GENERATE_MIPS16E
      && !memory_operand (operands[1], HImode))
    {
      emit_insn (gen_andsi3 (operands[0],
				     gen_lowpart (SImode, operands[1]),
				     force_reg (SImode,
						GEN_INT (0xffff))));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3148 */
rtx
gen_zero_extendhidi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3152 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16 && !GENERATE_MIPS16E
      && !memory_operand (operands[1], HImode))
    {
      emit_insn (gen_anddi3 (operands[0],
				     gen_lowpart (DImode, operands[1]),
				     force_reg (DImode,
						GEN_INT (0xffff))));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3192 */
rtx
gen_zero_extendqihi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3196 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16 && !memory_operand (operands[1], QImode))
    {
      emit_insn (gen_zero_extendqisi2 (gen_lowpart (SImode, operands[0]),
				       operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3269 */
extern rtx gen_split_1137 (rtx, rtx *);
rtx
gen_split_1137 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 3279 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  emit_note (NOTE_INSN_DELETED);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3286 */
rtx
gen_extendqisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3286 */
rtx
gen_extendqidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3286 */
rtx
gen_extendhisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3286 */
rtx
gen_extendhidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3301 */
extern rtx gen_split_1142 (rtx, rtx *);
rtx
gen_split_1142 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3312 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (SImode)
			 - GET_MODE_BITSIZE (QImode));
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3301 */
extern rtx gen_split_1143 (rtx, rtx *);
rtx
gen_split_1143 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3312 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[1] = gen_lowpart (DImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (DImode)
			 - GET_MODE_BITSIZE (QImode));
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3301 */
extern rtx gen_split_1144 (rtx, rtx *);
rtx
gen_split_1144 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3312 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (SImode)
			 - GET_MODE_BITSIZE (HImode));
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3301 */
extern rtx gen_split_1145 (rtx, rtx *);
rtx
gen_split_1145 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3312 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[1] = gen_lowpart (DImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (DImode)
			 - GET_MODE_BITSIZE (HImode));
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3331 */
rtx
gen_extendqihi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3346 */
extern rtx gen_split_1147 (rtx, rtx *);
rtx
gen_split_1147 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3357 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (SImode)
			 - GET_MODE_BITSIZE (QImode));
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3380 */
extern rtx gen_split_1148 (rtx, rtx *);
rtx
gen_split_1148 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 3393 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = gen_lowpart (DImode, operands[0]);
  operands[3] = GEN_INT (BITS_PER_WORD - GET_MODE_BITSIZE (QImode));
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand2),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3380 */
extern rtx gen_split_1149 (rtx, rtx *);
rtx
gen_split_1149 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 3393 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = gen_lowpart (DImode, operands[0]);
  operands[3] = GEN_INT (BITS_PER_WORD - GET_MODE_BITSIZE (HImode));
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand2),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3400 */
extern rtx gen_split_1150 (rtx, rtx *);
rtx
gen_split_1150 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 3413 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = gen_lowpart (DImode, operands[0]);
  operands[3] = GEN_INT (BITS_PER_WORD - GET_MODE_BITSIZE (QImode));
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand2),
	copy_rtx (operand3)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3400 */
extern rtx gen_split_1151 (rtx, rtx *);
rtx
gen_split_1151 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 3413 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = gen_lowpart (DImode, operands[0]);
  operands[3] = GEN_INT (BITS_PER_WORD - GET_MODE_BITSIZE (HImode));
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand2),
	copy_rtx (operand3)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3420 */
extern rtx gen_split_1152 (rtx, rtx *);
rtx
gen_split_1152 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3433 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = gen_lowpart (DImode, operands[0]);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (56)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (56)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3476 */
rtx
gen_fix_truncdfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3480 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (!ISA_HAS_TRUNC_W)
    {
      emit_insn (gen_fix_truncdfsi2_macro (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3513 */
rtx
gen_fix_truncsfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3517 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (!ISA_HAS_TRUNC_W)
    {
      emit_insn (gen_fix_truncsfsi2_macro (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3611 */
rtx
gen_fixuns_truncdfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3615 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx reg1 = gen_reg_rtx (DFmode);
  rtx reg2 = gen_reg_rtx (DFmode);
  rtx reg3 = gen_reg_rtx (SImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  rtx test;
  REAL_VALUE_TYPE offset;

  real_2expN (&offset, 31, DFmode);

  if (reg1)			/* Turn off complaints about unreached code.  */
    {
      mips_emit_move (reg1, CONST_DOUBLE_FROM_REAL_VALUE (offset, DFmode));
      do_pending_stack_adjust ();

      test = gen_rtx_GE (VOIDmode, operands[1], reg1);
      emit_jump_insn (gen_cbranchdf4 (test, operands[1], reg1, label1));

      emit_insn (gen_fix_truncdfsi2 (operands[0], operands[1]));
      emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx,
				   gen_rtx_LABEL_REF (VOIDmode, label2)));
      emit_barrier ();

      emit_label (label1);
      mips_emit_move (reg2, gen_rtx_MINUS (DFmode, operands[1], reg1));
      mips_emit_move (reg3, GEN_INT (trunc_int_for_mode
				     (BITMASK_HIGH, SImode)));

      emit_insn (gen_fix_truncdfsi2 (operands[0], reg2));
      emit_insn (gen_iorsi3 (operands[0], operands[0], reg3));

      emit_label (label2);

      /* Allow REG_NOTES to be set on last insn (labels don't have enough
	 fields, and can't be used for REG_NOTES anyway).  */
      emit_use (stack_pointer_rtx);
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3657 */
rtx
gen_fixuns_truncdfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3661 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx reg1 = gen_reg_rtx (DFmode);
  rtx reg2 = gen_reg_rtx (DFmode);
  rtx reg3 = gen_reg_rtx (DImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  rtx test;
  REAL_VALUE_TYPE offset;

  real_2expN (&offset, 63, DFmode);

  mips_emit_move (reg1, CONST_DOUBLE_FROM_REAL_VALUE (offset, DFmode));
  do_pending_stack_adjust ();

  test = gen_rtx_GE (VOIDmode, operands[1], reg1);
  emit_jump_insn (gen_cbranchdf4 (test, operands[1], reg1, label1));

  emit_insn (gen_fix_truncdfdi2 (operands[0], operands[1]));
  emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx,
			       gen_rtx_LABEL_REF (VOIDmode, label2)));
  emit_barrier ();

  emit_label (label1);
  mips_emit_move (reg2, gen_rtx_MINUS (DFmode, operands[1], reg1));
  mips_emit_move (reg3, GEN_INT (BITMASK_HIGH));
  emit_insn (gen_ashldi3 (reg3, reg3, GEN_INT (32)));

  emit_insn (gen_fix_truncdfdi2 (operands[0], reg2));
  emit_insn (gen_iordi3 (operands[0], operands[0], reg3));

  emit_label (label2);

  /* Allow REG_NOTES to be set on last insn (labels don't have enough
     fields, and can't be used for REG_NOTES anyway).  */
  emit_use (stack_pointer_rtx);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3700 */
rtx
gen_fixuns_truncsfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3704 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx reg1 = gen_reg_rtx (SFmode);
  rtx reg2 = gen_reg_rtx (SFmode);
  rtx reg3 = gen_reg_rtx (SImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  rtx test;
  REAL_VALUE_TYPE offset;

  real_2expN (&offset, 31, SFmode);

  mips_emit_move (reg1, CONST_DOUBLE_FROM_REAL_VALUE (offset, SFmode));
  do_pending_stack_adjust ();

  test = gen_rtx_GE (VOIDmode, operands[1], reg1);
  emit_jump_insn (gen_cbranchsf4 (test, operands[1], reg1, label1));

  emit_insn (gen_fix_truncsfsi2 (operands[0], operands[1]));
  emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx,
			       gen_rtx_LABEL_REF (VOIDmode, label2)));
  emit_barrier ();

  emit_label (label1);
  mips_emit_move (reg2, gen_rtx_MINUS (SFmode, operands[1], reg1));
  mips_emit_move (reg3, GEN_INT (trunc_int_for_mode
				 (BITMASK_HIGH, SImode)));

  emit_insn (gen_fix_truncsfsi2 (operands[0], reg2));
  emit_insn (gen_iorsi3 (operands[0], operands[0], reg3));

  emit_label (label2);

  /* Allow REG_NOTES to be set on last insn (labels don't have enough
     fields, and can't be used for REG_NOTES anyway).  */
  emit_use (stack_pointer_rtx);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3743 */
rtx
gen_fixuns_truncsfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3747 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx reg1 = gen_reg_rtx (SFmode);
  rtx reg2 = gen_reg_rtx (SFmode);
  rtx reg3 = gen_reg_rtx (DImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  rtx test;
  REAL_VALUE_TYPE offset;

  real_2expN (&offset, 63, SFmode);

  mips_emit_move (reg1, CONST_DOUBLE_FROM_REAL_VALUE (offset, SFmode));
  do_pending_stack_adjust ();

  test = gen_rtx_GE (VOIDmode, operands[1], reg1);
  emit_jump_insn (gen_cbranchsf4 (test, operands[1], reg1, label1));

  emit_insn (gen_fix_truncsfdi2 (operands[0], operands[1]));
  emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx,
			       gen_rtx_LABEL_REF (VOIDmode, label2)));
  emit_barrier ();

  emit_label (label1);
  mips_emit_move (reg2, gen_rtx_MINUS (SFmode, operands[1], reg1));
  mips_emit_move (reg3, GEN_INT (BITMASK_HIGH));
  emit_insn (gen_ashldi3 (reg3, reg3, GEN_INT (32)));

  emit_insn (gen_fix_truncsfdi2 (operands[0], reg2));
  emit_insn (gen_iordi3 (operands[0], operands[0], reg3));

  emit_label (label2);

  /* Allow REG_NOTES to be set on last insn (labels don't have enough
     fields, and can't be used for REG_NOTES anyway).  */
  emit_use (stack_pointer_rtx);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3794 */
rtx
gen_extvmisalignsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3800 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_expand_ext_as_unaligned_load (operands[0], operands[1],
					 INTVAL (operands[2]),
					 INTVAL (operands[3]),
					 /*unsigned=*/ false))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3794 */
rtx
gen_extvmisaligndi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3800 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_expand_ext_as_unaligned_load (operands[0], operands[1],
					 INTVAL (operands[2]),
					 INTVAL (operands[3]),
					 /*unsigned=*/ false))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTRACT (DImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3810 */
rtx
gen_extvsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3816 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (UINTVAL (operands[2]) > 32)
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3810 */
rtx
gen_extvdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3816 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (UINTVAL (operands[2]) > 32)
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTRACT (DImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3831 */
rtx
gen_extzvmisalignsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3837 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_expand_ext_as_unaligned_load (operands[0], operands[1],
					 INTVAL (operands[2]),
					 INTVAL (operands[3]),
					 /*unsigned=*/ true))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3831 */
rtx
gen_extzvmisaligndi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3837 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_expand_ext_as_unaligned_load (operands[0], operands[1],
					 INTVAL (operands[2]),
					 INTVAL (operands[3]),
					 /*unsigned=*/ true))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (DImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3847 */
rtx
gen_extzvsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3853 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (!mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
			   INTVAL (operands[3])))
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3847 */
rtx
gen_extzvdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3853 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (!mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
			   INTVAL (operands[3])))
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (DImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3882 */
rtx
gen_insvmisalignsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3888 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_expand_ins_as_unaligned_store (operands[0], operands[3],
					  INTVAL (operands[1]),
					  INTVAL (operands[2])))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3882 */
rtx
gen_insvmisaligndi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3888 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_expand_ins_as_unaligned_store (operands[0], operands[3],
					  INTVAL (operands[1]),
					  INTVAL (operands[2])))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (DImode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3897 */
rtx
gen_insvsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3903 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (!mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
			   INTVAL (operands[2])))
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:3897 */
rtx
gen_insvdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3903 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (!mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
			   INTVAL (operands[2])))
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (DImode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4011 */
extern rtx gen_split_1171 (rtx, rtx *);
rtx
gen_split_1171 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4022 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = mips_unspec_address (operands[1], SYMBOL_64_HIGH);
  operands[3] = mips_unspec_address (operands[1], SYMBOL_64_MID);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LO_SUM (DImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LO_SUM (DImode,
	copy_rtx (operand0),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4036 */
extern rtx gen_peephole2_1172 (rtx, rtx *);
rtx
gen_peephole2_1172 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (1, 1, "d", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 4046 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[3] = mips_unspec_address (operands[2], SYMBOL_64_HIGH);
  operands[4] = mips_unspec_address (operands[2], SYMBOL_64_LOW);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_HIGH (DImode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_LO_SUM (DImode,
	copy_rtx (operand1),
	copy_rtx (operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4064 */
extern rtx gen_split_1173 (rtx, rtx *);
rtx
gen_split_1173 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4077 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[3] = mips_unspec_address (operands[1], SYMBOL_64_HIGH);
  operands[4] = mips_unspec_address (operands[1], SYMBOL_64_LOW);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_HIGH (DImode,
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LO_SUM (DImode,
	copy_rtx (operand0),
	copy_rtx (operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_LO_SUM (DImode,
	copy_rtx (operand2),
	copy_rtx (operand4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4089 */
extern rtx gen_split_1174 (rtx, rtx *);
rtx
gen_split_1174 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	29)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4089 */
extern rtx gen_split_1175 (rtx, rtx *);
rtx
gen_split_1175 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	29)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4106 */
extern rtx gen_split_1176 (rtx, rtx *);
rtx
gen_split_1176 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4114 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = mips_unspec_address (operands[1], SYMBOL_GOTOFF_DISP);
  operands[3] = pic_offset_table_rtx;
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4106 */
extern rtx gen_split_1177 (rtx, rtx *);
rtx
gen_split_1177 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4114 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = mips_unspec_address (operands[1], SYMBOL_GOTOFF_DISP);
  operands[3] = pic_offset_table_rtx;
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4121 */
extern rtx gen_split_1178 (rtx, rtx *);
rtx
gen_split_1178 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4130 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[3] = mips_unspec_address (operands[2], SYMBOL_GOTOFF_DISP); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand3),
	26)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4121 */
extern rtx gen_split_1179 (rtx, rtx *);
rtx
gen_split_1179 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4130 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[3] = mips_unspec_address (operands[2], SYMBOL_GOTOFF_DISP); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand3),
	26)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4136 */
extern rtx gen_split_1180 (rtx, rtx *);
rtx
gen_split_1180 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4143 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[2] = mips_got_load (NULL, operands[1], SYMBOL_GOTOFF_DISP); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4136 */
extern rtx gen_split_1181 (rtx, rtx *);
rtx
gen_split_1181 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4143 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[2] = mips_got_load (NULL, operands[1], SYMBOL_GOTOFF_DISP); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4149 */
extern rtx gen_split_1182 (rtx, rtx *);
rtx
gen_split_1182 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4156 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[2] = mips_got_load (NULL, operands[1], SYMBOL_GOTOFF_PAGE); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4149 */
extern rtx gen_split_1183 (rtx, rtx *);
rtx
gen_split_1183 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4156 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[2] = mips_got_load (NULL, operands[1], SYMBOL_GOTOFF_PAGE); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4161 */
rtx
gen_unspec_got_si (rtx operand0,
	rtx operand1)
{
  return gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	26);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4161 */
rtx
gen_unspec_got_di (rtx operand0,
	rtx operand1)
{
  return gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand0,
		operand1),
	26);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4204 */
extern rtx gen_split_1186 (rtx, rtx *);
rtx
gen_split_1186 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 4209 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[1] = pic_offset_table_rtx; }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4204 */
extern rtx gen_split_1187 (rtx, rtx *);
rtx
gen_split_1187 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 4209 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[1] = pic_offset_table_rtx; }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4213 */
extern rtx gen_split_1188 (rtx, rtx *);
rtx
gen_split_1188 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4219 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_move_integer (operands[2], operands[0], INTVAL (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4213 */
extern rtx gen_split_1189 (rtx, rtx *);
rtx
gen_split_1189 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4219 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_move_integer (operands[2], operands[0], INTVAL (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4225 */
extern rtx gen_split_1190 (rtx, rtx *);
rtx
gen_split_1190 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4231 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_symbol (operands[2], operands[1],
		     MAX_MACHINE_MODE, &operands[3]);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4225 */
extern rtx gen_split_1191 (rtx, rtx *);
rtx
gen_split_1191 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4231 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_symbol (operands[2], operands[1],
		     MAX_MACHINE_MODE, &operands[3]);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4242 */
rtx
gen_movdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4246 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (DImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4310 */
extern rtx gen_split_1193 (rtx, rtx *);
rtx
gen_split_1193 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4325 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val < 0)
    operands[2] = const0_rtx;
  else if (val >= 32 * 8)
    {
      int off = val & 7;

      operands[1] = GEN_INT (0x8 + off);
      operands[2] = GEN_INT (val - off - 0x8);
    }
  else
    {
      int off = val & 7;

      operands[1] = GEN_INT (off);
      operands[2] = GEN_INT (val - off);
    }
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
rtx
gen_movsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4356 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (SImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
rtx
gen_movv2hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4356 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (V2HImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
rtx
gen_movv4qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4356 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (V4QImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
rtx
gen_movv2hq (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4356 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (V2HQmode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
rtx
gen_movv2uhq (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4356 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (V2UHQmode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
rtx
gen_movv2ha (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4356 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (V2HAmode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
rtx
gen_movv2uha (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4356 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (V2UHAmode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
rtx
gen_movv4qq (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4356 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (V4QQmode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4352 */
rtx
gen_movv4uqq (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4356 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (V4UQQmode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4388 */
extern rtx gen_split_1203 (rtx, rtx *);
rtx
gen_split_1203 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4402 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val < 0)
    operands[2] = const0_rtx;
  else if (val >= 32 * 4)
    {
      int off = val & 3;

      operands[1] = GEN_INT (0x7c + off);
      operands[2] = GEN_INT (val - off - 0x7c);
    }
  else
    {
      int off = val & 3;

      operands[1] = GEN_INT (off);
      operands[2] = GEN_INT (val - off);
    }
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4427 */
extern rtx gen_split_1204 (rtx, rtx *);
rtx
gen_split_1204 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4435 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  int val = INTVAL (operands[1]);

  operands[1] = GEN_INT (0xff);
  operands[2] = GEN_INT (val - 0xff);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4495 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4499 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (HImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4528 */
extern rtx gen_split_1206 (rtx, rtx *);
rtx
gen_split_1206 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4542 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val < 0)
    operands[2] = const0_rtx;
  else if (val >= 32 * 2)
    {
      int off = val & 1;

      operands[1] = GEN_INT (0x7e + off);
      operands[2] = GEN_INT (val - off - 0x7e);
    }
  else
    {
      int off = val & 1;

      operands[1] = GEN_INT (off);
      operands[2] = GEN_INT (val - off);
    }
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (HImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4570 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4574 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (QImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4603 */
extern rtx gen_split_1208 (rtx, rtx *);
rtx
gen_split_1208 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4614 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val < 0)
    operands[2] = const0_rtx;
  else
    {
      operands[1] = GEN_INT (0x7f);
      operands[2] = GEN_INT (val - 0x7f);
    }
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4628 */
rtx
gen_movsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4632 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (SFmode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4669 */
rtx
gen_movdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4673 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (DFmode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4710 */
rtx
gen_movti (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4714 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (TImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4746 */
rtx
gen_movtf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4750 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (TFmode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4778 */
extern rtx gen_split_1213 (rtx, rtx *);
rtx
gen_split_1213 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4783 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_move_insn (operands[0], operands[1], curr_insn);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4778 */
extern rtx gen_split_1214 (rtx, rtx *);
rtx
gen_split_1214 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4783 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_move_insn (operands[0], operands[1], curr_insn);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4778 */
extern rtx gen_split_1215 (rtx, rtx *);
rtx
gen_split_1215 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4783 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_move_insn (operands[0], operands[1], curr_insn);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4778 */
extern rtx gen_split_1216 (rtx, rtx *);
rtx
gen_split_1216 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4783 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_move_insn (operands[0], operands[1], curr_insn);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4778 */
extern rtx gen_split_1217 (rtx, rtx *);
rtx
gen_split_1217 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4783 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_move_insn (operands[0], operands[1], curr_insn);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4778 */
extern rtx gen_split_1218 (rtx, rtx *);
rtx
gen_split_1218 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4783 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_move_insn (operands[0], operands[1], curr_insn);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4788 */
extern rtx gen_split_1219 (rtx, rtx *);
rtx
gen_split_1219 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4793 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_move_insn (operands[0], operands[1], curr_insn);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4788 */
extern rtx gen_split_1220 (rtx, rtx *);
rtx
gen_split_1220 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4793 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_move_insn (operands[0], operands[1], curr_insn);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4800 */
extern rtx gen_split_1221 (rtx, rtx *);
rtx
gen_split_1221 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4808 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[2] = gen_lowpart (SImode, operands[0]);
  operands[3] = GEN_INT (-INTVAL (operands[1]));
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_NEG (SImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4815 */
rtx
gen_movv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4819 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_legitimize_move (V2SFmode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
rtx
gen_move_doubleword_fprdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4874 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (FP_REG_RTX_P (operands[0]))
    {
      rtx low = mips_subword (operands[1], 0);
      rtx high = mips_subword (operands[1], 1);
      emit_insn (gen_load_lowdf (operands[0], low));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
      	emit_insn (gen_mthc1df (operands[0], high, operands[0]));
      else
	emit_insn (gen_load_highdf (operands[0], high, operands[0]));
    }
  else
    {
      rtx low = mips_subword (operands[0], 0);
      rtx high = mips_subword (operands[0], 1);
      emit_insn (gen_store_worddf (low, operands[1], const0_rtx));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
	emit_insn (gen_mfhc1df (high, operands[1]));
      else
	emit_insn (gen_store_worddf (high, operands[1], const1_rtx));
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
rtx
gen_move_doubleword_fprdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4874 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (FP_REG_RTX_P (operands[0]))
    {
      rtx low = mips_subword (operands[1], 0);
      rtx high = mips_subword (operands[1], 1);
      emit_insn (gen_load_lowdi (operands[0], low));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
      	emit_insn (gen_mthc1di (operands[0], high, operands[0]));
      else
	emit_insn (gen_load_highdi (operands[0], high, operands[0]));
    }
  else
    {
      rtx low = mips_subword (operands[0], 0);
      rtx high = mips_subword (operands[0], 1);
      emit_insn (gen_store_worddi (low, operands[1], const0_rtx));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
	emit_insn (gen_mfhc1di (high, operands[1]));
      else
	emit_insn (gen_store_worddi (high, operands[1], const1_rtx));
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
rtx
gen_move_doubleword_fprv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4874 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (FP_REG_RTX_P (operands[0]))
    {
      rtx low = mips_subword (operands[1], 0);
      rtx high = mips_subword (operands[1], 1);
      emit_insn (gen_load_lowv2sf (operands[0], low));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
      	emit_insn (gen_mthc1v2sf (operands[0], high, operands[0]));
      else
	emit_insn (gen_load_highv2sf (operands[0], high, operands[0]));
    }
  else
    {
      rtx low = mips_subword (operands[0], 0);
      rtx high = mips_subword (operands[0], 1);
      emit_insn (gen_store_wordv2sf (low, operands[1], const0_rtx));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
	emit_insn (gen_mfhc1v2sf (high, operands[1]));
      else
	emit_insn (gen_store_wordv2sf (high, operands[1], const1_rtx));
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
rtx
gen_move_doubleword_fprv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4874 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (FP_REG_RTX_P (operands[0]))
    {
      rtx low = mips_subword (operands[1], 0);
      rtx high = mips_subword (operands[1], 1);
      emit_insn (gen_load_lowv2si (operands[0], low));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
      	emit_insn (gen_mthc1v2si (operands[0], high, operands[0]));
      else
	emit_insn (gen_load_highv2si (operands[0], high, operands[0]));
    }
  else
    {
      rtx low = mips_subword (operands[0], 0);
      rtx high = mips_subword (operands[0], 1);
      emit_insn (gen_store_wordv2si (low, operands[1], const0_rtx));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
	emit_insn (gen_mfhc1v2si (high, operands[1]));
      else
	emit_insn (gen_store_wordv2si (high, operands[1], const1_rtx));
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
rtx
gen_move_doubleword_fprv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4874 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (FP_REG_RTX_P (operands[0]))
    {
      rtx low = mips_subword (operands[1], 0);
      rtx high = mips_subword (operands[1], 1);
      emit_insn (gen_load_lowv4hi (operands[0], low));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
      	emit_insn (gen_mthc1v4hi (operands[0], high, operands[0]));
      else
	emit_insn (gen_load_highv4hi (operands[0], high, operands[0]));
    }
  else
    {
      rtx low = mips_subword (operands[0], 0);
      rtx high = mips_subword (operands[0], 1);
      emit_insn (gen_store_wordv4hi (low, operands[1], const0_rtx));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
	emit_insn (gen_mfhc1v4hi (high, operands[1]));
      else
	emit_insn (gen_store_wordv4hi (high, operands[1], const1_rtx));
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
rtx
gen_move_doubleword_fprv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4874 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (FP_REG_RTX_P (operands[0]))
    {
      rtx low = mips_subword (operands[1], 0);
      rtx high = mips_subword (operands[1], 1);
      emit_insn (gen_load_lowv8qi (operands[0], low));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
      	emit_insn (gen_mthc1v8qi (operands[0], high, operands[0]));
      else
	emit_insn (gen_load_highv8qi (operands[0], high, operands[0]));
    }
  else
    {
      rtx low = mips_subword (operands[0], 0);
      rtx high = mips_subword (operands[0], 1);
      emit_insn (gen_store_wordv8qi (low, operands[1], const0_rtx));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
	emit_insn (gen_mfhc1v8qi (high, operands[1]));
      else
	emit_insn (gen_store_wordv8qi (high, operands[1], const1_rtx));
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4870 */
rtx
gen_move_doubleword_fprtf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4874 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (FP_REG_RTX_P (operands[0]))
    {
      rtx low = mips_subword (operands[1], 0);
      rtx high = mips_subword (operands[1], 1);
      emit_insn (gen_load_lowtf (operands[0], low));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
      	emit_insn (gen_mthc1tf (operands[0], high, operands[0]));
      else
	emit_insn (gen_load_hightf (operands[0], high, operands[0]));
    }
  else
    {
      rtx low = mips_subword (operands[0], 0);
      rtx high = mips_subword (operands[0], 1);
      emit_insn (gen_store_wordtf (low, operands[1], const0_rtx));
      if (TARGET_FLOAT64 && !TARGET_64BIT)
	emit_insn (gen_mfhc1tf (high, operands[1]));
      else
	emit_insn (gen_store_wordtf (high, operands[1], const1_rtx));
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4964 */
rtx
gen_load_const_gp_si (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CONST (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	22)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4964 */
rtx
gen_load_const_gp_di (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CONST (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	22)));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4971 */
extern rtx gen_split_1232 (rtx, rtx *);
rtx
gen_split_1232 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 4982 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[3] = gen_rtx_HIGH (Pmode, operands[1]);
  operands[4] = gen_rtx_PLUS (Pmode, operands[0], operands[2]);
  operands[5] = gen_rtx_LO_SUM (Pmode, operands[0], operands[1]);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4971 */
extern rtx gen_split_1233 (rtx, rtx *);
rtx
gen_split_1233 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 4982 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[3] = gen_rtx_HIGH (Pmode, operands[1]);
  operands[4] = gen_rtx_PLUS (Pmode, operands[0], operands[2]);
  operands[5] = gen_rtx_LO_SUM (Pmode, operands[0], operands[1]);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4990 */
extern rtx gen_split_1234 (rtx, rtx *);
rtx
gen_split_1234 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4997 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_emit_move (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:4990 */
extern rtx gen_split_1235 (rtx, rtx *);
rtx
gen_split_1235 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4997 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_emit_move (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5014 */
extern rtx gen_split_1236 (rtx, rtx *);
rtx
gen_split_1236 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5027 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[3] = mips_unspec_address (operands[1], SYMBOL_ABSOLUTE);
  operands[4] = mips_unspec_address (operands[2], SYMBOL_HALF);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		copy_rtx (operand3)),
	26)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		operand4),
	26)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5014 */
extern rtx gen_split_1237 (rtx, rtx *);
rtx
gen_split_1237 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5027 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[3] = mips_unspec_address (operands[1], SYMBOL_ABSOLUTE);
  operands[4] = mips_unspec_address (operands[2], SYMBOL_HALF);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		copy_rtx (operand3)),
	26)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		operand4),
	26)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5036 */
extern rtx gen_split_1238 (rtx, rtx *);
rtx
gen_split_1238 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 5044 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5036 */
extern rtx gen_split_1239 (rtx, rtx *);
rtx
gen_split_1239 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 5044 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5053 */
extern rtx gen_split_1240 (rtx, rtx *);
rtx
gen_split_1240 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5063 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_save_gp_to_cprestore_slot (operands[0], operands[1],
				  operands[2], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5053 */
extern rtx gen_split_1241 (rtx, rtx *);
rtx
gen_split_1241 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5063 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_save_gp_to_cprestore_slot (operands[0], operands[1],
				  operands[2], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5099 */
rtx
gen_clear_cache (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 5103 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"

{
  if (TARGET_SYNCI)
    {
      mips_expand_synci_loop (operands[0], operands[1]);
      emit_insn (gen_sync ());
      emit_insn (PMODE_INSN (gen_clear_hazard, ()));
    }
  else if (mips_cache_flush_func && mips_cache_flush_func[0])
    {
      rtx len = gen_reg_rtx (Pmode);
      emit_insn (gen_sub3_insn (len, operands[1], operands[0]));
      MIPS_ICACHE_SYNC (operands[0], len);
    }
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5177 */
rtx
gen_movmemsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 5183 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (mips_expand_block_move (operands[0], operands[1], operands[2]))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5197 */
rtx
gen_ashlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5202 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  This can be called by mips_function_arg, so we must
     be careful not to allocate a new register if we've reached the
     reload pass.  */
  if (TARGET_MIPS16
      && optimize
      && CONST_INT_P (operands[2])
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16
      && !reload_in_progress
      && !reload_completed)
    {
      rtx temp = gen_reg_rtx (SImode);

      emit_insn (gen_ashlsi3 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_ashlsi3 (operands[0], temp,
				     GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5197 */
rtx
gen_ashrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5202 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  This can be called by mips_function_arg, so we must
     be careful not to allocate a new register if we've reached the
     reload pass.  */
  if (TARGET_MIPS16
      && optimize
      && CONST_INT_P (operands[2])
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16
      && !reload_in_progress
      && !reload_completed)
    {
      rtx temp = gen_reg_rtx (SImode);

      emit_insn (gen_ashrsi3 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_ashrsi3 (operands[0], temp,
				     GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5197 */
rtx
gen_lshrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5202 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  This can be called by mips_function_arg, so we must
     be careful not to allocate a new register if we've reached the
     reload pass.  */
  if (TARGET_MIPS16
      && optimize
      && CONST_INT_P (operands[2])
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16
      && !reload_in_progress
      && !reload_completed)
    {
      rtx temp = gen_reg_rtx (SImode);

      emit_insn (gen_lshrsi3 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_lshrsi3 (operands[0], temp,
				     GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5197 */
rtx
gen_ashldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5202 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  This can be called by mips_function_arg, so we must
     be careful not to allocate a new register if we've reached the
     reload pass.  */
  if (TARGET_MIPS16
      && optimize
      && CONST_INT_P (operands[2])
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16
      && !reload_in_progress
      && !reload_completed)
    {
      rtx temp = gen_reg_rtx (DImode);

      emit_insn (gen_ashldi3 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_ashldi3 (operands[0], temp,
				     GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5197 */
rtx
gen_ashrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5202 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  This can be called by mips_function_arg, so we must
     be careful not to allocate a new register if we've reached the
     reload pass.  */
  if (TARGET_MIPS16
      && optimize
      && CONST_INT_P (operands[2])
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16
      && !reload_in_progress
      && !reload_completed)
    {
      rtx temp = gen_reg_rtx (DImode);

      emit_insn (gen_ashrdi3 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_ashrdi3 (operands[0], temp,
				     GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5197 */
rtx
gen_lshrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5202 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  This can be called by mips_function_arg, so we must
     be careful not to allocate a new register if we've reached the
     reload pass.  */
  if (TARGET_MIPS16
      && optimize
      && CONST_INT_P (operands[2])
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16
      && !reload_in_progress
      && !reload_completed)
    {
      rtx temp = gen_reg_rtx (DImode);

      emit_insn (gen_lshrdi3 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_lshrdi3 (operands[0], temp,
				     GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5339 */
extern rtx gen_split_1250 (rtx, rtx *);
rtx
gen_split_1250 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 5348 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5339 */
extern rtx gen_split_1251 (rtx, rtx *);
rtx
gen_split_1251 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 5348 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5339 */
extern rtx gen_split_1252 (rtx, rtx *);
rtx
gen_split_1252 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 5348 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5339 */
extern rtx gen_split_1253 (rtx, rtx *);
rtx
gen_split_1253 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 5348 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5339 */
extern rtx gen_split_1254 (rtx, rtx *);
rtx
gen_split_1254 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 5348 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5339 */
extern rtx gen_split_1255 (rtx, rtx *);
rtx
gen_split_1255 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 5348 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5359 */
extern rtx gen_split_1256 (rtx, rtx *);
rtx
gen_split_1256 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 5368 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5395 */
extern rtx gen_split_1257 (rtx, rtx *);
rtx
gen_split_1257 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 5403 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ROTATERT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5406 */
extern rtx gen_split_1258 (rtx, rtx *);
rtx
gen_split_1258 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 5414 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		copy_rtx (operand0)),
	6)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5569 */
rtx
gen_cbranchsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 5577 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_conditional_branch (operands);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5569 */
rtx
gen_cbranchdi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 5577 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_conditional_branch (operands);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5582 */
rtx
gen_cbranchsf4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 5590 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_conditional_branch (operands);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5582 */
rtx
gen_cbranchdf4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 5590 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_conditional_branch (operands);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5596 */
rtx
gen_condjump (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand0,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5653 */
rtx
gen_cstoresi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 5659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_scc (operands);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand2,
		operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5653 */
rtx
gen_cstoredi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 5659 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_scc (operands);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand2,
		operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5828 */
rtx
gen_jump (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5887 */
rtx
gen_indirect_jump (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 5890 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  operands[0] = force_reg (Pmode, operands[0]);
  emit_jump_insn (PMODE_INSN (gen_indirect_jump, (operands[0])));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5915 */
rtx
gen_tablejump (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 5920 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (TARGET_GPWORD)
    operands[0] = expand_binop (Pmode, add_optab, operands[0],
				pic_offset_table_rtx, 0, 0, OPTAB_WIDEN);
  else if (TARGET_RTP_PIC)
    {
      /* When generating RTP PIC, we use case table entries that are relative
	 to the start of the function.  Add the function's address to the
	 value we loaded.  */
      rtx start = get_hard_reg_initial_val (Pmode, PIC_FUNCTION_ADDR_REGNUM);
      operands[0] = expand_binop (ptr_mode, add_optab, operands[0],
				  start, 0, 0, OPTAB_WIDEN);
    }

  emit_jump_insn (PMODE_INSN (gen_tablejump, (operands[0], operands[1])));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:5955 */
rtx
gen_casesi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
#line 5962 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (operands[1] != const0_rtx)
    {
      rtx reg = gen_reg_rtx (SImode);
      rtx offset = gen_int_mode (-INTVAL (operands[1]), SImode);
      
      if (!arith_operand (offset, SImode))
        offset = force_reg (SImode, offset);
      
      emit_insn (gen_addsi3 (reg, operands[0], offset));
      operands[0] = reg;
    }

  if (!arith_operand (operands[0], SImode))
    operands[0] = force_reg (SImode, operands[0]);

  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);

  emit_jump_insn (PMODE_INSN (gen_casesi_internal_mips16,
			      (operands[0], operands[2],
			       operands[3], operands[4])));

  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
    operand4 = operands[4];
    (void) operand4;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  emit (operand4);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6040 */
rtx
gen_builtin_setjmp_setup (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 6043 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  rtx addr;

  addr = plus_constant (Pmode, operands[0], GET_MODE_SIZE (Pmode) * 3);
  mips_emit_move (gen_rtx_MEM (Pmode, addr), pic_offset_table_rtx);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6055 */
rtx
gen_builtin_longjmp (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 6058 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  /* The elements of the buffer are, in order:  */
  int W = GET_MODE_SIZE (Pmode);
  rtx fp = gen_rtx_MEM (Pmode, operands[0]);
  rtx lab = gen_rtx_MEM (Pmode, plus_constant (Pmode, operands[0], 1*W));
  rtx stack = gen_rtx_MEM (Pmode, plus_constant (Pmode, operands[0], 2*W));
  rtx gpv = gen_rtx_MEM (Pmode, plus_constant (Pmode, operands[0], 3*W));
  rtx pv = gen_rtx_REG (Pmode, PIC_FUNCTION_ADDR_REGNUM);
  /* Use gen_raw_REG to avoid being given pic_offset_table_rtx.
     The target is bound to be using $28 as the global pointer
     but the current function might not be.  */
  rtx gp = gen_raw_REG (Pmode, GLOBAL_POINTER_REGNUM);

  /* This bit is similar to expand_builtin_longjmp except that it
     restores $gp as well.  */
  mips_emit_move (hard_frame_pointer_rtx, fp);
  mips_emit_move (pv, lab);
  emit_stack_restore (SAVE_NONLOCAL, stack);
  mips_emit_move (gp, gpv);
  emit_use (hard_frame_pointer_rtx);
  emit_use (stack_pointer_rtx);
  emit_use (gp);
  emit_indirect_jump (pv);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6092 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6095 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_prologue ();
  DONE;
}
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6122 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6125 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_epilogue (false);
  DONE;
}
  }
  emit_insn (const_int_rtx[MAX_SAVED_CONST_INT + (2)]);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6130 */
rtx
gen_sibcall_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6133 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_epilogue (true);
  DONE;
}
  }
  emit_insn (const_int_rtx[MAX_SAVED_CONST_INT + (2)]);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6141 */
rtx
gen_return (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6144 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ mips_expand_before_return (); }
  }
  emit_jump_insn (simple_return_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6146 */
rtx
gen_simple_return (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6149 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ mips_expand_before_return (); }
  }
  emit_jump_insn (simple_return_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6223 */
rtx
gen_eh_return (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 6226 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  if (GET_MODE (operands[0]) != word_mode)
    operands[0] = convert_to_mode (word_mode, operands[0], 0);
  if (TARGET_64BIT)
    emit_insn (gen_eh_set_lr_di (operands[0]));
  else
    emit_insn (gen_eh_set_lr_si (operands[0]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6251 */
extern rtx gen_split_1278 (rtx, rtx *);
rtx
gen_split_1278 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 6256 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_set_return_address (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6261 */
rtx
gen_exception_receiver (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6264 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  /* See the comment above load_call<mode> for details.  */
  emit_insn (gen_set_got_version ());

  /* If we have a call-clobbered $gp, restore it from its save slot.  */
  if (HAVE_restore_gp_si)
    emit_insn (gen_restore_gp_si ());
  else if (HAVE_restore_gp_di)
    emit_insn (gen_restore_gp_di ());
  DONE;
}
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6276 */
rtx
gen_nonlocal_goto_receiver (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6279 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  /* See the comment above load_call<mode> for details.  */
  emit_insn (gen_set_got_version ());
  DONE;
}
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6287 */
extern rtx gen_split_1281 (rtx, rtx *);
rtx
gen_split_1281 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 6295 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_restore_gp_from_cprestore_slot (operands[0]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6287 */
extern rtx gen_split_1282 (rtx, rtx *);
rtx
gen_split_1282 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 6295 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_restore_gp_from_cprestore_slot (operands[0]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6302 */
extern rtx gen_split_1283 (rtx, rtx *);
rtx
gen_split_1283 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 6310 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_emit_move (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6302 */
extern rtx gen_split_1284 (rtx, rtx *);
rtx
gen_split_1284 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 6310 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_emit_move (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6404 */
rtx
gen_sibcall (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 6410 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_call (MIPS_CALL_SIBCALL, NULL_RTX, XEXP (operands[0], 0),
		    operands[1], operands[2], false);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6424 */
rtx
gen_sibcall_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 6430 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_call (MIPS_CALL_SIBCALL, operands[0], XEXP (operands[1], 0),
		    operands[2], operands[3], false);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6457 */
rtx
gen_call (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 6463 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_call (MIPS_CALL_NORMAL, NULL_RTX, XEXP (operands[0], 0),
		    operands[1], operands[2], false);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6504 */
extern rtx gen_split_1288 (rtx, rtx *);
rtx
gen_split_1288 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 6512 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_call (curr_insn, gen_call_split (operands[0], operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6532 */
extern rtx gen_split_1289 (rtx, rtx *);
rtx
gen_split_1289 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 6541 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_call (curr_insn,
		   gen_call_direct_split (operands[0], operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6559 */
rtx
gen_call_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 6565 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_call (MIPS_CALL_NORMAL, operands[0], XEXP (operands[1], 0),
		    operands[2], operands[3], false);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6572 */
extern rtx gen_split_1291 (rtx, rtx *);
rtx
gen_split_1291 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 6581 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_call (curr_insn,
		   gen_call_value_split (operands[0], operands[1],
					 operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6601 */
extern rtx gen_split_1292 (rtx, rtx *);
rtx
gen_split_1292 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 6611 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_call (curr_insn,
		   gen_call_value_direct_split (operands[0], operands[1],
						operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6632 */
extern rtx gen_split_1293 (rtx, rtx *);
rtx
gen_split_1293 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 6644 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_split_call (curr_insn,
		   gen_call_value_multiple_split (operands[0], operands[1],
						  operands[2], operands[3]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6668 */
rtx
gen_untyped_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6674 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  int i;

  emit_call_insn (GEN_CALL (operands[0], const0_rtx, NULL, const0_rtx));

  for (i = 0; i < XVECLEN (operands[2], 0); i++)
    {
      rtx set = XVECEXP (operands[2], 0, i);
      mips_emit_move (SET_DEST (set), SET_SRC (set));
    }

  emit_insn (gen_blockage ());
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6777 */
rtx
gen_movsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 6784 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
    operand4 = operands[4];
    (void) operand4;
    operand5 = operands[5];
    (void) operand5;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6777 */
rtx
gen_movdicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 6784 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
    operand4 = operands[4];
    (void) operand4;
    operand5 = operands[5];
    (void) operand5;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DImode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6789 */
rtx
gen_movsfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 6796 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
    operand4 = operands[4];
    (void) operand4;
    operand5 = operands[5];
    (void) operand5;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6789 */
rtx
gen_movdfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 6796 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
    operand4 = operands[4];
    (void) operand4;
    operand5 = operands[5];
    (void) operand5;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6852 */
extern rtx gen_split_1299 (rtx, rtx *);
rtx
gen_split_1299 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 6856 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{ operands[0] = mips_rewrite_small_data (operands[0]); }
  operand0 = operands[0];
  (void) operand0;
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6892 */
extern rtx gen_split_1300 (rtx, rtx *);
rtx
gen_split_1300 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 6902 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"

  operand0 = operands[0];
  (void) operand0;
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	3),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	28)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_REG (SImode,
	3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6892 */
extern rtx gen_split_1301 (rtx, rtx *);
rtx
gen_split_1301 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 6902 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"

  operand0 = operands[0];
  (void) operand0;
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	3),
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	28)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_REG (DImode,
	3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6931 */
extern rtx gen_split_1302 (rtx, rtx *);
rtx
gen_split_1302 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 6946 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	3),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	28)),
		gen_hard_reg_clobber (SImode, 25),
		gen_hard_reg_clobber (SImode, 31))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_REG (SImode,
	3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6931 */
extern rtx gen_split_1303 (rtx, rtx *);
rtx
gen_split_1303 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 6946 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	3),
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	28)),
		gen_hard_reg_clobber (DImode, 25),
		gen_hard_reg_clobber (DImode, 31))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_REG (DImode,
	3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6964 */
rtx
gen_get_thread_pointersi (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 6967 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_thread_pointer (operands[0]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md:6964 */
rtx
gen_get_thread_pointerdi (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 6967 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips.md"
{
  mips_expand_thread_pointer (operands[0]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:44 */
rtx
gen_memory_barrier (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 48 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
    (void) operand0;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		copy_rtx (operand0)),
	61)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:75 */
rtx
gen_sync_compare_and_swapqi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 81 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_6 = gen_compare_and_swap_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], operands[3]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:75 */
rtx
gen_sync_compare_and_swaphi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 81 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_6 = gen_compare_and_swap_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], operands[3]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
rtx
gen_sync_addqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_4 = gen_sync_add_12;
  mips_expand_atomic_qihi (generator,
			   NULL, operands[0], operands[1], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_PLUS (QImode,
	copy_rtx (operand0),
	operand1)),
	55)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
rtx
gen_sync_subqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_4 = gen_sync_sub_12;
  mips_expand_atomic_qihi (generator,
			   NULL, operands[0], operands[1], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_MINUS (QImode,
	copy_rtx (operand0),
	operand1)),
	55)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
rtx
gen_sync_iorqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_4 = gen_sync_ior_12;
  mips_expand_atomic_qihi (generator,
			   NULL, operands[0], operands[1], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_IOR (QImode,
	copy_rtx (operand0),
	operand1)),
	55)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
rtx
gen_sync_xorqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_4 = gen_sync_xor_12;
  mips_expand_atomic_qihi (generator,
			   NULL, operands[0], operands[1], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_XOR (QImode,
	copy_rtx (operand0),
	operand1)),
	55)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
rtx
gen_sync_andqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_4 = gen_sync_and_12;
  mips_expand_atomic_qihi (generator,
			   NULL, operands[0], operands[1], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_AND (QImode,
	copy_rtx (operand0),
	operand1)),
	55)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
rtx
gen_sync_addhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_4 = gen_sync_add_12;
  mips_expand_atomic_qihi (generator,
			   NULL, operands[0], operands[1], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_PLUS (HImode,
	copy_rtx (operand0),
	operand1)),
	55)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
rtx
gen_sync_subhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_4 = gen_sync_sub_12;
  mips_expand_atomic_qihi (generator,
			   NULL, operands[0], operands[1], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_MINUS (HImode,
	copy_rtx (operand0),
	operand1)),
	55)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
rtx
gen_sync_iorhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_4 = gen_sync_ior_12;
  mips_expand_atomic_qihi (generator,
			   NULL, operands[0], operands[1], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_IOR (HImode,
	copy_rtx (operand0),
	operand1)),
	55)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
rtx
gen_sync_xorhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_4 = gen_sync_xor_12;
  mips_expand_atomic_qihi (generator,
			   NULL, operands[0], operands[1], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_XOR (HImode,
	copy_rtx (operand0),
	operand1)),
	55)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:120 */
rtx
gen_sync_andhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 127 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_4 = gen_sync_and_12;
  mips_expand_atomic_qihi (generator,
			   NULL, operands[0], operands[1], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_AND (HImode,
	copy_rtx (operand0),
	operand1)),
	55)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
rtx
gen_sync_old_addqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 166 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_old_add_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_PLUS (QImode,
	copy_rtx (operand1),
	operand2)),
	55)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
rtx
gen_sync_old_subqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 166 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_old_sub_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_MINUS (QImode,
	copy_rtx (operand1),
	operand2)),
	55)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
rtx
gen_sync_old_iorqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 166 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_old_ior_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_IOR (QImode,
	copy_rtx (operand1),
	operand2)),
	55)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
rtx
gen_sync_old_xorqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 166 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_old_xor_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_XOR (QImode,
	copy_rtx (operand1),
	operand2)),
	55)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
rtx
gen_sync_old_andqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 166 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_old_and_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_AND (QImode,
	copy_rtx (operand1),
	operand2)),
	55)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
rtx
gen_sync_old_addhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 166 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_old_add_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_PLUS (HImode,
	copy_rtx (operand1),
	operand2)),
	55)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
rtx
gen_sync_old_subhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 166 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_old_sub_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_MINUS (HImode,
	copy_rtx (operand1),
	operand2)),
	55)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
rtx
gen_sync_old_iorhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 166 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_old_ior_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_IOR (HImode,
	copy_rtx (operand1),
	operand2)),
	55)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
rtx
gen_sync_old_xorhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 166 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_old_xor_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_XOR (HImode,
	copy_rtx (operand1),
	operand2)),
	55)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:156 */
rtx
gen_sync_old_andhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 166 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_old_and_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_AND (HImode,
	copy_rtx (operand1),
	operand2)),
	55)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
rtx
gen_sync_new_addqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 208 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_new_add_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
	56)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	56)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
rtx
gen_sync_new_subqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 208 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_new_sub_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
	56)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	56)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
rtx
gen_sync_new_iorqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 208 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_new_ior_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_IOR (QImode,
	operand1,
	operand2)),
	56)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	56)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
rtx
gen_sync_new_xorqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 208 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_new_xor_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_XOR (QImode,
	operand1,
	operand2)),
	56)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	56)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
rtx
gen_sync_new_andqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 208 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_new_and_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_AND (QImode,
	operand1,
	operand2)),
	56)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	56)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
rtx
gen_sync_new_addhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 208 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_new_add_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
	56)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	56)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
rtx
gen_sync_new_subhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 208 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_new_sub_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_MINUS (HImode,
	operand1,
	operand2)),
	56)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	56)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
rtx
gen_sync_new_iorhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 208 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_new_ior_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_IOR (HImode,
	operand1,
	operand2)),
	56)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	56)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
rtx
gen_sync_new_xorhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 208 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_new_xor_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_XOR (HImode,
	operand1,
	operand2)),
	56)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	56)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:197 */
rtx
gen_sync_new_andhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 208 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_new_and_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_AND (HImode,
	operand1,
	operand2)),
	56)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	56)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:243 */
rtx
gen_sync_nandqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 250 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_4 = gen_sync_nand_12;
  mips_expand_atomic_qihi (generator,
			   NULL, operands[0], operands[1], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		operand1),
	55)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:243 */
rtx
gen_sync_nandhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 250 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_4 = gen_sync_nand_12;
  mips_expand_atomic_qihi (generator,
			   NULL, operands[0], operands[1], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		operand1),
	55)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:279 */
rtx
gen_sync_old_nandqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 288 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_old_nand_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		operand2),
	55)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:279 */
rtx
gen_sync_old_nandhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 288 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_old_nand_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		operand2),
	55)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:318 */
rtx
gen_sync_new_nandqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 328 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_new_nand_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	56)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:318 */
rtx
gen_sync_new_nandhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 328 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_sync_new_nand_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	56)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:534 */
rtx
gen_sync_lock_test_and_setqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 539 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_test_and_set_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:534 */
rtx
gen_sync_lock_test_and_sethi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 539 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  union mips_gen_fn_ptrs generator;
  generator.fn_5 = gen_test_and_set_12;
  mips_expand_atomic_qihi (generator,
			   operands[0], operands[1], operands[2], NULL);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:604 */
rtx
gen_atomic_exchangesi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  if (ISA_HAS_SWAP)
    {
      if (!mem_noofs_operand (operands[1], SImode))
        {
	  rtx addr;

	  addr = force_reg (Pmode, XEXP (operands[1], 0));
	  operands[1] = replace_equiv_address (operands[1], addr);
	}
      operands[2] = force_reg (SImode, operands[2]);
      emit_insn (gen_atomic_exchangesi_swap (operands[0], operands[1],
						 operands[2]));
    }
  else
    emit_insn (gen_atomic_exchangesi_llsc (operands[0], operands[1],
					       operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:604 */
rtx
gen_atomic_exchangedi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 610 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  if (ISA_HAS_SWAP)
    {
      if (!mem_noofs_operand (operands[1], DImode))
        {
	  rtx addr;

	  addr = force_reg (Pmode, XEXP (operands[1], 0));
	  operands[1] = replace_equiv_address (operands[1], addr);
	}
      operands[2] = force_reg (DImode, operands[2]);
      emit_insn (gen_atomic_exchangedi_swap (operands[0], operands[1],
						 operands[2]));
    }
  else
    emit_insn (gen_atomic_exchangedi_llsc (operands[0], operands[1],
					       operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:659 */
rtx
gen_atomic_fetch_addsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 665 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  if (ISA_HAS_LDADD)
    {
      if (!mem_noofs_operand (operands[1], SImode))
        {
	  rtx addr;

	  addr = force_reg (Pmode, XEXP (operands[1], 0));
	  operands[1] = replace_equiv_address (operands[1], addr);
	}
      operands[2] = force_reg (SImode, operands[2]);
      emit_insn (gen_atomic_fetch_addsi_ldadd (operands[0], operands[1],
						   operands[2]));
    }
  else
    emit_insn (gen_atomic_fetch_addsi_llsc (operands[0], operands[1],
						operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md:659 */
rtx
gen_atomic_fetch_adddi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 665 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/sync.md"
{
  if (ISA_HAS_LDADD)
    {
      if (!mem_noofs_operand (operands[1], DImode))
        {
	  rtx addr;

	  addr = force_reg (Pmode, XEXP (operands[1], 0));
	  operands[1] = replace_equiv_address (operands[1], addr);
	}
      operands[2] = force_reg (DImode, operands[2]);
      emit_insn (gen_atomic_fetch_adddi_ldadd (operands[0], operands[1],
						   operands[2]));
    }
  else
    emit_insn (gen_atomic_fetch_adddi_llsc (operands[0], operands[1],
						operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:72 */
rtx
gen_movv2sfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 79 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  /* We can only support MOVN.PS and MOVZ.PS.
     NOTE: MOVT.PS and MOVF.PS have different semantics from MOVN.PS and 
	   MOVZ.PS.  MOVT.PS and MOVF.PS depend on two CC values and move 
	   each item independently.  */

  if (GET_MODE_CLASS (GET_MODE (XEXP (operands[1], 0))) != MODE_INT)
    FAIL;

  mips_expand_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
    operand4 = operands[4];
    (void) operand4;
    operand5 = operands[5];
    (void) operand5;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V2SFmode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:167 */
rtx
gen_vec_perm_constv2sf (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 173 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  if (mips_expand_vec_perm_const (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:196 */
rtx
gen_mips_puu_ps (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 201 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  if (BYTES_BIG_ENDIAN)
    emit_insn (gen_vec_perm_const_ps (operands[0], operands[1], operands[2],
				      const0_rtx, const2_rtx));
  else
    emit_insn (gen_vec_perm_const_ps (operands[0], operands[2], operands[1],
				      const1_rtx, GEN_INT (3)));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:211 */
rtx
gen_mips_pul_ps (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 216 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  if (BYTES_BIG_ENDIAN)
    emit_insn (gen_vec_perm_const_ps (operands[0], operands[1], operands[2],
				      const0_rtx, GEN_INT (3)));
  else
    emit_insn (gen_vec_perm_const_ps (operands[0], operands[2], operands[1],
				      const0_rtx, GEN_INT (3)));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:226 */
rtx
gen_mips_plu_ps (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 231 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  if (BYTES_BIG_ENDIAN)
    emit_insn (gen_vec_perm_const_ps (operands[0], operands[1], operands[2],
				      const1_rtx, const2_rtx));
  else
    emit_insn (gen_vec_perm_const_ps (operands[0], operands[2], operands[1],
				      const1_rtx, const2_rtx));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:241 */
rtx
gen_mips_pll_ps (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 246 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  if (BYTES_BIG_ENDIAN)
    emit_insn (gen_vec_perm_const_ps (operands[0], operands[1], operands[2],
				      const1_rtx, GEN_INT (3)));
  else
    emit_insn (gen_vec_perm_const_ps (operands[0], operands[2], operands[1],
				      const0_rtx, const2_rtx));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:257 */
rtx
gen_vec_initv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 261 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  mips_expand_vector_init (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:303 */
rtx
gen_vec_setv2sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 312 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  /* We don't have an insert instruction, so we duplicate the float, and
     then use a PUL instruction.  */
  rtx temp = gen_reg_rtx (V2SFmode);
  emit_insn (gen_vec_concatv2sf (temp, operands[1], operands[1]));
  operands[1] = temp;
  operands[3] = GEN_INT (1 - INTVAL (operands[2]) + 2);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	gen_rtx_VEC_CONCAT (V4SFmode,
	operand1,
	copy_rtx (operand0)),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand2,
		operand3)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:322 */
rtx
gen_mips_cvt_ps_s (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 327 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  if (BYTES_BIG_ENDIAN)
    emit_insn (gen_vec_concatv2sf (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_vec_concatv2sf (operands[0], operands[2], operands[1]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:336 */
rtx
gen_mips_cvt_s_pl (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 341 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{ operands[2] = GEN_INT (BYTES_BIG_ENDIAN); }
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:344 */
rtx
gen_mips_cvt_s_pu (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 349 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{ operands[2] = GEN_INT (!BYTES_BIG_ENDIAN); }
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:414 */
rtx
gen_mips_abs_ps (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 419 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  /* If we can ignore NaNs, this operation is equivalent to the
     rtl ABS code.  */
  if (!HONOR_NANS (V2SFmode))
    {
      emit_insn (gen_absv2sf2 (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	73)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:458 */
extern rtx gen_split_1363 (rtx, rtx *);
rtx
gen_split_1363 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
#line 479 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  operands[6] = simplify_gen_subreg (CCV2mode, operands[0], CCV4mode, 0);
  operands[7] = simplify_gen_subreg (CCV2mode, operands[0], CCV4mode, 8);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  operand6 = operands[6];
  (void) operand6;
  operand7 = operands[7];
  (void) operand7;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand5),
	66)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (3,
		operand3,
		operand4,
		copy_rtx (operand5)),
	66)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:487 */
extern rtx gen_split_1364 (rtx, rtx *);
rtx
gen_split_1364 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
#line 508 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  operands[6] = simplify_gen_subreg (CCV2mode, operands[0], CCV4mode, 0);
  operands[7] = simplify_gen_subreg (CCV2mode, operands[0], CCV4mode, 8);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  operand6 = operands[6];
  (void) operand6;
  operand7 = operands[7];
  (void) operand7;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand5),
	68)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (3,
		operand3,
		operand4,
		copy_rtx (operand5)),
	68)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:544 */
rtx
gen_scc_ps (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (1,
		operand1),
	79));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:620 */
rtx
gen_single_cc (rtx operand0,
	rtx operand1)
{
  return gen_rtx_NE (VOIDmode,
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	78),
	const0_rtx);
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:711 */
rtx
gen_vcondv2sfv2sf (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 720 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  mips_expand_vcondv2sf (operands[0], operands[1], operands[2],
			 GET_CODE (operands[3]), operands[4], operands[5]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
    operand4 = operands[4];
    (void) operand4;
    operand5 = operands[5];
    (void) operand5;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V2SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:726 */
rtx
gen_sminv2sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 731 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  mips_expand_vcondv2sf (operands[0], operands[1], operands[2],
			 LE, operands[1], operands[2]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V2SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:737 */
rtx
gen_smaxv2sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 742 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  mips_expand_vcondv2sf (operands[0], operands[1], operands[2],
			 LE, operands[2], operands[1]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V2SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:748 */
rtx
gen_reduc_smin_v2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 752 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  mips_expand_vec_reduc (operands[0], operands[1], gen_sminv2sf3);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md:757 */
rtx
gen_reduc_smax_v2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 761 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-ps-3d.md"
{
  mips_expand_vec_reduc (operands[0], operands[1], gen_smaxv2sf3);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1114 */
rtx
gen_mips_lbux (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1119 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  operands[2] = convert_to_mode (Pmode, operands[2], false);
  emit_insn (PMODE_INSN (gen_mips_lbux_extsi,
			 (operands[0], operands[1], operands[2])));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1137 */
rtx
gen_mips_lhx (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1142 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  operands[2] = convert_to_mode (Pmode, operands[2], false);
  emit_insn (PMODE_INSN (gen_mips_lhx_extsi,
			 (operands[0], operands[1], operands[2])));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1149 */
rtx
gen_mips_lwx (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1154 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  operands[2] = convert_to_mode (Pmode, operands[2], false);
  emit_insn (PMODE_INSN (gen_mips_lwx,
			 (operands[0], operands[1], operands[2])));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1149 */
rtx
gen_mips_ldx (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1154 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md"
{
  operands[2] = convert_to_mode (Pmode, operands[2], false);
  emit_insn (PMODE_INSN (gen_mips_ldx,
			 (operands[0], operands[1], operands[2])));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1194 */
rtx
gen_mips_madd (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2),
	gen_rtx_SIGN_EXTEND (DImode,
	operand3)),
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1194 */
rtx
gen_mips_maddu (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand2),
	gen_rtx_ZERO_EXTEND (DImode,
	operand3)),
	operand1));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1202 */
rtx
gen_mips_msub (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2),
	gen_rtx_SIGN_EXTEND (DImode,
	operand3))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/mips-dsp.md:1202 */
rtx
gen_mips_msubu (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand2),
	gen_rtx_ZERO_EXTEND (DImode,
	operand3))));
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:102 */
rtx
gen_movv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 106 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  if (mips_legitimize_move (V2SImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:102 */
rtx
gen_movv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 106 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  if (mips_legitimize_move (V4HImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:102 */
rtx
gen_movv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 106 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  if (mips_legitimize_move (V8QImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:122 */
rtx
gen_vec_initv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 126 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vector_init (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:122 */
rtx
gen_vec_initv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 126 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vector_init (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:122 */
rtx
gen_vec_initv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 126 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vector_init (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:375 */
rtx
gen_vec_setv4hi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 382 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  rtx ext = gen_reg_rtx (SImode);
  emit_move_insn (ext, gen_lowpart (SImode, operands[1]));
  operands[1] = ext;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	201)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:398 */
rtx
gen_sdot_prodv4hi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 404 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  rtx t = gen_reg_rtx (V2SImode);
  emit_insn (gen_loongson_pmaddhw (t, operands[1], operands[2]));
  emit_insn (gen_addv2si3 (operands[0], t, operands[3]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:420 */
rtx
gen_smaxv2si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 425 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_minmax (operands[0], operands[1], operands[2],
			  gen_loongson_pcmpgtw, false);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:420 */
rtx
gen_smaxv8qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 425 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_minmax (operands[0], operands[1], operands[2],
			  gen_loongson_pcmpgtb, false);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:449 */
rtx
gen_sminv2si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 454 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_minmax (operands[0], operands[1], operands[2],
			  gen_loongson_pcmpgtw, true);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:449 */
rtx
gen_sminv8qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 454 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_minmax (operands[0], operands[1], operands[2],
			  gen_loongson_pcmpgtb, true);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:787 */
rtx
gen_vec_perm_constv2si (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 793 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  if (mips_expand_vec_perm_const (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:787 */
rtx
gen_vec_perm_constv4hi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 793 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  if (mips_expand_vec_perm_const (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:787 */
rtx
gen_vec_perm_constv8qi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 793 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  if (mips_expand_vec_perm_const (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:800 */
rtx
gen_vec_unpacks_lo_v4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 804 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_unpack (operands, false, false);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:800 */
rtx
gen_vec_unpacks_lo_v8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 804 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_unpack (operands, false, false);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:809 */
rtx
gen_vec_unpacks_hi_v4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 813 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_unpack (operands, false, true);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:809 */
rtx
gen_vec_unpacks_hi_v8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 813 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_unpack (operands, false, true);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:818 */
rtx
gen_vec_unpacku_lo_v4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 822 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_unpack (operands, true, false);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:818 */
rtx
gen_vec_unpacku_lo_v8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 822 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_unpack (operands, true, false);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:827 */
rtx
gen_vec_unpacku_hi_v4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 831 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_unpack (operands, true, true);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:827 */
rtx
gen_vec_unpacku_hi_v8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 831 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_unpack (operands, true, true);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:855 */
rtx
gen_reduc_uplus_v2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 859 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_reduc (operands[0], operands[1], gen_addv2si3);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:855 */
rtx
gen_reduc_uplus_v4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 859 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_reduc (operands[0], operands[1], gen_addv4hi3);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:866 */
rtx
gen_reduc_splus_v2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 870 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  emit_insn (gen_reduc_uplus_v2si(operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:866 */
rtx
gen_reduc_splus_v4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 870 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  emit_insn (gen_reduc_uplus_v4hi(operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:866 */
rtx
gen_reduc_splus_v8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 870 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  emit_insn (gen_reduc_uplus_v8qi(operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:875 */
rtx
gen_reduc_smax_v2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 879 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_reduc (operands[0], operands[1], gen_smaxv2si3);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:875 */
rtx
gen_reduc_smax_v4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 879 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_reduc (operands[0], operands[1], gen_smaxv4hi3);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:875 */
rtx
gen_reduc_smax_v8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 879 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_reduc (operands[0], operands[1], gen_smaxv8qi3);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:884 */
rtx
gen_reduc_smin_v2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 888 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_reduc (operands[0], operands[1], gen_sminv2si3);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:884 */
rtx
gen_reduc_smin_v4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 888 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_reduc (operands[0], operands[1], gen_sminv4hi3);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:884 */
rtx
gen_reduc_smin_v8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 888 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_reduc (operands[0], operands[1], gen_sminv8qi3);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:893 */
rtx
gen_reduc_umax_v8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 897 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_reduc (operands[0], operands[1], gen_umaxv8qi3);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md:902 */
rtx
gen_reduc_umin_v8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 906 "/home/ubuntu/openwrt-sdk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/gcc-linaro-4.8-2014.04/gcc/config/mips/loongson.md"
{
  mips_expand_vec_reduc (operands[0], operands[1], gen_uminv8qi3);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 652:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 629:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (DImode, 25);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (DImode, 31);
      break;

    case 628:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 25);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 31);
      break;

    case 627:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (DImode, 3);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (DImode, 25);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (DImode, 31);
      break;

    case 626:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 3);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 25);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 31);
      break;

    case 623:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (DImode, 3);
      break;

    case 622:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 3);
      break;

    case 599:
    case 597:
    case 593:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 31);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 28);
      break;

    case 598:
    case 596:
    case 592:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 31);
      break;

    case 595:
    case 591:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 31);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 28);
      break;

    case 563:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 24);
      break;

    case 562:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 24);
      break;

    case 406:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (DImode, 31);
      break;

    case 594:
    case 590:
    case 405:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 31);
      break;

    case 234:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode));
      break;

    case 232:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

    case 73:
    case 72:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (TImode));
      break;

    case 54:
    case 53:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (TImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 47:
    case 44:
    case 41:
    case 40:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 580:
    case 578:
    case 259:
    case 69:
    case 68:
    case 57:
    case 52:
    case 51:
    case 39:
    case 35:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 651:
    case 640:
    case 639:
    case 638:
    case 637:
    case 636:
    case 579:
    case 577:
    case 67:
    case 66:
    case 65:
    case 64:
    case 63:
    case 62:
    case 48:
    case 43:
    case 42:
    case 38:
    case 34:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    default:
      gcc_unreachable ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 652:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 234:
    case 232:
    case 73:
    case 72:
    case 54:
    case 53:
    case 47:
    case 44:
    case 41:
    case 40:
    case 580:
    case 578:
    case 259:
    case 69:
    case 68:
    case 57:
    case 52:
    case 51:
    case 39:
    case 35:
    case 651:
    case 640:
    case 639:
    case 638:
    case 637:
    case 636:
    case 579:
    case 577:
    case 67:
    case 66:
    case 65:
    case 64:
    case 63:
    case 62:
    case 48:
    case 43:
    case 42:
    case 38:
    case 34:
      return 0;

    case 629:
    case 628:
    case 627:
    case 626:
    case 623:
    case 622:
    case 599:
    case 597:
    case 593:
    case 598:
    case 596:
    case 592:
    case 595:
    case 591:
    case 563:
    case 562:
    case 406:
    case 594:
    case 590:
    case 405:
      return 1;

    default:
      gcc_unreachable ();
    }
}
