/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_42857F0A_13F2_4B21_8A23_53D3F714B840
#define _AUTOGENH_42857F0A_13F2_4B21_8A23_53D3F714B840

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x42857F0A, 0x13F2, 0x4B21, {0x8A, 0x23, 0x53, 0xD3, 0xF7, 0x14, 0xB8, 0x40}}

// Guids
extern EFI_GUID gEfiCapsuleVendorGuid;
extern EFI_GUID gEfiFmpCapsuleGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEarlyPL011BaseAddressGuid;
extern EFI_GUID gEfiEventExitBootServicesGuid;
extern EFI_GUID gEfiEventVirtualAddressChangeGuid;

// Protocols
extern EFI_GUID gEfiCapsuleArchProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSupportUpdateCapsuleReset  147U
#define _PCD_SIZE_PcdSupportUpdateCapsuleReset 1
#define _PCD_GET_MODE_SIZE_PcdSupportUpdateCapsuleReset  _PCD_SIZE_PcdSupportUpdateCapsuleReset 
#define _PCD_VALUE_PcdSupportUpdateCapsuleReset  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSupportUpdateCapsuleReset;
#define _PCD_GET_MODE_BOOL_PcdSupportUpdateCapsuleReset  _gPcd_FixedAtBuild_PcdSupportUpdateCapsuleReset
//#define _PCD_SET_MODE_BOOL_PcdSupportUpdateCapsuleReset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxSizeNonPopulateCapsule  148U
#define _PCD_SIZE_PcdMaxSizeNonPopulateCapsule 4
#define _PCD_GET_MODE_SIZE_PcdMaxSizeNonPopulateCapsule  _PCD_SIZE_PcdMaxSizeNonPopulateCapsule 
#define _PCD_VALUE_PcdMaxSizeNonPopulateCapsule  0xa00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxSizeNonPopulateCapsule;
#define _PCD_GET_MODE_32_PcdMaxSizeNonPopulateCapsule  _gPcd_FixedAtBuild_PcdMaxSizeNonPopulateCapsule
//#define _PCD_SET_MODE_32_PcdMaxSizeNonPopulateCapsule  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxSizePopulateCapsule  149U
#define _PCD_SIZE_PcdMaxSizePopulateCapsule 4
#define _PCD_GET_MODE_SIZE_PcdMaxSizePopulateCapsule  _PCD_SIZE_PcdMaxSizePopulateCapsule 
#define _PCD_VALUE_PcdMaxSizePopulateCapsule  0x6400000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxSizePopulateCapsule;
#define _PCD_GET_MODE_32_PcdMaxSizePopulateCapsule  _gPcd_FixedAtBuild_PcdMaxSizePopulateCapsule
//#define _PCD_SET_MODE_32_PcdMaxSizePopulateCapsule  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
CapsuleServiceInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
