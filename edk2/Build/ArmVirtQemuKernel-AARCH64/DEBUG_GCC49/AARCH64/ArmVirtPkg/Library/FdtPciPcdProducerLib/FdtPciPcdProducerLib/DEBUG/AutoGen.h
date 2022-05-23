/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_D584275B_BF1E_4DF8_A53D_980F5645C5E7
#define _AUTOGENH_D584275B_BF1E_4DF8_A53D_980F5645C5E7

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmTokenSpaceGuid;
extern GUID gEfiMdePkgTokenSpaceGuid;
extern GUID gEfiMdeModulePkgTokenSpaceGuid;

// Protocols
extern GUID gFdtClientProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
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
#define _PCD_TOKEN_PcdPciDisableBusEnumeration  15U
#define _PCD_GET_MODE_BOOL_PcdPciDisableBusEnumeration  LibPcdGetBool(_PCD_TOKEN_PcdPciDisableBusEnumeration)
#define _PCD_GET_MODE_SIZE_PcdPciDisableBusEnumeration  LibPcdGetSize(_PCD_TOKEN_PcdPciDisableBusEnumeration)
#define _PCD_SET_MODE_BOOL_PcdPciDisableBusEnumeration(Value)  LibPcdSetBool(_PCD_TOKEN_PcdPciDisableBusEnumeration, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdPciDisableBusEnumeration(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdPciDisableBusEnumeration, (Value))

RETURN_STATUS
EFIAPI
FdtPciPcdProducerLibConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
