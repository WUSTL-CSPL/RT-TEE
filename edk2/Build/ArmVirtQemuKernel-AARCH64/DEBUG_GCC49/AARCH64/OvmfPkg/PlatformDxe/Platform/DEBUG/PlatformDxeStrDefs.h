/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    PlatformDxeStrDefs.h
  Abstract:       Auto-generated PlatformDxeStrDefs.h for building module or library.
**/

#ifndef _STRDEFS_D9DCC5DF_4007_435E_9098_8970935504B2
#define _STRDEFS_D9DCC5DF_4007_435E_9098_8970935504B2


//
//Unicode String ID
//
// #define $LANGUAGE_NAME                                       0x0000 // not referenced
// #define $PRINTABLE_LANGUAGE_NAME                             0x0001 // not referenced
#define STR_FORMSET_TITLE                                    0x0002
#define STR_FORMSET_HELP                                     0x0003
#define STR_MAIN_FORM_TITLE                                  0x0004
#define STR_RES_CUR                                          0x0005
#define STR_RES_CUR_HELP                                     0x0006
#define STR_RES_NEXT                                         0x0007
#define STR_RES_NEXT_HELP                                    0x0008
#define STR_SAVE_EXIT                                        0x0009
#define STR_DISCARD_EXIT                                     0x000A

extern unsigned char PlatformDxeStrings[];


#define STRING_ARRAY_NAME PlatformDxeStrings

#ifdef VFRCOMPILE
#define gEfiIfrTianoGuid { 0xf0b1735, 0x87a0, 0x4193, {0xb2, 0x66, 0x53, 0x8c, 0x38, 0xaf, 0x48, 0xce }}
#define gOvmfPlatformConfigGuid {0x7235c51c, 0x0c80, 0x4cab, {0x87, 0xac, 0x3b, 0x08, 0x4a, 0x63, 0x04, 0xb1}}
#define gEfiDevicePathProtocolGuid { 0x09576E91, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }}
#define gEfiGraphicsOutputProtocolGuid { 0x9042A9DE, 0x23DC, 0x4A38, { 0x96, 0xFB, 0x7A, 0xDE, 0xD0, 0x80, 0x51, 0x6A }}
#define gEfiHiiConfigAccessProtocolGuid {0x330d4706, 0xf2a0, 0x4e4f, {0xa3, 0x69, 0xb6, 0x6f, 0xa8, 0xd5, 0x43, 0x85}}
#define FixedPcdGetBool(TokenName) _PCD_VALUE_##TokenName
#define FixedPcdGet8(TokenName) _PCD_VALUE_##TokenName
#define FixedPcdGet16(TokenName) _PCD_VALUE_##TokenName
#define FixedPcdGet32(TokenName) _PCD_VALUE_##TokenName
#define FixedPcdGet64(TokenName) _PCD_VALUE_##TokenName
#define FeaturePcdGet(TokenName) _PCD_VALUE_##TokenName
#endif

#endif
