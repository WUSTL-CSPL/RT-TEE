// SPDX-License-Identifier: BSD-2-Clause
/*
 * Copyright (c) 2014, STMicroelectronics International N.V.
 */

#include <compiler.h>
#include <kernel/pseudo_ta.h>
#include <kernel/panic.h>
#include <mm/core_memprot.h>
#include <pta_invoke_tests.h>
#include <string.h>
#include <tee/cache.h>
#include <tee_api_defines.h>
#include <tee_api_types.h>
#include <trace.h>
#include <types_ext.h>
#include <platform_config.h>
#include "core_self_tests.h"
#include <arm64.h>
#include <drivers/gic.h>


#define TA_NAME		"invoke_tests.pta"

#include <io.h>

#if defined(__GNUC__)
#define FORCEDINLINE  __attribute__((always_inline))
#else 
#define FORCEDINLINE
#endif

extern struct gic_data *addr_gic_data;
void triggering_timer(){

	write_cntps_ctl(0);
	
	uint64_t time_ms;
	time_ms = 5000; // 1000 is 1 second
	uint64_t timer_ticks;

	// The timer will fire time_ms from now 
	timer_ticks = (read_cntfrq() * time_ms) / 1000;

	write_cntps_tval(timer_ticks);

	/* Enable the secure physical timer */
	write_cntps_ctl(1);

}

/* Offsets from gic.gicc_base */
#define GICC_CTLR		(0x000)
#define GICC_PMR		(0x004)
#define GICC_IAR		(0x00C)
#define GICC_EOIR		(0x010)

#define GICC_CTLR_ENABLEGRP0	(1 << 0)
#define GICC_CTLR_ENABLEGRP1	(1 << 1)
#define GICC_CTLR_FIQEN		(1 << 3)

/* Offsets from gic.gicd_base */
#define GICD_CTLR		(0x000)
#define GICD_TYPER		(0x004)
#define GICD_IGROUPR(n)		(0x080 + (n) * 4) //provides a status bit for each interrupt supported by the GIC. Group0 or Group1
#define GICD_ISENABLER(n)	(0x100 + (n) * 4) //provides a set-enable bit for each interupt supported by the GIC. 
											  //1 Enable forwarding of correcponding interrupt from Distributor to CPU interfaces
#define GICD_ICENABLER(n)	(0x180 + (n) * 4) //provides a Clear-enable bit for each interrupt supported by GIC.
											  //1 disables forwarding of thecorresponnding interrupt from Distributor to CPU interface 
#define GICD_ISPENDR(n)		(0x200 + (n) * 4) //provides a Set-pending bit for each interrupt supported by the GIC. 
											  //1 sets the status of corresponding peripheral interrupt to pending
#define GICD_ICPENDR(n)		(0x280 + (n) * 4) //provides a Clear-pending bit for each interrupt supported by GIC.
											  //1 clears the pending state of corresponding peripheral interrupt.
#define GICD_IPRIORITYR(n)	(0x400 + (n) * 4) //provides an 8-bit priority field for each interrupt supported by the GIC.
											  //This field stores the priority of the corresponding interrupt
#define GICD_ITARGETSR(n)	(0x800 + (n) * 4) //provides an 8-bit CPU target field for each interrupt supported by the GIC.
											  //This field stores the list of target processors for the interrupt.
#define GICD_SGIR		(0xF00)

#define GICD_CTLR_ENABLEGRP0	(1 << 0)
#define GICD_CTLR_ENABLEGRP1	(1 << 1)

/* Number of Private Peripheral Interrupt */
#define NUM_PPI	32

/* Number of Software Generated Interrupt */
#define NUM_SGI			16

/* Number of Non-secure Software Generated Interrupt */
#define NUM_NS_SGI		8

/* Number of interrupts in one register */
#define NUM_INTS_PER_REG	32

/* Number of targets in one register */
#define NUM_TARGETS_PER_REG	4

/* Accessors to access ITARGETSRn */
#define ITARGETSR_FIELD_BITS	8
#define ITARGETSR_FIELD_MASK	0xff

/* Maximum number of interrups a GIC can support */
#define GIC_MAX_INTS		1020

#define GICC_IAR_IT_ID_MASK	0x3ff
#define GICC_IAR_CPU_ID_MASK	0x7
#define GICC_IAR_CPU_ID_SHIFT	10


static FORCEDINLINE uint32_t readl(uint32_t *addr){

		uint32_t rtn = *(volatile uint32_t *)addr;

		__asm__ __volatile__(
		// "ldr %0, [%1] \n\t"
 		"DSB SY       \n\t"
        :
        :
        :
    );
    return rtn;
}

// int debug_read;
static FORCEDINLINE void writel(uint32_t val, volatile uint32_t *addr){


	*(volatile uint32_t *)addr = val;

	__asm__ __volatile__(
		// "str %0, [%1] \n\t"
 		"DSB ST       \n\t"
        :
        :
        :
    ); 
}
// #define PHYS_ADDR_GICD 0x08020000
// #define PHYS_ADDR_GICC 0x08030000

static int init_timer_itr(void)
{

	uint32_t timer_ticks;
	uint32_t time_ms;
	time_ms = 1000; // 1000 is 1 second
	// time_ms = 10;
	timer_ticks = read_cntfrq() * (time_ms / 1000);
	write_cntps_tval(timer_ticks);
	/* Enable the secure physical timer */
	write_cntps_ctl(1);
		
	return 0;
}



int timer_init(){
	return 0;
}



// static void gic_it_enable(struct gic_data *gd, size_t it)
static void gic_it_enable(vaddr_t gicd_base, size_t it)
{
	size_t idx = it / NUM_INTS_PER_REG;
	uint32_t mask = 1 << (it % NUM_INTS_PER_REG);

	/* Assigned to group0 */
	assert(!(read32(gicd_base + GICD_IGROUPR(idx)) & mask));
	if (it >= NUM_SGI) {
		/*
		 * Not enabled yet, except Software Generated Interrupt
		 * which is implementation defined
		 */
		assert(!(read32(gicd_base + GICD_ISENABLER(idx)) & mask));
	}

	/* Enable the interrupt */
	write32(mask, gicd_base + GICD_ISENABLER(idx));
}


static void gic_it_add(vaddr_t gicd_base, size_t it)
{
	size_t idx = it / NUM_INTS_PER_REG;
	uint32_t mask = 1 << (it % NUM_INTS_PER_REG);

	/* Disable the interrupt */
	write32(mask, gicd_base + GICD_ICENABLER(idx));
	/* Make it non-pending */
	write32(mask, gicd_base + GICD_ICPENDR(idx));
	/* Assign it to group0 */
	write32(read32(gicd_base + GICD_IGROUPR(idx)) & ~mask,
			gicd_base + GICD_IGROUPR(idx));
}


static void gic_it_set_prio(vaddr_t gicd_base, size_t it, uint8_t prio)
{
	size_t idx __maybe_unused = it / NUM_INTS_PER_REG;
	uint32_t mask __maybe_unused = 1 << (it % NUM_INTS_PER_REG);

	/* Assigned to group0 */
	assert(!(read32(gicd_base + GICD_IGROUPR(idx)) & mask));

	/* Set prio it to selected CPUs */
	DMSG("prio: writing 0x%x to 0x%" PRIxVA,
		prio, gicd_base + GICD_IPRIORITYR(0) + it);
	write8(prio, gicd_base + GICD_IPRIORITYR(0) + it);
}


static void gic_it_set_cpu_mask(vaddr_t gicd_base, size_t it,
				uint8_t cpu_mask)
{
	size_t idx __maybe_unused = it / NUM_INTS_PER_REG;
	uint32_t mask __maybe_unused = 1 << (it % NUM_INTS_PER_REG);
	uint32_t target, target_shift;

	/* Assigned to group0 */
	assert(!(read32(gicd_base + GICD_IGROUPR(idx)) & mask));

	/* Route it to selected CPUs */
	target = read32(gicd_base +
			GICD_ITARGETSR(it / NUM_TARGETS_PER_REG));
	target_shift = (it % NUM_TARGETS_PER_REG) * ITARGETSR_FIELD_BITS;
	target &= ~(ITARGETSR_FIELD_MASK << target_shift);
	target |= cpu_mask << target_shift;
	DMSG("cpu_mask: writing 0x%x to 0x%" PRIxVA,
	     target, gicd_base + GICD_ITARGETSR(it / NUM_TARGETS_PER_REG));
	write32(target,
		gicd_base + GICD_ITARGETSR(it / NUM_TARGETS_PER_REG));
	DMSG("cpu_mask: 0x%x\n",
	     read32(gicd_base + GICD_ITARGETSR(it / NUM_TARGETS_PER_REG)));
}




static void gic_op_add(vaddr_t gicd_base, size_t it)
{
	// write32(0x80, gicd_base + GICC_PMR);


	// gic_it_enable(gicd_base, it);
	gic_it_add(gicd_base, it);
	/* Set the CPU mask to deliver interrupts to any online core */
	gic_it_set_cpu_mask(gicd_base, it, 0xff);
	gic_it_set_prio(gicd_base, it, 0x1);
	gic_it_enable(gicd_base, it);

}


#define PHYS_ADDR_GICD 		0x08000000
#define PHYS_ADDR_GICC 		0x08010000
#define EL1_PHYSICAL_TIMER 	29


int gic_init_fun(void){


	vaddr_t vaddr_gicd;
	vaddr_t vaddr_gicc;

	vaddr_gicd = (vaddr_t)phys_to_virt(PHYS_ADDR_GICD, MEM_AREA_IO_SEC);
	vaddr_gicc = (vaddr_t)phys_to_virt(PHYS_ADDR_GICC, MEM_AREA_IO_SEC);
	uint32_t gicc_pmr = readl(vaddr_gicc + GICC_PMR);
	gic_op_add(vaddr_gicd, EL1_PHYSICAL_TIMER);

	//star timer
	// init_timer_itr();

	return 0;
}


static TEE_Result test_trace(uint32_t param_types __unused,
			TEE_Param params[TEE_NUM_PARAMS] __unused)
{
	IMSG("pseudo TA \"%s\" says \"Hello world !\"", TA_NAME);
	gic_init_fun();
	return TEE_SUCCESS;
}

static int test_v2p2v(void *va)
{
	struct tee_ta_session *session;
	paddr_t p;
	void *v;

	if  (!va)
		return 0;

	if (tee_ta_get_current_session(&session))
		panic();

	p = virt_to_phys(va);

	/* 0 is not a valid physical address */
	if (!p)
		return 1;

	if (session->clnt_id.login == TEE_LOGIN_TRUSTED_APP) {
		v = phys_to_virt(p, MEM_AREA_TA_VASPACE);
	} else {
		v = phys_to_virt(p, MEM_AREA_NSEC_SHM);
		if (!v)
			v = phys_to_virt(p, MEM_AREA_SDP_MEM);
		if (!v)
			v = phys_to_virt(p, MEM_AREA_SHM_VASPACE);
	}

	/*
	 * Return an error only the vaddr found mismatches input address.
	 * Finding a virtual address from a physical address cannot be painful
	 * in some case (i.e pager). Moreover this operation is more debug
	 * related. Thus do not report error if phys_to_virt failed
	 */
	if (v && va != v) {
		EMSG("Failed to p2v/v2p on caller TA memref arguments");
		EMSG("va %p -> pa 0x%" PRIxPA " -> va %p", va, p, v);
		return 1;
	}

	return 0;
}

/*
 * Supported tests on parameters
 * (I, J, K, L refer to param index)
 *
 * Case 1: command parameters type are: 1 in/out value, 3 empty.
 *         => process outI.a = inI.a + inI.b
 * Case 2: command parameters type are: 3 input value, 1 output value
 *         => process = outI.a = inJ.a + inK.a + inL.a
 * Case 3: command parameters type are: 1 in/out memref, 3 empty.
 *         => process = outI[0] = sum(inI[0..len-1])
 */
static TEE_Result test_entry_params(uint32_t type, TEE_Param p[TEE_NUM_PARAMS])
{
	size_t i;
	uint8_t d8, *in;

	/* case 1a: 1 input/output value argument */
	if ((TEE_PARAM_TYPE_GET(type, 0) == TEE_PARAM_TYPE_VALUE_INOUT) &&
		(TEE_PARAM_TYPE_GET(type, 1) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 2) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 3) == TEE_PARAM_TYPE_NONE)) {
		p[0].value.a = p[0].value.a + p[0].value.b;
		return TEE_SUCCESS;
	}
	/* case 1b: 1 input/output value argument */
	if ((TEE_PARAM_TYPE_GET(type, 0) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 1) == TEE_PARAM_TYPE_VALUE_INOUT) &&
		(TEE_PARAM_TYPE_GET(type, 2) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 3) == TEE_PARAM_TYPE_NONE)) {
		p[1].value.a = p[1].value.a + p[1].value.b;
		return TEE_SUCCESS;
	}
	/* case 1c: 1 input/output value argument */
	if ((TEE_PARAM_TYPE_GET(type, 0) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 1) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 2) == TEE_PARAM_TYPE_VALUE_INOUT) &&
		(TEE_PARAM_TYPE_GET(type, 3) == TEE_PARAM_TYPE_NONE)) {
		p[2].value.a = p[2].value.a + p[2].value.b;
		return TEE_SUCCESS;
	}
	/* case 1d: 1 input/output value argument */
	if ((TEE_PARAM_TYPE_GET(type, 0) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 1) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 2) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 3) == TEE_PARAM_TYPE_VALUE_INOUT)) {
		p[3].value.a = p[3].value.a + p[3].value.b;
		return TEE_SUCCESS;
	}

	/* case 2a: 3 input value arguments, 1 output value argument */
	if ((TEE_PARAM_TYPE_GET(type, 0) == TEE_PARAM_TYPE_VALUE_OUTPUT) &&
		(TEE_PARAM_TYPE_GET(type, 1) == TEE_PARAM_TYPE_VALUE_INPUT) &&
		(TEE_PARAM_TYPE_GET(type, 2) == TEE_PARAM_TYPE_VALUE_INPUT) &&
		(TEE_PARAM_TYPE_GET(type, 3) == TEE_PARAM_TYPE_VALUE_INPUT)) {
		p[0].value.a = p[1].value.a + p[2].value.a + p[3].value.a;
		p[0].value.b = p[1].value.b + p[2].value.b + p[3].value.b;
		return TEE_SUCCESS;
	}
	/* case 2a: 3 input value arguments, 1 output value argument */
	if ((TEE_PARAM_TYPE_GET(type, 0) == TEE_PARAM_TYPE_VALUE_INPUT) &&
		(TEE_PARAM_TYPE_GET(type, 1) == TEE_PARAM_TYPE_VALUE_OUTPUT) &&
		(TEE_PARAM_TYPE_GET(type, 2) == TEE_PARAM_TYPE_VALUE_INPUT) &&
		(TEE_PARAM_TYPE_GET(type, 3) == TEE_PARAM_TYPE_VALUE_INPUT)) {
		p[1].value.a = p[0].value.a + p[2].value.a + p[3].value.a;
		p[1].value.b = p[0].value.b + p[2].value.b + p[3].value.b;
		return TEE_SUCCESS;
	}
	/* case 2a: 3 input value arguments, 1 output value argument */
	if ((TEE_PARAM_TYPE_GET(type, 0) == TEE_PARAM_TYPE_VALUE_INPUT) &&
		(TEE_PARAM_TYPE_GET(type, 1) == TEE_PARAM_TYPE_VALUE_INPUT) &&
		(TEE_PARAM_TYPE_GET(type, 2) == TEE_PARAM_TYPE_VALUE_OUTPUT) &&
		(TEE_PARAM_TYPE_GET(type, 3) == TEE_PARAM_TYPE_VALUE_INPUT)) {
		p[2].value.a = p[0].value.a + p[1].value.a + p[3].value.a;
		p[2].value.b = p[0].value.b + p[1].value.b + p[3].value.b;
		return TEE_SUCCESS;
	}
	/* case 2a: 3 input value arguments, 1 output value argument */
	if ((TEE_PARAM_TYPE_GET(type, 0) == TEE_PARAM_TYPE_VALUE_INPUT) &&
		(TEE_PARAM_TYPE_GET(type, 1) == TEE_PARAM_TYPE_VALUE_INPUT) &&
		(TEE_PARAM_TYPE_GET(type, 2) == TEE_PARAM_TYPE_VALUE_INPUT) &&
		(TEE_PARAM_TYPE_GET(type, 3) == TEE_PARAM_TYPE_VALUE_OUTPUT)) {
		p[3].value.a = p[0].value.a + p[1].value.a + p[2].value.a;
		p[3].value.b = p[0].value.b + p[1].value.b + p[2].value.b;
		return TEE_SUCCESS;
	}

	DMSG("expect memref params: %p/%" PRIu32 " - %p/%" PRIu32 "zu - %p/%" PRIu32 "zu - %p/%" PRIu32 "zu",
			p[0].memref.buffer, p[0].memref.size,
			p[1].memref.buffer, p[1].memref.size,
			p[2].memref.buffer, p[2].memref.size,
			p[3].memref.buffer, p[3].memref.size);

	/* case 3a: 1 in/out memref argument */
	if ((TEE_PARAM_TYPE_GET(type, 0) == TEE_PARAM_TYPE_MEMREF_INOUT) &&
		(TEE_PARAM_TYPE_GET(type, 1) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 2) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 3) == TEE_PARAM_TYPE_NONE)) {
		in = (uint8_t *)p[0].memref.buffer;
		if (test_v2p2v(in))
			return TEE_ERROR_SECURITY;
		d8 = 0;
		for (i = 0; i < p[0].memref.size; i++)
			d8 += in[i];
		*(uint8_t *)p[0].memref.buffer = d8;
		return TEE_SUCCESS;
	}
	/* case 3b: 1 in/out memref argument */
	if ((TEE_PARAM_TYPE_GET(type, 0) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 1) == TEE_PARAM_TYPE_MEMREF_INOUT) &&
		(TEE_PARAM_TYPE_GET(type, 2) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 3) == TEE_PARAM_TYPE_NONE)) {
		in = (uint8_t *)p[1].memref.buffer;
		if (test_v2p2v(in))
			return TEE_ERROR_SECURITY;
		d8 = 0;
		for (i = 0; i < p[1].memref.size; i++)
			d8 += in[i];
		*(uint8_t *)p[1].memref.buffer = d8;
		return TEE_SUCCESS;
	}
	/* case 3c: 1 in/out memref argument */
	if ((TEE_PARAM_TYPE_GET(type, 0) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 1) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 2) == TEE_PARAM_TYPE_MEMREF_INOUT) &&
		(TEE_PARAM_TYPE_GET(type, 3) == TEE_PARAM_TYPE_NONE)) {
		in = (uint8_t *)p[2].memref.buffer;
		if (test_v2p2v(in))
			return TEE_ERROR_SECURITY;
		d8 = 0;
		for (i = 0; i < p[2].memref.size; i++)
			d8 += in[i];
		*(uint8_t *)p[2].memref.buffer = d8;
		return TEE_SUCCESS;
	}
	/* case 3d: 1 in/out memref argument */
	if ((TEE_PARAM_TYPE_GET(type, 0) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 1) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 2) == TEE_PARAM_TYPE_NONE) &&
		(TEE_PARAM_TYPE_GET(type, 3) == TEE_PARAM_TYPE_MEMREF_INOUT)) {
		in = (uint8_t *)p[3].memref.buffer;
		if (test_v2p2v(in))
			return TEE_ERROR_SECURITY;
		d8 = 0;
		for (i = 0; i < p[3].memref.size; i++)
			d8 += in[i];
		*(uint8_t *)p[3].memref.buffer = d8;
		return TEE_SUCCESS;
	}

	EMSG("unexpected parameters");
	return TEE_ERROR_BAD_PARAMETERS;
}

/*
 * Test access to Secure Data Path memory from pseudo TAs
 */

static TEE_Result test_inject_sdp(uint32_t type, TEE_Param p[TEE_NUM_PARAMS])
{
	char *src = p[0].memref.buffer;
	char *dst = p[1].memref.buffer;
	size_t sz = p[0].memref.size;
	uint32_t exp_pt = TEE_PARAM_TYPES(TEE_PARAM_TYPE_MEMREF_INPUT,
					  TEE_PARAM_TYPE_MEMREF_OUTPUT,
					  TEE_PARAM_TYPE_NONE,
					  TEE_PARAM_TYPE_NONE);

	if (exp_pt != type) {
		DMSG("bad parameter types");
		return TEE_ERROR_BAD_PARAMETERS;
	}

	if (p[1].memref.size < sz) {
		p[1].memref.size = sz;
		return TEE_ERROR_SHORT_BUFFER;
	}

	if (!core_vbuf_is(CORE_MEM_NON_SEC, src, sz) ||
	    !core_vbuf_is(CORE_MEM_SDP_MEM, dst, sz)) {
		DMSG("bad memref secure attribute");
		return TEE_ERROR_BAD_PARAMETERS;
	}

	if (!sz)
		return TEE_SUCCESS;

	/* Check that core can p2v and v2p over memory reference arguments */
	if (test_v2p2v(src) || test_v2p2v(src + sz - 1) ||
	    test_v2p2v(dst) || test_v2p2v(dst + sz - 1))
		return TEE_ERROR_SECURITY;

	if (cache_operation(TEE_CACHEFLUSH, dst, sz) != TEE_SUCCESS)
		return TEE_ERROR_GENERIC;

	memcpy(dst, src, sz);

	if (cache_operation(TEE_CACHEFLUSH, dst, sz) != TEE_SUCCESS)
		return TEE_ERROR_GENERIC;

	return TEE_SUCCESS;
}

static TEE_Result test_transform_sdp(uint32_t type, TEE_Param p[TEE_NUM_PARAMS])
{
	char *buf = p[0].memref.buffer;
	size_t sz = p[0].memref.size;
	uint32_t exp_pt = TEE_PARAM_TYPES(TEE_PARAM_TYPE_MEMREF_INOUT,
					  TEE_PARAM_TYPE_NONE,
					  TEE_PARAM_TYPE_NONE,
					  TEE_PARAM_TYPE_NONE);

	if (exp_pt != type) {
		DMSG("bad parameter types");
		return TEE_ERROR_BAD_PARAMETERS;
	}

	if (!core_vbuf_is(CORE_MEM_SDP_MEM, buf, sz)) {
		DMSG("bad memref secure attribute");
		return TEE_ERROR_BAD_PARAMETERS;
	}

	if (!sz)
		return TEE_SUCCESS;

	/* Check that core can p2v and v2p over memory reference arguments */
	if (test_v2p2v(buf) || test_v2p2v(buf + sz - 1))
		return TEE_ERROR_SECURITY;

	if (cache_operation(TEE_CACHEFLUSH, buf, sz) != TEE_SUCCESS)
		return TEE_ERROR_GENERIC;

	for (; sz; sz--, buf++)
		*buf = ~(*buf) + 1;

	if (cache_operation(TEE_CACHEFLUSH, buf, sz) != TEE_SUCCESS)
		return TEE_ERROR_GENERIC;

	return TEE_SUCCESS;
}

static TEE_Result test_dump_sdp(uint32_t type, TEE_Param p[TEE_NUM_PARAMS])
{
	char *src = p[0].memref.buffer;
	char *dst = p[1].memref.buffer;
	size_t sz = p[0].memref.size;
	uint32_t exp_pt = TEE_PARAM_TYPES(TEE_PARAM_TYPE_MEMREF_INPUT,
					  TEE_PARAM_TYPE_MEMREF_OUTPUT,
					  TEE_PARAM_TYPE_NONE,
					  TEE_PARAM_TYPE_NONE);

	if (exp_pt != type) {
		DMSG("bad parameter types");
		return TEE_ERROR_BAD_PARAMETERS;
	}

	if (p[1].memref.size < sz) {
		p[1].memref.size = sz;
		return TEE_ERROR_SHORT_BUFFER;
	}

	if (!core_vbuf_is(CORE_MEM_SDP_MEM, src, sz) ||
	    !core_vbuf_is(CORE_MEM_NON_SEC, dst, sz)) {
		DMSG("bad memref secure attribute");
		return TEE_ERROR_BAD_PARAMETERS;
	}

	if (!sz)
		return TEE_SUCCESS;

	/* Check that core can p2v and v2p over memory reference arguments */
	if (test_v2p2v(src) || test_v2p2v(src + sz - 1) ||
	    test_v2p2v(dst) || test_v2p2v(dst + sz - 1))
		return TEE_ERROR_SECURITY;

	if (cache_operation(TEE_CACHEFLUSH, dst, sz) != TEE_SUCCESS)
		return TEE_ERROR_GENERIC;

	memcpy(dst, src, sz);

	if (cache_operation(TEE_CACHEFLUSH, dst, sz) != TEE_SUCCESS)
		return TEE_ERROR_GENERIC;

	return TEE_SUCCESS;
}

/*
 * Trusted Application Entry Points
 */

static TEE_Result create_ta(void)
{
	DMSG("create entry point for pseudo TA \"%s\"", TA_NAME);
	return TEE_SUCCESS;
}

static void destroy_ta(void)
{
	DMSG("destroy entry point for pseudo ta \"%s\"", TA_NAME);
}

static TEE_Result open_session(uint32_t nParamTypes __unused,
		TEE_Param pParams[TEE_NUM_PARAMS] __unused,
		void **ppSessionContext __unused)
{
	DMSG("open entry point for pseudo ta \"%s\"", TA_NAME);
	return TEE_SUCCESS;
}

static void close_session(void *pSessionContext __unused)
{
	DMSG("close entry point for pseudo ta \"%s\"", TA_NAME);
}

static TEE_Result invoke_command(void *pSessionContext __unused,
		uint32_t nCommandID, uint32_t nParamTypes,
		TEE_Param pParams[TEE_NUM_PARAMS])
{
	FMSG("command entry point for pseudo ta \"%s\"", TA_NAME);

	switch (nCommandID) {
	case PTA_INVOKE_TESTS_CMD_TRACE:
		return test_trace(nParamTypes, pParams);
	case PTA_INVOKE_TESTS_CMD_PARAMS:
		return test_entry_params(nParamTypes, pParams);
	case PTA_INVOKE_TESTS_CMD_COPY_NSEC_TO_SEC:
		return test_inject_sdp(nParamTypes, pParams);
	case PTA_INVOKE_TESTS_CMD_READ_MODIFY_SEC:
		return test_transform_sdp(nParamTypes, pParams);
	case PTA_INVOKE_TESTS_CMD_COPY_SEC_TO_NSEC:
		return test_dump_sdp(nParamTypes, pParams);
	case PTA_INVOKE_TESTS_CMD_SELF_TESTS:
		return core_self_tests(nParamTypes, pParams);
#if defined(CFG_WITH_USER_TA)
	case PTA_INVOKE_TESTS_CMD_FS_HTREE:
		return core_fs_htree_tests(nParamTypes, pParams);
#endif
	case PTA_INVOKE_TESTS_CMD_MUTEX:
		return core_mutex_tests(nParamTypes, pParams);
	case PTA_INVOKE_TESTS_CMD_LOCKDEP:
		return core_lockdep_tests(nParamTypes, pParams);
	default:
		break;
	}
	return TEE_ERROR_BAD_PARAMETERS;
}

pseudo_ta_register(.uuid = PTA_INVOKE_TESTS_UUID, .name = TA_NAME,
		   .flags = PTA_DEFAULT_FLAGS | TA_FLAG_SECURE_DATA_PATH |
			    TA_FLAG_CONCURRENT,
		   .create_entry_point = create_ta,
		   .destroy_entry_point = destroy_ta,
		   .open_session_entry_point = open_session,
		   .close_session_entry_point = close_session,
		   .invoke_command_entry_point = invoke_command);
