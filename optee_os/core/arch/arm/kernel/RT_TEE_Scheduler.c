//           ....,,
//         .::o::;'          .....
//        ::::::::        .::::o:::.,
//       .::' `:::        :::::::''"
//       :::     :       ::'   `.
//      .:::     :       :'      ::
//     .:::       :     ,:       `::
//    .' :        :`. ." :        :::
//   .' .:        :  :  .:        : :
//   : ::'        ::. :' :        : :
//   :: :         :`: :  :        :`:
//   :  :         :  ''  :        : '
// _.---:         :___   :        :
//      :        :`   `--:        :
//       : :---: :        : :---: :`---.
//       '```  '```      '''   ''''


// IMPORTANT DESIGN DECISIONS 
// 1. exploiting the paritioned scheduling decision, we don't have the spin lock to protect against concurrency issues
// 2. we assume there is static task assignment
// 3. we assume that the array is arranged such that tasks are decreasing priority in nature
// 4. because we are using a single PTA to simulate different tasks, we will have problem with concurrency for sure if multiple cores runs this

//  the following code should be moved to a different c file
//  NZ is just lazy in not wanting to figure out the make file


/*

We are deploying a partitioned scheduler 
each core is given a set of tasks for both secure world and normal world
- in normal world, at the OS level, it is RM using sched_FIFO
- in secure world, it is our own implementation of rate monotonic 

at the world switching level, for each core, we run a deferrable servers, one for the normal world and one for secure world 
*/ 
#include <arm.h>
#include <arm64.h>
#include <console.h>
#include <drivers/serial8250_uart.h>
#include <kernel/generic_boot.h>
#include <kernel/panic.h>
#include <kernel/pm_stubs.h>
#include <kernel/timer.h>
#include <mm/core_memprot.h>
#include <mm/tee_pager.h>
#include <platform_config.h>
#include <stdint.h>
#include <tee/entry_fast.h>
#include <tee/entry_std.h>
#include <crypto/crypto.h>
#include <keep.h>
#include <kernel/interrupt.h>
#include <kernel/misc.h>
#include <kernel/pseudo_ta.h>
#include <kernel/tee_time.h>
#include <kernel/thread.h>
#include <string.h>
#include <trace.h>

#include <assert.h>
#include <util.h>
#include <io.h>

#include <optee_msg.h>
#include <list.h>

#include <sm/optee_smc.h>
#include <sm/teesmc_opteed.h>
#include <sm/teesmc_opteed_macros.h>

#include <mm/core_mmu.h>


#include <compiler.h>
#include <pta_invoke_tests.h>
#include <pta_task1.h>
#include <tee/cache.h>
#include <tee_api_defines.h>
#include <tee_api_types.h>
#include <types_ext.h>

//#include "core_self_tests.h"

#include <kernel/RT_TEE_Scheduler.h>
#include "thread_private.h"
#include <malloc.h>
#include <generated/asm-defines.h>
#include <mm/core_memprot.h>
#include <kernel/mutex.h>
#include <kernel/spinlock.h>
#include <kernel/vfp.h>
#include "vfp_private.h"


//qemu plat includes
#include <drivers/gic.h>
#include <drivers/pl011.h>
#include <drivers/tzc400.h>
#include <initcall.h>
#include <sm/psci.h>



// #define RT-TEE_SYNTHETIC	


// choosing schedulre one of following scheduler must be defined
// #define IDLE_SCHEDULER
#define HIERARCHICAL_SCHEDULER



//main.c part
void thread_resume(struct thread_ctx_regs *regs);
void resume_secure_world(void);
														

//count of cpu cores
#define CORES 4
static int32_t optee_do_rt_scheduling(void);
static void burn_budget(struct rt_world *svc, s_time_t now);
static void rt_update_deadline_and_replenish_budget(struct rt_world *svc, s_time_t now);
static void schedule_world(int coreNum); 
void return_to_normal_world();
void execute_normal_world(int coreNum);
void execute_secure_world(int coreNum);

static void initWorldScheduler(void);
void trigger_timer_micro_s(uint64_t);
void trigger_timer(uint64_t);
s_time_t getCurrentTime();
int get_current_core();
void world_start_init();
s_time_t getCurrentTime_micro();
void initSecureWorldTasks(int param);

void world_schedule_item();
void rt_tee_sched_item();
void world_schedule_event();
void world_try_to_wake_up();
void world_recalculate_prio();
void world_schedule();
void secure_world_schedule_event();
void secure_world_try_to_wake_up();
void secure_world_recalculate_prio();
void secure_schedule();


int world_scheduler_init[CFG_TEE_CORE_NB_CORE] = {0};


bool threadCreated = false;

int schel_start_flag = 0;

/*There is only one timer for interrupt to invoke scheduler, 
  when setting it, compare with the previoursly set one when needed.
 */
s_time_t next_interrupt_time[CFG_TEE_CORE_NB_CORE] = {0};

//set when invoke the pta
long from_interrupt = 0;

// we have eight 
struct rt_world rt_world_cores[NUM_OF_SECURITY_STATES][NUM_OF_CORES]; 	

// we will keep a task state struct 
struct secure_task secure_world_tasks[SECURE_WORLD_MAX_TASKS];


long is_from_interrupt = 0;



//pta_invoke_tests.c part

#define TA_NAME		"invoke_tests.pta"

//#define REE_TIME_MILLIS_BASE 1000

uint64_t rd_count_bb =0;
uint64_t rd_count_loop =0;
uint64_t prev_bb = 0;
uint64_t cur_bb = 0;
uint64_t idx = 0;
//uint64_t test_max_idx = 0;
#define MAX_SHARED_MEM_IDX 1000
uint32_t shared_mem[MAX_SHARED_MEM_IDX] = {0};

// we will keep a task state struct 
//struct secure_task secure_world_tasks[SECURE_WORLD_MAX_TASKS]; 
bool start_signal = true;
int miss_index[5] = {0,0,0,0,0};
// int wait_to_execute = SECURE_WORLD_MAX_TASKS;
int wait_to_execute[CFG_TEE_CORE_NB_CORE] = {0};

//this is used to store the secure os task informations, includeing context switch
struct secure_task secure_tasks[SECURE_WORLD_MAX_SUPPORTED_TASKS];
//runnable queue, index is priority, each entity in the array is TAILQ_HEAD
struct secure_task_tq_head runnable_tasks[CFG_TEE_CORE_NB_CORE][SECURE_WORLD_MIN_PRIORITY];
//out of budget queue, index is priority, each entity in the array is TAILQ_HEAD
struct secure_task_tq_head out_of_budget_tasks[CFG_TEE_CORE_NB_CORE][SECURE_WORLD_MIN_PRIORITY];

struct mutex runnable_tasks_mutex = MUTEX_INITIALIZER;


// pi3 platform
// MEM_AREA_IO_SEC:   Secure HW mapped registers
// however, bc rpi3 uart is not secure hw, so it does not support tz secure bit.
// thus, normal world can still access it.
// register_phys_mem(MEM_AREA_IO_SEC, CONSOLE_UART_BASE, SERIAL8250_UART_REG_SIZE);
// #define CONSOLE_UART_BASE	0x3f215040 /* UART0 */
// register_phys_mem(MEM_AREA_IO_SEC, BCM2836_BASE , 0x100);
// register_phys_mem(MEM_AREA_IO_SEC, BCM2836_GPIO_BASE, 0x100);


typedef struct {
	uint32_t timeLow;
	uint16_t timeMid;
	uint16_t timeHiAndVersion;
	uint8_t clockSeqAndNode[8];
} TEEC_UUID;


typedef unsigned long long u64;
typedef u64 phys_addr_t;

#define TEE_IOCTL_UUID_LEN		16
#define TEEC_LOGIN_PUBLIC		0x00000000
#define OPTEE_MSG_CMD_OPEN_SESSION	0


typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

typedef __signed__ long __s64;
typedef unsigned long __u64;



#define DTA_TASK1_UUID { 0x8aaaf200, 0x2450, 0x11e4, \
		{ 0xab, 0xe2, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b} }

#define DTA_TASK2_UUID { 0xa25cbf7f, 0x8162, 0x4fe3, \
		{ 0x94, 0x38, 0xb7, 0xe4, 0x0c, 0x93, 0xd5, 0x02} }


#define DTA_UUID \
		{ 0x8aaaf200, 0x2450, 0x11e4, \
			{ 0xab, 0xe2, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } }

#define PTA_INVOKE_TESTS_UUID \
		{ 0xd96a5b40, 0xc3e5, 0x21e3, \
			{ 0x87, 0x94, 0x10, 0x02, 0xa5, 0xd5, 0xc6, 0x1b } }

#define PTA_TASK1_UUID \
		{ 0x72aefbfa, 0xd74b, 0x499e, \
			{ 0xa0, 0x39, 0x98, 0xfa, 0x6c, 0xb6, 0xec, 0x20 } }


/**
 * struct tee_ioctl_param - parameter
 * @attr: attributes
 * @a: if a memref, offset into the shared memory object, else a value parameter
 * @b: if a memref, size of the buffer, else a value parameter
 * @c: if a memref, shared memory identifier, else a value parameter
 *
 * @attr & TEE_PARAM_ATTR_TYPE_MASK indicates if memref or value is used in
 * the union. TEE_PARAM_ATTR_TYPE_VALUE_* indicates value and
 * TEE_PARAM_ATTR_TYPE_MEMREF_* indicates memref. TEE_PARAM_ATTR_TYPE_NONE
 * indicates that none of the members are used.
 *
 * Shared memory is allocated with TEE_IOC_SHM_ALLOC which returns an
 * identifier representing the shared memory object. A memref can reference
 * a part of a shared memory by specifying an offset (@a) and size (@b) of
 * the object. To supply the entire shared memory object set the offset
 * (@a) to 0 and size (@b) to the previously returned size of the object.
 */
struct tee_ioctl_param {
	__u64 attr;
	__u64 a;
	__u64 b;
	__u64 c;
};

/**
 * struct tee_ioctl_open_session_arg - Open session argument
 * @uuid:	[in] UUID of the Trusted Application
 * @clnt_uuid:	[in] UUID of client
 * @clnt_login:	[in] Login class of client, TEE_IOCTL_LOGIN_* above
 * @cancel_id:	[in] Cancellation id, a unique value to identify this request
 * @session:	[out] Session id
 * @ret:	[out] return value
 * @ret_origin	[out] origin of the return value
 * @num_params	[in] number of parameters following this struct
 */
struct tee_ioctl_open_session_arg {
	__u8 uuid[TEE_IOCTL_UUID_LEN];
	__u8 clnt_uuid[TEE_IOCTL_UUID_LEN];
	__u32 clnt_login;
	__u32 cancel_id;
	__u32 session;
	__u32 ret;
	__u32 ret_origin;
	__u32 num_params;
	/* num_params tells the actual number of element in params */
	struct tee_ioctl_param params[];
};

static void uuid_to_octets(uint8_t d[TEE_IOCTL_UUID_LEN], const TEEC_UUID *s)
{
	d[0] = s->timeLow >> 24;
	d[1] = s->timeLow >> 16;
	d[2] = s->timeLow >> 8;
	d[3] = s->timeLow;
	d[4] = s->timeMid >> 8;
	d[5] = s->timeMid;
	d[6] = s->timeHiAndVersion >> 8;
	d[7] = s->timeHiAndVersion;
	memcpy(d + 8, s->clockSeqAndNode, sizeof(s->clockSeqAndNode));
}


#define NUM_OPEN_SESSION_PARAMS 6
#define NUM_INVOKE_COMMAND_PARAMS 4

#define DTA_IN_OPTEE false
#define PTA_IN_OPTEE true

// When the task starts first time, change it to one.
int tasks_start = 0;

uint64_t fiqORstd[CFG_TEE_CORE_NB_CORE] = {0};

struct rd_global_fiq_sec_world_context {
 	uint64_t sp;
 	uint64_t pc;
 	uint64_t cpsr;
 	uint64_t x[31];
};

struct rd_global_fiq_sec_world_context rd_global_fiq_sec_world_context_struct = {0};

struct sched_return scheduler_return = {0};

struct optee_msg_arg rt_tee_msg_arg = {0};
uint64_t rt_tee_buf[(sizeof(struct optee_msg_arg) + NUM_INVOKE_COMMAND_PARAMS * \
		(sizeof(struct optee_msg_param) + sizeof(struct optee_msg_param_value))) / sizeof(uint64_t)];


extern struct thread_core_local thread_core_local[CFG_TEE_CORE_NB_CORE];


extern struct optee_msg_param save_param;
static void rt_tee_thread_invoke(uint32_t arg_session_id, int taskUid)
{

	fiqORstd[get_current_core()] = 1;
	struct thread_core_local *l = thread_get_core_local();
	l->curr_task = taskUid;


	l->curr_thread = -1;


	TEEC_UUID uuid;

	if (DTA_IN_OPTEE){
		TEEC_UUID uuid = DTA_UUID; 	
	} else {
		TEEC_UUID uuid = PTA_INVOKE_TESTS_UUID; 		
	}

	struct optee_msg_arg *msg_arg;

	msg_arg = (struct optee_msg_arg *)rt_tee_buf;

	struct tee_ioctl_open_session_arg *arg;

	uint64_t buf2[(sizeof(struct tee_ioctl_open_session_arg) + NUM_INVOKE_COMMAND_PARAMS * \
			sizeof(struct tee_ioctl_param)) / sizeof(uint64_t)] = { 0 };
	arg = (struct tee_ioctl_open_session_arg *)buf2;

	uuid_to_octets(arg->uuid, &uuid);
	arg->num_params = NUM_INVOKE_COMMAND_PARAMS;
	arg->clnt_login = TEEC_LOGIN_PUBLIC;

	msg_arg->cmd = OPTEE_MSG_CMD_INVOKE_COMMAND;
	msg_arg->session = arg_session_id; 
	msg_arg->params[0].attr = 3;
	msg_arg->params[0].u.value.a = 0x2a; // params from host ta
	struct thread_smc_args *smc_args;
	struct thread_smc_args _smc_args = {0};
	smc_args = &_smc_args;
	smc_args->a0 = 0x32000004;
	smc_args->a1 = 0;
	smc_args->a2 = virt_to_phys(msg_arg);
	smc_args->a6 = 0x12345678;
	vfp_enable();
	
	thread_alloc_and_run(smc_args);
}



bool waiting = true;


extern uint32_t session_ids[5];

int scheduler_start_flag[CFG_TEE_CORE_NB_CORE] = {0};
struct vfp_state nw_vfp_state[CFG_TEE_CORE_NB_CORE] = {0};

static void main_fiq(void);


static void main_fiq(void)
{
	if(!scheduler_start_flag[get_current_core()]){
		// Disable the timer 
		write_cntps_ctl(0);
	}
	else{
		//save normal world vfp state
		fp_regs_save(&nw_vfp_state[get_current_core()]);
		world_schedule_item();
	}
}

// pi3 platform
// static const struct thread_handlers handlers = {
// 	.std_smc = tee_entry_std,
// 	.fast_smc = tee_entry_fast,
// 	.nintr = main_fiq, // main_fiq, rd_test. this is the entry for EL3 forward fiq. 
// 					   // real el1 fiq handler is created by rd as rd_scheduler_stub below
// 	.cpu_on = cpu_on_handler,
// 	.cpu_off = pm_do_nothing,
// 	.cpu_suspend = pm_do_nothing,
// 	.cpu_resume = pm_do_nothing,
// 	.system_off = pm_do_nothing,
// 	.system_reset = pm_do_nothing,
// };

// static struct serial8250_uart_data console_data;

// const struct thread_handlers *generic_boot_get_handlers(void)
// {
// 	return &handlers;

// }

// void console_init(void)
// {
// 	serial8250_uart_init(&console_data, CONSOLE_UART_BASE,
// 			     CONSOLE_UART_CLK_IN_HZ, CONSOLE_BAUDRATE);
// 	register_serial_console(&console_data.chip);
// }

//qemu plat
static const struct thread_handlers handlers = {
	.std_smc = tee_entry_std,
	.fast_smc = tee_entry_fast,
	.nintr = main_fiq,
#if defined(CFG_WITH_ARM_TRUSTED_FW)
	.cpu_on = cpu_on_handler,
	.cpu_off = pm_do_nothing,
	.cpu_suspend = pm_do_nothing,
	.cpu_resume = pm_do_nothing,
	.system_off = pm_do_nothing,
	.system_reset = pm_do_nothing,
#else
	.cpu_on = pm_panic,
	.cpu_off = pm_panic,
	.cpu_suspend = pm_panic,
	.cpu_resume = pm_panic,
	.system_off = pm_panic,
	.system_reset = pm_panic,
#endif
};

static struct gic_data gic_data;
static struct pl011_data console_data;


//export gic address
struct gic_data *addr_gic_data = &gic_data;
register_phys_mem(MEM_AREA_IO_SEC, 0x08020000, PL011_REG_SIZE);

// test_gic_fun();

register_phys_mem(MEM_AREA_IO_SEC, CONSOLE_UART_BASE, PL011_REG_SIZE);
#if defined(PLATFORM_FLAVOR_fvp)
register_phys_mem(MEM_AREA_RAM_SEC, TZCDRAM_BASE, TZCDRAM_SIZE);
#endif
#if defined(PLATFORM_FLAVOR_qemu_virt)
register_phys_mem(MEM_AREA_IO_SEC, SECRAM_BASE, SECRAM_COHERENT_SIZE);
#endif
#ifdef DRAM0_BASE
register_ddr(DRAM0_BASE, DRAM0_SIZE);
#endif
#ifdef DRAM1_BASE
register_ddr(DRAM1_BASE, DRAM1_SIZE);
#endif

const struct thread_handlers *generic_boot_get_handlers(void)
{
	return &handlers;
}

#ifdef GIC_BASE

register_phys_mem(MEM_AREA_IO_SEC, GICD_BASE, GIC_DIST_REG_SIZE);
register_phys_mem(MEM_AREA_IO_SEC, GICC_BASE, GIC_DIST_REG_SIZE);

void main_init_gic(void)
{
	vaddr_t gicc_base;
	vaddr_t gicd_base;

	gicc_base = (vaddr_t)phys_to_virt(GIC_BASE + GICC_OFFSET,
					  MEM_AREA_IO_SEC);
	gicd_base = (vaddr_t)phys_to_virt(GIC_BASE + GICD_OFFSET,
					  MEM_AREA_IO_SEC);
	if (!gicc_base || !gicd_base)
		panic();

#if defined(CFG_WITH_ARM_TRUSTED_FW)
	/* On ARMv8, GIC configuration is initialized in ARM-TF */
	gic_init_base_addr(&gic_data, gicc_base, gicd_base);
#else
	/* Initialize GIC */
	gic_init(&gic_data, gicc_base, gicd_base);
#endif
	itr_init(&gic_data.chip);
}

#if !defined(CFG_WITH_ARM_TRUSTED_FW)
void main_secondary_init_gic(void)
{
	gic_cpu_init(&gic_data);
}
#endif

#endif


void console_init(void)
{

	pl011_init(&console_data, CONSOLE_UART_BASE, CONSOLE_UART_CLK_IN_HZ,
		   CONSOLE_BAUDRATE);
	register_serial_console(&console_data.chip);
}

#if defined(IT_CONSOLE_UART) && \
	!(defined(CFG_WITH_ARM_TRUSTED_FW) && defined(CFG_ARM_GICV3))
/*
 * This cannot be enabled with TF-A and GICv3 because TF-A then need to
 * assign the interrupt number of the UART to OP-TEE (S-EL1). Currently
 * there's no way of TF-A to know which interrupts that OP-TEE will serve.
 * If TF-A doesn't assign the interrupt we're enabling below to OP-TEE it
 * will hang in EL3 since the interrupt will just be delivered again and
 * again.
 */
static enum itr_return console_itr_cb(struct itr_handler *h __unused)
{
	struct serial_chip *cons = &console_data.chip;

	while (cons->ops->have_rx_data(cons)) {
		int ch __maybe_unused = cons->ops->getchar(cons);

		DMSG("cpu %zu: got 0x%x", get_core_pos(), ch);
	}
	return ITRR_HANDLED;
}

static struct itr_handler console_itr = {
	.it = IT_CONSOLE_UART,
	.flags = ITRF_TRIGGER_LEVEL,
	.handler = console_itr_cb,
};
KEEP_PAGER(console_itr);

static TEE_Result init_console_itr(void)
{
	itr_add(&console_itr);
	itr_enable(IT_CONSOLE_UART);
	return TEE_SUCCESS;
}
driver_init(init_console_itr);
#endif

#ifdef CFG_TZC400
register_phys_mem(MEM_AREA_IO_SEC, TZC400_BASE, TZC400_REG_SIZE);

static TEE_Result init_tzc400(void)
{
	void *va;

	DMSG("Initializing TZC400");

	va = phys_to_virt(TZC400_BASE, MEM_AREA_IO_SEC);
	if (!va) {
		EMSG("TZC400 not mapped");
		panic();
	}

	tzc_init((vaddr_t)va);
	tzc_dump_state();

	return TEE_SUCCESS;
}

service_init(init_tzc400);
#endif /*CFG_TZC400*/

#if defined(PLATFORM_FLAVOR_qemu_virt)
static void release_secondary_early_hpen(size_t pos)
{
	struct mailbox {
		uint64_t ep;
		uint64_t hpen[];
	} *mailbox;

	if (cpu_mmu_enabled())
		mailbox = phys_to_virt(SECRAM_BASE, MEM_AREA_IO_SEC);
	else
		mailbox = (void *)SECRAM_BASE;

	if (!mailbox)
		panic();

	mailbox->ep = TEE_LOAD_ADDR;
	dsb_ishst();
	mailbox->hpen[pos] = 1;
	dsb_ishst();
	sev();
}

int psci_cpu_on(uint32_t core_id, uint32_t entry, uint32_t context_id)
{
	size_t pos = get_core_pos_mpidr(core_id);
	static bool core_is_released[CFG_TEE_CORE_NB_CORE];

	if (!pos || pos >= CFG_TEE_CORE_NB_CORE)
		return PSCI_RET_INVALID_PARAMETERS;

	DMSG("core pos: %zu: ns_entry %#" PRIx32, pos, entry);

	if (core_is_released[pos]) {
		EMSG("core %zu already released", pos);
		return PSCI_RET_DENIED;
	}
	core_is_released[pos] = true;

	generic_boot_set_core_ns_entry(pos, entry, context_id);
	release_secondary_early_hpen(pos);

	return PSCI_RET_SUCCESS;
}
#endif /*PLATFORM_FLAVOR_qemu_virt*/


extern int gic_init_fun(void);

void timer_routing(){

	// pi3 platform
	// int core_fiq_source[4];
	// int core_timer_irqcntl[4];
	// core_fiq_source[0] = CORE0_FIQ_SOURCE;
	// core_fiq_source[1] = CORE1_FIQ_SOURCE;
	// core_fiq_source[2] = CORE2_FIQ_SOURCE;
	// core_fiq_source[3] = CORE3_FIQ_SOURCE;

	// core_timer_irqcntl[0] = CORE0_TIMER_IRQCNTL;
	// core_timer_irqcntl[1] = CORE1_TIMER_IRQCNTL;
	// core_timer_irqcntl[2] = CORE2_TIMER_IRQCNTL;
	// core_timer_irqcntl[3] = CORE3_TIMER_IRQCNTL;

	// IMSG("setting IRQ_routing:\n");
	// for(int i = 0; i < 4; i++){
	// 	IMSG("setting core%d FIQ source to timer0 physical secure interrupt on IRQ_routing!\n", i);

	// 	vaddr_t corei_fiq_source;

	// 	corei_fiq_source = (vaddr_t)phys_to_virt(core_fiq_source[i],
	// 					  MEM_AREA_IO_SEC);


	// 	write32(INT_SRC_TIMER0, corei_fiq_source);

	// 	// where to route timer interrupt to, IRQ or FIQ
	// 	IMSG("routing core%d secure timer interrupt to fiq interrupt on IRQ_routing!\n", i);

	// 	vaddr_t corei_timer_irqcntl;

	// 	corei_timer_irqcntl = (vaddr_t)phys_to_virt(core_timer_irqcntl[i],
	// 					  MEM_AREA_IO_SEC);	

	// 	write32(TIMER0_FIQ, corei_timer_irqcntl);		
	// }

	//qemu platform
	gic_init_fun();
}


static TEE_Result init_timer_itr(void)
{
	IMSG("Initializing Physical Secure Timer\n");
	timer_routing();

	uint32_t timer_ticks;
	uint32_t time_ms;

	time_ms = 1000; // 1000 is 1 second


	timer_ticks = read_cntfrq() * (time_ms / 1000);

	write_cntps_tval(timer_ticks);

	/* Enable the secure physical timer */
	write_cntps_ctl(1);


	for(int core = 0; core < CFG_TEE_CORE_NB_CORE; core++){

		for(int i = 0; i < SECURE_WORLD_MIN_PRIORITY; i++){
			TAILQ_INIT(&runnable_tasks[core][i]);
		}

	}

	for(int core = 0; core < CFG_TEE_CORE_NB_CORE; core++){

		for(int i = 0; i < SECURE_WORLD_MIN_PRIORITY; i++){
			TAILQ_INIT(&out_of_budget_tasks[core][i]);
		}

	}
		
	return TEE_SUCCESS;
}


driver_init(init_timer_itr);
//secure world scheduling

int first = 0;

void rd_scheduler_stub(){


	world_schedule_item();


	return &scheduler_return;
	
}


void setRateMonotonicPriority();



//debug scheduler
int start_time[CFG_TEE_CORE_NB_CORE] = {0};



s_time_t min(s_time_t t1, s_time_t t2, s_time_t t3){
	s_time_t cur_min = t1 <= t2 ? t1 : t2;
	s_time_t min = cur_min <= t3 ? cur_min : t3;
	return min;
}

s_time_t getCurrentTime()
{
	
	uint64_t cntpct = read_cntpct();
	uint32_t cntfrq = read_cntfrq();
	s_time_t millisedond = cntpct / (cntfrq / TEE_TIME_MILLIS_BASE);	
	return (s_time_t)millisedond;
}

s_time_t getCurrentTime_micro()
{

	uint64_t cntpct = read_cntpct();
	uint32_t cntfrq = read_cntfrq();
	s_time_t microseconds = (cntpct * 1000000) / cntfrq;	
	return microseconds;
}

int get_current_core()
{
	return get_core_pos();
}


extern void thread_fiq_exit(int *fiqORstd_add);


void return_to_normal_world()
{	

	fp_regs_restore(&nw_vfp_state[get_current_core()]);
	fiqORstd[get_current_core()] = 1;
	thread_fiq_exit(&fiqORstd[get_current_core()]);
}

void trigger_timer(uint64_t time_milli_s)
{
	trigger_timer_micro_s(time_milli_s * 1000);
}


int debug_core1_trigger_time = 0;
void trigger_timer_micro_s(uint64_t time_micro_s)
{
	// /* Disable the timer */
	write_cntps_ctl(0);
	
	uint64_t timer_ticks;

	// The timer will fire time_ms from now 
	uint64_t frq = read_cntfrq();
	timer_ticks = (frq * time_micro_s) / 1000000;
	write_cntps_tval(timer_ticks);

	//original codes
	/* Enable the secure physical timer */
	write_cntps_ctl(1);	
}


//timer triggered when secure world will be executed
int secure_exe_next_timer[CFG_TEE_CORE_NB_CORE] = {0}; 
int world_scheduler_trigger_time = 0;
int set_next_timer_flag[CFG_TEE_CORE_NB_CORE] = {0};
//setting next timer for executing secure world or normal worlds
//set to nearest deadline or out of current budget
void set_next_timer(int security_state, int coreNum)
{

	//jinwen comment
	#ifdef HIERARCHICAL_SCHEDULER

	s_time_t now = getCurrentTime_micro();

	// // we need to decide when to invoke the timer again for this core
	s_time_t timerToTrigger = min(now + rt_world_cores[security_state][coreNum].cur_budget,
 					  rt_world_cores[SECURE_STATE][coreNum].cur_deadline,
 					  rt_world_cores[NONSECURE_STATE][coreNum].cur_deadline);

	// next_interrupt_time[get_current_core()] = timerToTrigger;

	// //original codes
	if(security_state == SECURE_STATE){
		secure_exe_next_timer[get_current_core()] = timerToTrigger - now;
		set_next_timer_flag[get_current_core()] = 1;
	}
	else{
		trigger_timer_micro_s(timerToTrigger - now);
	}

	#endif

	//idle scheduling
	#ifdef IDLE_SCHEDULER
	trigger_timer_micro_s(100000000);
	#endif

}

/*
  setting next timer for situation that both world are out of budgets, 
  the time should be the nearest replenishment time point
 */
//set to the nearest deadline
void set_run_out_of_budget_timer(int coreNum){
	s_time_t now = getCurrentTime_micro();
	// we need to decide when to invoke the timer again for this core

	s_time_t timerToTrigger = rt_world_cores[SECURE_STATE][coreNum].cur_deadline;
	if(rt_world_cores[SECURE_STATE][coreNum].cur_deadline > rt_world_cores[NONSECURE_STATE][coreNum].cur_deadline)
		timerToTrigger = rt_world_cores[NONSECURE_STATE][coreNum].cur_deadline;

	next_interrupt_time[get_current_core()] = timerToTrigger;

	trigger_timer_micro_s(timerToTrigger - now);
}

/*
  setting next timer for secure world has nothong to run, 
  the timer should be no later than next world scheduler timer.
*/
//set to the nearest deadline or secure job release time
void  set_has_nothing_to_run_timer(int coreNum, s_time_t nextEarliestJobRelease){

	//setting the timer to the min(secure world period, normal world period, secure world out of budget, next secure task release)
	s_time_t now = getCurrentTime_micro();

	s_time_t world_trigger_time = min(nextEarliestJobRelease,
					  rt_world_cores[SECURE_STATE][coreNum].cur_deadline,
					  rt_world_cores[NONSECURE_STATE][coreNum].cur_deadline);
	
	trigger_timer_micro_s(world_trigger_time - now);

}

void trigger_default_scheduler_tick()
{
	trigger_timer_micro_s(SCHEDULER_TICK);
}

void idle_return_to_normal_world()
{
	trigger_default_scheduler_tick();
	return_to_normal_world();
}


/*
 * Burn budget in microseconds granularity
 */
static void burn_budget(struct rt_world *world, s_time_t now)
{
	// if it was not running, there is nothing to do 
	if(world->runq_status != RUNQ_RUNNING)
	{
		return;
	}

	s_time_t consumed_time;
	    
    /* burn at microseconds level */
    consumed_time = now - world->last_start;

    if ( consumed_time < 0 )
    {
        world->last_start = now;
        return;
    }

    world->cur_budget -= consumed_time; 

    if ( world->cur_budget <= 0 ){
        world->cur_budget = 0;
    	world->runq_status = RUNQ_OUT_OF_BUDGET;
    	//only task with budgets can be has_nothing_to_run
    	world->has_nothing_to_run = false;
    }
    else{
    	world->runq_status = RUNQ_RUNNABLE;    	
    }

}

/*
 * update deadline and budget when now >= cur_deadline
 * it need to be updated to the deadline of the current period
 */
static void rt_update_deadline_and_replenish_budget(struct rt_world *world, s_time_t now)
{

	if(world->cur_deadline <= now){
		if ( world->cur_deadline + (world->period << UPDATE_LIMIT_SHIFT) > now )
	    {
	        do
	            world->cur_deadline += world->period;
	        while ( world->cur_deadline <= now );
	    }
	    else
	    {
	        long count = ((now - world->cur_deadline) / world->period) + 1;
	        world->cur_deadline += count * world->period;
	    }
	}

    if(now - world->last_rpl_time >= world->period){
    	world->cur_budget = world->budget;
    	//now may be slightly larger than ideal plt_time
    	world->last_rpl_time = now - (now - world->last_rpl_time) % world->period;
    	world->runq_status = RUNQ_RUNNABLE;
    	world->has_nothing_to_run = false;
    }

    return;
}


void setSchedulerPeriod(int period){

}

void do_idle_processing(int idle_processing_type)
{
	if(idle_processing_type == IDLE_PROCESSING_THROTTLE)
	{
		// busy loop		

		set_run_out_of_budget_timer(get_current_core());
		return_to_normal_world();
		//busy trigger_timer 
	}
	else if(idle_processing_type == IDLE_PROCESSING_YIELD)
	{
		set_run_out_of_budget_timer(get_current_core());
		return_to_normal_world();
	}
	else
	{
		return_to_normal_world();
	}
}

void vcpuConfig(int cpu,int secure_flg, int budget, int period, int deadline)
{
    rt_world_cores[secure_flg][cpu].period = period;
    rt_world_cores[secure_flg][cpu].budget = budget;
    rt_world_cores[secure_flg][cpu].cur_deadline = deadline;

}

void setRateMonotonicPriority()
{
    int i = 0;
    for(i = 0; i < CFG_TEE_CORE_NB_CORE; i++){
    	if(rt_world_cores[SECURE_STATE][i].period <= rt_world_cores[NONSECURE_STATE][i].period){
    		rt_world_cores[SECURE_STATE][i].priority = 0;
    		rt_world_cores[NONSECURE_STATE][i].priority = 1;
    	}
    	else{
    		rt_world_cores[SECURE_STATE][i].priority = 1;
    		rt_world_cores[NONSECURE_STATE][i].priority = 0;
    	}
    }
}

void setDeadlineMonotonicPriority()
{
    int i = 0;
    for(i = 0; i < CFG_TEE_CORE_NB_CORE; i++){
    	if(rt_world_cores[SECURE_STATE][i].cur_deadline <= rt_world_cores[NONSECURE_STATE][i].cur_deadline){
    		rt_world_cores[SECURE_STATE][i].priority = 0;
    		rt_world_cores[NONSECURE_STATE][i].priority = 1;
    	}
    	else{
    		rt_world_cores[SECURE_STATE][i].priority = 1;
    		rt_world_cores[NONSECURE_STATE][i].priority = 0;
    	}
    }
}

int set_preemptive_timer_flag[CFG_TEE_CORE_NB_CORE] = {0};
int preemptive_timer[CFG_TEE_CORE_NB_CORE] = {0};
//set the nearest high priority task release time to preempt current task
void set_preemptive_timer(struct secure_task *curr_task){

	int curr_core = get_current_core();
	int exsit_preempt = 0;
	//current task has the highest priority
	if(!curr_task)
		return;
	int curr_priority = curr_task->priority;
	s_time_t nearest_next_release= curr_task->lastReleaseOfJob + curr_task->period;

	for(int i = 0; i < SECURE_WORLD_MAX_SUPPORTED_TASKS; i++){
		if(secure_tasks[i].occupied && secure_tasks[i].cpu == curr_core && \
			secure_tasks[i].priority < curr_priority && \
			secure_tasks[i].lastReleaseOfJob + secure_tasks[i].period < nearest_next_release){

			nearest_next_release = secure_tasks[i].lastReleaseOfJob + secure_tasks[i].period;
			exsit_preempt = 1;

		}
	}

	//secure world scheduler cannot change the timer to the value larger than world scheduler
	if (nearest_next_release >= next_interrupt_time[get_current_core()]){
		return;
	}

	if(exsit_preempt){
		s_time_t now = getCurrentTime_micro();
		//new codes
		secure_exe_next_timer[get_current_core()] = nearest_next_release - now;
		world_scheduler_trigger_time = getCurrentTime_micro();

		//original codes
		next_interrupt_time[get_current_core()] = nearest_next_release;
		set_preemptive_timer_flag[curr_core] = 1;
		preemptive_timer[curr_core] = 1;
	}	

}


//get the nearest job release time (preemptive task release)
s_time_t get_next_job_release(){

	int curr_core = get_current_core();

	s_time_t nearest_release_time = 0;
	int index = 0;


	for(index = 0; index < SECURE_WORLD_MAX_SUPPORTED_TASKS; index++){
		if(secure_tasks[index].occupied && secure_tasks[index].cpu == curr_core){
			nearest_release_time = secure_tasks[index].lastReleaseOfJob \
			+ secure_tasks[index].period;
			break;
		}
	}

	for(int i = index + 1; i < SECURE_WORLD_MAX_SUPPORTED_TASKS; i++){
		if(secure_tasks[i].occupied && secure_tasks[i].cpu == curr_core){
			s_time_t i_release_time = secure_tasks[i].lastReleaseOfJob + secure_tasks[i].period;

			if (i_release_time < nearest_release_time)
				nearest_release_time = i_release_time;
		}

	}
	return nearest_release_time;
}



//=================================================================================================


int core_exe[4] = {0};
int nw_exe[4] = {0};
int sw_exe[4] = {0};

void world_schedule_item(){

	int coreNum = get_current_core();

	core_exe[coreNum] += 1;

	//when the timer is trigger by a task with high priority, 
	//secure world still has budget, go to secure tasks scheduler directly
	if(preemptive_timer[coreNum]){
		preemptive_timer[coreNum] = 0;
		set_next_timer_flag[coreNum] = 0;
		rt_tee_sched_item();
	}

	//initializing world parameters
	if(!world_scheduler_init[get_current_core()]){
		world_scheduler_init[get_current_core()] = 1;
		world_start_init();
		//debug scheduler
		start_time[get_current_core()] = getCurrentTime_micro();
	}


	#ifdef HIERARCHICAL_SCHEDULER
	//burn budget
	world_schedule_event();
	//buget replenishement
	world_try_to_wake_up();
	//RM world scheduler
	world_recalculate_prio();
	#endif

	#ifdef IDLE_SCHEDULER
	//RM world scheduler
	world_recalculate_prio();
	//idle scheduling
	#endif

}

void world_start_init(){

	int curr_core = get_current_core();

	rt_world_cores[SECURE_STATE][curr_core].cur_budget = rt_world_cores[SECURE_STATE][curr_core].budget;
	rt_world_cores[SECURE_STATE][curr_core].runq_status = RUNQ_RUNNABLE;

	rt_world_cores[NONSECURE_STATE][curr_core].cur_budget = rt_world_cores[NONSECURE_STATE][curr_core].budget;
	rt_world_cores[NONSECURE_STATE][curr_core].runq_status = RUNQ_RUNNABLE;

	s_time_t now = getCurrentTime_micro();
	rt_world_cores[SECURE_STATE][curr_core].last_start = now;
	rt_world_cores[SECURE_STATE][curr_core].last_rpl_time = now;
	rt_world_cores[SECURE_STATE][curr_core].cur_deadline = now + rt_world_cores[SECURE_STATE][curr_core].period;
	rt_world_cores[NONSECURE_STATE][curr_core].last_start = now;
	rt_world_cores[NONSECURE_STATE][curr_core].cur_deadline = now + rt_world_cores[NONSECURE_STATE][curr_core].period;
	rt_world_cores[NONSECURE_STATE][curr_core].last_rpl_time = now;

	return;
}

// world scheduling
void world_schedule_event()
{
// this should update the time keeping for all the schedule event, this includes
// - burning the budget
	int coreNum = get_current_core();
    if(coreNum > 3 || coreNum < 0){
        EMSG("thread get local core returning something not in range %d\n", coreNum);
        return -1;
    }

    s_time_t current_time = getCurrentTime_micro();

	burn_budget(&rt_world_cores[SECURE_STATE][coreNum],current_time);
    burn_budget(&rt_world_cores[NONSECURE_STATE][coreNum],current_time);
}

void world_try_to_wake_up()
{
	// this function should recognize the tasks that are ready to run 
	// for efficiency, we should replenish the budget here
	int coreNum = get_current_core();
    if(coreNum > 3 || coreNum < 0){
        EMSG("thread get local core returning something not in range %d\n", coreNum);
        return -1;
    }

    s_time_t current_time = getCurrentTime_micro();

	// update deadlien
    rt_update_deadline_and_replenish_budget(&rt_world_cores[SECURE_STATE][coreNum],current_time);
    rt_update_deadline_and_replenish_budget(&rt_world_cores[NONSECURE_STATE][coreNum],current_time);

}

void world_recalculate_prio()
{
	world_schedule();

}

void world_schedule()
{
	int coreNum = get_current_core();
    if(coreNum > 3 || coreNum < 0){
        EMSG("thread get local core returning something not in range %d\n", coreNum);
        return -1;
    }
    schedule_world(coreNum);
}


int total_have_nothing_to_run = 0;

//idel scheduler
void idle_scheduler_set_next_timer(){
	s_time_t next_secure_job_release = get_next_job_release();
	trigger_timer_micro_s(next_secure_job_release - getCurrentTime_micro());
}


// this function will examine the current priority queue and execute
static void schedule_world(int coreNum)
{
	set_next_timer_flag[coreNum] = 0;

	//Idle Scheduler
	#ifdef IDLE_SCHEDULER
	if(rt_world_cores[SECURE_STATE][coreNum].has_nothing_to_run){
		rt_world_cores[SECURE_STATE][coreNum].has_nothing_to_run = 0;
		idle_scheduler_set_next_timer();
		return_to_normal_world();
	}
	execute_secure_world(coreNum);
	#endif

	#ifdef HIERARCHICAL_SCHEDULER
	//return to normal world when secure world is idle
	if (rt_world_cores[SECURE_STATE][coreNum].has_nothing_to_run)
	{		

		//return from secure world first time after setting has_nothing_to_run, first burn normal world budgets, when it burn out, we can let it continue to run
		//first set timer to 
		//min(nearest secure task release, 
		//normal world budget(burn first and continue, no need to care about),secure world budget(X not used),
		// normal world deadline, secure world deadline)
			if(rt_world_cores[SECURE_STATE][coreNum].runq_status == RUNQ_RUNNABLE)
			{	
				total_have_nothing_to_run += 1;
				rt_world_cores[SECURE_STATE][coreNum].runq_status = RUNQ_NOTHING_TO_RUN;
				set_has_nothing_to_run_timer(coreNum, rt_world_cores[SECURE_STATE][coreNum].nextEarliestJobRelease);
				//no matter whether nw has budget
				rt_world_cores[NONSECURE_STATE][coreNum].runq_status = RUNQ_RUNNING;
				rt_world_cores[NONSECURE_STATE][coreNum].last_start = getCurrentTime_micro();
				return_to_normal_world();
			}
			//resume secure world after secure world release their jobs
			else if( rt_world_cores[SECURE_STATE][coreNum].runq_status == RUNQ_NOTHING_TO_RUN && 
				rt_world_cores[SECURE_STATE][coreNum].nextEarliestJobRelease <= getCurrentTime_micro())
			{
				rt_world_cores[SECURE_STATE][coreNum].runq_status = RUNQ_RUNNABLE;
				rt_world_cores[SECURE_STATE][coreNum].has_nothing_to_run = false;
			}
			//normal world replenishent, when secure world get replenishened, it will become RUNQ_RUNNABLE (has bedget)
			//normal world become out of budget will also come into this branch (no budget)
			else if (rt_world_cores[SECURE_STATE][coreNum].runq_status == RUNQ_NOTHING_TO_RUN && 
				rt_world_cores[SECURE_STATE][coreNum].nextEarliestJobRelease > getCurrentTime_micro())
			{
				set_has_nothing_to_run_timer(coreNum, rt_world_cores[SECURE_STATE][coreNum].nextEarliestJobRelease);
				rt_world_cores[NONSECURE_STATE][coreNum].runq_status = RUNQ_RUNNING;
				rt_world_cores[NONSECURE_STATE][coreNum].last_start = getCurrentTime_micro();
				return_to_normal_world();
			}
			else
			{
				IMSG("Something very bad happen --- debug me!!!");
			}

	}
	
    // check if both world are runnable, then run the one with higher priority 
   if((rt_world_cores[SECURE_STATE][coreNum].runq_status    == RUNQ_RUNNABLE &&
       rt_world_cores[NONSECURE_STATE][coreNum].runq_status  == RUNQ_OUT_OF_BUDGET )
        ||
       (rt_world_cores[SECURE_STATE][coreNum].runq_status    == RUNQ_OUT_OF_BUDGET &&
       rt_world_cores[NONSECURE_STATE][coreNum].runq_status  == RUNQ_RUNNABLE )
       )
    {
        // when there is only one thing that needs to run, we will just run it
        if(rt_world_cores[SECURE_STATE][coreNum].runq_status == RUNQ_RUNNABLE)
        	execute_secure_world(coreNum);  	
        else
        	execute_normal_world(coreNum);

    }
    //both worlds cannot run
    else if(rt_world_cores[SECURE_STATE][coreNum].runq_status     == RUNQ_OUT_OF_BUDGET &&
            rt_world_cores[NONSECURE_STATE][coreNum].runq_status  == RUNQ_OUT_OF_BUDGET )
    {

  		//return to normal world
        do_idle_processing(IDLE_PROCESSING_YIELD);
        
    }
    //both worlds can run
    else
    {
        // when both wants to run, we need to check which one has higher priority
        if(rt_world_cores[SECURE_STATE][coreNum].priority <= 
           rt_world_cores[NONSECURE_STATE][coreNum].priority)
        {
            execute_secure_world(coreNum);
        }
        else
        {
            execute_normal_world(coreNum);
        }
    }
    // otherwise, we will give the execution to normal world by default
    #endif
}

int total_nw_exe = 0;
void execute_normal_world(int coreNum)
{
	nw_exe[get_current_core()] += 1;

	total_nw_exe += 1;

	set_next_timer(NONSECURE_STATE, coreNum);

	rt_world_cores[NONSECURE_STATE][coreNum].runq_status = RUNQ_RUNNING;
	rt_world_cores[NONSECURE_STATE][coreNum].last_start = getCurrentTime_micro();

	return_to_normal_world();
}


int total_sw_exe = 0;
// this function calls the 
void execute_secure_world(int coreNum)
{

	sw_exe[get_current_core()] += 1;

	total_sw_exe += 1;
	//set the timer to the budget
	set_next_timer(SECURE_STATE, coreNum);

	rt_world_cores[SECURE_STATE][coreNum].runq_status = RUNQ_RUNNING;
	rt_world_cores[SECURE_STATE][coreNum].last_start = getCurrentTime_micro();

	//force execute from the beginning of secure world scheduler

	rt_tee_sched_item();
	
}

//-------------------------------------------------------------------------------------------------------------



void rt_tee_sched_item(){
	//put runnable tasks into runnable tasks queue
	secure_world_schedule_event();
	//empty now
	secure_world_try_to_wake_up();
	//empty now
	secure_world_recalculate_prio();
	//pick the next secure task to be executed
	secure_schedule();
}

bool print_flg[CFG_TEE_CORE_NB_CORE] = {false};
int total_cmpl_tasks[CFG_TEE_CORE_NB_CORE] = {0};
int total_release = 0;


int test_finish[CFG_TEE_CORE_NB_CORE][5];
int thread_use_num[CFG_TEE_CORE_NB_CORE][10];

//debug
int debug_thread_index = 0;
int resume_num[CFG_TEE_CORE_NB_CORE] = {0};
int suspend_num[CFG_TEE_CORE_NB_CORE] = {0};
int task1_exe_time[CFG_TEE_CORE_NB_CORE] = {0};
int miss_all_flag[SECURE_WORLD_MAX_SUPPORTED_TASKS];

unsigned int result_print_lock = SPINLOCK_UNLOCK;


void secure_world_schedule_event()
{
	int coreNum = get_current_core();


	// #ifdef RT-TEE_SYNTHETIC	
	// this will do the time keeping for secure world task 
	// release tasks, update release time

	//exeperiment need
	bool finish = true;
	int total_missed[CFG_TEE_CORE_NB_CORE] = {0};
	//when NUM_OF_JOBS all are finished the finish will stay true after iteration

	for(int i = 0; i < SECURE_WORLD_MAX_SUPPORTED_TASKS; i++){
		finish = true;
		if(secure_tasks[i].occupied && secure_tasks[i].cpu == coreNum){
			if(secure_tasks[i].numOfJobCompleted >= NUM_OF_MEASURED \
				|| getCurrentTime_micro() - start_time[get_current_core()] > NUM_OF_MEASURED * secure_tasks[i].period){

				// IMSG("current_time:%d, time_constrains:%d", getCurrentTime_micro() - start_time[get_current_core()], \
					NUM_OF_MEASURED * secure_tasks[i].period);


				//if tasks have not been finished at the time of the total deadline, they all miss ddl
				if(getCurrentTime_micro() - start_time[get_current_core()] > NUM_OF_MEASURED * secure_tasks[i].period \
					&& secure_tasks[i].numOfJobCompleted <= NUM_OF_MEASURED \
					&& !miss_all_flag[i]){
					secure_tasks[i].numOfJobDlMissed += NUM_OF_MEASURED - secure_tasks[i].numOfJobCompleted;
					miss_all_flag[i] = 1;
				}
				continue;
			}
			else{
				finish = false;
				break;
			}
		}
		
	}

	if(finish == true && print_flg[coreNum] == false ){

		for(int i = 0; i < SECURE_WORLD_MAX_SUPPORTED_TASKS; i++){
			if(secure_tasks[i].occupied && secure_tasks[i].cpu == coreNum){
				//IMSG("task %d, numOfJobReleased %d\n", i, secure_world_tasks[i].numOfJobReleased);
				total_missed[get_current_core()] += secure_tasks[i].numOfJobDlMissed;
			}			
		}

		cpu_spin_lock(&result_print_lock);
		IMSG("==============Secure World core %d==============\n", get_current_core());
		IMSG("task1 execution time: %d", task1_exe_time[get_current_core()]);
		IMSG("Total Missed Tasks: %d\n", total_missed[get_current_core()]);
		IMSG("Total Cmpl Tasks: %d\n", total_cmpl_tasks[get_current_core()]);
		//IMSG("Total Released Tasks: %d\n", total_release);
		IMSG("Total Measured Tasks: %d\n", NUM_OF_MEASURED * SECURE_WORLD_MAX_TASKS);
		for(int i = 0; i < SECURE_WORLD_MAX_TASKS; i++){
			//IMSG("task %d miss: %d finished: %d", i, miss_index[i], test_finish[i]);
			IMSG("task %d miss: %d finished: %d", i, secure_tasks[i].numOfJobDlMissed, \
				test_finish[coreNum][i]);

		}
		IMSG("total nw exe: %d", total_nw_exe);
		IMSG("total sw exe: %d", total_sw_exe);
		IMSG("total has_nothing_to_run: %d", total_have_nothing_to_run);
		IMSG("suspend num %d", suspend_num[get_current_core()]);
		IMSG("active num %d", resume_num[get_current_core()]);

		for(int i = 0; i < CFG_TEE_CORE_NB_CORE; i++){
			IMSG("core%d: %d", i, core_exe[i]);
		}

		for(int i = 0; i < CFG_TEE_CORE_NB_CORE; i++){
			IMSG("core%d, nw: %d, sw: %d", i, nw_exe[i], sw_exe[i]);
		}

		IMSG("max thread index %d", debug_thread_index);
		for(int i = 0; i < CFG_NUM_THREADS; i++){
			IMSG("thread %d use_num %d", i, thread_use_num[get_current_core()][i]);
		}
		IMSG("========================================\n");

		print_flg[coreNum] = true;
		write_cntps_ctl(0);
		cpu_spin_unlock(&result_print_lock);
		return_to_normal_world();
		//fixme:experiment require
	}
// #endif



	/*
	  Every time when there is task releasing, rescheduling the secure tasks. 
	  After releasing a secure task, set timer to the time point of the next 
	  nearest task period.
	 */

	for(int i = 0; i < SECURE_WORLD_MAX_SUPPORTED_TASKS; i++){
		if(secure_tasks[i].occupied && secure_tasks[i].cpu == get_current_core()){
			struct secure_task *curr_task = &secure_tasks[i];

			if( curr_task->lastReleaseOfJob == 0 ||
			// if the secure world last released task is completed
				curr_task->lastCompletionOfJob >= curr_task->lastReleaseOfJob &&
				// if the new job for the task is ready to be released
			    getCurrentTime_micro() - curr_task->lastReleaseOfJob >= curr_task->period &&
			    // refuse to release task when last one is not finished, last relase is used to calculate the miss rate
			    curr_task->numOfJobCompleted == curr_task->numOfJobReleased \
			    // stop to release task when numOfJobCompleted > NUM_OF_JOBS
			    // experiment needed, this should be removed
			    && curr_task->numOfJobCompleted <= NUM_OF_JOBS
			)
			{
				curr_task->numOfJobReleased++;
				total_release++;
				wait_to_execute[get_current_core()] += 1;
	 			//initilize last_rpl_time when releasing jobs first time
				if(curr_task->lastReleaseOfJob == 0){
					curr_task->lastReleaseOfJob = rt_world_cores[SECURE_STATE][coreNum].last_rpl_time;
				}
				else{
					curr_task->lastReleaseOfJob += curr_task->period;
					TAILQ_INSERT_TAIL(&runnable_tasks[get_current_core()][curr_task->priority], curr_task, tail_queue_entity);
				}
			}
			//experiment needed, this should be removed.
			else if(curr_task->numOfJobCompleted > NUM_OF_JOBS){
				curr_task->lastReleaseOfJob = 1000000000000;

			}			
		}
	}
	//has nothing to run
	if(wait_to_execute[get_current_core()] == 0){
		int coreNum = get_current_core();
		rt_world_cores[SECURE_STATE][coreNum].has_nothing_to_run = true;
		rt_world_cores[SECURE_STATE][coreNum].nextEarliestJobRelease = get_next_job_release();
		world_schedule_item();
	}

}

void secure_world_try_to_wake_up()
{
	// this will try to replish the budget for secure world tasks, and put some of them back to runnable
	// put runnable tasks in runqueue
}

void secure_world_recalculate_prio()
{
	// this will probably contains nothing, since we are using fix priority
}


extern  void context_saving_begin();
void secure_schedule()
{

	int coreNum = get_current_core();
	// picks and executes the right secure wolrd task to execute
	// pick the task with highest priority
	// loops through all the secure task
	set_preemptive_timer_flag[coreNum] = 0;
	for(int i = 0; i < SECURE_WORLD_MIN_PRIORITY; i++){
		struct secure_task *curr_task = NULL;
		TAILQ_FOREACH(curr_task, &runnable_tasks[get_current_core()][i], tail_queue_entity){
			//coreNum is used to pin task onto specific core
			set_preemptive_timer(curr_task);
			//invoke or resume
			//in case interrupt occurs between invoke invocation
			if(curr_task->task_state == SECURE_TASK_RUNNING && \
				threads[curr_task->curr_thread].state == THREAD_STATE_SUSPENDED){
		
				//processing _core is used to handle the scenario of interrupt between invoke and SECURE_TASK_RUNNING
				curr_task->processing_core = coreNum;

				trigger_timer_micro_s(secure_exe_next_timer[get_current_core()]);


				rt_tee_thread_resume(&curr_task->saved_regs, curr_task->taskUid);
			}
			else{

				//curr_task has not been processed by other core or 
				//processed by current core but interrupted before actually execution
				if(curr_task->processing_core = -1 \
					|| curr_task->processing_core == coreNum){

					curr_task->processing_core = coreNum;
					
					rt_tee_thread_invoke(curr_task->session_id, curr_task->taskUid);
				}
			}
		}
	}
}

//pta part
long loop_result = 0;
long mult_busy_loop(unsigned long execution_time){
	uint64_t start = read_cntpct();
	int freq = read_cntfrq();
	loop_result = 0;
	int cnt = (execution_time/1000) * ONE_MS_LOOP_CNT;
	 __asm__ __volatile__(
            "mov x3, %1 \n\t" //iterations times
            "mov x2, #0 \n\t" //loop index
            "mov x0, #3 \n\t" //3->x0
            "mov x1, #1 \n\t" //1->x1
            "loop: \n\t"
            "mul x1, x1, x0 \n\t"
            "mul x1, x1, x0 \n\t"
            "mul x1, x1, x0 \n\t"
            "add x2, x2, #1 \n\t" //add outer index
            "cmp x2, x3 \n\t"
            "blt loop \n\t" //jump outer loop
            "mov %0, x1 \n\t" //store the result
            :"=r" (loop_result)
            :"r" (cnt)
            :"x0", "x1", "x2", "x3"
        );
	uint64_t end = read_cntpct();
}