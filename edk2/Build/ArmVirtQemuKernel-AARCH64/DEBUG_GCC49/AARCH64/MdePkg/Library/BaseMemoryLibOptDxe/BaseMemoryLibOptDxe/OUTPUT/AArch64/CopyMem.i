# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Library/BaseMemoryLibOptDxe/AArch64/CopyMem.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/toolchains/aarch64/aarch64-linux-gnu/libc/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/Build/ArmVirtQemuKernel-AARCH64/DEBUG_GCC49/AARCH64/MdePkg/Library/BaseMemoryLibOptDxe/BaseMemoryLibOptDxe/DEBUG/AutoGen.h" 1
# 16 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/Build/ArmVirtQemuKernel-AARCH64/DEBUG_GCC49/AARCH64/MdePkg/Library/BaseMemoryLibOptDxe/BaseMemoryLibOptDxe/DEBUG/AutoGen.h"
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
# 17 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/Build/ArmVirtQemuKernel-AARCH64/DEBUG_GCC49/AARCH64/MdePkg/Library/BaseMemoryLibOptDxe/BaseMemoryLibOptDxe/DEBUG/AutoGen.h" 2

extern GUID gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern UINT64 _gPcd_SkuId_Array[];
# 32 "<command-line>" 2
# 1 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Library/BaseMemoryLibOptDxe/AArch64/CopyMem.S"
# 97 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Library/BaseMemoryLibOptDxe/AArch64/CopyMem.S"
__memcpy:
    prfm PLDL1KEEP, [x1]
    add x4, x1, x2
    add x5, x0, x2
    cmp x2, 16
    b.ls .Lcopy16
    cmp x2, 96
    b.hi .Lcopy_long


    sub x9, x2, 1
    ldp x6, x7, [x1]
    tbnz x9, 6, .Lcopy96
    ldp x12, x13, [x4, -16]
    tbz x9, 5, 1f
    ldp x8, x9, [x1, 16]
    ldp x10, x11, [x4, -32]
    stp x8, x9, [x0, 16]
    stp x10, x11, [x5, -32]
1:
    stp x6, x7, [x0]
    stp x12, x13, [x5, -16]
    ret

    .p2align 4

.Lcopy16:
    cmp x2, 8
    b.lo 1f
    ldr x6, [x1]
    ldr x7, [x4, -8]
    str x6, [x0]
    str x7, [x5, -8]
    ret
    .p2align 4
1:
    tbz x2, 2, 1f
    ldr w6, [x1]
    ldr w7, [x4, -4]
    str w6, [x0]
    str w7, [x5, -4]
    ret



1:
    cbz x2, 2f
    lsr x9, x2, 1
    ldrb w6, [x1]
    ldrb w7, [x4, -1]
    ldrb w8, [x1, x9]
    strb w6, [x0]
    strb w8, [x0, x9]
    strb w7, [x5, -1]
2: ret

    .p2align 4


.Lcopy96:
    ldp x8, x9, [x1, 16]
    ldp x10, x11, [x1, 32]
    ldp x12, x13, [x1, 48]
    ldp x14, x15, [x4, -32]
    ldp x4, x3, [x4, -16]
    stp x6, x7, [x0]
    stp x8, x9, [x0, 16]
    stp x10, x11, [x0, 32]
    stp x12, x13, [x0, 48]
    stp x14, x15, [x5, -32]
    stp x4, x3, [x5, -16]
    ret






    .p2align 4
.Lcopy_long:
    and x9, x0, 15
    bic x3, x0, 15
    ldp x12, x13, [x1]
    sub x1, x1, x9
    add x2, x2, x9
    ldp x6, x7, [x1, 16]
    stp x12, x13, [x0]
    ldp x8, x9, [x1, 32]
    ldp x10, x11, [x1, 48]
    ldp x12, x13, [x1, 64]!
    subs x2, x2, 128 + 16
    b.ls 2f
1:
    stp x6, x7, [x3, 16]
    ldp x6, x7, [x1, 16]
    stp x8, x9, [x3, 32]
    ldp x8, x9, [x1, 32]
    stp x10, x11, [x3, 48]
    ldp x10, x11, [x1, 48]
    stp x12, x13, [x3, 64]!
    ldp x12, x13, [x1, 64]!
    subs x2, x2, 64
    b.hi 1b




2:
    ldp x14, x15, [x4, -64]
    stp x6, x7, [x3, 16]
    ldp x6, x7, [x4, -48]
    stp x8, x9, [x3, 32]
    ldp x8, x9, [x4, -32]
    stp x10, x11, [x3, 48]
    ldp x10, x11, [x4, -16]
    stp x12, x13, [x3, 64]
    stp x14, x15, [x5, -64]
    stp x6, x7, [x5, -48]
    stp x8, x9, [x5, -32]
    stp x10, x11, [x5, -16]
    ret
# 227 "/home/osboxes/RT-TEE_PRE_RELEASE/edk2/MdePkg/Library/BaseMemoryLibOptDxe/AArch64/CopyMem.S"
.globl InternalMemCopyMem
InternalMemCopyMem:
    sub x3, x0, x1
    cmp x2, 96
    ccmp x3, x2, 2, hi
    b.hs __memcpy

    cbz x3, 3f
    add x5, x0, x2
    add x4, x1, x2






    and x3, x5, 15
    ldp x12, x13, [x4, -16]
    sub x4, x4, x3
    sub x2, x2, x3
    ldp x6, x7, [x4, -16]
    stp x12, x13, [x5, -16]
    ldp x8, x9, [x4, -32]
    ldp x10, x11, [x4, -48]
    ldp x12, x13, [x4, -64]!
    sub x5, x5, x3
    subs x2, x2, 128
    b.ls 2f
    nop
1:
    stp x6, x7, [x5, -16]
    ldp x6, x7, [x4, -16]
    stp x8, x9, [x5, -32]
    ldp x8, x9, [x4, -32]
    stp x10, x11, [x5, -48]
    ldp x10, x11, [x4, -48]
    stp x12, x13, [x5, -64]!
    ldp x12, x13, [x4, -64]!
    subs x2, x2, 64
    b.hi 1b




2:
    ldp x14, x15, [x1, 48]
    stp x6, x7, [x5, -16]
    ldp x6, x7, [x1, 32]
    stp x8, x9, [x5, -32]
    ldp x8, x9, [x1, 16]
    stp x10, x11, [x5, -48]
    ldp x10, x11, [x1]
    stp x12, x13, [x5, -64]
    stp x14, x15, [x0, 48]
    stp x6, x7, [x0, 32]
    stp x8, x9, [x0, 16]
    stp x10, x11, [x0]
3: ret
