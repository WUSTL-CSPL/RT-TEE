extern unsigned char IScsi4DxeStrings[];
extern EFI_GUID { 0x6456ed61, 0x3579, 0x41c9, { 0x8a, 0x26, 0x0a, 0x0b, 0xd6, 0x2b, 0x78, 0xfc }};
extern EFI_GUID { 0x786ec0ac, 0x65ae, 0x4d1b, { 0xb1, 0x37, 0xd, 0x11, 0xa, 0x48, 0x37, 0x97 }};
#pragma pack(1)
typedef struct {
  CHAR16 InitiatorName[224];
  UINT8 Enabled;
  UINT8 InitiatorInfoFromDhcp;
  CHAR16 LocalIp[16];
  CHAR16 SubnetMask[16];
  CHAR16 Gateway[16];
  CHAR16 TargetName[224];
  CHAR16 TargetIp[16];
  UINT16 TargetPort;
  CHAR16 BootLun[21];
  UINT8 TargetInfoFromDhcp;
  UINT8 CHAPType;
  CHAR16 CHAPName[127];
  CHAR16 CHAPSecret[17];
  CHAR16 ReverseCHAPName[127];
  CHAR16 ReverseCHAPSecret[17];
  CHAR16 IsId[13];
} ISCSI_CONFIG_IFR_NVDATA;
#pragma pack()
formset
  guid = { 0x6456ed61, 0x3579, 0x41c9, { 0x8a, 0x26, 0x0a, 0x0b, 0xd6, 0x2b, 0x78, 0xfc } },
  title = STRING_TOKEN(0x0002),
  help = STRING_TOKEN(0x0003),
  varstore ISCSI_CONFIG_IFR_NVDATA,
    name = ISCSI_CONFIG_IFR_NVDATA,
    guid = { 0x6456ed61, 0x3579, 0x41c9, { 0x8a, 0x26, 0x0a, 0x0b, 0xd6, 0x2b, 0x78, 0xfc } };
  form formid = 1,
    title = STRING_TOKEN(0x0004);
    string varid = ISCSI_CONFIG_IFR_NVDATA.InitiatorName,
            prompt = STRING_TOKEN(0x0005),
            help = STRING_TOKEN(0x0006),
            flags = INTERACTIVE,
            key = 0x101,
            minsize = 4,
            maxsize = 223,
    endstring;
    label 0x1234;
    label 0xffff;
  endform;
  form formid = 2,
    title = STRING_TOKEN(0x0007);
    checkbox varid = ISCSI_CONFIG_IFR_NVDATA.Enabled,
            prompt = STRING_TOKEN(0x0008),
            help = STRING_TOKEN(0x0022),
            flags = 0,
    endcheckbox;
    checkbox varid = ISCSI_CONFIG_IFR_NVDATA.InitiatorInfoFromDhcp,
            prompt = STRING_TOKEN(0x0012),
            help = STRING_TOKEN(0x0012),
            flags = INTERACTIVE,
            key = 0x102,
    endcheckbox;
    suppressif ideqval ISCSI_CONFIG_IFR_NVDATA.InitiatorInfoFromDhcp == 0x01;
    string varid = ISCSI_CONFIG_IFR_NVDATA.LocalIp,
            prompt = STRING_TOKEN(0x0009),
            help = STRING_TOKEN(0x000C),
            flags = INTERACTIVE,
            key = 0x103,
            minsize = 7,
            maxsize = 15,
    endstring;
    string varid = ISCSI_CONFIG_IFR_NVDATA.SubnetMask,
            prompt = STRING_TOKEN(0x000A),
            help = STRING_TOKEN(0x000C),
            flags = INTERACTIVE,
            key = 0x104,
            minsize = 7,
            maxsize = 15,
    endstring;
    string varid = ISCSI_CONFIG_IFR_NVDATA.Gateway,
            prompt = STRING_TOKEN(0x000B),
            help = STRING_TOKEN(0x000C),
            flags = INTERACTIVE,
            key = 0x105,
            minsize = 7,
            maxsize = 15,
    endstring;
    endif;
    subtitle text = STRING_TOKEN(0x0022);
    suppressif ideqval ISCSI_CONFIG_IFR_NVDATA.InitiatorInfoFromDhcp == 0x00;
    checkbox varid = ISCSI_CONFIG_IFR_NVDATA.TargetInfoFromDhcp,
             prompt = STRING_TOKEN(0x0013),
             help = STRING_TOKEN(0x0013),
             flags = 0,
    endcheckbox;
    endif;
    suppressif ideqval ISCSI_CONFIG_IFR_NVDATA.TargetInfoFromDhcp == 0x01;
    string varid = ISCSI_CONFIG_IFR_NVDATA.TargetName,
            prompt = STRING_TOKEN(0x000D),
            help = STRING_TOKEN(0x000D),
            flags = INTERACTIVE,
            key = 0x10c,
            minsize = 4,
            maxsize = 223,
    endstring;
    string varid = ISCSI_CONFIG_IFR_NVDATA.TargetIp,
            prompt = STRING_TOKEN(0x000E),
            help = STRING_TOKEN(0x000C),
            flags = INTERACTIVE,
            key = 0x106,
            minsize = 7,
            maxsize = 15,
    endstring;
    numeric varid = ISCSI_CONFIG_IFR_NVDATA.TargetPort,
            prompt = STRING_TOKEN(0x000F),
            help = STRING_TOKEN(0x000F),
            flags = 0,
            minimum = 0,
            maximum = 65535,
            step = 0,
    endnumeric;
    string varid = ISCSI_CONFIG_IFR_NVDATA.BootLun,
            prompt = STRING_TOKEN(0x0010),
            help = STRING_TOKEN(0x0011),
            flags = INTERACTIVE,
            key = 0x10d,
            minsize = 1,
            maxsize = 20,
    endstring;
    endif;
    subtitle text = STRING_TOKEN(0x0022);
    oneof varid = ISCSI_CONFIG_IFR_NVDATA.CHAPType,
          prompt = STRING_TOKEN(0x0014),
          help = STRING_TOKEN(0x0015),
          option text = STRING_TOKEN(0x0016), value = 0, flags = DEFAULT;
          option text = STRING_TOKEN(0x0017), value = 1, flags = 0;
          option text = STRING_TOKEN(0x0018), value = 2, flags = 0;
    endoneof;
    suppressif ideqval ISCSI_CONFIG_IFR_NVDATA.CHAPType == 0;
    string varid = ISCSI_CONFIG_IFR_NVDATA.CHAPName,
            prompt = STRING_TOKEN(0x0019),
            help = STRING_TOKEN(0x0019),
            flags = INTERACTIVE,
            key = 0x107,
            minsize = 0,
            maxsize = 126,
    endstring;
    string varid = ISCSI_CONFIG_IFR_NVDATA.CHAPSecret,
            prompt = STRING_TOKEN(0x001A),
            help = STRING_TOKEN(0x001B),
            flags = INTERACTIVE,
            key = 0x108,
            minsize = 12,
            maxsize = 16,
    endstring;
    endif;
    suppressif NOT ideqval ISCSI_CONFIG_IFR_NVDATA.CHAPType == 2;
    string varid = ISCSI_CONFIG_IFR_NVDATA.ReverseCHAPName,
            prompt = STRING_TOKEN(0x001C),
            help = STRING_TOKEN(0x001C),
            flags = INTERACTIVE,
            key = 0x109,
            minsize = 0,
            maxsize = 126,
    endstring;
    string varid = ISCSI_CONFIG_IFR_NVDATA.ReverseCHAPSecret,
            prompt = STRING_TOKEN(0x001D),
            help = STRING_TOKEN(0x001B),
            flags = INTERACTIVE,
            key = 0x10a,
            minsize = 12,
            maxsize = 16,
    endstring;
    endif;
    subtitle text = STRING_TOKEN(0x0022);
    string varid = ISCSI_CONFIG_IFR_NVDATA.IsId,
            prompt = STRING_TOKEN(0x001E),
            help = STRING_TOKEN(0x001F),
            flags = INTERACTIVE,
            key = 0x10e,
            minsize = 6,
            maxsize = 12,
    endstring;
    subtitle text = STRING_TOKEN(0x0022);
    text
      help = STRING_TOKEN (0x0021),
      text = STRING_TOKEN (0x0021),
      flags = INTERACTIVE,
      key = 0x10b;
    goto 1,
    prompt = STRING_TOKEN (0x0020),
    help = STRING_TOKEN (0x0020),
    flags = 0;
  endform;
endformset;
