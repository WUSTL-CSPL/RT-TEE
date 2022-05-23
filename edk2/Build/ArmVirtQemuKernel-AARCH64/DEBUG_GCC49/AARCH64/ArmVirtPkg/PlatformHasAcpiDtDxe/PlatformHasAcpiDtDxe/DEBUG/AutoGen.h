/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9d1dd27f_6d7f_427b_aec4_b62f6279c2f1
#define _AUTOGENH_9d1dd27f_6d7f_427b_aec4_b62f6279c2f1

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x9d1dd27f, 0x6d7f, 0x427b, {0xae, 0xc4, 0xb6, 0x2f, 0x62, 0x79, 0xc2, 0xf1}}

// Guids
extern EFI_GUID gEdkiiPlatformHasAcpiGuid;
extern EFI_GUID gEdkiiPlatformHasDeviceTreeGuid;
extern EFI_GUID gArmVirtTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEarlyPL011BaseAddressGuid;

// Protocols
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gFdtClientProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdForceNoAcpi  17U
#define _PCD_GET_MODE_BOOL_PcdForceNoAcpi  LibPcdGetBool(_PCD_TOKEN_PcdForceNoAcpi)
#define _PCD_GET_MODE_SIZE_PcdForceNoAcpi  LibPcdGetSize(_PCD_TOKEN_PcdForceNoAcpi)
#define _PCD_SET_MODE_BOOL_PcdForceNoAcpi(Value)  LibPcdSetBool(_PCD_TOKEN_PcdForceNoAcpi, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdForceNoAcpi(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdForceNoAcpi, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PlatformHasAcpiDt (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
