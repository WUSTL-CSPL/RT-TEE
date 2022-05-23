/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_B271F41F_B841_48A9_BA8D_545B4BC2E2BF
#define _AUTOGENH_B271F41F_B841_48A9_BA8D_545B4BC2E2BF

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Protocols
extern GUID gFdtClientProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

RETURN_STATUS
EFIAPI
QemuFwCfgInitialize (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
