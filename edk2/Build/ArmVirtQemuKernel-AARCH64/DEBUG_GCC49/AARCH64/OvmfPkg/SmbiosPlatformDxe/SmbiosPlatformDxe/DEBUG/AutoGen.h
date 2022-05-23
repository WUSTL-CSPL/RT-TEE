/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_4110465d_5ff3_4f4b_b580_24ed0d06747a
#define _AUTOGENH_4110465d_5ff3_4f4b_b580_24ed0d06747a

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x4110465d, 0x5ff3, 0x4f4b, {0xb5, 0x80, 0x24, 0xed, 0x0d, 0x06, 0x74, 0x7a}}

// Guids
extern EFI_GUID gEfiXenInfoGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEarlyPL011BaseAddressGuid;

// Protocols
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gFdtClientProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdQemuSmbiosValidated  10U
#define _PCD_GET_MODE_BOOL_PcdQemuSmbiosValidated  LibPcdGetBool(_PCD_TOKEN_PcdQemuSmbiosValidated)
#define _PCD_GET_MODE_SIZE_PcdQemuSmbiosValidated  LibPcdGetSize(_PCD_TOKEN_PcdQemuSmbiosValidated)
#define _PCD_SET_MODE_BOOL_PcdQemuSmbiosValidated(Value)  LibPcdSetBool(_PCD_TOKEN_PcdQemuSmbiosValidated, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdQemuSmbiosValidated(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdQemuSmbiosValidated, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SmbiosTablePublishEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
