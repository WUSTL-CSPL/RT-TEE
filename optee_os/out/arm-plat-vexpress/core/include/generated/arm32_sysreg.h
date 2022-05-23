/* Automatically generated, do not edit */
#ifndef __ARM32_SYSREG_H
#define __ARM32_SYSREG_H
/* Based on register description in */
/* ARM Architecture Reference Manual */
/* ARMv7-A and ARMv7-R edition */
/* Issue C.c */

/* B3.18.1 Identification registers, functional group */

/* IMPLEMENTATION DEFINED Auxiliary ID Register */
static inline uint32_t read_aidr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 1, %0, c0, c0, 7" : "=r"  (v));

	return v;
}

/* Cache Size ID Registers */
static inline uint32_t read_ccsidr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 1, %0, c0, c0, 0" : "=r"  (v));

	return v;
}

/* Cache Level ID Register */
static inline uint32_t read_clidr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 1, %0, c0, c0, 1" : "=r"  (v));

	return v;
}

/* Cache Size Selection Register */
static inline uint32_t read_csselr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 2, %0, c0, c0, 0" : "=r"  (v));

	return v;
}

/* Cache Size Selection Register */
static inline void write_csselr(uint32_t v)
{
	asm volatile ("mcr p15, 2, %0, c0, c0, 0" : : "r"  (v));
}

/* Cache Type Register */
static inline uint32_t read_ctr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c0, 1" : "=r"  (v));

	return v;
}

/* Auxiliary Feature Register 0 */
static inline uint32_t read_id_afr0(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c1, 3" : "=r"  (v));

	return v;
}

/* Debug Feature Register 0 */
static inline uint32_t read_id_dfr0(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c1, 2" : "=r"  (v));

	return v;
}

/* Instruction Set Attribute Register 0 */
static inline uint32_t read_id_isar0(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c2, 0" : "=r"  (v));

	return v;
}

/* Instruction Set Attribute Register 1 */
static inline uint32_t read_id_isar1(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c2, 1" : "=r"  (v));

	return v;
}

/* Instruction Set Attribute Register 2 */
static inline uint32_t read_id_isar2(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c2, 2" : "=r"  (v));

	return v;
}

/* Instruction Set Attribute Register 3 */
static inline uint32_t read_id_isar3(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c2, 3" : "=r"  (v));

	return v;
}

/* Instruction Set Attribute Register 4 */
static inline uint32_t read_id_isar4(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c2, 4" : "=r"  (v));

	return v;
}

/* Instruction Set Attribute Register 5 */
static inline uint32_t read_id_isar5(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c2, 5" : "=r"  (v));

	return v;
}

/* Memory Model Feature Register 0 */
static inline uint32_t read_id_mmfr0(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c1, 4" : "=r"  (v));

	return v;
}

/* Memory Model Feature Register 1 */
static inline uint32_t read_id_mmfr1(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c1, 5" : "=r"  (v));

	return v;
}

/* Memory Model Feature Register 2 */
static inline uint32_t read_id_mmfr2(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c1, 6" : "=r"  (v));

	return v;
}

/* Memory Model Feature Register 3 */
static inline uint32_t read_id_mmfr3(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c1, 7" : "=r"  (v));

	return v;
}

/* Processor Feature Register 0 */
static inline uint32_t read_id_pfr0(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c1, 0" : "=r"  (v));

	return v;
}

/* Processor Feature Register 1 */
static inline uint32_t read_id_pfr1(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c1, 1" : "=r"  (v));

	return v;
}

/* Main ID Register */
static inline uint32_t read_midr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c0, 0" : "=r"  (v));

	return v;
}

/* Multiprocessor Affinity Register */
static inline uint32_t read_mpidr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c0, 5" : "=r"  (v));

	return v;
}

/* Revision ID Register */
static inline uint32_t read_revidr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c0, 6" : "=r"  (v));

	return v;
}

/* TCM Type Register */
static inline uint32_t read_tcmtr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c0, 2" : "=r"  (v));

	return v;
}

/* TLB Type Register */
static inline uint32_t read_tlbtr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c0, c0, 3" : "=r"  (v));

	return v;
}
/* B3.18.2 Virtual memory control registers, functional group */

/* Auxiliary Memory Attribute Indirection Register 0 */
static inline uint32_t read_amair0(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c10, c3, 0" : "=r"  (v));

	return v;
}

/* Auxiliary Memory Attribute Indirection Register 0 */
static inline void write_amair0(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c10, c3, 0" : : "r"  (v));
}

/* Auxiliary Memory Attribute Indirection Register 1 */
static inline uint32_t read_amair1(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c10, c3, 1" : "=r"  (v));

	return v;
}

/* Auxiliary Memory Attribute Indirection Register 1 */
static inline void write_amair1(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c10, c3, 1" : : "r"  (v));
}

/* Context ID Register */
static inline uint32_t read_contextidr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c13, c0, 1" : "=r"  (v));

	return v;
}

/* Context ID Register */
static inline void write_contextidr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c13, c0, 1" : : "r"  (v));
}

/* Domain Access Control Register */
static inline uint32_t read_dacr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c3, c0, 0" : "=r"  (v));

	return v;
}

/* Domain Access Control Register */
static inline void write_dacr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c3, c0, 0" : : "r"  (v));
}

/* Memory Attribute Indirection Register 0 */
static inline uint32_t read_mair0(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c10, c2, 0" : "=r"  (v));

	return v;
}

/* Memory Attribute Indirection Register 0 */
static inline void write_mair0(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c10, c2, 0" : : "r"  (v));
}

/* Memory Attribute Indirection Register 1 */
static inline uint32_t read_mair1(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c10, c2, 1" : "=r"  (v));

	return v;
}

/* Memory Attribute Indirection Register 1 */
static inline void write_mair1(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c10, c2, 1" : : "r"  (v));
}

/* Normal Memory Remap Register */
static inline uint32_t read_nmrr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c10, c2, 1" : "=r"  (v));

	return v;
}

/* Normal Memory Remap Register */
static inline void write_nmrr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c10, c2, 1" : : "r"  (v));
}

/* Primary Region Remap Register */
static inline uint32_t read_prrr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c10, c2, 0" : "=r"  (v));

	return v;
}

/* Primary Region Remap Register */
static inline void write_prrr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c10, c2, 0" : : "r"  (v));
}

/* System Control Register */
static inline uint32_t read_sctlr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c1, c0, 0" : "=r"  (v));

	return v;
}

/* System Control Register */
static inline void write_sctlr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c1, c0, 0" : : "r"  (v));
}

/* Translation Table Base Control Register */
static inline uint32_t read_ttbcr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c2, c0, 2" : "=r"  (v));

	return v;
}

/* Translation Table Base Control Register */
static inline void write_ttbcr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c2, c0, 2" : : "r"  (v));
}

/* Translation Table Base Register 0 */
static inline uint32_t read_ttbr0(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c2, c0, 0" : "=r"  (v));

	return v;
}

/* Translation Table Base Register 0 */
static inline void write_ttbr0(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c2, c0, 0" : : "r"  (v));
}

/* Translation Table Base Register 0 */
static inline uint64_t read_ttbr0_64bit(void)
{
	uint64_t v;

	asm volatile ("mrrc p15, 0, %Q0, %R0, c2" : "=r"  (v));

	return v;
}

/* Translation Table Base Register 0 */
static inline void write_ttbr0_64bit(uint64_t v)
{
	asm volatile ("mcrr p15, 0, %Q0, %R0, c2" : : "r"  (v));
}

/* Translation Table Base Register 1 */
static inline uint32_t read_ttbr1(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c2, c0, 1" : "=r"  (v));

	return v;
}

/* Translation Table Base Register 1 */
static inline void write_ttbr1(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c2, c0, 1" : : "r"  (v));
}

/* Translation Table Base Register 1 */
static inline uint64_t read_ttbr1_64bit(void)
{
	uint64_t v;

	asm volatile ("mrrc p15, 1, %Q0, %R0, c2" : "=r"  (v));

	return v;
}

/* Translation Table Base Register 1 */
static inline void write_ttbr1_64bit(uint64_t v)
{
	asm volatile ("mcrr p15, 1, %Q0, %R0, c2" : : "r"  (v));
}
/* B3.18.3 PL1 Fault handling registers, functional group */

/* Auxiliary Data Fault Status Register */
static inline uint32_t read_adfsr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c5, c1, 0" : "=r"  (v));

	return v;
}

/* Auxiliary Data Fault Status Register */
static inline void write_adfsr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c5, c1, 0" : : "r"  (v));
}

/* Auxiliary Instruction Fault Status Register */
static inline uint32_t read_aifsr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c5, c1, 1" : "=r"  (v));

	return v;
}

/* Auxiliary Instruction Fault Status Register */
static inline void write_aifsr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c5, c1, 1" : : "r"  (v));
}

/* Data Fault Address Register */
static inline uint32_t read_dfar(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c6, c0, 0" : "=r"  (v));

	return v;
}

/* Data Fault Address Register */
static inline void write_dfar(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c6, c0, 0" : : "r"  (v));
}

/* Data Fault Status Register */
static inline uint32_t read_dfsr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c5, c0, 0" : "=r"  (v));

	return v;
}

/* Data Fault Status Register */
static inline void write_dfsr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c5, c0, 0" : : "r"  (v));
}

/* Instruction Fault Address Register */
static inline uint32_t read_ifar(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c6, c0, 2" : "=r"  (v));

	return v;
}

/* Instruction Fault Address Register */
static inline void write_ifar(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c6, c0, 2" : : "r"  (v));
}

/* Instruction Fault Status Register */
static inline uint32_t read_ifsr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c5, c0, 1" : "=r"  (v));

	return v;
}

/* Instruction Fault Status Register */
static inline void write_ifsr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c5, c0, 1" : : "r"  (v));
}
/* B3.18.4 Other system control registers, functional group */

/* IMPLEMENTATION DEFINED Auxiliary Control Register */
static inline uint32_t read_actlr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c1, c0, 1" : "=r"  (v));

	return v;
}

/* IMPLEMENTATION DEFINED Auxiliary Control Register */
static inline void write_actlr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c1, c0, 1" : : "r"  (v));
}

/* Coprocessor Access Control Register */
static inline uint32_t read_cpacr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c1, c0, 2" : "=r"  (v));

	return v;
}

/* Coprocessor Access Control Register */
static inline void write_cpacr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c1, c0, 2" : : "r"  (v));
}

/* FCSE Process ID Register */
static inline uint32_t read_fcseidr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c13, c0, 0" : "=r"  (v));

	return v;
}

/* FCSE Process ID Register */
static inline void write_fcseidr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c13, c0, 0" : : "r"  (v));
}
/* B3.18.6 Cache maintenance operations, functional group, VMSA */

/* Branch predictor invalidate all */
static inline void write_bpiall(void)
{
	/* Register ignored */
	asm volatile ("mcr p15, 0, r0, c7, c5, 6");
}

/* Branch predictor invalidate all IS */
static inline void write_bpiallis(void)
{
	/* Register ignored */
	asm volatile ("mcr p15, 0, r0, c7, c1, 6");
}

/* Branch predictor invalidate by MVA */
static inline void write_bpimva(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c5, 7" : : "r"  (v));
}

/* Data cache clean and invalidate by MVA PoC */
static inline void write_dccimvac(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c14, 1" : : "r"  (v));
}

/* Data cache clean and invalidate by set/way */
static inline void write_dccisw(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c14, 2" : : "r"  (v));
}

/* Data cache clean by MVA PoC */
static inline void write_dccmvac(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c10, 1" : : "r"  (v));
}

/* Data cache clean by MVA PoU */
static inline void write_dccmvau(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c11, 1" : : "r"  (v));
}

/* Data cache clean by set/way */
static inline void write_dccsw(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c10, 2" : : "r"  (v));
}

/* Data cache invalidate by MVA PoC */
static inline void write_dcimvac(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c6, 1" : : "r"  (v));
}

/* Data cache invalidate by set/way */
static inline void write_dcisw(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c6, 2" : : "r"  (v));
}

/* Instruction cache invalidate all PoU */
static inline void write_iciallu(void)
{
	/* Register ignored */
	asm volatile ("mcr p15, 0, r0, c7, c5, 0");
}

/* Instruction cache invalidate all PoU, IS */
static inline void write_icialluis(void)
{
	/* Register ignored */
	asm volatile ("mcr p15, 0, r0, c7, c1, 0");
}

/* Instruction cache invalidate by MVA PoU */
static inline void write_icimvau(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c5, 1" : : "r"  (v));
}
/* B3.18.7 TLB maintenance operations, functional group */

/* Invalidate entire unified TLB */
static inline void write_tlbiall(void)
{
	/* Register ignored */
	asm volatile ("mcr p15, 0, r0, c8, c7, 0");
}

/* Invalidate entire unified TLB IS */
static inline void write_tlbiallis(void)
{
	/* Register ignored */
	asm volatile ("mcr p15, 0, r0, c8, c3, 0");
}

/* Invalidate unified TLB by ASID */
static inline void write_tlbiasid(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c8, c7, 2" : : "r"  (v));
}

/* Invalidate unified TLB by ASID IS */
static inline void write_tlbiasidis(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c8, c3, 2" : : "r"  (v));
}

/* Invalidate unified TLB by MVA, all ASID */
static inline void write_tlbimvaa(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c8, c7, 3" : : "r"  (v));
}

/* Invalidate unified TLB by MVA, all ASID IS */
static inline void write_tlbimvaais(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c8, c3, 3" : : "r"  (v));
}

/* Invalidate unified TLB by MVA */
static inline void write_tlbimva(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c8, c7, 1" : : "r"  (v));
}

/* Invalidate unified TLB by MVA IS */
static inline void write_tlbimvais(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c8, c3, 1" : : "r"  (v));
}
/* B3.18.8 Address translation operations, functional group */

/* Stages 1 and 2 Non-secure only PL1 read */
static inline void write_ats12nsopr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c8, 4" : : "r"  (v));
}

/* Stages 1 and 2 Non-secure only PL1 write */
static inline void write_ats12nsopw(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c8, 5" : : "r"  (v));
}

/* Stages 1 and 2 Non-secure only unprivileged read */
static inline void write_ats12nsour(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c8, 6" : : "r"  (v));
}

/* Stages 1 and 2 Non-secure only unprivileged write */
static inline void write_ats12nsouw(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c8, 7" : : "r"  (v));
}

/* Stage 1 Current state PL1 read */
static inline void write_ats1cpr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c8, 0" : : "r"  (v));
}

/* Stage 1 Current state PL1 write */
static inline void write_ats1cpw(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c8, 1" : : "r"  (v));
}

/* Stage 1 Current state unprivileged read */
static inline void write_ats1cur(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c8, 2" : : "r"  (v));
}

/* Stage 1 Current state unprivileged write */
static inline void write_ats1cuw(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c8, 3" : : "r"  (v));
}

/* Stage 1 Hyp mode read */
static inline void write_ats1hr(uint32_t v)
{
	asm volatile ("mcr p15, 4, %0, c7, c8, 0" : : "r"  (v));
}

/* Stage 1 Hyp mode write */
static inline void write_ats1hw(uint32_t v)
{
	asm volatile ("mcr p15, 4, %0, c7, c8, 1" : : "r"  (v));
}

/* Physical Address Register */
static inline uint32_t read_par32(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c7, c4, 0" : "=r"  (v));

	return v;
}

/* Physical Address Register */
static inline void write_par32(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c7, c4, 0" : : "r"  (v));
}

/* Physical Address Register */
static inline uint64_t read_par64(void)
{
	uint64_t v;

	asm volatile ("mrrc p15, 0, %Q0, %R0, c7" : "=r"  (v));

	return v;
}

/* Physical Address Register */
static inline void write_par64(uint64_t v)
{
	asm volatile ("mcrr p15, 0, %Q0, %R0, c7" : : "r"  (v));
}
/* B3.18.9 Miscellaneous operations, functional group */

/* PL1 only Thread ID Register */
static inline uint32_t read_tpidrprw(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c13, c0, 4" : "=r"  (v));

	return v;
}

/* PL1 only Thread ID Register */
static inline void write_tpidrprw(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c13, c0, 4" : : "r"  (v));
}

/* PL0 User Read-Only Thread ID Register */
static inline uint32_t read_tpidruro(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c13, c0, 3" : "=r"  (v));

	return v;
}

/* PL0 User Read-Only Thread ID Register */
static inline void write_tpidruro(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c13, c0, 3" : : "r"  (v));
}

/* PL0 User Read/Write Thread ID Register */
static inline uint32_t read_tpidrurw(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c13, c0, 2" : "=r"  (v));

	return v;
}

/* PL0 User Read/Write Thread ID Register */
static inline void write_tpidrurw(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c13, c0, 2" : : "r"  (v));
}
/* B3.18.11 Security Extensions registers, functional group */

/* Interrupt Status Register */
static inline uint32_t read_isr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c12, c1, 0" : "=r"  (v));

	return v;
}

/* Monitor Vector Base Address Register */
static inline uint32_t read_mvbar(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c12, c0, 1" : "=r"  (v));

	return v;
}

/* Monitor Vector Base Address Register */
static inline void write_mvbar(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c12, c0, 1" : : "r"  (v));
}

/* Non-Secure Access Control Register */
static inline uint32_t read_nsacr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c1, c1, 2" : "=r"  (v));

	return v;
}

/* Non-Secure Access Control Register */
static inline void write_nsacr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c1, c1, 2" : : "r"  (v));
}

/* Secure Configuration Register */
static inline uint32_t read_scr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c1, c1, 0" : "=r"  (v));

	return v;
}

/* Secure Configuration Register */
static inline void write_scr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c1, c1, 0" : : "r"  (v));
}

/* Secure Debug Enable Register */
static inline uint32_t read_sder(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c1, c1, 1" : "=r"  (v));

	return v;
}

/* Secure Debug Enable Register */
static inline void write_sder(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c1, c1, 1" : : "r"  (v));
}

/* Vector Base Address Register */
static inline uint32_t read_vbar(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c12, c0, 0" : "=r"  (v));

	return v;
}

/* Vector Base Address Register */
static inline void write_vbar(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c12, c0, 0" : : "r"  (v));
}
/* B8.2 Generic Timer registers summary */

/* Counter Frequency register */
static inline uint32_t read_cntfrq(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c14, c0, 0" : "=r"  (v));

	return v;
}

/* Counter Frequency register */
static inline void write_cntfrq(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c14, c0, 0" : : "r"  (v));
}

/* Physical Count register */
static inline uint64_t read_cntpct(void)
{
	uint64_t v;

	asm volatile ("mrrc p15, 0, %Q0, %R0, c14" : "=r"  (v));

	return v;
}

/* Physical Count register */
static inline void write_cntpct(uint64_t v)
{
	asm volatile ("mcrr p15, 0, %Q0, %R0, c14" : : "r"  (v));
}

/* Timer PL1 Control register */
static inline uint32_t read_cntkctl(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c14, c1, 0" : "=r"  (v));

	return v;
}

/* Timer PL1 Control register */
static inline void write_cntkctl(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c14, c1, 0" : : "r"  (v));
}

/* PL1 Physical TimerValue register */
static inline uint32_t read_cntp_tval(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c14, c2, 0" : "=r"  (v));

	return v;
}

/* PL1 Physical TimerValue register */
static inline void write_cntp_tval(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c14, c2, 0" : : "r"  (v));
}

/* PL1 Physical Timer Control register */
static inline uint32_t read_cntp_ctl(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c14, c2, 1" : "=r"  (v));

	return v;
}

/* PL1 Physical Timer Control register */
static inline void write_cntp_ctl(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c14, c2, 1" : : "r"  (v));
}

/* Virtual TimerValue register */
static inline uint32_t read_cntv_tval(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c14, c3, 0" : "=r"  (v));

	return v;
}

/* Virtual TimerValue register */
static inline void write_cntv_tval(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c14, c3, 0" : : "r"  (v));
}

/* Virtual Timer Control register */
static inline uint32_t read_cntv_ctl(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c14, c3, 1" : "=r"  (v));

	return v;
}

/* Virtual Timer Control register */
static inline void write_cntv_ctl(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c14, c3, 1" : : "r"  (v));
}

/* Virtual Count register */
static inline uint64_t read_cntvct(void)
{
	uint64_t v;

	asm volatile ("mrrc p15, 1, %Q0, %R0, c14" : "=r"  (v));

	return v;
}

/* Virtual Count register */
static inline void write_cntvct(uint64_t v)
{
	asm volatile ("mcrr p15, 1, %Q0, %R0, c14" : : "r"  (v));
}

/* PL1 Physical Timer CompareValue register */
static inline uint64_t read_cntp_cval(void)
{
	uint64_t v;

	asm volatile ("mrrc p15, 2, %Q0, %R0, c14" : "=r"  (v));

	return v;
}

/* PL1 Physical Timer CompareValue register */
static inline void write_cntp_cval(uint64_t v)
{
	asm volatile ("mcrr p15, 2, %Q0, %R0, c14" : : "r"  (v));
}

/* Virtual Timer CompareValue register */
static inline uint64_t read_cntv_cval(void)
{
	uint64_t v;

	asm volatile ("mrrc p15, 3, %Q0, %R0, c14" : "=r"  (v));

	return v;
}

/* Virtual Timer CompareValue register */
static inline void write_cntv_cval(uint64_t v)
{
	asm volatile ("mcrr p15, 3, %Q0, %R0, c14" : : "r"  (v));
}

/* Virtual Offset register */
static inline uint64_t read_cntvoff(void)
{
	uint64_t v;

	asm volatile ("mrrc p15, 4, %Q0, %R0, c14" : "=r"  (v));

	return v;
}

/* Virtual Offset register */
static inline void write_cntvoff(uint64_t v)
{
	asm volatile ("mcrr p15, 4, %Q0, %R0, c14" : : "r"  (v));
}
/* Table C12-7 Performance Monitors register summary */

/* Performance Monitors Control Register */
static inline uint32_t read_pmcr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c12, 0" : "=r"  (v));

	return v;
}

/* Performance Monitors Control Register */
static inline void write_pmcr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c9, c12, 0" : : "r"  (v));
}

/* Performance Monitors Count Enable Set register */
static inline uint32_t read_pmcntenset(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c12, 1" : "=r"  (v));

	return v;
}

/* Performance Monitors Count Enable Set register */
static inline void write_pmcntenset(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c9, c12, 1" : : "r"  (v));
}

/* Performance Monitors Count Enable Clear register */
static inline uint32_t read_pmcntenclr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c12, 2" : "=r"  (v));

	return v;
}

/* Performance Monitors Count Enable Clear register */
static inline void write_pmcntenclr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c9, c12, 2" : : "r"  (v));
}

/* Performance Monitors Overflow Flag Status Register */
static inline uint32_t read_pmovsr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c12, 3" : "=r"  (v));

	return v;
}

/* Performance Monitors Overflow Flag Status Register */
static inline void write_pmovsr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c9, c12, 3" : : "r"  (v));
}

/* Performance Monitors Software Increment register */
static inline void write_pmswinc(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c9, c12, 4" : : "r"  (v));
}

/* Performance Monitors Event Counter Selection Register */
static inline uint32_t read_pmselr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c12, 5" : "=r"  (v));

	return v;
}

/* Performance Monitors Event Counter Selection Register */
static inline void write_pmselr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c9, c12, 5" : : "r"  (v));
}

/* Performance Monitors Common Event Identification reg 0 */
static inline uint32_t read_pmceid0(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c12, 6" : "=r"  (v));

	return v;
}

/* Performance Monitors Common Event Identification reg 1 */
static inline uint32_t read_pmceid1(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c12, 7" : "=r"  (v));

	return v;
}

/* Performance Monitors Cycle Count Register */
static inline uint32_t read_pmccntr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c13, 0" : "=r"  (v));

	return v;
}

/* Performance Monitors Cycle Count Register */
static inline void write_pmccntr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c9, c13, 0" : : "r"  (v));
}

/* Performance Monitors Event Type Select Register */
static inline uint32_t read_pmxevtyper(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c13, 1" : "=r"  (v));

	return v;
}

/* Performance Monitors Event Type Select Register */
static inline void write_pmxevtyper(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c9, c13, 1" : : "r"  (v));
}

/* Performance Monitors Event Count Register */
static inline uint32_t read_pmxevcntr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c13, 2" : "=r"  (v));

	return v;
}

/* Performance Monitors Event Count Register */
static inline void write_pmxevcntr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c9, c13, 2" : : "r"  (v));
}

/* Performance Monitors User Enable Register */
static inline uint32_t read_pmuserenr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c14, 0" : "=r"  (v));

	return v;
}

/* Performance Monitors User Enable Register */
static inline void write_pmuserenr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c9, c14, 0" : : "r"  (v));
}

/* Performance Monitors Interrupt Enable Set register */
static inline uint32_t read_pmintenset(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c14, 1" : "=r"  (v));

	return v;
}

/* Performance Monitors Interrupt Enable Set register */
static inline void write_pmintenset(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c9, c14, 1" : : "r"  (v));
}

/* Performance Monitors Interrupt Enable Clear register */
static inline uint32_t read_pmintenclr(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c14, 2" : "=r"  (v));

	return v;
}

/* Performance Monitors Interrupt Enable Clear register */
static inline void write_pmintenclr(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c9, c14, 2" : : "r"  (v));
}

/* Performance Monitors Overflow Flag Status Set register */
static inline uint32_t read_pmovsset(void)
{
	uint32_t v;

	asm volatile ("mrc p15, 0, %0, c9, c14, 3" : "=r"  (v));

	return v;
}

/* Performance Monitors Overflow Flag Status Set register */
static inline void write_pmovsset(uint32_t v)
{
	asm volatile ("mcr p15, 0, %0, c9, c14, 3" : : "r"  (v));
}
#endif /*__ARM32_SYSREG_H*/
