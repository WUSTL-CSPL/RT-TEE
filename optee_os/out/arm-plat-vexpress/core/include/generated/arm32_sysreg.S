# Automatically generated, do not edit
# Based on register description in
# ARM Architecture Reference Manual
# ARMv7-A and ARMv7-R edition
# Issue C.c

# B3.18.1 Identification registers, functional group

	# IMPLEMENTATION DEFINED Auxiliary ID Register
	.macro read_aidr reg
	mrc p15, 1, \reg, c0, c0, 7
	.endm

	# Cache Size ID Registers
	.macro read_ccsidr reg
	mrc p15, 1, \reg, c0, c0, 0
	.endm

	# Cache Level ID Register
	.macro read_clidr reg
	mrc p15, 1, \reg, c0, c0, 1
	.endm

	# Cache Size Selection Register
	.macro read_csselr reg
	mrc p15, 2, \reg, c0, c0, 0
	.endm

	# Cache Size Selection Register
	.macro write_csselr reg
	mcr p15, 2, \reg, c0, c0, 0
	.endm

	# Cache Type Register
	.macro read_ctr reg
	mrc p15, 0, \reg, c0, c0, 1
	.endm

	# Auxiliary Feature Register 0
	.macro read_id_afr0 reg
	mrc p15, 0, \reg, c0, c1, 3
	.endm

	# Debug Feature Register 0
	.macro read_id_dfr0 reg
	mrc p15, 0, \reg, c0, c1, 2
	.endm

	# Instruction Set Attribute Register 0
	.macro read_id_isar0 reg
	mrc p15, 0, \reg, c0, c2, 0
	.endm

	# Instruction Set Attribute Register 1
	.macro read_id_isar1 reg
	mrc p15, 0, \reg, c0, c2, 1
	.endm

	# Instruction Set Attribute Register 2
	.macro read_id_isar2 reg
	mrc p15, 0, \reg, c0, c2, 2
	.endm

	# Instruction Set Attribute Register 3
	.macro read_id_isar3 reg
	mrc p15, 0, \reg, c0, c2, 3
	.endm

	# Instruction Set Attribute Register 4
	.macro read_id_isar4 reg
	mrc p15, 0, \reg, c0, c2, 4
	.endm

	# Instruction Set Attribute Register 5
	.macro read_id_isar5 reg
	mrc p15, 0, \reg, c0, c2, 5
	.endm

	# Memory Model Feature Register 0
	.macro read_id_mmfr0 reg
	mrc p15, 0, \reg, c0, c1, 4
	.endm

	# Memory Model Feature Register 1
	.macro read_id_mmfr1 reg
	mrc p15, 0, \reg, c0, c1, 5
	.endm

	# Memory Model Feature Register 2
	.macro read_id_mmfr2 reg
	mrc p15, 0, \reg, c0, c1, 6
	.endm

	# Memory Model Feature Register 3
	.macro read_id_mmfr3 reg
	mrc p15, 0, \reg, c0, c1, 7
	.endm

	# Processor Feature Register 0
	.macro read_id_pfr0 reg
	mrc p15, 0, \reg, c0, c1, 0
	.endm

	# Processor Feature Register 1
	.macro read_id_pfr1 reg
	mrc p15, 0, \reg, c0, c1, 1
	.endm

	# Main ID Register
	.macro read_midr reg
	mrc p15, 0, \reg, c0, c0, 0
	.endm

	# Multiprocessor Affinity Register
	.macro read_mpidr reg
	mrc p15, 0, \reg, c0, c0, 5
	.endm

	# Revision ID Register
	.macro read_revidr reg
	mrc p15, 0, \reg, c0, c0, 6
	.endm

	# TCM Type Register
	.macro read_tcmtr reg
	mrc p15, 0, \reg, c0, c0, 2
	.endm

	# TLB Type Register
	.macro read_tlbtr reg
	mrc p15, 0, \reg, c0, c0, 3
	.endm
# B3.18.2 Virtual memory control registers, functional group

	# Auxiliary Memory Attribute Indirection Register 0
	.macro read_amair0 reg
	mrc p15, 0, \reg, c10, c3, 0
	.endm

	# Auxiliary Memory Attribute Indirection Register 0
	.macro write_amair0 reg
	mcr p15, 0, \reg, c10, c3, 0
	.endm

	# Auxiliary Memory Attribute Indirection Register 1
	.macro read_amair1 reg
	mrc p15, 0, \reg, c10, c3, 1
	.endm

	# Auxiliary Memory Attribute Indirection Register 1
	.macro write_amair1 reg
	mcr p15, 0, \reg, c10, c3, 1
	.endm

	# Context ID Register
	.macro read_contextidr reg
	mrc p15, 0, \reg, c13, c0, 1
	.endm

	# Context ID Register
	.macro write_contextidr reg
	mcr p15, 0, \reg, c13, c0, 1
	.endm

	# Domain Access Control Register
	.macro read_dacr reg
	mrc p15, 0, \reg, c3, c0, 0
	.endm

	# Domain Access Control Register
	.macro write_dacr reg
	mcr p15, 0, \reg, c3, c0, 0
	.endm

	# Memory Attribute Indirection Register 0
	.macro read_mair0 reg
	mrc p15, 0, \reg, c10, c2, 0
	.endm

	# Memory Attribute Indirection Register 0
	.macro write_mair0 reg
	mcr p15, 0, \reg, c10, c2, 0
	.endm

	# Memory Attribute Indirection Register 1
	.macro read_mair1 reg
	mrc p15, 0, \reg, c10, c2, 1
	.endm

	# Memory Attribute Indirection Register 1
	.macro write_mair1 reg
	mcr p15, 0, \reg, c10, c2, 1
	.endm

	# Normal Memory Remap Register
	.macro read_nmrr reg
	mrc p15, 0, \reg, c10, c2, 1
	.endm

	# Normal Memory Remap Register
	.macro write_nmrr reg
	mcr p15, 0, \reg, c10, c2, 1
	.endm

	# Primary Region Remap Register
	.macro read_prrr reg
	mrc p15, 0, \reg, c10, c2, 0
	.endm

	# Primary Region Remap Register
	.macro write_prrr reg
	mcr p15, 0, \reg, c10, c2, 0
	.endm

	# System Control Register
	.macro read_sctlr reg
	mrc p15, 0, \reg, c1, c0, 0
	.endm

	# System Control Register
	.macro write_sctlr reg
	mcr p15, 0, \reg, c1, c0, 0
	.endm

	# Translation Table Base Control Register
	.macro read_ttbcr reg
	mrc p15, 0, \reg, c2, c0, 2
	.endm

	# Translation Table Base Control Register
	.macro write_ttbcr reg
	mcr p15, 0, \reg, c2, c0, 2
	.endm

	# Translation Table Base Register 0
	.macro read_ttbr0 reg
	mrc p15, 0, \reg, c2, c0, 0
	.endm

	# Translation Table Base Register 0
	.macro write_ttbr0 reg
	mcr p15, 0, \reg, c2, c0, 0
	.endm

	# Translation Table Base Register 0
	.macro read_ttbr0_64bit reg0, reg1
	mrrc	p15, 0, \reg0, \reg1, c2
	.endm

	# Translation Table Base Register 0
	.macro write_ttbr0_64bit reg0, reg1
	mcrr	p15, 0, \reg0, \reg1, c2
	.endm

	# Translation Table Base Register 1
	.macro read_ttbr1 reg
	mrc p15, 0, \reg, c2, c0, 1
	.endm

	# Translation Table Base Register 1
	.macro write_ttbr1 reg
	mcr p15, 0, \reg, c2, c0, 1
	.endm

	# Translation Table Base Register 1
	.macro read_ttbr1_64bit reg0, reg1
	mrrc	p15, 1, \reg0, \reg1, c2
	.endm

	# Translation Table Base Register 1
	.macro write_ttbr1_64bit reg0, reg1
	mcrr	p15, 1, \reg0, \reg1, c2
	.endm
# B3.18.3 PL1 Fault handling registers, functional group

	# Auxiliary Data Fault Status Register
	.macro read_adfsr reg
	mrc p15, 0, \reg, c5, c1, 0
	.endm

	# Auxiliary Data Fault Status Register
	.macro write_adfsr reg
	mcr p15, 0, \reg, c5, c1, 0
	.endm

	# Auxiliary Instruction Fault Status Register
	.macro read_aifsr reg
	mrc p15, 0, \reg, c5, c1, 1
	.endm

	# Auxiliary Instruction Fault Status Register
	.macro write_aifsr reg
	mcr p15, 0, \reg, c5, c1, 1
	.endm

	# Data Fault Address Register
	.macro read_dfar reg
	mrc p15, 0, \reg, c6, c0, 0
	.endm

	# Data Fault Address Register
	.macro write_dfar reg
	mcr p15, 0, \reg, c6, c0, 0
	.endm

	# Data Fault Status Register
	.macro read_dfsr reg
	mrc p15, 0, \reg, c5, c0, 0
	.endm

	# Data Fault Status Register
	.macro write_dfsr reg
	mcr p15, 0, \reg, c5, c0, 0
	.endm

	# Instruction Fault Address Register
	.macro read_ifar reg
	mrc p15, 0, \reg, c6, c0, 2
	.endm

	# Instruction Fault Address Register
	.macro write_ifar reg
	mcr p15, 0, \reg, c6, c0, 2
	.endm

	# Instruction Fault Status Register
	.macro read_ifsr reg
	mrc p15, 0, \reg, c5, c0, 1
	.endm

	# Instruction Fault Status Register
	.macro write_ifsr reg
	mcr p15, 0, \reg, c5, c0, 1
	.endm
# B3.18.4 Other system control registers, functional group

	# IMPLEMENTATION DEFINED Auxiliary Control Register
	.macro read_actlr reg
	mrc p15, 0, \reg, c1, c0, 1
	.endm

	# IMPLEMENTATION DEFINED Auxiliary Control Register
	.macro write_actlr reg
	mcr p15, 0, \reg, c1, c0, 1
	.endm

	# Coprocessor Access Control Register
	.macro read_cpacr reg
	mrc p15, 0, \reg, c1, c0, 2
	.endm

	# Coprocessor Access Control Register
	.macro write_cpacr reg
	mcr p15, 0, \reg, c1, c0, 2
	.endm

	# FCSE Process ID Register
	.macro read_fcseidr reg
	mrc p15, 0, \reg, c13, c0, 0
	.endm

	# FCSE Process ID Register
	.macro write_fcseidr reg
	mcr p15, 0, \reg, c13, c0, 0
	.endm
# B3.18.6 Cache maintenance operations, functional group, VMSA

	# Branch predictor invalidate all
	.macro write_bpiall
	# Register ignored
	mcr p15, 0, r0, c7, c5, 6
	.endm

	# Branch predictor invalidate all IS
	.macro write_bpiallis
	# Register ignored
	mcr p15, 0, r0, c7, c1, 6
	.endm

	# Branch predictor invalidate by MVA
	.macro write_bpimva reg
	mcr p15, 0, \reg, c7, c5, 7
	.endm

	# Data cache clean and invalidate by MVA PoC
	.macro write_dccimvac reg
	mcr p15, 0, \reg, c7, c14, 1
	.endm

	# Data cache clean and invalidate by set/way
	.macro write_dccisw reg
	mcr p15, 0, \reg, c7, c14, 2
	.endm

	# Data cache clean by MVA PoC
	.macro write_dccmvac reg
	mcr p15, 0, \reg, c7, c10, 1
	.endm

	# Data cache clean by MVA PoU
	.macro write_dccmvau reg
	mcr p15, 0, \reg, c7, c11, 1
	.endm

	# Data cache clean by set/way
	.macro write_dccsw reg
	mcr p15, 0, \reg, c7, c10, 2
	.endm

	# Data cache invalidate by MVA PoC
	.macro write_dcimvac reg
	mcr p15, 0, \reg, c7, c6, 1
	.endm

	# Data cache invalidate by set/way
	.macro write_dcisw reg
	mcr p15, 0, \reg, c7, c6, 2
	.endm

	# Instruction cache invalidate all PoU
	.macro write_iciallu
	# Register ignored
	mcr p15, 0, r0, c7, c5, 0
	.endm

	# Instruction cache invalidate all PoU, IS
	.macro write_icialluis
	# Register ignored
	mcr p15, 0, r0, c7, c1, 0
	.endm

	# Instruction cache invalidate by MVA PoU
	.macro write_icimvau reg
	mcr p15, 0, \reg, c7, c5, 1
	.endm
# B3.18.7 TLB maintenance operations, functional group

	# Invalidate entire unified TLB
	.macro write_tlbiall
	# Register ignored
	mcr p15, 0, r0, c8, c7, 0
	.endm

	# Invalidate entire unified TLB IS
	.macro write_tlbiallis
	# Register ignored
	mcr p15, 0, r0, c8, c3, 0
	.endm

	# Invalidate unified TLB by ASID
	.macro write_tlbiasid reg
	mcr p15, 0, \reg, c8, c7, 2
	.endm

	# Invalidate unified TLB by ASID IS
	.macro write_tlbiasidis reg
	mcr p15, 0, \reg, c8, c3, 2
	.endm

	# Invalidate unified TLB by MVA, all ASID
	.macro write_tlbimvaa reg
	mcr p15, 0, \reg, c8, c7, 3
	.endm

	# Invalidate unified TLB by MVA, all ASID IS
	.macro write_tlbimvaais reg
	mcr p15, 0, \reg, c8, c3, 3
	.endm

	# Invalidate unified TLB by MVA
	.macro write_tlbimva reg
	mcr p15, 0, \reg, c8, c7, 1
	.endm

	# Invalidate unified TLB by MVA IS
	.macro write_tlbimvais reg
	mcr p15, 0, \reg, c8, c3, 1
	.endm
# B3.18.8 Address translation operations, functional group

	# Stages 1 and 2 Non-secure only PL1 read
	.macro write_ats12nsopr reg
	mcr p15, 0, \reg, c7, c8, 4
	.endm

	# Stages 1 and 2 Non-secure only PL1 write
	.macro write_ats12nsopw reg
	mcr p15, 0, \reg, c7, c8, 5
	.endm

	# Stages 1 and 2 Non-secure only unprivileged read
	.macro write_ats12nsour reg
	mcr p15, 0, \reg, c7, c8, 6
	.endm

	# Stages 1 and 2 Non-secure only unprivileged write
	.macro write_ats12nsouw reg
	mcr p15, 0, \reg, c7, c8, 7
	.endm

	# Stage 1 Current state PL1 read
	.macro write_ats1cpr reg
	mcr p15, 0, \reg, c7, c8, 0
	.endm

	# Stage 1 Current state PL1 write
	.macro write_ats1cpw reg
	mcr p15, 0, \reg, c7, c8, 1
	.endm

	# Stage 1 Current state unprivileged read
	.macro write_ats1cur reg
	mcr p15, 0, \reg, c7, c8, 2
	.endm

	# Stage 1 Current state unprivileged write
	.macro write_ats1cuw reg
	mcr p15, 0, \reg, c7, c8, 3
	.endm

	# Stage 1 Hyp mode read
	.macro write_ats1hr reg
	mcr p15, 4, \reg, c7, c8, 0
	.endm

	# Stage 1 Hyp mode write
	.macro write_ats1hw reg
	mcr p15, 4, \reg, c7, c8, 1
	.endm

	# Physical Address Register
	.macro read_par32 reg
	mrc p15, 0, \reg, c7, c4, 0
	.endm

	# Physical Address Register
	.macro write_par32 reg
	mcr p15, 0, \reg, c7, c4, 0
	.endm

	# Physical Address Register
	.macro read_par64 reg0, reg1
	mrrc	p15, 0, \reg0, \reg1, c7
	.endm

	# Physical Address Register
	.macro write_par64 reg0, reg1
	mcrr	p15, 0, \reg0, \reg1, c7
	.endm
# B3.18.9 Miscellaneous operations, functional group

	# PL1 only Thread ID Register
	.macro read_tpidrprw reg
	mrc p15, 0, \reg, c13, c0, 4
	.endm

	# PL1 only Thread ID Register
	.macro write_tpidrprw reg
	mcr p15, 0, \reg, c13, c0, 4
	.endm

	# PL0 User Read-Only Thread ID Register
	.macro read_tpidruro reg
	mrc p15, 0, \reg, c13, c0, 3
	.endm

	# PL0 User Read-Only Thread ID Register
	.macro write_tpidruro reg
	mcr p15, 0, \reg, c13, c0, 3
	.endm

	# PL0 User Read/Write Thread ID Register
	.macro read_tpidrurw reg
	mrc p15, 0, \reg, c13, c0, 2
	.endm

	# PL0 User Read/Write Thread ID Register
	.macro write_tpidrurw reg
	mcr p15, 0, \reg, c13, c0, 2
	.endm
# B3.18.11 Security Extensions registers, functional group

	# Interrupt Status Register
	.macro read_isr reg
	mrc p15, 0, \reg, c12, c1, 0
	.endm

	# Monitor Vector Base Address Register
	.macro read_mvbar reg
	mrc p15, 0, \reg, c12, c0, 1
	.endm

	# Monitor Vector Base Address Register
	.macro write_mvbar reg
	mcr p15, 0, \reg, c12, c0, 1
	.endm

	# Non-Secure Access Control Register
	.macro read_nsacr reg
	mrc p15, 0, \reg, c1, c1, 2
	.endm

	# Non-Secure Access Control Register
	.macro write_nsacr reg
	mcr p15, 0, \reg, c1, c1, 2
	.endm

	# Secure Configuration Register
	.macro read_scr reg
	mrc p15, 0, \reg, c1, c1, 0
	.endm

	# Secure Configuration Register
	.macro write_scr reg
	mcr p15, 0, \reg, c1, c1, 0
	.endm

	# Secure Debug Enable Register
	.macro read_sder reg
	mrc p15, 0, \reg, c1, c1, 1
	.endm

	# Secure Debug Enable Register
	.macro write_sder reg
	mcr p15, 0, \reg, c1, c1, 1
	.endm

	# Vector Base Address Register
	.macro read_vbar reg
	mrc p15, 0, \reg, c12, c0, 0
	.endm

	# Vector Base Address Register
	.macro write_vbar reg
	mcr p15, 0, \reg, c12, c0, 0
	.endm
# B8.2 Generic Timer registers summary

	# Counter Frequency register
	.macro read_cntfrq reg
	mrc p15, 0, \reg, c14, c0, 0
	.endm

	# Counter Frequency register
	.macro write_cntfrq reg
	mcr p15, 0, \reg, c14, c0, 0
	.endm

	# Physical Count register
	.macro read_cntpct reg0, reg1
	mrrc	p15, 0, \reg0, \reg1, c14
	.endm

	# Physical Count register
	.macro write_cntpct reg0, reg1
	mcrr	p15, 0, \reg0, \reg1, c14
	.endm

	# Timer PL1 Control register
	.macro read_cntkctl reg
	mrc p15, 0, \reg, c14, c1, 0
	.endm

	# Timer PL1 Control register
	.macro write_cntkctl reg
	mcr p15, 0, \reg, c14, c1, 0
	.endm

	# PL1 Physical TimerValue register
	.macro read_cntp_tval reg
	mrc p15, 0, \reg, c14, c2, 0
	.endm

	# PL1 Physical TimerValue register
	.macro write_cntp_tval reg
	mcr p15, 0, \reg, c14, c2, 0
	.endm

	# PL1 Physical Timer Control register
	.macro read_cntp_ctl reg
	mrc p15, 0, \reg, c14, c2, 1
	.endm

	# PL1 Physical Timer Control register
	.macro write_cntp_ctl reg
	mcr p15, 0, \reg, c14, c2, 1
	.endm

	# Virtual TimerValue register
	.macro read_cntv_tval reg
	mrc p15, 0, \reg, c14, c3, 0
	.endm

	# Virtual TimerValue register
	.macro write_cntv_tval reg
	mcr p15, 0, \reg, c14, c3, 0
	.endm

	# Virtual Timer Control register
	.macro read_cntv_ctl reg
	mrc p15, 0, \reg, c14, c3, 1
	.endm

	# Virtual Timer Control register
	.macro write_cntv_ctl reg
	mcr p15, 0, \reg, c14, c3, 1
	.endm

	# Virtual Count register
	.macro read_cntvct reg0, reg1
	mrrc	p15, 1, \reg0, \reg1, c14
	.endm

	# Virtual Count register
	.macro write_cntvct reg0, reg1
	mcrr	p15, 1, \reg0, \reg1, c14
	.endm

	# PL1 Physical Timer CompareValue register
	.macro read_cntp_cval reg0, reg1
	mrrc	p15, 2, \reg0, \reg1, c14
	.endm

	# PL1 Physical Timer CompareValue register
	.macro write_cntp_cval reg0, reg1
	mcrr	p15, 2, \reg0, \reg1, c14
	.endm

	# Virtual Timer CompareValue register
	.macro read_cntv_cval reg0, reg1
	mrrc	p15, 3, \reg0, \reg1, c14
	.endm

	# Virtual Timer CompareValue register
	.macro write_cntv_cval reg0, reg1
	mcrr	p15, 3, \reg0, \reg1, c14
	.endm

	# Virtual Offset register
	.macro read_cntvoff reg0, reg1
	mrrc	p15, 4, \reg0, \reg1, c14
	.endm

	# Virtual Offset register
	.macro write_cntvoff reg0, reg1
	mcrr	p15, 4, \reg0, \reg1, c14
	.endm
# Table C12-7 Performance Monitors register summary

	# Performance Monitors Control Register
	.macro read_pmcr reg
	mrc p15, 0, \reg, c9, c12, 0
	.endm

	# Performance Monitors Control Register
	.macro write_pmcr reg
	mcr p15, 0, \reg, c9, c12, 0
	.endm

	# Performance Monitors Count Enable Set register
	.macro read_pmcntenset reg
	mrc p15, 0, \reg, c9, c12, 1
	.endm

	# Performance Monitors Count Enable Set register
	.macro write_pmcntenset reg
	mcr p15, 0, \reg, c9, c12, 1
	.endm

	# Performance Monitors Count Enable Clear register
	.macro read_pmcntenclr reg
	mrc p15, 0, \reg, c9, c12, 2
	.endm

	# Performance Monitors Count Enable Clear register
	.macro write_pmcntenclr reg
	mcr p15, 0, \reg, c9, c12, 2
	.endm

	# Performance Monitors Overflow Flag Status Register
	.macro read_pmovsr reg
	mrc p15, 0, \reg, c9, c12, 3
	.endm

	# Performance Monitors Overflow Flag Status Register
	.macro write_pmovsr reg
	mcr p15, 0, \reg, c9, c12, 3
	.endm

	# Performance Monitors Software Increment register
	.macro write_pmswinc reg
	mcr p15, 0, \reg, c9, c12, 4
	.endm

	# Performance Monitors Event Counter Selection Register
	.macro read_pmselr reg
	mrc p15, 0, \reg, c9, c12, 5
	.endm

	# Performance Monitors Event Counter Selection Register
	.macro write_pmselr reg
	mcr p15, 0, \reg, c9, c12, 5
	.endm

	# Performance Monitors Common Event Identification reg 0
	.macro read_pmceid0 reg
	mrc p15, 0, \reg, c9, c12, 6
	.endm

	# Performance Monitors Common Event Identification reg 1
	.macro read_pmceid1 reg
	mrc p15, 0, \reg, c9, c12, 7
	.endm

	# Performance Monitors Cycle Count Register
	.macro read_pmccntr reg
	mrc p15, 0, \reg, c9, c13, 0
	.endm

	# Performance Monitors Cycle Count Register
	.macro write_pmccntr reg
	mcr p15, 0, \reg, c9, c13, 0
	.endm

	# Performance Monitors Event Type Select Register
	.macro read_pmxevtyper reg
	mrc p15, 0, \reg, c9, c13, 1
	.endm

	# Performance Monitors Event Type Select Register
	.macro write_pmxevtyper reg
	mcr p15, 0, \reg, c9, c13, 1
	.endm

	# Performance Monitors Event Count Register
	.macro read_pmxevcntr reg
	mrc p15, 0, \reg, c9, c13, 2
	.endm

	# Performance Monitors Event Count Register
	.macro write_pmxevcntr reg
	mcr p15, 0, \reg, c9, c13, 2
	.endm

	# Performance Monitors User Enable Register
	.macro read_pmuserenr reg
	mrc p15, 0, \reg, c9, c14, 0
	.endm

	# Performance Monitors User Enable Register
	.macro write_pmuserenr reg
	mcr p15, 0, \reg, c9, c14, 0
	.endm

	# Performance Monitors Interrupt Enable Set register
	.macro read_pmintenset reg
	mrc p15, 0, \reg, c9, c14, 1
	.endm

	# Performance Monitors Interrupt Enable Set register
	.macro write_pmintenset reg
	mcr p15, 0, \reg, c9, c14, 1
	.endm

	# Performance Monitors Interrupt Enable Clear register
	.macro read_pmintenclr reg
	mrc p15, 0, \reg, c9, c14, 2
	.endm

	# Performance Monitors Interrupt Enable Clear register
	.macro write_pmintenclr reg
	mcr p15, 0, \reg, c9, c14, 2
	.endm

	# Performance Monitors Overflow Flag Status Set register
	.macro read_pmovsset reg
	mrc p15, 0, \reg, c9, c14, 3
	.endm

	# Performance Monitors Overflow Flag Status Set register
	.macro write_pmovsset reg
	mcr p15, 0, \reg, c9, c14, 3
	.endm
