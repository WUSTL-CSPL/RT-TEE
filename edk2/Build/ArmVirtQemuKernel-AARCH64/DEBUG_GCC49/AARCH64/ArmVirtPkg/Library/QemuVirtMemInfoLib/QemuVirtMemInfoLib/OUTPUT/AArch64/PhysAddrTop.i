# 1 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/ArmVirtPkg/Library/QemuVirtMemInfoLib/AArch64/PhysAddrTop.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/home/osboxes/fix_rttee_text/RT-TEE/toolchains/aarch64/aarch64-linux-gnu/libc/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/Build/ArmVirtQemuKernel-AARCH64/DEBUG_GCC49/AARCH64/ArmVirtPkg/Library/QemuVirtMemInfoLib/QemuVirtMemInfoLib/DEBUG/AutoGen.h" 1
# 16 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/Build/ArmVirtQemuKernel-AARCH64/DEBUG_GCC49/AARCH64/ArmVirtPkg/Library/QemuVirtMemInfoLib/QemuVirtMemInfoLib/DEBUG/AutoGen.h"
# 1 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Base.h" 1
# 28 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Base.h"
# 1 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/AArch64/ProcessorBind.h" 1
# 100 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/AArch64/ProcessorBind.h"
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
# 29 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Base.h" 2
# 54 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Base.h"
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
# 73 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Base.h"
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
# 281 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Base.h"
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
# 716 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Base.h"
typedef __builtin_va_list VA_LIST;
# 801 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Base.h"
typedef UINTN *BASE_LIST;
# 965 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Base.h"
typedef UINTN RETURN_STATUS;
# 1281 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Base.h"
  void * __builtin_return_address (unsigned int level);
# 17 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/Build/ArmVirtQemuKernel-AARCH64/DEBUG_GCC49/AARCH64/ArmVirtPkg/Library/QemuVirtMemInfoLib/QemuVirtMemInfoLib/DEBUG/AutoGen.h" 2
# 1 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h" 1
# 1082 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdSetSku (
  UINTN SkuId
  );
# 1099 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdGet8 (
  UINTN TokenNumber
  );
# 1116 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdGet16 (
  UINTN TokenNumber
  );
# 1133 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdGet32 (
  UINTN TokenNumber
  );
# 1150 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdGet64 (
  UINTN TokenNumber
  );
# 1167 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdGetPtr (
  UINTN TokenNumber
  );
# 1184 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdGetBool (
  UINTN TokenNumber
  );
# 1199 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetSize (
  UINTN TokenNumber
  );
# 1220 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdGetEx8 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1242 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdGetEx16 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1261 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdGetEx32 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1283 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdGetEx64 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1305 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdGetExPtr (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1327 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdGetExBool (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1349 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetExSize (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1370 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdSet8 (
  UINTN TokenNumber,
  UINT8 Value
  );
# 1390 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdSet16 (
  UINTN TokenNumber,
  UINT16 Value
  );
# 1410 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdSet32 (
  UINTN TokenNumber,
  UINT32 Value
  );
# 1430 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdSet64 (
  UINTN TokenNumber,
  UINT64 Value
  );
# 1460 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdSetPtr (
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 1481 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdSetBool (
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1505 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdSetEx8 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT8 Value
  );
# 1530 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdSetEx16 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT16 Value
  );
# 1555 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdSetEx32 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT32 Value
  );
# 1580 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdSetEx64 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT64 Value
  );
# 1611 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdSetExPtr (
  const GUID *Guid,
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  void *Buffer
  );
# 1637 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdSetExBool (
  const GUID *Guid,
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1658 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet8S (
  UINTN TokenNumber,
  UINT8 Value
  );
# 1677 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet16S (
  UINTN TokenNumber,
  UINT16 Value
  );
# 1696 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet32S (
  UINTN TokenNumber,
  UINT32 Value
  );
# 1715 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet64S (
  UINTN TokenNumber,
  UINT64 Value
  );
# 1744 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetPtrS (
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 1764 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetBoolS (
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1787 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx8S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT8 Value
  );
# 1811 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx16S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT16 Value
  );
# 1835 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx32S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT32 Value
  );
# 1859 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx64S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT64 Value
  );
# 1889 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetExPtrS (
  const GUID *Guid,
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  void *Buffer
  );
# 1914 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetExBoolS (
  const GUID *Guid,
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1938 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
typedef
void
( *PCD_CALLBACK)(
  const GUID *CallBackGuid,
  UINTN CallBackToken,
  void *TokenData,
  UINTN TokenDataSize
  );
# 1964 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
void

LibPcdCallbackOnSet (
  const GUID *Guid,
  UINTN TokenNumber,
  PCD_CALLBACK NotificationFunction
  );
# 1986 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
void

LibPcdCancelCallback (
  const GUID *Guid,
  UINTN TokenNumber,
  PCD_CALLBACK NotificationFunction
  );
# 2014 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetNextToken (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 2036 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
GUID *

LibPcdGetNextTokenSpace (
  const GUID *TokenSpaceGuid
  );
# 2066 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPatchPcdSetPtr (
  void *PatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 2098 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPatchPcdSetPtrS (
  void *PatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 2132 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
void *

LibPatchPcdSetPtrAndSize (
  void *PatchVariable,
  UINTN *SizeOfPatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 2167 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPatchPcdSetPtrAndSizeS (
  void *PatchVariable,
  UINTN *SizeOfPatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );

typedef enum {
  PCD_TYPE_8,
  PCD_TYPE_16,
  PCD_TYPE_32,
  PCD_TYPE_64,
  PCD_TYPE_BOOL,
  PCD_TYPE_PTR
} PCD_TYPE;

typedef struct {




  PCD_TYPE PcdType;




  UINTN PcdSize;






  CHAR8 *PcdName;
} PCD_INFO;
# 2219 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
void

LibPcdGetInfo (
  UINTN TokenNumber,
  PCD_INFO *PcdInfo
  );
# 2239 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
void

LibPcdGetInfoEx (
  const GUID *Guid,
  UINTN TokenNumber,
  PCD_INFO *PcdInfo
  );
# 2254 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetSku (
  void
  );
# 18 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/Build/ArmVirtQemuKernel-AARCH64/DEBUG_GCC49/AARCH64/ArmVirtPkg/Library/QemuVirtMemInfoLib/QemuVirtMemInfoLib/DEBUG/AutoGen.h" 2

extern GUID gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern GUID gArmTokenSpaceGuid;
extern GUID gEmbeddedTokenSpaceGuid;


extern UINT64 _gPcd_SkuId_Array[];



extern const UINT32 _gPcd_FixedAtBuild_PcdFdSize;






extern const UINT8 _gPcd_FixedAtBuild_PcdPrePiCpuMemorySize;






extern volatile UINT64 _gPcd_BinaryPatch_PcdFdBaseAddress;





extern UINTN _gPcd_BinaryPatch_Size_PcdFdBaseAddress;

extern volatile UINT64 _gPcd_BinaryPatch_PcdSystemMemoryBase;





extern UINTN _gPcd_BinaryPatch_Size_PcdSystemMemoryBase;

extern volatile UINT64 _gPcd_BinaryPatch_PcdSystemMemorySize;





extern UINTN _gPcd_BinaryPatch_Size_PcdSystemMemorySize;
# 32 "<command-line>" 2
# 1 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/ArmVirtPkg/Library/QemuVirtMemInfoLib/AArch64/PhysAddrTop.S"

# Copyright (c) 2011-2013, ARM Limited. All rights reserved.
# Copyright (c) 2016-2017, Linaro Limited. All rights reserved.

# This program and the accompanying materials
# are licensed and made available under the terms and conditions of the BSD License
# which accompanies this distribution. The full text of the license may be found at
# http:

# THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
# WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.



# 1 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/ArmPkg/Include/AsmMacroIoLibV8.h" 1
# 16 "/home/osboxes/fix_rttee_text/RT-TEE/edk2/ArmVirtPkg/Library/QemuVirtMemInfoLib/AArch64/PhysAddrTop.S" 2





.global ArmGetPhysAddrTop ; .section ".text.ArmGetPhysAddrTop", "ax" ; .type ArmGetPhysAddrTop, %function ; ArmGetPhysAddrTop:
  mrs x0, id_aa64mmfr0_el1
  adr x1, .LPARanges
  and x0, x0, #7
  ldrb w1, [x1, x0]
  mov x0, #1
  lsl x0, x0, x1
  ret







.LPARanges:
  .byte 32, 36, 40, 42, 44, 48, -1, -1


