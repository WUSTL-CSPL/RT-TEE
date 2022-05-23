/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_168D1A6E_F4A5_448A_9E95_795661BB3067
#define _AUTOGENH_168D1A6E_F4A5_448A_9E95_795661BB3067

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x168D1A6E, 0xF4A5, 0x448A, {0x9E, 0x95, 0x79, 0x56, 0x61, 0xBB, 0x30, 0x67}}

// Guids
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEarlyPL011BaseAddressGuid;

// Protocols
extern EFI_GUID gEfiCpuIo2ProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gFdtClientProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPciIoTranslation  4U
#define _PCD_GET_MODE_64_PcdPciIoTranslation  LibPcdGet64(_PCD_TOKEN_PcdPciIoTranslation)
#define _PCD_GET_MODE_SIZE_PcdPciIoTranslation  LibPcdGetSize(_PCD_TOKEN_PcdPciIoTranslation)
#define _PCD_SET_MODE_64_PcdPciIoTranslation(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciIoTranslation, (Value))
#define _PCD_SET_MODE_64_S_PcdPciIoTranslation(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciIoTranslation, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
ArmPciCpuIo2Initialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
