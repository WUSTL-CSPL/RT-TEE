#ifndef out_arm_plat_vexpress_core_include_generated_asm_defines_h
#define out_arm_plat_vexpress_core_include_generated_asm_defines_h
#define SM_NSEC_CTX_R0	92	/* offsetof(struct sm_nsec_ctx, r0)	*/
#define SM_NSEC_CTX_R8	72	/* offsetof(struct sm_nsec_ctx, r8)	*/
#define SM_SEC_CTX_R0	72	/* offsetof(struct sm_sec_ctx, r0)	*/
#define SM_SEC_CTX_MON_LR	104	/* offsetof(struct sm_sec_ctx, mon_lr)	*/
#define SM_CTX_SEC_SIZE	112	/* sizeof(struct sm_sec_ctx)	*/
#define SM_CTX_SIZE	248	/* sizeof(struct sm_ctx)	*/
#define SM_CTX_NSEC	116	/* offsetof(struct sm_ctx, nsec)	*/
#define SM_CTX_SEC	0	/* offsetof(struct sm_ctx, sec)	*/
#define THREAD_VECTOR_TABLE_FIQ_ENTRY	24	/* offsetof(struct thread_vector_table, fiq_entry)	*/
#define THREAD_SVC_REG_R0	4	/* offsetof(struct thread_svc_regs, r0)	*/
#define THREAD_SVC_REG_R5	24	/* offsetof(struct thread_svc_regs, r5)	*/
#define THREAD_SVC_REG_R6	28	/* offsetof(struct thread_svc_regs, r6)	*/
#define THREAD_CORE_LOCAL_R0	0	/* offsetof(struct thread_core_local, r[0])	*/
#define THREAD_CORE_LOCAL_SM_PM_CTX_PHYS	8	/* offsetof(struct thread_core_local, sm_pm_ctx_phys)	*/
#define THREAD_CORE_LOCAL_SIZE	40	/* sizeof(struct thread_core_local)	*/
#define SM_PM_CTX_SIZE	72	/* sizeof(struct sm_pm_ctx)	*/
#define THREAD_CORE_LOCAL_TMP_STACK_VA_END	12	/* offsetof(struct thread_core_local, tmp_stack_va_end)	*/
#define THREAD_CORE_LOCAL_CURR_THREAD	16	/* offsetof(struct thread_core_local, curr_thread)	*/
#define THREAD_CORE_LOCAL_FLAGS	20	/* offsetof(struct thread_core_local, flags)	*/
#define THREAD_CORE_LOCAL_ABT_STACK_VA_END	24	/* offsetof(struct thread_core_local, abt_stack_va_end)	*/
#define THREAD_CORE_LOCAL_CURR_TASK	28	/* offsetof(struct thread_core_local, curr_task)	*/
#define SECURE_TASK_SIZE	440	/* sizeof(struct secure_task)	*/
#define SECURE_TASK_TASK_STATE	96	/* offsetof(struct secure_task, task_state)	*/
#define OPTEE_MSG_ARG	32	/* sizeof(struct optee_msg_arg)	*/
#define OPTEE_MSG_PARAM	32	/* sizeof(struct optee_msg_param)	*/
#define OPTEE_MSG_PARAM_VALUE	24	/* sizeof(struct optee_msg_param_value)	*/
#endif
