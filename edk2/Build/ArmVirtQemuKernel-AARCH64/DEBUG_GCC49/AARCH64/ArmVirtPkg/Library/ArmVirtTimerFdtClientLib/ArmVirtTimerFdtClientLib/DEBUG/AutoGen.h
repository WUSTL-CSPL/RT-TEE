/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_77EA80CA_2EFB_4AB4_8567_230D968F6B37
#define _AUTOGENH_77EA80CA_2EFB_4AB4_8567_230D968F6B37

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmTokenSpaceGuid;

// Protocols
extern GUID gFdtClientProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
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

RETURN_STATUS
EFIAPI
ArmVirtTimerFdtClientLibConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
