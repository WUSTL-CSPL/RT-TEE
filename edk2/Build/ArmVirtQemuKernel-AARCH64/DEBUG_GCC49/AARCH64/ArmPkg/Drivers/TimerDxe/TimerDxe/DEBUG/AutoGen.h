/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_49ea041e_6752_42ca_b0b1_7344fe2546b7
#define _AUTOGENH_49ea041e_6752_42ca_b0b1_7344fe2546b7

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x49ea041e, 0x6752, 0x42ca, {0xb0, 0xb1, 0x73, 0x44, 0xfe, 0x25, 0x46, 0xb7}}

// Guids
extern EFI_GUID gEmbeddedTokenSpaceGuid;
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEarlyPL011BaseAddressGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;

// Protocols
extern EFI_GUID gEfiTimerArchProtocolGuid;
extern EFI_GUID gHardwareInterruptProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gFdtClientProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdTimerPeriod  170U
#define _PCD_SIZE_PcdTimerPeriod 4
#define _PCD_GET_MODE_SIZE_PcdTimerPeriod  _PCD_SIZE_PcdTimerPeriod 
#define _PCD_VALUE_PcdTimerPeriod  100000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdTimerPeriod;
#define _PCD_GET_MODE_32_PcdTimerPeriod  _gPcd_FixedAtBuild_PcdTimerPeriod
//#define _PCD_SET_MODE_32_PcdTimerPeriod  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmArchTimerSecIntrNum  3U
#define _PCD_GET_MODE_32_PcdArmArchTimerSecIntrNum  LibPcdGet32(_PCD_TOKEN_PcdArmArchTimerSecIntrNum)
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerSecIntrNum  LibPcdGetSize(_PCD_TOKEN_PcdArmArchTimerSecIntrNum)
#define _PCD_SET_MODE_32_PcdArmArchTimerSecIntrNum(Value)  LibPcdSet32(_PCD_TOKEN_PcdArmArchTimerSecIntrNum, (Value))
#define _PCD_SET_MODE_32_S_PcdArmArchTimerSecIntrNum(Value)  LibPcdSet32S(_PCD_TOKEN_PcdArmArchTimerSecIntrNum, (Value))

#define _PCD_TOKEN_PcdArmArchTimerIntrNum  11U
#define _PCD_GET_MODE_32_PcdArmArchTimerIntrNum  LibPcdGet32(_PCD_TOKEN_PcdArmArchTimerIntrNum)
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerIntrNum  LibPcdGetSize(_PCD_TOKEN_PcdArmArchTimerIntrNum)
#define _PCD_SET_MODE_32_PcdArmArchTimerIntrNum(Value)  LibPcdSet32(_PCD_TOKEN_PcdArmArchTimerIntrNum, (Value))
#define _PCD_SET_MODE_32_S_PcdArmArchTimerIntrNum(Value)  LibPcdSet32S(_PCD_TOKEN_PcdArmArchTimerIntrNum, (Value))

#define _PCD_TOKEN_PcdArmArchTimerVirtIntrNum  9U
#define _PCD_GET_MODE_32_PcdArmArchTimerVirtIntrNum  LibPcdGet32(_PCD_TOKEN_PcdArmArchTimerVirtIntrNum)
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerVirtIntrNum  LibPcdGetSize(_PCD_TOKEN_PcdArmArchTimerVirtIntrNum)
#define _PCD_SET_MODE_32_PcdArmArchTimerVirtIntrNum(Value)  LibPcdSet32(_PCD_TOKEN_PcdArmArchTimerVirtIntrNum, (Value))
#define _PCD_SET_MODE_32_S_PcdArmArchTimerVirtIntrNum(Value)  LibPcdSet32S(_PCD_TOKEN_PcdArmArchTimerVirtIntrNum, (Value))

#define _PCD_TOKEN_PcdArmArchTimerHypIntrNum  5U
#define _PCD_GET_MODE_32_PcdArmArchTimerHypIntrNum  LibPcdGet32(_PCD_TOKEN_PcdArmArchTimerHypIntrNum)
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerHypIntrNum  LibPcdGetSize(_PCD_TOKEN_PcdArmArchTimerHypIntrNum)
#define _PCD_SET_MODE_32_PcdArmArchTimerHypIntrNum(Value)  LibPcdSet32(_PCD_TOKEN_PcdArmArchTimerHypIntrNum, (Value))
#define _PCD_SET_MODE_32_S_PcdArmArchTimerHypIntrNum(Value)  LibPcdSet32S(_PCD_TOKEN_PcdArmArchTimerHypIntrNum, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
TimerInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
