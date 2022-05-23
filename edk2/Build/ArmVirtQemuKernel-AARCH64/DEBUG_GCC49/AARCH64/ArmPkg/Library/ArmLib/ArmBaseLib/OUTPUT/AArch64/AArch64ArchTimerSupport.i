# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/ArmPkg/Library/ArmLib/AArch64/AArch64ArchTimerSupport.S"
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
# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/ArmPkg/Library/ArmLib/AArch64/AArch64ArchTimerSupport.S"
#------------------------------------------------------------------------------

# Copyright (c) 2011 - 2013, ARM Limited. All rights reserved.
# Copyright (c) 2016, Linaro Limited. All rights reserved.

# This program and the accompanying materials
# are licensed and made available under the terms and conditions of the BSD License
# which accompanies this distribution. The full text of the license may be found at
# http:

# THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
# WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

#------------------------------------------------------------------------------

# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/ArmPkg/Include/AsmMacroIoLibV8.h" 1
# 17 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/ArmPkg/Library/ArmLib/AArch64/AArch64ArchTimerSupport.S" 2

.global ArmReadCntFrq ; .section ".text.ArmReadCntFrq", "ax" ; .type ArmReadCntFrq, %function ; ArmReadCntFrq:
  mrs x0, cntfrq_el0
  ret


# NOTE - Can only write while at highest implemented EL level (EL3 on model). Else ReadOnly (EL2, EL1, EL0)
.global ArmWriteCntFrq ; .section ".text.ArmWriteCntFrq", "ax" ; .type ArmWriteCntFrq, %function ; ArmWriteCntFrq:
  msr cntfrq_el0, x0
  ret


.global ArmReadCntPct ; .section ".text.ArmReadCntPct", "ax" ; .type ArmReadCntPct, %function ; ArmReadCntPct:
  mrs x0, cntpct_el0
  ret


.global ArmReadCntkCtl ; .section ".text.ArmReadCntkCtl", "ax" ; .type ArmReadCntkCtl, %function ; ArmReadCntkCtl:
  mrs x0, cntkctl_el1
  ret


.global ArmWriteCntkCtl ; .section ".text.ArmWriteCntkCtl", "ax" ; .type ArmWriteCntkCtl, %function ; ArmWriteCntkCtl:
  msr cntkctl_el1, x0
  ret


.global ArmReadCntpTval ; .section ".text.ArmReadCntpTval", "ax" ; .type ArmReadCntpTval, %function ; ArmReadCntpTval:
  mrs x0, cntp_tval_el0
  ret


.global ArmWriteCntpTval ; .section ".text.ArmWriteCntpTval", "ax" ; .type ArmWriteCntpTval, %function ; ArmWriteCntpTval:
  msr cntp_tval_el0, x0
  ret


.global ArmReadCntpCtl ; .section ".text.ArmReadCntpCtl", "ax" ; .type ArmReadCntpCtl, %function ; ArmReadCntpCtl:
  mrs x0, cntp_ctl_el0
  ret


.global ArmWriteCntpCtl ; .section ".text.ArmWriteCntpCtl", "ax" ; .type ArmWriteCntpCtl, %function ; ArmWriteCntpCtl:
  msr cntp_ctl_el0, x0
  ret


.global ArmReadCntvTval ; .section ".text.ArmReadCntvTval", "ax" ; .type ArmReadCntvTval, %function ; ArmReadCntvTval:
  mrs x0, cntv_tval_el0
  ret


.global ArmWriteCntvTval ; .section ".text.ArmWriteCntvTval", "ax" ; .type ArmWriteCntvTval, %function ; ArmWriteCntvTval:
  msr cntv_tval_el0, x0
  ret


.global ArmReadCntvCtl ; .section ".text.ArmReadCntvCtl", "ax" ; .type ArmReadCntvCtl, %function ; ArmReadCntvCtl:
  mrs x0, cntv_ctl_el0
  ret


.global ArmWriteCntvCtl ; .section ".text.ArmWriteCntvCtl", "ax" ; .type ArmWriteCntvCtl, %function ; ArmWriteCntvCtl:
  msr cntv_ctl_el0, x0
  ret


.global ArmReadCntvCt ; .section ".text.ArmReadCntvCt", "ax" ; .type ArmReadCntvCt, %function ; ArmReadCntvCt:
  mrs x0, cntvct_el0
  ret


.global ArmReadCntpCval ; .section ".text.ArmReadCntpCval", "ax" ; .type ArmReadCntpCval, %function ; ArmReadCntpCval:
  mrs x0, cntp_cval_el0
  ret


.global ArmWriteCntpCval ; .section ".text.ArmWriteCntpCval", "ax" ; .type ArmWriteCntpCval, %function ; ArmWriteCntpCval:
  msr cntp_cval_el0, x0
  ret


.global ArmReadCntvCval ; .section ".text.ArmReadCntvCval", "ax" ; .type ArmReadCntvCval, %function ; ArmReadCntvCval:
  mrs x0, cntv_cval_el0
  ret


.global ArmWriteCntvCval ; .section ".text.ArmWriteCntvCval", "ax" ; .type ArmWriteCntvCval, %function ; ArmWriteCntvCval:
  msr cntv_cval_el0, x0
  ret


.global ArmReadCntvOff ; .section ".text.ArmReadCntvOff", "ax" ; .type ArmReadCntvOff, %function ; ArmReadCntvOff:
  mrs x0, cntvoff_el2
  ret


.global ArmWriteCntvOff ; .section ".text.ArmWriteCntvOff", "ax" ; .type ArmWriteCntvOff, %function ; ArmWriteCntvOff:
  msr cntvoff_el2, x0
  ret



