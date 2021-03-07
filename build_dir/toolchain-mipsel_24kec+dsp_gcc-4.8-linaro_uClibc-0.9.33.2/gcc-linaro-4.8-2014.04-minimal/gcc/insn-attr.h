/* Generated automatically by the program `genattr'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_H
#define GCC_INSN_ATTR_H

#include "insn-attr-common.h"

#define HAVE_ATTR_got 1
extern enum attr_got get_attr_got (rtx);

#define HAVE_ATTR_jal 1
extern enum attr_jal get_attr_jal (rtx);

#define HAVE_ATTR_jal_macro 1
extern enum attr_jal_macro get_attr_jal_macro (rtx);

#define HAVE_ATTR_move_type 1
extern enum attr_move_type get_attr_move_type (rtx);

#define HAVE_ATTR_alu_type 1
extern enum attr_alu_type get_attr_alu_type (rtx);

#define HAVE_ATTR_mode 1
extern enum attr_mode get_attr_mode (rtx);

#define HAVE_ATTR_dword_mode 1
extern enum attr_dword_mode get_attr_dword_mode (rtx);

#define HAVE_ATTR_sync_mem 1
extern enum attr_sync_mem get_attr_sync_mem (rtx);

#define HAVE_ATTR_sync_oldval 1
extern enum attr_sync_oldval get_attr_sync_oldval (rtx);

#define HAVE_ATTR_sync_cmp 1
extern enum attr_sync_cmp get_attr_sync_cmp (rtx);

#define HAVE_ATTR_sync_newval 1
extern enum attr_sync_newval get_attr_sync_newval (rtx);

#define HAVE_ATTR_sync_inclusive_mask 1
extern enum attr_sync_inclusive_mask get_attr_sync_inclusive_mask (rtx);

#define HAVE_ATTR_sync_exclusive_mask 1
extern enum attr_sync_exclusive_mask get_attr_sync_exclusive_mask (rtx);

#define HAVE_ATTR_sync_required_oldval 1
extern enum attr_sync_required_oldval get_attr_sync_required_oldval (rtx);

#define HAVE_ATTR_sync_insn1_op2 1
extern enum attr_sync_insn1_op2 get_attr_sync_insn1_op2 (rtx);

#define HAVE_ATTR_sync_insn1 1
extern enum attr_sync_insn1 get_attr_sync_insn1 (rtx);

#define HAVE_ATTR_sync_insn2 1
extern enum attr_sync_insn2 get_attr_sync_insn2 (rtx);

#define HAVE_ATTR_sync_memmodel 1
extern int get_attr_sync_memmodel (rtx);
#define HAVE_ATTR_accum_in 1
extern enum attr_accum_in get_attr_accum_in (rtx);

#define HAVE_ATTR_type 1
extern enum attr_type get_attr_type (rtx);

#define HAVE_ATTR_cnv_mode 1
extern enum attr_cnv_mode get_attr_cnv_mode (rtx);

#define HAVE_ATTR_extended_mips16 1
extern enum attr_extended_mips16 get_attr_extended_mips16 (rtx);

#define HAVE_ATTR_length 1
extern int get_attr_length (rtx);
extern void shorten_branches (rtx);
extern int insn_default_length (rtx);
extern int insn_min_length (rtx);
extern int insn_variable_length_p (rtx);
extern int insn_current_length (rtx);

#include "insn-addr.h"

#define HAVE_ATTR_cpu 1
extern enum processor get_attr_cpu (void);

#define HAVE_ATTR_hazard 1
extern enum attr_hazard get_attr_hazard (rtx);

#define HAVE_ATTR_single_insn 1
extern enum attr_single_insn get_attr_single_insn (rtx);

#define HAVE_ATTR_can_delay 1
extern enum attr_can_delay get_attr_can_delay (rtx);

#define HAVE_ATTR_branch_likely 1
extern enum attr_branch_likely get_attr_branch_likely (rtx);

#define HAVE_ATTR_may_clobber_hilo 1
extern enum attr_may_clobber_hilo get_attr_may_clobber_hilo (rtx);

#define HAVE_ATTR_vr4130_class 1
extern enum attr_vr4130_class get_attr_vr4130_class (rtx);

#define HAVE_ATTR_ls2_turn_type 1
extern enum attr_ls2_turn_type get_attr_ls2_turn_type (rtx);

#define HAVE_ATTR_sb1_fp_pipes 1
extern enum attr_sb1_fp_pipes get_attr_sb1_fp_pipes (rtx);

extern int num_delay_slots (rtx);
extern int eligible_for_delay (rtx, int, rtx, int);

extern int const_num_delay_slots (rtx);

#define ANNUL_IFFALSE_SLOTS
extern int eligible_for_annul_false (rtx, int, rtx, int);

/* DFA based pipeline interface.  */
#ifndef AUTOMATON_ALTS
#define AUTOMATON_ALTS 0
#endif


#ifndef AUTOMATON_STATE_ALTS
#define AUTOMATON_STATE_ALTS 0
#endif

#ifndef CPU_UNITS_QUERY
#define CPU_UNITS_QUERY 0
#endif

#define init_sched_attrs() do { } while (0)

/* Internal insn code number used by automata.  */
extern int internal_dfa_insn_code (rtx);

/* Insn latency time defined in define_insn_reservation. */
extern int insn_default_latency (rtx);

/* Return nonzero if there is a bypass for given insn
   which is a data producer.  */
extern int bypass_p (rtx);

/* Insn latency time on data consumed by the 2nd insn.
   Use the function if bypass_p returns nonzero for
   the 1st insn. */
extern int insn_latency (rtx, rtx);

/* Maximal insn latency time possible of all bypasses for this insn.
   Use the function if bypass_p returns nonzero for
   the 1st insn. */
extern int maximal_insn_latency (rtx);


#if AUTOMATON_ALTS
/* The following function returns number of alternative
   reservations of given insn.  It may be used for better
   insns scheduling heuristics. */
extern int insn_alts (rtx);

#endif

/* Maximal possible number of insns waiting results being
   produced by insns whose execution is not finished. */
extern const int max_insn_queue_index;

/* Pointer to data describing current state of DFA.  */
typedef void *state_t;

/* Size of the data in bytes.  */
extern int state_size (void);

/* Initiate given DFA state, i.e. Set up the state
   as all functional units were not reserved.  */
extern void state_reset (state_t);
/* The following function returns negative value if given
   insn can be issued in processor state described by given
   DFA state.  In this case, the DFA state is changed to
   reflect the current and future reservations by given
   insn.  Otherwise the function returns minimal time
   delay to issue the insn.  This delay may be zero
   for superscalar or VLIW processors.  If the second
   parameter is NULL the function changes given DFA state
   as new processor cycle started.  */
extern int state_transition (state_t, rtx);

#if AUTOMATON_STATE_ALTS
/* The following function returns number of possible
   alternative reservations of given insn in given
   DFA state.  It may be used for better insns scheduling
   heuristics.  By default the function is defined if
   macro AUTOMATON_STATE_ALTS is defined because its
   implementation may require much memory.  */
extern int state_alts (state_t, rtx);
#endif

extern int min_issue_delay (state_t, rtx);
/* The following function returns nonzero if no one insn
   can be issued in current DFA state. */
extern int state_dead_lock_p (state_t);
/* The function returns minimal delay of issue of the 2nd
   insn after issuing the 1st insn in given DFA state.
   The 1st insn should be issued in given state (i.e.
    state_transition should return negative value for
    the insn and the state).  Data dependencies between
    the insns are ignored by the function.  */
extern int min_insn_conflict_delay (state_t, rtx, rtx);
/* The following function outputs reservations for given
   insn as they are described in the corresponding
   define_insn_reservation.  */
extern void print_reservation (FILE *, rtx);

#if CPU_UNITS_QUERY
/* The following function returns code of functional unit
   with given name (see define_cpu_unit). */
extern int get_cpu_unit_code (const char *);
/* The following function returns nonzero if functional
   unit with given code is currently reserved in given
   DFA state.  */
extern int cpu_unit_reservation_p (state_t, int);
#endif

/* The following function returns true if insn
   has a dfa reservation.  */
extern bool insn_has_dfa_reservation_p (rtx);

/* Clean insn code cache.  It should be called if there
   is a chance that condition value in a
   define_insn_reservation will be changed after
   last call of dfa_start.  */
extern void dfa_clean_insn_cache (void);

extern void dfa_clear_single_insn_cache (rtx);

/* Initiate and finish work with DFA.  They should be
   called as the first and the last interface
   functions.  */
extern void dfa_start (void);
extern void dfa_finish (void);
#ifndef HAVE_ATTR_length
#define HAVE_ATTR_length 0
#endif
#ifndef HAVE_ATTR_enabled
#define HAVE_ATTR_enabled 0
#endif
#if !HAVE_ATTR_length
extern int hook_int_rtx_unreachable (rtx);
#define insn_default_length hook_int_rtx_unreachable
#define insn_min_length hook_int_rtx_unreachable
#define insn_variable_length_p hook_int_rtx_unreachable
#define insn_current_length hook_int_rtx_unreachable
#include "insn-addr.h"
#endif
#if !HAVE_ATTR_enabled
extern int hook_int_rtx_1 (rtx);
#define get_attr_enabled hook_int_rtx_1
#endif


#define ATTR_FLAG_forward	0x1
#define ATTR_FLAG_backward	0x2

#endif /* GCC_INSN_ATTR_H */
