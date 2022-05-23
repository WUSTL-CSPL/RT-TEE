extern unsigned char PlatformDxeStrings[];
extern EFI_GUID {0x7235c51c, 0x0c80, 0x4cab, {0x87, 0xac, 0x3b, 0x08, 0x4a, 0x63, 0x04, 0xb1}};
typedef struct {
  UINT16 CurrentPreferredResolution[16];
  UINT32 NextPreferredResolution;
} MAIN_FORM_STATE;
formset
  guid = {0x7235c51c, 0x0c80, 0x4cab, {0x87, 0xac, 0x3b, 0x08, 0x4a, 0x63, 0x04, 0xb1}},
  title = STRING_TOKEN(0x0002),
  help = STRING_TOKEN(0x0003),
  varstore MAIN_FORM_STATE,
    varid = 1,
    name = MainFormState,
    guid = {0x7235c51c, 0x0c80, 0x4cab, {0x87, 0xac, 0x3b, 0x08, 0x4a, 0x63, 0x04, 0xb1}};
  form
    formid = 1,
    title = STRING_TOKEN(0x0004);
    string
      varid = MainFormState.CurrentPreferredResolution,
      questionid = 1,
      prompt = STRING_TOKEN(0x0005),
      help = STRING_TOKEN(0x0006),
      flags = READ_ONLY,
      minsize = 0,
      maxsize = 16,
    endstring;
    label 1;
    text
      help = STRING_TOKEN(0x0009),
      text = STRING_TOKEN(0x0009),
      flags = INTERACTIVE,
      key = 3;
    text
      help = STRING_TOKEN(0x000A),
      text = STRING_TOKEN(0x000A),
      flags = INTERACTIVE,
      key = 4;
  endform;
endformset;
