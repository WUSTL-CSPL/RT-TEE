/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_3f3ffd80_04dc_4a2b_9d25_ecca55c2e520
#define _AUTOGENH_3f3ffd80_04dc_4a2b_9d25_ecca55c2e520

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiMdePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPciExpressBaseAddress  19U
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  LibPcdGet64(_PCD_TOKEN_PcdPciExpressBaseAddress)
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  LibPcdGetSize(_PCD_TOKEN_PcdPciExpressBaseAddress)
#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciExpressBaseAddress, (Value))
#define _PCD_SET_MODE_64_S_PcdPciExpressBaseAddress(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciExpressBaseAddress, (Value))

RETURN_STATUS
EFIAPI
PciExpressLibInitialize (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
