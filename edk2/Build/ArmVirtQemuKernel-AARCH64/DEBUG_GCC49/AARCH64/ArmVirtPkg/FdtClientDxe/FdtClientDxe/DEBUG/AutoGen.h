/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9A871B00_1C16_4F61_8D2C_93B6654B5AD6
#define _AUTOGENH_9A871B00_1C16_4F61_8D2C_93B6654B5AD6

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x9A871B00, 0x1C16, 0x4F61, {0x8D, 0x2C, 0x93, 0xB6, 0x65, 0x4B, 0x5A, 0xD6}}

// Guids
extern EFI_GUID gEdkiiPlatformHasDeviceTreeGuid;
extern EFI_GUID gFdtHobGuid;
extern EFI_GUID gFdtTableGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEarlyPL011BaseAddressGuid;

// Protocols
extern EFI_GUID gFdtClientProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeFdtClientDxe (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
