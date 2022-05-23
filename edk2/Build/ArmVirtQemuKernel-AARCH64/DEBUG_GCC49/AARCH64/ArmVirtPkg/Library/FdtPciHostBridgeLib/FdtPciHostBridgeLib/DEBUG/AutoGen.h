/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_59fcb139_2558_4cf0_8d7c_ebac499da727
#define _AUTOGENH_59fcb139_2558_4cf0_8d7c_ebac499da727

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPciMmio32Translation  200U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciMmio32Translation;
#define _PCD_GET_MODE_64_PcdPciMmio32Translation  _gPcd_FixedAtBuild_PcdPciMmio32Translation
//#define _PCD_SET_MODE_64_PcdPciMmio32Translation  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciMmio32Translation 0x0
#define _PCD_SIZE_PcdPciMmio32Translation 8
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Translation _PCD_SIZE_PcdPciMmio32Translation
#define _PCD_TOKEN_PcdPciMmio64Translation  201U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciMmio64Translation;
#define _PCD_GET_MODE_64_PcdPciMmio64Translation  _gPcd_FixedAtBuild_PcdPciMmio64Translation
//#define _PCD_SET_MODE_64_PcdPciMmio64Translation  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciMmio64Translation 0x0
#define _PCD_SIZE_PcdPciMmio64Translation 8
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Translation _PCD_SIZE_PcdPciMmio64Translation
#define _PCD_TOKEN_PcdPciIoTranslation  4U
#define _PCD_GET_MODE_64_PcdPciIoTranslation  LibPcdGet64(_PCD_TOKEN_PcdPciIoTranslation)
#define _PCD_GET_MODE_SIZE_PcdPciIoTranslation  LibPcdGetSize(_PCD_TOKEN_PcdPciIoTranslation)
#define _PCD_SET_MODE_64_PcdPciIoTranslation(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciIoTranslation, (Value))
#define _PCD_SET_MODE_64_S_PcdPciIoTranslation(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciIoTranslation, (Value))
#define _PCD_TOKEN_PcdPciExpressBaseAddress  19U
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  LibPcdGet64(_PCD_TOKEN_PcdPciExpressBaseAddress)
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  LibPcdGetSize(_PCD_TOKEN_PcdPciExpressBaseAddress)
#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciExpressBaseAddress, (Value))
#define _PCD_SET_MODE_64_S_PcdPciExpressBaseAddress(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciExpressBaseAddress, (Value))


#ifdef __cplusplus
}
#endif

#endif
