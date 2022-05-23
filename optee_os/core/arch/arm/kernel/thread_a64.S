/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2015-2017, Linaro Limited
 */

#include <arm.h>
#include <arm64_macros.S>
#include <asm.S>
#include <generated/asm-defines.h>
#include <keep.h>
#include <kernel/thread_defs.h>
#include <mm/core_mmu.h>
#include <smccc.h>
#include <sm/optee_smc.h>
#include <sm/teesmc_opteed.h>
#include <sm/teesmc_opteed_macros.h>

#include "thread_private.h"


	.macro get_thread_ctx core_local, res, tmp0, tmp1
		ldr	w\tmp0, [\core_local, \
				#THREAD_CORE_LOCAL_CURR_THREAD]
		adr	x\res, threads
		mov	x\tmp1, #THREAD_CTX_SIZE
		madd	x\res, x\tmp0, x\tmp1, x\res
	.endm

	.macro b_if_spsr_is_el0 reg, label
		tbnz	\reg, #(SPSR_MODE_RW_32 << SPSR_MODE_RW_SHIFT), \label
		tst	\reg, #(SPSR_64_MODE_EL_MASK << SPSR_64_MODE_EL_SHIFT)
		b.eq	\label
	.endm
	//taskUid offset in secure_task 0x120 288
	//curr_task offset in thread_core_local 56 0x38
	//task_state offset in secure_task 0x124 292
	//THREAD_CORE_LOCAL_CURR_TASK
	//THREAD_CORE_LOCAL_CURR_THREAD
	.macro rt_tee_get_suspended_thread_ctx core_local, res, tmp0, tmp1
		ldr	w\tmp0, [\core_local, \
				#THREAD_CORE_LOCAL_CURR_TASK]
		adr	x\res, secure_tasks
		mov	x\tmp1, #SECURE_TASK_SIZE
		madd	x\res, x\tmp0, x\tmp1, x\res
	.endm

LOCAL_FUNC vector_std_smc_entry , :
	sub	sp, sp, #THREAD_SMC_ARGS_SIZE
	store_xregs sp, THREAD_SMC_ARGS_X0, 0, 7 // Stores registers x[from_regnum]..x[to_regnum] at [base_reg, #base_offs]
	// this set up the x0-x7 smc call arguments to stack
	// and thread_handle_std_smc will be called using a pointer point to these arguments
	mov	x0, sp // x0 is the pointer
	bl	thread_handle_std_smc
	/*
	 * Normally thread_handle_std_smc() should return via
	 * thread_exit(), thread_rpc(), but if thread_handle_std_smc()
	 * hasn't switched stack (error detected) it will do a normal "C"
	 * return.
	 */
	load_xregs sp, THREAD_SMC_ARGS_X0, 1, 8
	add	sp, sp, #THREAD_SMC_ARGS_SIZE
	ldr	x0, =TEESMC_OPTEED_RETURN_CALL_DONE
	smc	#0
	b	.	/* SMC should not return */
END_FUNC vector_std_smc_entry

LOCAL_FUNC vector_fast_smc_entry , :
	sub	sp, sp, #THREAD_SMC_ARGS_SIZE // sub Rd, Rn, Operand2. => Rd = Rn - Operand2
	store_xregs sp, THREAD_SMC_ARGS_X0, 0, 7
	mov	x0, sp
	bl	thread_handle_fast_smc
	load_xregs sp, THREAD_SMC_ARGS_X0, 1, 8
	add	sp, sp, #THREAD_SMC_ARGS_SIZE
	ldr	x0, =TEESMC_OPTEED_RETURN_CALL_DONE
	smc	#0
	b	.	/* SMC should not return */
END_FUNC vector_fast_smc_entry

// rd figured out that this is only used for EL3 pass fiq, when EL1 receive fiq, it is handled in el1_fiq_sp0
LOCAL_FUNC vector_fiq_entry , : 
	/* Secure Monitor received a FIQ and passed control to us. */
	bl	thread_check_canaries
	adr	x16, thread_nintr_handler_ptr /*main_fiq*/
	ldr	x16, [x16]
	blr	x16
	// rd thinks: here should be the right place to return this fiq handler
	ldr	x0, =TEESMC_OPTEED_RETURN_FIQ_DONE
	smc	#0
	b	.	/* SMC should not return */
END_FUNC vector_fiq_entry

LOCAL_FUNC vector_cpu_on_entry , :
	adr	x16, thread_cpu_on_handler_ptr
	ldr	x16, [x16]
	blr	x16
	mov	x1, x0
	ldr	x0, =TEESMC_OPTEED_RETURN_ON_DONE
	smc	#0
	b	.	/* SMC should not return */
END_FUNC vector_cpu_on_entry

LOCAL_FUNC vector_cpu_off_entry , :
	adr	x16, thread_cpu_off_handler_ptr
	ldr	x16, [x16]
	blr	x16
	mov	x1, x0
	ldr	x0, =TEESMC_OPTEED_RETURN_OFF_DONE
	smc	#0
	b	.	/* SMC should not return */
END_FUNC vector_cpu_off_entry

LOCAL_FUNC vector_cpu_suspend_entry , :
	adr	x16, thread_cpu_suspend_handler_ptr
	ldr	x16, [x16]
	blr	x16
	mov	x1, x0
	ldr	x0, =TEESMC_OPTEED_RETURN_SUSPEND_DONE
	smc	#0
	b	.	/* SMC should not return */
END_FUNC vector_cpu_suspend_entry

LOCAL_FUNC vector_cpu_resume_entry , :
	adr	x16, thread_cpu_resume_handler_ptr
	ldr	x16, [x16]
	blr	x16
	mov	x1, x0
	ldr	x0, =TEESMC_OPTEED_RETURN_RESUME_DONE
	smc	#0
	b	.	/* SMC should not return */
END_FUNC vector_cpu_resume_entry

LOCAL_FUNC vector_system_off_entry , :
	adr	x16, thread_system_off_handler_ptr
	ldr	x16, [x16]
	blr	x16
	mov	x1, x0
	ldr	x0, =TEESMC_OPTEED_RETURN_SYSTEM_OFF_DONE
	smc	#0
	b	.	/* SMC should not return */
END_FUNC vector_system_off_entry

LOCAL_FUNC vector_system_reset_entry , :
	adr	x16, thread_system_reset_handler_ptr
	ldr	x16, [x16]
	blr	x16
	mov	x1, x0
	ldr	x0, =TEESMC_OPTEED_RETURN_SYSTEM_RESET_DONE
	smc	#0
	b	.	/* SMC should not return */
END_FUNC vector_system_reset_entry

/*
 * Vector table supplied to ARM Trusted Firmware (ARM-TF) at
 * initialization.
 *
 * Note that ARM-TF depends on the layout of this vector table, any change
 * in layout has to be synced with ARM-TF.
 */
FUNC thread_vector_table , :
	b	vector_std_smc_entry
	b	vector_fast_smc_entry
	b	vector_cpu_on_entry
	b	vector_cpu_off_entry
	b	vector_cpu_resume_entry
	b	vector_cpu_suspend_entry
	b	vector_fiq_entry
	b	vector_system_off_entry
	b	vector_system_reset_entry
END_FUNC thread_vector_table
KEEP_PAGER thread_vector_table


FUNC thread_resume , :

	load_xregs x0, THREAD_CTX_REGS_SP, 1, 3 // sp loaded into x1, pc into x2, cpsr into x3; thread_std_smc_entry
	load_xregs x0, THREAD_CTX_REGS_X4, 4, 30 //resoter x4-x30
	mov	sp, x1 //move pc to sp, sp is saved previously. restore sp
	msr	elr_el1, x2 //  resture pc, Link Register (LR) stores the return address when a subroutine call is made.
	// Exception Link Registers: When an exception is taken, the elr for the target exception level 
	// stores the return address to jump to after the handling of that exception completes.
	msr	spsr_el1, x3 // restore program state register
	b_if_spsr_is_el0 w3, 1f // b_if_spsr_is_el0 reg, label
	load_xregs x0, THREAD_CTX_REGS_X1, 1, 3 //restore x1-x3
	ldr	x0, [x0, THREAD_CTX_REGS_X0] //restore x0
	eret // it behaves as: MOVS PC, LR in the ARM instruction set

1:	load_xregs x0, THREAD_CTX_REGS_X1, 1, 3
	ldr	x0, [x0, THREAD_CTX_REGS_X0]

	msr	spsel, #1
	store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 1 //store x0, x1
	b	eret_to_el0
END_FUNC thread_resume

FUNC thread_std_smc_entry , :
	/* pass x0-x7 in a struct thread_smc_args */
	sub	sp, sp, #THREAD_SMC_ARGS_SIZE
	store_xregs sp, THREAD_SMC_ARGS_X0, 0, 7
	mov	x0, sp

	/* Call the registered handler */
	bl	__thread_std_smc_entry

	/*
	 * Load the returned x0-x3 into preserved registers and skip the
	 * "returned" x4-x7 since they will not be returned to normal
	 * world.
	 */
	load_xregs sp, THREAD_SMC_ARGS_X0, 20, 23
	add	sp, sp, #THREAD_SMC_ARGS_SIZE

	/* Mask all maskable exceptions before switching to temporary stack */
	msr	daifset, #DAIFBIT_ALL
	bl	thread_get_tmp_sp
	mov	sp, x0

	bl	thread_state_free

	// rd thinks: here makes prepare() and invoke() not return to fiq handler but calls smc instead.
	// FIXME: this is a quick fix for calling thread_std_smc_entry with fiq. In the future, would like to
	// create a separate function for this. Current way will make normal world call smc call fail.

	//jump to secure task finish and return to scheduler from this point
	/*ldr x1, =fiqORstd // load address of fiqORstd
	ldr x0, [x1] // load value of fiqORstd
	cmp x0, #1 // if fiq is true
	beq finish_secure_task_from_scheduler*/
	bl finish_secure_task_from_scheduler
	
	// add if else here for fiq and std case.
	/*ldr x1, =fiqORstd // load address of fiqORstd
	ldr x0, [x1] // load value of fiqORstd*/
	mov x1, x0
	ldr x0, [x0]
	cmp x0, #1 // if fiq is true
	beq rd_fiq // goto rd_fiq
	

rd_std:
	ldr	x0, =TEESMC_OPTEED_RETURN_CALL_DONE
	mov	x1, x20
	mov	x2, x21
	mov	x3, x22
	mov	x4, x23
	smc #0
	b 	.	/* SMC should not return */

rd_fiq:
	mov x0, #0x0 // move 0 to x0
	str x0, [x1] // set fiqORstd to 0

	ldr	x0, =TEESMC_OPTEED_RETURN_FIQ_DONE

	//switch to tmp stack
	

	//msr daifclr, #DAIFBIT_IRQ
	smc	#0
	b	.	/* SMC should not return */
END_FUNC thread_std_smc_entry

FUNC thread_fiq_exit , :
	// add if else here for fiq and std case.
	/*ldr x1, =fiqORstd // load address of fiqORstd
	ldr x0, [x1] // load value of fiqORstd*/
	mov x1, x0
	ldr x0, [x0]

	cmp x0, #1 // if fiq is true
	beq rd_fiq // goto rd_fiq
END_FUNC thread_fiq_exit

/* void thread_rpc(uint32_t rv[THREAD_RPC_NUM_ARGS]) */
FUNC thread_rpc , :
	/* Read daif and create an SPSR */
	mrs	x1, daif
	orr	x1, x1, #(SPSR_64_MODE_EL1 << SPSR_64_MODE_EL_SHIFT)

	/* Mask all maskable exceptions before switching to temporary stack */
	msr	daifset, #DAIFBIT_ALL
	push	x0, xzr
	push	x1, x30
	bl	thread_get_ctx_regs
	ldr	x30, [sp, #8]
	store_xregs x0, THREAD_CTX_REGS_X19, 19, 30
	mov	x19, x0

	bl	thread_get_tmp_sp
	pop	x1, xzr		/* Match "push x1, x30" above */
	mov	x2, sp
	str	x2, [x19, #THREAD_CTX_REGS_SP]
	ldr	x20, [sp]	/* Get pointer to rv[] */ //sp point to &rv (original x0)
	mov	sp, x0		/* Switch to tmp stack */

	adr	x2, .thread_rpc_return
	mov	w0, #THREAD_FLAGS_COPY_ARGS_ON_RETURN
	bl	thread_state_suspend
	mov	x4, x0		/* Supply thread index */
	ldr	w0, =TEESMC_OPTEED_RETURN_CALL_DONE
	load_wregs x20, 0, 1, 3	/* Load rv[] into w0-w2 */
	smc	#0
	b	.		/* SMC should not return */

.thread_rpc_return:
	/*
	 * At this point has the stack pointer been restored to the value
	 * stored in THREAD_CTX above.
	 *
	 * Jumps here from thread_resume above when RPC has returned. The
	 * IRQ and FIQ bits are restored to what they where when this
	 * function was originally entered.
	 */
	pop	x16, xzr	/* Get pointer to rv[] */
	store_wregs x16, 0, 0, 5	/* Store w0-w5 into rv[] */
	ret
END_FUNC thread_rpc
KEEP_PAGER thread_rpc

FUNC thread_smc , :
	smc	#0
	ret
END_FUNC thread_smc

FUNC thread_init_vbar , :
	msr	vbar_el1, x0
	ret
END_FUNC thread_init_vbar
KEEP_PAGER thread_init_vbar

/*
 * uint32_t __thread_enter_user_mode(unsigned long a0, unsigned long a1,
 *               unsigned long a2, unsigned long a3, unsigned long user_sp,
 *               unsigned long user_func, unsigned long spsr,
 *               uint32_t *exit_status0, uint32_t *exit_status1)
 *
 */
FUNC __thread_enter_user_mode , :
	ldr	x8, [sp]
	/*
	 * Create the and fill in the struct thread_user_mode_rec
	 */
	sub	sp, sp, #THREAD_USER_MODE_REC_SIZE
	store_xregs sp, THREAD_USER_MODE_REC_EXIT_STATUS0_PTR, 7, 8
	store_xregs sp, THREAD_USER_MODE_REC_X19, 19, 30

	/*
	 * Switch to SP_EL1
	 * Disable exceptions
	 * Save kern sp in x19
	 */
	msr	daifset, #DAIFBIT_ALL
	mov	x19, sp
	msr	spsel, #1

	/*
	 * Save the kernel stack pointer in the thread context
	 */
	/* get pointer to current thread context */
	get_thread_ctx sp, 21, 20, 22
	/*
	 * Save kernel stack pointer to ensure that el0_svc() uses
	 * correct stack pointer
	 */
	str	x19, [x21, #THREAD_CTX_KERN_SP]

	/*
	 * Initialize SPSR, ELR_EL1, and SP_EL0 to enter user mode
	 */
	msr	spsr_el1, x6
	/* Set user sp */
	mov	x13, x4		/* Used when running TA in Aarch32 */
	msr	sp_el0, x4	/* Used when running TA in Aarch64 */
	/* Set user function */
	msr	elr_el1, x5
	/* Set frame pointer (user stack can't be unwound past this point) */
	mov x29, #0


	/* Jump into user mode */
	store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 1
	b eret_to_el0
END_FUNC __thread_enter_user_mode
KEEP_PAGER __thread_enter_user_mode

/*
 * void thread_unwind_user_mode(uint32_t ret, uint32_t exit_status0,
 * 		uint32_t exit_status1);
 * See description in thread.h
 */
FUNC thread_unwind_user_mode , :
	/* Store the exit status */
	ldp	x3, x4, [sp, #THREAD_USER_MODE_REC_EXIT_STATUS0_PTR]
	str	w1, [x3]
	str	w2, [x4]
	/* Restore x19..x30 */
	load_xregs sp, THREAD_USER_MODE_REC_X19, 19, 30
	add	sp, sp, #THREAD_USER_MODE_REC_SIZE
	/* Return from the call of thread_enter_user_mode() */
	ret
END_FUNC thread_unwind_user_mode

	/*
	 * This macro verifies that the a given vector doesn't exceed the
	 * architectural limit of 32 instructions. This is meant to be placed
	 * immedately after the last instruction in the vector. It takes the
	 * vector entry as the parameter
	 */
	.macro check_vector_size since
	  .if (. - \since) > (32 * 4)
	    .error "Vector exceeds 32 instructions"
	  .endif
	.endm

	.macro restore_mapping
#ifdef CFG_CORE_UNMAP_CORE_AT_EL0
		/* Temporarily save x0, x1 */
		msr	tpidr_el1, x0
		msr	tpidrro_el0, x1

		/* Update the mapping to use the full kernel mapping */
		mrs	x0, ttbr0_el1
		sub	x0, x0, #CORE_MMU_L1_TBL_OFFSET
		/* switch to kernel mode ASID */
		bic	x0, x0, #BIT(TTBR_ASID_SHIFT)
		msr	ttbr0_el1, x0
		isb

		/* Jump into the full mapping and continue execution */
		ldr	x0, =1f
		br	x0
	1:

		/* Point to the vector into the full mapping */
		adr	x0, thread_user_kcode_offset
		ldr	x0, [x0]
		mrs	x1, vbar_el1
		add	x1, x1, x0
		msr	vbar_el1, x1 // vector base address 
		isb

#ifdef CFG_CORE_WORKAROUND_SPECTRE_BP_SEC
		/*
		 * Update the SP with thread_user_kdata_sp_offset as
		 * described in init_user_kcode().
		 */
		adr	x0, thread_user_kdata_sp_offset
		ldr	x0, [x0]
		add	sp, sp, x0
#endif

		/* Restore x0, x1 */
		mrs	x0, tpidr_el1 // EL1 Software Thread ID Register
		// Provides a location where software executing at EL1 can store thread identifying information
		mrs	x1, tpidrro_el0
		store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 3
#else
		store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 3
		mrs	x0, ttbr0_el1 // Translation Table Base Register 0
		// holds the base address of translation table 0, and information about the memory it occupies
		/* switch to kernel mode ASID */
		bic	x0, x0, #BIT(TTBR_ASID_SHIFT)
		msr	ttbr0_el1, x0
		isb
#endif /*CFG_CORE_UNMAP_CORE_AT_EL0*/
	.endm

#define INV_INSN	0
	.section .text.thread_excp_vect
	.align	11, INV_INSN
FUNC thread_excp_vect , : // rd guesses this is the vbar setted real vector table. 
	/* -----------------------------------------------------
	 * EL1 with SP0 : 0x0 - 0x180
	 * -----------------------------------------------------
	 */
	.align	7, INV_INSN
el1_sync_sp0:
	store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 3
	mov x0, sp //store sp
	b	el1_sync_abort
	check_vector_size el1_sync_sp0

	.align	7, INV_INSN
el1_irq_sp0:
	store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 3
	b	elx_irq
	check_vector_size el1_irq_sp0

	.align	7, INV_INSN
//target interrupt handler
el1_fiq_sp0:
	store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 3
	b elx_fiq
	//b	el1_fiq_sp0_rd
	check_vector_size el1_fiq_sp0

	.align	7, INV_INSN
el1_serror_sp0:
	b	el1_serror_sp0
	check_vector_size el1_serror_sp0

	/* -----------------------------------------------------
	 * Current EL with SP1: 0x200 - 0x380
	 * -----------------------------------------------------
	 */
	.align	7, INV_INSN
el1_sync_sp1:
	b	el1_sync_sp1
	check_vector_size el1_sync_sp1

	.align	7, INV_INSN
el1_irq_sp1: 
	b	el1_irq_sp1
	check_vector_size el1_irq_sp1

	.align	7, INV_INSN
el1_fiq_sp1: // wow, rd find out, el1_irq/fiq_sp1 are infinite loop to itself, thus not implemented
	b	el1_fiq_sp1_rd // this is not called. bc spsel is set to 0 during pta.
	check_vector_size el1_fiq_sp1
	/*
	 * This macro verifies that the a given vector doesn't exceed the
	 * architectural limit of 32 instructions. This is meant to be placed
	 * immedately after the last instruction in the vector. It takes the
	 * vector entry as the parameter
	 */

	.align	7, INV_INSN
el1_serror_sp1:
	b	el1_serror_sp1
	check_vector_size el1_serror_sp1

	/* -----------------------------------------------------
	 * Lower EL using AArch64 : 0x400 - 0x580
	 * -----------------------------------------------------
	 */
	.align	7, INV_INSN
el0_sync_a64:
	restore_mapping

	mrs	x2, esr_el1 // Exception Syndrome Register
	mrs	x3, sp_el0
	lsr	x2, x2, #ESR_EC_SHIFT
	cmp	x2, #ESR_EC_AARCH64_SVC
	b.eq	el0_svc
	b	el0_sync_abort
	check_vector_size el0_sync_a64

	.align	7, INV_INSN
el0_irq_a64:
	restore_mapping

	b	elx_irq
	check_vector_size el0_irq_a64

	.align	7, INV_INSN
//target interrupt handler
el0_fiq_a64:
	restore_mapping
	//jinwen add this to store register x0-x3
	store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 3
	b	elx_fiq
	check_vector_size el0_fiq_a64

	.align	7, INV_INSN
el0_serror_a64:
	b   	el0_serror_a64
	check_vector_size el0_serror_a64

	/* -----------------------------------------------------
	 * Lower EL using AArch32 : 0x0 - 0x180
	 * -----------------------------------------------------
	 */
	.align	7, INV_INSN
el0_sync_a32:
	restore_mapping

	mrs	x2, esr_el1
	mrs	x3, sp_el0
	lsr	x2, x2, #ESR_EC_SHIFT
	cmp	x2, #ESR_EC_AARCH32_SVC
	b.eq	el0_svc
	b	el0_sync_abort
	check_vector_size el0_sync_a32

	.align	7, INV_INSN
el0_irq_a32:
	restore_mapping

	b	elx_irq
	check_vector_size el0_irq_a32

	.align	7, INV_INSN
el0_fiq_a32:
	restore_mapping

	b	elx_fiq
	check_vector_size el0_fiq_a32

	.align	7, INV_INSN
el0_serror_a32:
	b	el0_serror_a32
	check_vector_size el0_serror_a32

#if defined(CFG_CORE_WORKAROUND_SPECTRE_BP_SEC)
	.macro invalidate_branch_predictor
		store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 3
		mov_imm	x0, SMCCC_ARCH_WORKAROUND_1
		smc	#0
		load_xregs sp, THREAD_CORE_LOCAL_X0, 0, 3
	.endm

	.align	11, INV_INSN
	.global thread_excp_vect_workaround
thread_excp_vect_workaround:
	/* -----------------------------------------------------
	 * EL1 with SP0 : 0x0 - 0x180
	 * -----------------------------------------------------
	 */
	.align	7, INV_INSN
workaround_el1_sync_sp0:
	b	el1_sync_sp0
	check_vector_size workaround_el1_sync_sp0

	.align	7, INV_INSN
workaround_el1_irq_sp0:
	b	el1_irq_sp0
	check_vector_size workaround_el1_irq_sp0

	.align	7, INV_INSN
workaround_el1_fiq_sp0:
	b	el1_fiq_sp0
	check_vector_size workaround_el1_fiq_sp0

	.align	7, INV_INSN
workaround_el1_serror_sp0:
	b	el1_serror_sp0
	check_vector_size workaround_el1_serror_sp0

	/* -----------------------------------------------------
	 * Current EL with SP1: 0x200 - 0x380
	 * -----------------------------------------------------
	 */
	.align	7, INV_INSN
workaround_el1_sync_sp1:
	b	workaround_el1_sync_sp1
	check_vector_size workaround_el1_sync_sp1

	.align	7, INV_INSN
workaround_el1_irq_sp1:
	b	workaround_el1_irq_sp1
	check_vector_size workaround_el1_irq_sp1

	.align	7, INV_INSN
workaround_el1_fiq_sp1:
	b	workaround_el1_fiq_sp1
	check_vector_size workaround_el1_fiq_sp1

	.align	7, INV_INSN
workaround_el1_serror_sp1:
	b	workaround_el1_serror_sp1
	check_vector_size workaround_el1_serror_sp1

	/* -----------------------------------------------------
	 * Lower EL using AArch64 : 0x400 - 0x580
	 * -----------------------------------------------------
	 */
	.align	7, INV_INSN
workaround_el0_sync_a64:
	invalidate_branch_predictor
	b	el0_sync_a64
	check_vector_size workaround_el0_sync_a64

	.align	7, INV_INSN
workaround_el0_irq_a64:
	invalidate_branch_predictor
	b	el0_irq_a64
	check_vector_size workaround_el0_irq_a64

	.align	7, INV_INSN
workaround_el0_fiq_a64:
	invalidate_branch_predictor
	b	el0_fiq_a64
	check_vector_size workaround_el0_fiq_a64

	.align	7, INV_INSN
workaround_el0_serror_a64:
	b   	workaround_el0_serror_a64
	check_vector_size workaround_el0_serror_a64

	/* -----------------------------------------------------
	 * Lower EL using AArch32 : 0x0 - 0x180
	 * -----------------------------------------------------
	 */
	.align	7, INV_INSN
workaround_el0_sync_a32:
	invalidate_branch_predictor
	b	el0_sync_a32
	check_vector_size workaround_el0_sync_a32

	.align	7, INV_INSN
workaround_el0_irq_a32:
	invalidate_branch_predictor
	b	el0_irq_a32
	check_vector_size workaround_el0_irq_a32

	.align	7, INV_INSN
workaround_el0_fiq_a32:
	invalidate_branch_predictor
	b	el0_fiq_a32
	check_vector_size workaround_el0_fiq_a32

	.align	7, INV_INSN
workaround_el0_serror_a32:
	b	workaround_el0_serror_a32
	check_vector_size workaround_el0_serror_a32
#endif /*CFG_CORE_WORKAROUND_SPECTRE_BP_SEC*/

/*
 * We're keeping this code in the same section as the vector to make sure
 * that it's always available.
 */
eret_to_el0:

#ifdef CFG_CORE_UNMAP_CORE_AT_EL0
	/* Point to the vector into the reduced mapping */
	adr	x0, thread_user_kcode_offset
	ldr	x0, [x0]
	mrs	x1, vbar_el1
	sub	x1, x1, x0
	msr	vbar_el1, x1
	isb

#ifdef CFG_CORE_WORKAROUND_SPECTRE_BP_SEC
	/* Store the SP offset in tpidr_el1 to be used below to update SP */
	adr	x1, thread_user_kdata_sp_offset
	ldr	x1, [x1]
	msr	tpidr_el1, x1
#endif

	/* Jump into the reduced mapping and continue execution */
	ldr	x1, =1f
	sub	x1, x1, x0
	br	x1
1:

	load_xregs sp, THREAD_CORE_LOCAL_X0, 0, 1
	msr	tpidrro_el0, x0

	/* Update the mapping to exclude the full kernel mapping */
	mrs	x0, ttbr0_el1
	add	x0, x0, #CORE_MMU_L1_TBL_OFFSET
	orr	x0, x0, #BIT(TTBR_ASID_SHIFT) /* switch to user mode ASID */ // Address Space Identifier - ASID
	// MMU uses an ASID to distinguish between memory pages which have the same virtual address, but which 
	// are used by an individual task ( I.e. A task which uses non-Global memory). 
	// The ASID is an eight-bit value, from 0-255, assigned by the Operating System
	msr	ttbr0_el1, x0
	isb

#ifdef CFG_CORE_WORKAROUND_SPECTRE_BP_SEC
	/*
	 * Update the SP with thread_user_kdata_sp_offset as described in
	 * init_user_kcode().
	 */
	mrs	x0, tpidr_el1
	sub	sp, sp, x0
#endif

	mrs	x0, tpidrro_el0
#else
	mrs	x0, ttbr0_el1
	orr	x0, x0, #BIT(TTBR_ASID_SHIFT) /* switch to user mode ASID */
	msr	ttbr0_el1, x0 // mmu change mapping
	isb
	load_xregs sp, THREAD_CORE_LOCAL_X0, 0, 1
#endif /*CFG_CORE_UNMAP_CORE_AT_EL0*/

	eret
	/*
	 * Make sure that literals are placed before the
	 * thread_excp_vect_end label.
	 */
	.pool
	.global thread_excp_vect_end
thread_excp_vect_end:
END_FUNC thread_excp_vect

LOCAL_FUNC el0_svc , :
	/* get pointer to current thread context in x0 */
	get_thread_ctx sp, 0, 1, 2
	/* load saved kernel sp */
	ldr	x0, [x0, #THREAD_CTX_KERN_SP]
	/* Keep pointer to initial recod in x1 */
	mov	x1, sp
	/* Switch to SP_EL0 and restore kernel sp */
	msr	spsel, #0
	mov	x2, sp	/* Save SP_EL0 */
	mov	sp, x0

	/* Make room for struct thread_svc_regs */
	sub	sp, sp, #THREAD_SVC_REG_SIZE
	stp	x30,x2, [sp, #THREAD_SVC_REG_X30]

	/* Restore x0-x3 */
	ldp	x2, x3, [x1, #THREAD_CORE_LOCAL_X2]
	ldp	x0, x1, [x1, #THREAD_CORE_LOCAL_X0]

	/* Prepare the argument for the handler */
	store_xregs sp, THREAD_SVC_REG_X0, 0, 14
	mrs	x0, elr_el1
	mrs	x1, spsr_el1
	store_xregs sp, THREAD_SVC_REG_ELR, 0, 1
	mov	x0, sp

	/*
	 * Unmask native interrupts, Serror, and debug exceptions since we have
	 * nothing left in sp_el1. Note that the SVC handler is excepted to
	 * re-enable foreign interrupts by itself.
	 */
#if defined(CFG_ARM_GICV3)
	msr	daifclr, #(DAIFBIT_IRQ | DAIFBIT_ABT | DAIFBIT_DBG)
#else
	msr	daifclr, #(DAIFBIT_FIQ | DAIFBIT_ABT | DAIFBIT_DBG)
#endif

	/* Call the handler */
	bl	tee_svc_handler

	/* Mask all maskable exceptions since we're switching back to sp_el1 */
	msr	daifset, #DAIFBIT_ALL

	/*
	 * Save kernel sp we'll had at the beginning of this function.
	 * This is when this TA has called another TA because
	 * __thread_enter_user_mode() also saves the stack pointer in this
	 * field.
	 */
	msr	spsel, #1
	get_thread_ctx sp, 0, 1, 2
	msr	spsel, #0
	add	x1, sp, #THREAD_SVC_REG_SIZE
	str	x1, [x0, #THREAD_CTX_KERN_SP]

	/* Restore registers to the required state and return*/
	load_xregs sp, THREAD_SVC_REG_ELR, 0, 1
	msr	elr_el1, x0
	msr	spsr_el1, x1
	load_xregs sp, THREAD_SVC_REG_X2, 2, 14
	mov	x30, sp
	ldr	x0, [x30, #THREAD_SVC_REG_SP_EL0]
	mov	sp, x0
	b_if_spsr_is_el0 w1, 1f
	ldp	x0, x1, [x30, THREAD_SVC_REG_X0]
	ldr	x30, [x30, #THREAD_SVC_REG_X30]

	eret

1:	ldp	x0, x1, [x30, THREAD_SVC_REG_X0]
	ldr	x30, [x30, #THREAD_SVC_REG_X30]

	msr	spsel, #1
	store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 1
	b	eret_to_el0
END_FUNC el0_svc

LOCAL_FUNC el1_sync_abort , :
	mov	x0, sp
	msr	spsel, #0
	mov	x3, sp		/* Save original sp */

	/*
	 * Update core local flags.
	 * flags = (flags << THREAD_CLF_SAVED_SHIFT) | THREAD_CLF_ABORT;
	 */
	ldr	w1, [x0, #THREAD_CORE_LOCAL_FLAGS]
	lsl	w1, w1, #THREAD_CLF_SAVED_SHIFT
	orr	w1, w1, #THREAD_CLF_ABORT
	tbnz	w1, #(THREAD_CLF_SAVED_SHIFT + THREAD_CLF_ABORT_SHIFT), \
			.Lsel_tmp_sp

	/* Select abort stack */
	ldr	x2, [x0, #THREAD_CORE_LOCAL_ABT_STACK_VA_END]
	b	.Lset_sp

.Lsel_tmp_sp:
	/* Select tmp stack */
	ldr	x2, [x0, #THREAD_CORE_LOCAL_TMP_STACK_VA_END]
	orr	w1, w1, #THREAD_CLF_TMP	/* flags |= THREAD_CLF_TMP; */

.Lset_sp:
	mov	sp, x2
	str	w1, [x0, #THREAD_CORE_LOCAL_FLAGS]

	/*
	 * Save state on stack
	 */
	sub	sp, sp, #THREAD_ABT_REGS_SIZE
	mrs	x2, spsr_el1
	/* Store spsr, sp_el0 */
	stp	x2, x3, [sp, #THREAD_ABT_REG_SPSR]
	/* Store original x0, x1 */
	ldp	x2, x3, [x0, #THREAD_CORE_LOCAL_X0]
	stp	x2, x3, [sp, #THREAD_ABT_REG_X0]
	/* Store original x2, x3 and x4 to x29 */
	ldp	x2, x3, [x0, #THREAD_CORE_LOCAL_X2]
	store_xregs sp, THREAD_ABT_REG_X2, 2, 29
	/* Store x30, elr_el1 */
	mrs	x0, elr_el1
	stp	x30, x0, [sp, #THREAD_ABT_REG_X30]

	/*
	 * Call handler
	 */
	mov	x0, #0
	mov	x1, sp
	bl	abort_handler

	/*
	 * Restore state from stack
	 */
	/* Load x30, elr_el1 */
	ldp	x30, x0, [sp, #THREAD_ABT_REG_X30]
	msr	elr_el1, x0
	/* Load x0 to x29 */
	load_xregs sp, THREAD_ABT_REG_X0, 0, 29
	/* Switch to SP_EL1 */
	msr	spsel, #1
	/* Save x0 to x3 in CORE_LOCAL */
	store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 3
	/* Restore spsr_el1 and sp_el0 */
	mrs	x3, sp_el0
	ldp	x0, x1, [x3, #THREAD_ABT_REG_SPSR]
	msr	spsr_el1, x0
	msr	sp_el0, x1

	/* Update core local flags */
	ldr	w0, [sp, #THREAD_CORE_LOCAL_FLAGS]
	lsr	w0, w0, #THREAD_CLF_SAVED_SHIFT
	str	w0, [sp, #THREAD_CORE_LOCAL_FLAGS]

	/* Restore x0 to x3 */
	load_xregs sp, THREAD_CORE_LOCAL_X0, 0, 3

	/* Return from exception */
	eret
END_FUNC el1_sync_abort

	/* sp_el0 in x3 */
LOCAL_FUNC el0_sync_abort , :
	/*
	 * Update core local flags
	 */
	ldr	w1, [sp, #THREAD_CORE_LOCAL_FLAGS]
	lsl	w1, w1, #THREAD_CLF_SAVED_SHIFT
	orr	w1, w1, #THREAD_CLF_ABORT
	str	w1, [sp, #THREAD_CORE_LOCAL_FLAGS]

	/*
	 * Save state on stack
	 */

	/* load abt_stack_va_end */
	ldr	x1, [sp, #THREAD_CORE_LOCAL_ABT_STACK_VA_END]
	/* Keep pointer to initial record in x0 */
	mov	x0, sp
	/* Switch to SP_EL0 */
	msr	spsel, #0
	mov	sp, x1
	sub	sp, sp, #THREAD_ABT_REGS_SIZE
	mrs	x2, spsr_el1
	/* Store spsr, sp_el0 */
	stp	x2, x3, [sp, #THREAD_ABT_REG_SPSR]
	/* Store original x0, x1 */
	ldp	x2, x3, [x0, #THREAD_CORE_LOCAL_X0]
	stp	x2, x3, [sp, #THREAD_ABT_REG_X0]
	/* Store original x2, x3 and x4 to x29 */
	ldp	x2, x3, [x0, #THREAD_CORE_LOCAL_X2]
	store_xregs sp, THREAD_ABT_REG_X2, 2, 29
	/* Store x30, elr_el1 */
	mrs	x0, elr_el1
	stp	x30, x0, [sp, #THREAD_ABT_REG_X30]

	/*
	 * Call handler
	 */
	mov	x0, #0
	mov	x1, sp
	bl	abort_handler

	/*
	 * Restore state from stack
	 */

	/* Load x30, elr_el1 */
	ldp	x30, x0, [sp, #THREAD_ABT_REG_X30]
	msr	elr_el1, x0
	/* Load x0 to x29 */
	load_xregs sp, THREAD_ABT_REG_X0, 0, 29
	/* Switch to SP_EL1 */
	msr	spsel, #1
	/* Save x0 to x3 in EL1_REC */
	store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 3
	/* Restore spsr_el1 and sp_el0 */
	mrs	x3, sp_el0
	ldp	x0, x1, [x3, #THREAD_ABT_REG_SPSR]
	msr	spsr_el1, x0
	msr	sp_el0, x1

	/* Update core local flags */
	ldr	w1, [sp, #THREAD_CORE_LOCAL_FLAGS]
	lsr	w1, w1, #THREAD_CLF_SAVED_SHIFT
	str	w1, [sp, #THREAD_CORE_LOCAL_FLAGS]

	/* Restore x2 to x3 */
	load_xregs sp, THREAD_CORE_LOCAL_X2, 2, 3

	b_if_spsr_is_el0 w0, 1f

	/* Restore x0 to x1 */
	load_xregs sp, THREAD_CORE_LOCAL_X0, 0, 1

	/* Return from exception */
	eret
1:	b	eret_to_el0
END_FUNC el0_sync_abort

/* The handler of foreign interrupt. IRQ */
.macro foreign_intr_handler mode:req
	/*
	 * Update core local flags
	 */
	//current sp should point to struct thread_core_local
	ldr	w1, [sp, #THREAD_CORE_LOCAL_FLAGS] //get the offset of member flags in struct thread_core_local
	lsl	w1, w1, #THREAD_CLF_SAVED_SHIFT //flags << 4 
	orr	w1, w1, #THREAD_CLF_TMP // flags | (1 << 0)  set the last bit of flags to 1
	.ifc	\mode\(),fiq  //decide wheter this interrupt is fiq or irq
	orr	w1, w1, #THREAD_CLF_FIQ //set fiq bit in flags when this is a fiq
	.else
	orr	w1, w1, #THREAD_CLF_IRQ  //set irq bit in flags when this is a irq
	.endif
	str	w1, [sp, #THREAD_CORE_LOCAL_FLAGS] //store flags in stack

	/* get pointer to current thread context in x0 */
	get_thread_ctx sp, 0, 1, 2 //get current thread_ctx struct address from thrreads[]
	
	// x0 here points to current thread ctx struct address

	// ********** save user land context 
	/* Keep original SP_EL0 */
	mrs	x2, sp_el0 //set x2 to sp_el0 (el0 stack pointer)
	/* Store original sp_el0 */
	str	x2, [x0, #THREAD_CTX_REGS_SP] //save el0 stack pointer into current thread_ctx struct	
	/* store x4..x30 */
	store_xregs x0, THREAD_CTX_REGS_X4, 4, 30 //save x4-x30 into current thread_ctx struct
	// x0 was used earlier in the function, and therefore we are recovering it from save storage in thread core local
	/* Load original x0..x3 into x10..x13 */
	load_xregs sp, THREAD_CORE_LOCAL_X0, 10, 13 // set x10,x11,x12,x13 to x0,x1,x2,x3 saved in thread_core_local struct
	/* Save original x0..x3 */
	store_xregs x0, THREAD_CTX_REGS_X0, 10, 13 // save x0,x1,x2,x3 of thread_core_local struct to current thread_ctx(x1-x3 are used at the begining of this function)



	// switch current thread user space thread to temp stack 
	/* load tmp_stack_va_end */
	ldr	x1, [sp, #THREAD_CORE_LOCAL_TMP_STACK_VA_END] //set x1 to tmp_stack_va_end member in thread_core_local (stack space of each arm core)
	/* Switch to SP_EL0 */
	msr	spsel, #0 //choose use sp_el0
	mov	sp, x1 //set sp_el0 to tmp_stack_va_end

	/*
	 * Mark current thread as suspended
	 */
	mov	w0, #THREAD_FLAGS_EXIT_ON_FOREIGN_INTR //set w0 to 0x100 #define THREAD_FLAGS_EXIT_ON_FOREIGN_INTR	(1 << 2)
	mrs	x1, spsr_el1 //set x1 to spsr_el1
	mrs	x2, elr_el1  //set x2 to elr_rl1
	/*int thread_state_suspend(uint32_t flags, uint32_t cpsr, vaddr_t pc)*/
	bl	thread_state_suspend //save pc, psr, and change thread state to suspend
	mov	w4, w0		/* Supply thread index */ //set w4 to current thread index in threads[] /*return ct; current thread index in threads[]*/


	// why do we need to do another shift???
	/* Update core local flags */
	/* Switch to SP_EL1 */
	msr	spsel, #1 //select sp_el1
	ldr	w0, [sp, #THREAD_CORE_LOCAL_FLAGS]	// get the flags in struct thread_core_local
	lsr	w0, w0, #THREAD_CLF_SAVED_SHIFT  	// flags << 4 
	str	w0, [sp, #THREAD_CORE_LOCAL_FLAGS] 	// store flags in stack
	msr	spsel, #0 							// select sp_el0

	/*
	 * Note that we're exiting with SP_EL0 selected since the entry
	 * functions expects to have SP_EL0 selected with the tmp stack
	 * set.
	 */
	ldr	w0, =TEESMC_OPTEED_RETURN_CALL_DONE
	ldr	w1, =OPTEE_SMC_RETURN_RPC_FOREIGN_INTR
	mov	w2, #0
	mov	w3, #0
	/* w4 is already filled in above */
	smc	#0
	b	.	/* SMC should not return */
.endm


#define ELX_NINTR_REC_X(x)		(8 * ((x) - 4))
#define ELX_NINTR_REC_LR		(8 + ELX_NINTR_REC_X(19))
#define ELX_NINTR_REC_SP_EL0		(8 + ELX_NINTR_REC_LR)
#define ELX_NINTR_REC_SIZE		(8 + ELX_NINTR_REC_SP_EL0)

#define SECURE_TASK_FINISHED 0

/* The handler of native interrupt. */ // used for handle fiq in secure el1 also
.macro native_intr_handler mode:req

	//Decide whether current task has been finished
	/* get pointer to thread context used to save suspended thread_ctx in x0 */
	rt_tee_get_suspended_thread_ctx sp, 0, 1, 2 //get current secure_tasks struct address from secure_tasks[]
	ldr w1, [x0, #SECURE_TASK_TASK_STATE] //get task_state
	cmp w1, #SECURE_TASK_FINISHED //decide whether current task has been finished
	beq task_finished_or_not_start
	/*
	 * Update core local flags
	 */
	ldr	w1, [sp, #THREAD_CORE_LOCAL_FLAGS] 
	lsl	w1, w1, #THREAD_CLF_SAVED_SHIFT // 4
	.ifc	\mode\(),fiq
	orr	w1, w1, #THREAD_CLF_FIQ // 1<<3 => 0x8. w1 = w1 OR 0x8.
	.else
	orr	w1, w1, #THREAD_CLF_IRQ
	.endif
	orr	w1, w1, #THREAD_CLF_TMP // 1<<0 => 1. w1 = w1 OR 0x1. my guess is this related to thread state aka suspend, active, idle
	str	w1, [sp, #THREAD_CORE_LOCAL_FLAGS]
	/*save context start*/
	/* get pointer to thread context used to save suspended thread_ctx in x0 */
	rt_tee_get_suspended_thread_ctx sp, 0, 1, 2 //get current secure_tasks struct address from secure_tasks[]
	// x0 here points to suspended thread ctx struct address
	/* Keep original SP_EL0 */
	mrs	x2, sp_el0 //save el0 stack pointer into saved_regs of secure_task struct
	str	x2, [x0, #THREAD_CTX_REGS_SP] 
	mrs	x2, spsr_el1 //set x2 to spsr_el1 into saved_regs of secure_task struct
	str	x2, [x0, #THREAD_CTX_REGS_CPSR]
	mrs	x2, elr_el1  //set x2 to elr_rl1 into saved_regs of secure_task struct
	str	x2, [x0, #THREAD_CTX_REGS_PC]
	/* store x4..x30 */
	store_xregs x0, THREAD_CTX_REGS_X4, 4, 30 //save x4-x30 into saved_regs of secure_task struct
	// x0 was used earlier in the function, and therefore we are recovering it from save storage in thread core local
	/* Load original x0..x3 into x10..x13 */
	load_xregs sp, THREAD_CORE_LOCAL_X0, 10, 13 // set x10,x11,x12,x13 to x0,x1,x2,x3 saved into saved_regs of secure_task struct
	/* Save original x0..x3 */
	store_xregs x0, THREAD_CTX_REGS_X0, 10, 13 // save x0,x1,x2,x3 of thread_core_local struct to  saved_regs of secure_task struct(x1-x3 are used at the begining of this function)
	/*save context end*/
	/*suspend begin*/
	/*clear the exception flag to avoid stoped by mutex_lock in tee_ta_get_session*/
	ldr	w1, [sp, #THREAD_CORE_LOCAL_FLAGS]
	lsr	w1, w1, #THREAD_CLF_SAVED_SHIFT
	str w1, [sp, #THREAD_CORE_LOCAL_FLAGS]

	/* switch current thread user space thread to temp stack */
	/* load tmp_stack_va_end */
	ldr	x1, [sp, #THREAD_CORE_LOCAL_TMP_STACK_VA_END] //set x1 to tmp_stack_va_end member in thread_core_local (stack space of each arm core)
	/* Switch to SP_EL0 */
	msr	spsel, #0 //choose use sp_el0
	mov	sp, x1 //set sp_el0 to tmp_stack_va_end

	mrs	x0, spsr_el1 //set x1 to spsr_el1
	bl rt_tee_thread_state_suspend //change thread state to suspend

	bl rd_scheduler_stub // we want this goes to scheduler

	// restore sp to el1
	msr spsel, #1

/*  when task finish or interrupted during task invokcation procedure, 
	change stack and return to scheduler directly 
*/ 

 
task_finished_or_not_start:
	ldr	x1, [sp, #THREAD_CORE_LOCAL_TMP_STACK_VA_END] //set x1 to tmp_stack_va_end member in thread_core_local (stack space of each arm core)
	// Switch to SP_EL0 
	msr	spsel, #0 //choose use sp_el0
	mov	sp, x1 //set sp_el0 to tmp_stack_va_end
	/* bl debug_index*/
	bl rd_scheduler_stub
	// restore sp to el1
	msr spsel, #1
	/*suspend end*/



.endm

FUNC clear_stack , :
	msr spsel, #1
	store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 0
	ldr	x0, [sp, #THREAD_CORE_LOCAL_TMP_STACK_VA_END] //set x1 to tmp_stack_va_end member in thread_core_local (stack space of each arm core)
	// Switch to SP_EL0 
	msr	spsel, #0 //choose use sp_el0
	mov	sp, x0 //set sp_el0 to tmp_stack_va_end
	msr spsel, #1
	load_xregs sp, THREAD_CORE_LOCAL_X0, 0, 0
	msr spsel, #0
	bl rd_scheduler_stub
END_FUNC clear_stack

FUNC rt_tee_thread_resume , :
	/*save x0, x1 because these are params of this function and next function just has one param*/
	msr spsel, #1

	store_xregs sp THREAD_CORE_LOCAL_X0, 0, 1

	mov x0, x1 //prepare augument for task_active
	//switch stack
 	ldr	x2, [sp, #THREAD_CORE_LOCAL_TMP_STACK_VA_END] //set x1 to tmp_stack_va_end member in thread_core_local (stack space of each arm core)
	/* Switch to SP_EL0 */
	msr	spsel, #0 //choose use sp_el0
	mov	sp, x2 //set sp_el0 to tmp_stack_va_end	
	bl	rt_tee_thread_state_active // change thread state and switch page table if dta will execute

	msr spsel, #1

	load_xregs sp, THREAD_CORE_LOCAL_X0, 0, 1

	/*restore next thread context*/
 	msr spsel, #0
 	load_xregs x0, THREAD_CTX_REGS_SP, 1, 3
	load_xregs x0, THREAD_CTX_REGS_X4, 4, 30
	mov	sp, x1
	msr	elr_el1, x2
	msr	spsr_el1, x3
	b_if_spsr_is_el0 w3, 1f // b_if_spsr_is_el0 reg, label if the next thread is dta, set translation table for it

	load_xregs x0, THREAD_CTX_REGS_X1, 1, 3 //restore x1-x3
	ldr	x0, [x0, THREAD_CTX_REGS_X0] //restore x0
	eret // it behaves as: MOVS PC, LR in the ARM instruction set

1:	load_xregs x0, THREAD_CTX_REGS_X1, 1, 3
	ldr	x0, [x0, THREAD_CTX_REGS_X0]

	msr	spsel, #1
	store_xregs sp, THREAD_CORE_LOCAL_X0, 0, 1 //store el1 stack point
	b	eret_to_el0

END_FUNC rt_tee_thread_resume


LOCAL_FUNC elx_irq , :
#if defined(CFG_ARM_GICV3)
	native_intr_handler	irq
#else
	foreign_intr_handler	irq
#endif
END_FUNC elx_irq

LOCAL_FUNC elx_fiq , :
#if defined(CFG_ARM_GICV3)
	foreign_intr_handler	fiq
#else
	native_intr_handler	fiq
#endif
END_FUNC elx_fiq



el1_fiq_sp1_rd:

	// The heap grows up from the bottom of the memory region while the stack grows down from the top.
	str x0, [sp, #-0x0] // current sp is sp_el1
	str x2, [sp, #-0x8]
	str x3, [sp, #-0x10] // rd is lazy, 2 registers are enough for this case
	ldr x0, =rd_global_fiq_sec_world_context_struct

	store_xregs x0, 0x20, 1, 30 // x[1] ~ x[30] done
	// store_xregs normally use 32 instead of 0x20?
	mrs	x2, elr_el1  // When taking an exception to EL1, holds the address to return to.  [63:0] Return address.
	mrs	x3, spsr_el1 // spsr_el1 Holds the saved process state when an exception is taken to EL1.

	str x2, [x0, #0x8] // pc done
	str x3, [x0, #0x10] // cpsr done
	mov x2, sp
	str x2, [x0, #0x0] // sp done	
	mov x2, x0
	ldr x0, [sp, #-0x0] // x0 recovered
	str x0, [x2, #0x18] // x[0] done
	ldr x2, [sp, #-0x8] // x2 recovered
	ldr x3, [sp, #-0x10] // x3 recovered

	// store for rd_scheduler_stub. checked tee.dmp. x0~x4 are used
	str x0, [sp, #-0x0]
	str x1, [sp, #-0x8]
	str x2, [sp, #-0x10]
	str x3, [sp, #-0x18] 
	bl rd_scheduler_stub // we want this goes to scheduler. 
	// if thread_resume is called, then rd_scheduler_stub will not return 
	ldr x0, [sp, #-0x0] // x0 recovered
	ldr x1, [sp, #-0x8] // x1 recovered
	ldr x2, [sp, #-0x10] // x2 recovered
	ldr x3, [sp, #-0x18] // x3 recovered
	// restore for rd_scheduler_stub
	eret // elr_el1 is not changed and all registers are restored

