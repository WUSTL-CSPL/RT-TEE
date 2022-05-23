/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_13173319_B270_4669_8592_3BB2B31E9E29
#define _AUTOGENH_13173319_B270_4669_8592_3BB2B31E9E29

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmPlatformTokenSpaceGuid;

// Protocols
extern GUID gFdtClientProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPL031RtcBase  1U
#define _PCD_GET_MODE_32_PcdPL031RtcBase  LibPcdGet32(_PCD_TOKEN_PcdPL031RtcBase)
#define _PCD_GET_MODE_SIZE_PcdPL031RtcBase  LibPcdGetSize(_PCD_TOKEN_PcdPL031RtcBase)
#define _PCD_SET_MODE_32_PcdPL031RtcBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdPL031RtcBase, (Value))
#define _PCD_SET_MODE_32_S_PcdPL031RtcBase(Value)  LibPcdSet32S(_PCD_TOKEN_PcdPL031RtcBase, (Value))

RETURN_STATUS
EFIAPI
ArmVirtPL031FdtClientLibConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
