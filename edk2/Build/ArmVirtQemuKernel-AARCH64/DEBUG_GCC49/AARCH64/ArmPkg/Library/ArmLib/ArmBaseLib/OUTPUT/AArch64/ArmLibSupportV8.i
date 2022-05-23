# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/ArmPkg/Library/ArmLib/AArch64/ArmLibSupportV8.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/toolchains/aarch64/aarch64-linux-gnu/libc/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/Build/ArmVirtQemuKernel-AARCH64/DEBUG_GCC49/AARCH64/ArmPkg/Library/ArmLib/ArmBaseLib/DEBUG/AutoGen.h" 1
# 16 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/Build/ArmVirtQemuKernel-AARCH64/DEBUG_GCC49/AARCH64/ArmPkg/Library/ArmLib/ArmBaseLib/DEBUG/AutoGen.h"
# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Include/Base.h" 1
# 28 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Include/Base.h"
# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Include/AArch64/ProcessorBind.h" 1
# 100 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Include/AArch64/ProcessorBind.h"
  typedef unsigned long long UINT64;
  typedef long long INT64;
  typedef unsigned int UINT32;
  typedef int INT32;
  typedef unsigned short UINT16;
  typedef unsigned short CHAR16;
  typedef short INT16;
  typedef unsigned char BOOLEAN;
  typedef unsigned char UINT8;
  typedef char CHAR8;
  typedef signed char INT8;







typedef UINT64 UINTN;





typedef INT64 INTN;
# 29 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Include/Base.h" 2
# 54 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Include/Base.h"
extern UINT8 _VerifySizeofBOOLEAN[(sizeof(BOOLEAN) == (1)) / (sizeof(BOOLEAN) == (1))];
extern UINT8 _VerifySizeofINT8[(sizeof(INT8) == (1)) / (sizeof(INT8) == (1))];
extern UINT8 _VerifySizeofUINT8[(sizeof(UINT8) == (1)) / (sizeof(UINT8) == (1))];
extern UINT8 _VerifySizeofINT16[(sizeof(INT16) == (2)) / (sizeof(INT16) == (2))];
extern UINT8 _VerifySizeofUINT16[(sizeof(UINT16) == (2)) / (sizeof(UINT16) == (2))];
extern UINT8 _VerifySizeofINT32[(sizeof(INT32) == (4)) / (sizeof(INT32) == (4))];
extern UINT8 _VerifySizeofUINT32[(sizeof(UINT32) == (4)) / (sizeof(UINT32) == (4))];
extern UINT8 _VerifySizeofINT64[(sizeof(INT64) == (8)) / (sizeof(INT64) == (8))];
extern UINT8 _VerifySizeofUINT64[(sizeof(UINT64) == (8)) / (sizeof(UINT64) == (8))];
extern UINT8 _VerifySizeofCHAR8[(sizeof(CHAR8) == (1)) / (sizeof(CHAR8) == (1))];
extern UINT8 _VerifySizeofCHAR16[(sizeof(CHAR16) == (2)) / (sizeof(CHAR16) == (2))];
# 73 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Include/Base.h"
typedef enum {
  __VerifyUint8EnumValue = 0xff
} __VERIFY_UINT8_ENUM_SIZE;

typedef enum {
  __VerifyUint16EnumValue = 0xffff
} __VERIFY_UINT16_ENUM_SIZE;

typedef enum {
  __VerifyUint32EnumValue = 0xffffffff
} __VERIFY_UINT32_ENUM_SIZE;

extern UINT8 _VerifySizeof__VERIFY_UINT8_ENUM_SIZE[(sizeof(__VERIFY_UINT8_ENUM_SIZE) == (4)) / (sizeof(__VERIFY_UINT8_ENUM_SIZE) == (4))];
extern UINT8 _VerifySizeof__VERIFY_UINT16_ENUM_SIZE[(sizeof(__VERIFY_UINT16_ENUM_SIZE) == (4)) / (sizeof(__VERIFY_UINT16_ENUM_SIZE) == (4))];
extern UINT8 _VerifySizeof__VERIFY_UINT32_ENUM_SIZE[(sizeof(__VERIFY_UINT32_ENUM_SIZE) == (4)) / (sizeof(__VERIFY_UINT32_ENUM_SIZE) == (4))];
# 281 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Include/Base.h"
typedef struct {
  UINT32 Data1;
  UINT16 Data2;
  UINT16 Data3;
  UINT8 Data4[8];
} GUID;




typedef struct {
  UINT8 Addr[4];
} IPv4_ADDRESS;




typedef struct {
  UINT8 Addr[16];
} IPv6_ADDRESS;




typedef UINT64 PHYSICAL_ADDRESS;




typedef struct _LIST_ENTRY LIST_ENTRY;




struct _LIST_ENTRY {
  LIST_ENTRY *ForwardLink;
  LIST_ENTRY *BackLink;
};
# 716 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Include/Base.h"
typedef __builtin_va_list VA_LIST;
# 801 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Include/Base.h"
typedef UINTN *BASE_LIST;
# 965 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Include/Base.h"
typedef UINTN RETURN_STATUS;
# 1281 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Include/Base.h"
  void * __builtin_return_address (unsigned int level);
# 17 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/Build/ArmVirtQemuKernel-AARCH64/DEBUG_GCC49/AARCH64/ArmPkg/Library/ArmLib/ArmBaseLib/DEBUG/AutoGen.h" 2

extern GUID gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern GUID gEfiCpuArchProtocolGuid;


extern UINT64 _gPcd_SkuId_Array[];
# 32 "<command-line>" 2
# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/ArmPkg/Library/ArmLib/AArch64/ArmLibSupportV8.S"
#------------------------------------------------------------------------------

# Copyright (c) 2008 - 2009, Apple Inc. All rights reserved.<BR>
# Copyright (c) 2011 - 2014, ARM Limited. All rights reserved.
# Copyright (c) 2016, Linaro Limited. All rights reserved.

# This program and the accompanying materials
# are licensed and made available under the terms and conditions of the BSD License
# which accompanies this distribution. The full text of the license may be found at
# http:

# THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
# WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

#------------------------------------------------------------------------------

# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/ArmPkg/Include/AsmMacroIoLibV8.h" 1
# 18 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/ArmPkg/Library/ArmLib/AArch64/ArmLibSupportV8.S" 2

.set MPIDR_U_BIT, (30)
.set MPIDR_U_MASK, (1 << MPIDR_U_BIT)


.set DAIF_WR_FIQ_BIT, (1 << 0)
.set DAIF_WR_IRQ_BIT, (1 << 1)
.set DAIF_WR_ABORT_BIT, (1 << 2)
.set DAIF_WR_DEBUG_BIT, (1 << 3)
.set DAIF_WR_INT_BITS, (DAIF_WR_FIQ_BIT | DAIF_WR_IRQ_BIT)
.set DAIF_WR_ALL, (DAIF_WR_DEBUG_BIT | DAIF_WR_ABORT_BIT | DAIF_WR_INT_BITS)


.global ArmIsMpCore ; .section ".text.ArmIsMpCore", "ax" ; .type ArmIsMpCore, %function ; ArmIsMpCore:
  mrs x0, mpidr_el1
  and x0, x0, #MPIDR_U_MASK
  lsr x0, x0, #MPIDR_U_BIT
  eor x0, x0, #1
  ret


.global ArmEnableAsynchronousAbort ; .section ".text.ArmEnableAsynchronousAbort", "ax" ; .type ArmEnableAsynchronousAbort, %function ; ArmEnableAsynchronousAbort:
  msr daifclr, #DAIF_WR_ABORT_BIT
  isb
  ret


.global ArmDisableAsynchronousAbort ; .section ".text.ArmDisableAsynchronousAbort", "ax" ; .type ArmDisableAsynchronousAbort, %function ; ArmDisableAsynchronousAbort:
  msr daifset, #DAIF_WR_ABORT_BIT
  isb
  ret


.global ArmEnableIrq ; .section ".text.ArmEnableIrq", "ax" ; .type ArmEnableIrq, %function ; ArmEnableIrq:
  msr daifclr, #DAIF_WR_IRQ_BIT
  isb
  ret


.global ArmDisableIrq ; .section ".text.ArmDisableIrq", "ax" ; .type ArmDisableIrq, %function ; ArmDisableIrq:
  msr daifset, #DAIF_WR_IRQ_BIT
  isb
  ret


.global ArmEnableFiq ; .section ".text.ArmEnableFiq", "ax" ; .type ArmEnableFiq, %function ; ArmEnableFiq:
  msr daifclr, #DAIF_WR_FIQ_BIT
  isb
  ret


.global ArmDisableFiq ; .section ".text.ArmDisableFiq", "ax" ; .type ArmDisableFiq, %function ; ArmDisableFiq:
  msr daifset, #DAIF_WR_FIQ_BIT
  isb
  ret


.global ArmEnableInterrupts ; .section ".text.ArmEnableInterrupts", "ax" ; .type ArmEnableInterrupts, %function ; ArmEnableInterrupts:
  msr daifclr, #DAIF_WR_INT_BITS
  isb
  ret


.global ArmDisableInterrupts ; .section ".text.ArmDisableInterrupts", "ax" ; .type ArmDisableInterrupts, %function ; ArmDisableInterrupts:
  msr daifset, #DAIF_WR_INT_BITS
  isb
  ret


.global ArmDisableAllExceptions ; .section ".text.ArmDisableAllExceptions", "ax" ; .type ArmDisableAllExceptions, %function ; ArmDisableAllExceptions:
  msr daifset, #DAIF_WR_ALL
  isb
  ret






.global ReadCCSIDR ; .section ".text.ReadCCSIDR", "ax" ; .type ReadCCSIDR, %function ; ReadCCSIDR:
  msr csselr_el1, x0
  isb
  mrs x0, ccsidr_el1
  ret






.global ReadCLIDR ; .section ".text.ReadCLIDR", "ax" ; .type ReadCLIDR, %function ; ReadCLIDR:
  mrs x0, clidr_el1
  ret


