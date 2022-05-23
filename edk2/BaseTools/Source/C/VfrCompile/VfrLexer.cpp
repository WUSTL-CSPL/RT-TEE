
/* VfrParser.dlg -- DLG Description of scanner
 *
 * Generated from: VfrSyntax.g
 *
 * Terence Parr, Will Cohen, and Hank Dietz: 1989-2001
 * Purdue University Electrical Engineering
 * With AHPCRC, University of Minnesota
 * ANTLR Version 1.33MR33
 */

#define ANTLR_VERSION	13333
#include "VfrTokens.h"
#include "AToken.h"


#include "EfiVfr.h"
#include "VfrFormPkg.h"
#include "VfrError.h"
#include "VfrUtilityLib.h"
#include "AToken.h"
#include "ATokPtr.h"
/*
 * D L G tables
 *
 * Generated from: VfrParser.dlg
 *
 * 1989-2001 by  Will Cohen, Terence Parr, and Hank Dietz
 * Purdue University Electrical Engineering
 * DLG Version 1.33MR33
 */

#include "pcctscfg.h"
#include "pccts_stdio.h"

#include "AParser.h"
#include "DLexerBase.h"
#include "VfrLexer.h"

ANTLRTokenType VfrLexer::act1()
{ 
		return (ANTLRTokenType)1;
	}


ANTLRTokenType VfrLexer::act2()
{ 
    skip (); mode (CPP_COMMENT);   
		return (ANTLRTokenType)5;
	}


ANTLRTokenType VfrLexer::act3()
{ 
    skip ();   
		return (ANTLRTokenType)6;
	}


ANTLRTokenType VfrLexer::act4()
{ 
    skip (); newline ();   
		return (ANTLRTokenType)7;
	}


ANTLRTokenType VfrLexer::act5()
{ 
    skip (); mode (CPP_COMMENT);   
		return (ANTLRTokenType)8;
	}


ANTLRTokenType VfrLexer::act6()
{ 
		return FormPkgType;
	}


ANTLRTokenType VfrLexer::act7()
{ 
		return OpenBrace;
	}


ANTLRTokenType VfrLexer::act8()
{ 
		return CloseBrace;
	}


ANTLRTokenType VfrLexer::act9()
{ 
		return OpenParen;
	}


ANTLRTokenType VfrLexer::act10()
{ 
		return CloseParen;
	}


ANTLRTokenType VfrLexer::act11()
{ 
		return OpenBracket;
	}


ANTLRTokenType VfrLexer::act12()
{ 
		return CloseBracket;
	}


ANTLRTokenType VfrLexer::act13()
{ 
    gCVfrErrorHandle.ParseFileScopeRecord (begexpr (), line ()); skip (); newline ();   
		return LineDefinition;
	}


ANTLRTokenType VfrLexer::act14()
{ 
		return DevicePath;
	}


ANTLRTokenType VfrLexer::act15()
{ 
		return FormSet;
	}


ANTLRTokenType VfrLexer::act16()
{ 
		return FormSetId;
	}


ANTLRTokenType VfrLexer::act17()
{ 
		return EndFormSet;
	}


ANTLRTokenType VfrLexer::act18()
{ 
		return Title;
	}


ANTLRTokenType VfrLexer::act19()
{ 
		return FormId;
	}


ANTLRTokenType VfrLexer::act20()
{ 
		return OneOf;
	}


ANTLRTokenType VfrLexer::act21()
{ 
		return EndOneOf;
	}


ANTLRTokenType VfrLexer::act22()
{ 
		return Prompt;
	}


ANTLRTokenType VfrLexer::act23()
{ 
		return OrderedList;
	}


ANTLRTokenType VfrLexer::act24()
{ 
		return MaxContainers;
	}


ANTLRTokenType VfrLexer::act25()
{ 
		return EndList;
	}


ANTLRTokenType VfrLexer::act26()
{ 
		return EndForm;
	}


ANTLRTokenType VfrLexer::act27()
{ 
		return Form;
	}


ANTLRTokenType VfrLexer::act28()
{ 
		return FormMap;
	}


ANTLRTokenType VfrLexer::act29()
{ 
		return MapTitle;
	}


ANTLRTokenType VfrLexer::act30()
{ 
		return MapGuid;
	}


ANTLRTokenType VfrLexer::act31()
{ 
		return Subtitle;
	}


ANTLRTokenType VfrLexer::act32()
{ 
		return EndSubtitle;
	}


ANTLRTokenType VfrLexer::act33()
{ 
		return Help;
	}


ANTLRTokenType VfrLexer::act34()
{ 
		return Text;
	}


ANTLRTokenType VfrLexer::act35()
{ 
		return Option;
	}


ANTLRTokenType VfrLexer::act36()
{ 
		return FLAGS;
	}


ANTLRTokenType VfrLexer::act37()
{ 
		return Date;
	}


ANTLRTokenType VfrLexer::act38()
{ 
		return EndDate;
	}


ANTLRTokenType VfrLexer::act39()
{ 
		return Year;
	}


ANTLRTokenType VfrLexer::act40()
{ 
		return Month;
	}


ANTLRTokenType VfrLexer::act41()
{ 
		return Day;
	}


ANTLRTokenType VfrLexer::act42()
{ 
		return Time;
	}


ANTLRTokenType VfrLexer::act43()
{ 
		return EndTime;
	}


ANTLRTokenType VfrLexer::act44()
{ 
		return Hour;
	}


ANTLRTokenType VfrLexer::act45()
{ 
		return Minute;
	}


ANTLRTokenType VfrLexer::act46()
{ 
		return Second;
	}


ANTLRTokenType VfrLexer::act47()
{ 
		return GrayOutIf;
	}


ANTLRTokenType VfrLexer::act48()
{ 
		return Label;
	}


ANTLRTokenType VfrLexer::act49()
{ 
		return Timeout;
	}


ANTLRTokenType VfrLexer::act50()
{ 
		return Inventory;
	}


ANTLRTokenType VfrLexer::act51()
{ 
		return NonNvDataMap;
	}


ANTLRTokenType VfrLexer::act52()
{ 
		return Struct;
	}


ANTLRTokenType VfrLexer::act53()
{ 
		return Union;
	}


ANTLRTokenType VfrLexer::act54()
{ 
		return Boolean;
	}


ANTLRTokenType VfrLexer::act55()
{ 
		return Uint64;
	}


ANTLRTokenType VfrLexer::act56()
{ 
		return Uint32;
	}


ANTLRTokenType VfrLexer::act57()
{ 
		return Uint16;
	}


ANTLRTokenType VfrLexer::act58()
{ 
		return Char16;
	}


ANTLRTokenType VfrLexer::act59()
{ 
		return Uint8;
	}


ANTLRTokenType VfrLexer::act60()
{ 
		return Uuid;
	}


ANTLRTokenType VfrLexer::act61()
{ 
		return CheckBox;
	}


ANTLRTokenType VfrLexer::act62()
{ 
		return EndCheckBox;
	}


ANTLRTokenType VfrLexer::act63()
{ 
		return Numeric;
	}


ANTLRTokenType VfrLexer::act64()
{ 
		return EndNumeric;
	}


ANTLRTokenType VfrLexer::act65()
{ 
		return Minimum;
	}


ANTLRTokenType VfrLexer::act66()
{ 
		return Maximum;
	}


ANTLRTokenType VfrLexer::act67()
{ 
		return STEP;
	}


ANTLRTokenType VfrLexer::act68()
{ 
		return Default;
	}


ANTLRTokenType VfrLexer::act69()
{ 
		return Password;
	}


ANTLRTokenType VfrLexer::act70()
{ 
		return EndPassword;
	}


ANTLRTokenType VfrLexer::act71()
{ 
		return String;
	}


ANTLRTokenType VfrLexer::act72()
{ 
		return EndString;
	}


ANTLRTokenType VfrLexer::act73()
{ 
		return MinSize;
	}


ANTLRTokenType VfrLexer::act74()
{ 
		return MaxSize;
	}


ANTLRTokenType VfrLexer::act75()
{ 
		return Encoding;
	}


ANTLRTokenType VfrLexer::act76()
{ 
		return SuppressIf;
	}


ANTLRTokenType VfrLexer::act77()
{ 
		return DisableIf;
	}


ANTLRTokenType VfrLexer::act78()
{ 
		return Hidden;
	}


ANTLRTokenType VfrLexer::act79()
{ 
		return Goto;
	}


ANTLRTokenType VfrLexer::act80()
{ 
		return FormSetGuid;
	}


ANTLRTokenType VfrLexer::act81()
{ 
		return InconsistentIf;
	}


ANTLRTokenType VfrLexer::act82()
{ 
		return WarningIf;
	}


ANTLRTokenType VfrLexer::act83()
{ 
		return NoSubmitIf;
	}


ANTLRTokenType VfrLexer::act84()
{ 
		return EndIf;
	}


ANTLRTokenType VfrLexer::act85()
{ 
		return Key;
	}


ANTLRTokenType VfrLexer::act86()
{ 
		return DefaultFlag;
	}


ANTLRTokenType VfrLexer::act87()
{ 
		return ManufacturingFlag;
	}


ANTLRTokenType VfrLexer::act88()
{ 
		return InteractiveFlag;
	}


ANTLRTokenType VfrLexer::act89()
{ 
		return NVAccessFlag;
	}


ANTLRTokenType VfrLexer::act90()
{ 
		return ResetRequiredFlag;
	}


ANTLRTokenType VfrLexer::act91()
{ 
		return ReconnectRequiredFlag;
	}


ANTLRTokenType VfrLexer::act92()
{ 
		return LateCheckFlag;
	}


ANTLRTokenType VfrLexer::act93()
{ 
		return ReadOnlyFlag;
	}


ANTLRTokenType VfrLexer::act94()
{ 
		return OptionOnlyFlag;
	}


ANTLRTokenType VfrLexer::act95()
{ 
		return Class;
	}


ANTLRTokenType VfrLexer::act96()
{ 
		return Subclass;
	}


ANTLRTokenType VfrLexer::act97()
{ 
		return ClassGuid;
	}


ANTLRTokenType VfrLexer::act98()
{ 
		return TypeDef;
	}


ANTLRTokenType VfrLexer::act99()
{ 
		return Restore;
	}


ANTLRTokenType VfrLexer::act100()
{ 
		return Save;
	}


ANTLRTokenType VfrLexer::act101()
{ 
		return Defaults;
	}


ANTLRTokenType VfrLexer::act102()
{ 
		return Banner;
	}


ANTLRTokenType VfrLexer::act103()
{ 
		return Align;
	}


ANTLRTokenType VfrLexer::act104()
{ 
		return Left;
	}


ANTLRTokenType VfrLexer::act105()
{ 
		return Right;
	}


ANTLRTokenType VfrLexer::act106()
{ 
		return Center;
	}


ANTLRTokenType VfrLexer::act107()
{ 
		return Line;
	}


ANTLRTokenType VfrLexer::act108()
{ 
		return Name;
	}


ANTLRTokenType VfrLexer::act109()
{ 
		return VarId;
	}


ANTLRTokenType VfrLexer::act110()
{ 
		return Question;
	}


ANTLRTokenType VfrLexer::act111()
{ 
		return QuestionId;
	}


ANTLRTokenType VfrLexer::act112()
{ 
		return Image;
	}


ANTLRTokenType VfrLexer::act113()
{ 
		return Locked;
	}


ANTLRTokenType VfrLexer::act114()
{ 
		return Rule;
	}


ANTLRTokenType VfrLexer::act115()
{ 
		return EndRule;
	}


ANTLRTokenType VfrLexer::act116()
{ 
		return Value;
	}


ANTLRTokenType VfrLexer::act117()
{ 
		return Read;
	}


ANTLRTokenType VfrLexer::act118()
{ 
		return Write;
	}


ANTLRTokenType VfrLexer::act119()
{ 
		return ResetButton;
	}


ANTLRTokenType VfrLexer::act120()
{ 
		return EndResetButton;
	}


ANTLRTokenType VfrLexer::act121()
{ 
		return DefaultStore;
	}


ANTLRTokenType VfrLexer::act122()
{ 
		return Attribute;
	}


ANTLRTokenType VfrLexer::act123()
{ 
		return Varstore;
	}


ANTLRTokenType VfrLexer::act124()
{ 
		return Efivarstore;
	}


ANTLRTokenType VfrLexer::act125()
{ 
		return VarSize;
	}


ANTLRTokenType VfrLexer::act126()
{ 
		return NameValueVarStore;
	}


ANTLRTokenType VfrLexer::act127()
{ 
		return Action;
	}


ANTLRTokenType VfrLexer::act128()
{ 
		return Config;
	}


ANTLRTokenType VfrLexer::act129()
{ 
		return EndAction;
	}


ANTLRTokenType VfrLexer::act130()
{ 
		return Refresh;
	}


ANTLRTokenType VfrLexer::act131()
{ 
		return Interval;
	}


ANTLRTokenType VfrLexer::act132()
{ 
		return VarstoreDevice;
	}


ANTLRTokenType VfrLexer::act133()
{ 
		return GuidOp;
	}


ANTLRTokenType VfrLexer::act134()
{ 
		return EndGuidOp;
	}


ANTLRTokenType VfrLexer::act135()
{ 
		return DataType;
	}


ANTLRTokenType VfrLexer::act136()
{ 
		return Data;
	}


ANTLRTokenType VfrLexer::act137()
{ 
		return Modal;
	}


ANTLRTokenType VfrLexer::act138()
{ 
		return ClassNonDevice;
	}


ANTLRTokenType VfrLexer::act139()
{ 
		return ClassDiskDevice;
	}


ANTLRTokenType VfrLexer::act140()
{ 
		return ClassVideoDevice;
	}


ANTLRTokenType VfrLexer::act141()
{ 
		return ClassNetworkDevice;
	}


ANTLRTokenType VfrLexer::act142()
{ 
		return ClassInputDevice;
	}


ANTLRTokenType VfrLexer::act143()
{ 
		return ClassOnBoardDevice;
	}


ANTLRTokenType VfrLexer::act144()
{ 
		return ClassOtherDevice;
	}


ANTLRTokenType VfrLexer::act145()
{ 
		return SubclassSetupApplication;
	}


ANTLRTokenType VfrLexer::act146()
{ 
		return SubclassGeneralApplication;
	}


ANTLRTokenType VfrLexer::act147()
{ 
		return SubclassFrontPage;
	}


ANTLRTokenType VfrLexer::act148()
{ 
		return SubclassSingleUse;
	}


ANTLRTokenType VfrLexer::act149()
{ 
		return (ANTLRTokenType)152;
	}


ANTLRTokenType VfrLexer::act150()
{ 
		return (ANTLRTokenType)153;
	}


ANTLRTokenType VfrLexer::act151()
{ 
		return (ANTLRTokenType)154;
	}


ANTLRTokenType VfrLexer::act152()
{ 
		return (ANTLRTokenType)155;
	}


ANTLRTokenType VfrLexer::act153()
{ 
		return (ANTLRTokenType)158;
	}


ANTLRTokenType VfrLexer::act154()
{ 
		return (ANTLRTokenType)159;
	}


ANTLRTokenType VfrLexer::act155()
{ 
		return (ANTLRTokenType)160;
	}


ANTLRTokenType VfrLexer::act156()
{ 
		return (ANTLRTokenType)161;
	}


ANTLRTokenType VfrLexer::act157()
{ 
		return (ANTLRTokenType)162;
	}


ANTLRTokenType VfrLexer::act158()
{ 
		return (ANTLRTokenType)163;
	}


ANTLRTokenType VfrLexer::act159()
{ 
		return (ANTLRTokenType)164;
	}


ANTLRTokenType VfrLexer::act160()
{ 
		return (ANTLRTokenType)165;
	}


ANTLRTokenType VfrLexer::act161()
{ 
		return (ANTLRTokenType)166;
	}


ANTLRTokenType VfrLexer::act162()
{ 
		return (ANTLRTokenType)167;
	}


ANTLRTokenType VfrLexer::act163()
{ 
		return (ANTLRTokenType)168;
	}


ANTLRTokenType VfrLexer::act164()
{ 
		return (ANTLRTokenType)169;
	}


ANTLRTokenType VfrLexer::act165()
{ 
		return (ANTLRTokenType)170;
	}


ANTLRTokenType VfrLexer::act166()
{ 
		return (ANTLRTokenType)176;
	}


ANTLRTokenType VfrLexer::act167()
{ 
		return (ANTLRTokenType)177;
	}


ANTLRTokenType VfrLexer::act168()
{ 
		return (ANTLRTokenType)178;
	}


ANTLRTokenType VfrLexer::act169()
{ 
		return (ANTLRTokenType)179;
	}


ANTLRTokenType VfrLexer::act170()
{ 
		return (ANTLRTokenType)180;
	}


ANTLRTokenType VfrLexer::act171()
{ 
		return (ANTLRTokenType)181;
	}


ANTLRTokenType VfrLexer::act172()
{ 
		return (ANTLRTokenType)182;
	}


ANTLRTokenType VfrLexer::act173()
{ 
		return (ANTLRTokenType)183;
	}


ANTLRTokenType VfrLexer::act174()
{ 
		return (ANTLRTokenType)184;
	}


ANTLRTokenType VfrLexer::act175()
{ 
		return (ANTLRTokenType)185;
	}


ANTLRTokenType VfrLexer::act176()
{ 
		return (ANTLRTokenType)186;
	}


ANTLRTokenType VfrLexer::act177()
{ 
		return (ANTLRTokenType)187;
	}


ANTLRTokenType VfrLexer::act178()
{ 
		return (ANTLRTokenType)188;
	}


ANTLRTokenType VfrLexer::act179()
{ 
		return (ANTLRTokenType)189;
	}


ANTLRTokenType VfrLexer::act180()
{ 
		return (ANTLRTokenType)190;
	}


ANTLRTokenType VfrLexer::act181()
{ 
		return (ANTLRTokenType)191;
	}


ANTLRTokenType VfrLexer::act182()
{ 
		return (ANTLRTokenType)192;
	}


ANTLRTokenType VfrLexer::act183()
{ 
		return (ANTLRTokenType)193;
	}


ANTLRTokenType VfrLexer::act184()
{ 
		return (ANTLRTokenType)194;
	}


ANTLRTokenType VfrLexer::act185()
{ 
		return (ANTLRTokenType)195;
	}


ANTLRTokenType VfrLexer::act186()
{ 
		return (ANTLRTokenType)196;
	}


ANTLRTokenType VfrLexer::act187()
{ 
		return (ANTLRTokenType)197;
	}


ANTLRTokenType VfrLexer::act188()
{ 
		return (ANTLRTokenType)198;
	}


ANTLRTokenType VfrLexer::act189()
{ 
		return (ANTLRTokenType)199;
	}


ANTLRTokenType VfrLexer::act190()
{ 
		return (ANTLRTokenType)201;
	}


ANTLRTokenType VfrLexer::act191()
{ 
		return (ANTLRTokenType)202;
	}


ANTLRTokenType VfrLexer::act192()
{ 
		return Dup;
	}


ANTLRTokenType VfrLexer::act193()
{ 
		return VarEqVal;
	}


ANTLRTokenType VfrLexer::act194()
{ 
		return Var;
	}


ANTLRTokenType VfrLexer::act195()
{ 
		return IdEqVal;
	}


ANTLRTokenType VfrLexer::act196()
{ 
		return IdEqId;
	}


ANTLRTokenType VfrLexer::act197()
{ 
		return IdEqValList;
	}


ANTLRTokenType VfrLexer::act198()
{ 
		return QuestionRef;
	}


ANTLRTokenType VfrLexer::act199()
{ 
		return RuleRef;
	}


ANTLRTokenType VfrLexer::act200()
{ 
		return StringRef;
	}


ANTLRTokenType VfrLexer::act201()
{ 
		return PushThis;
	}


ANTLRTokenType VfrLexer::act202()
{ 
		return Security;
	}


ANTLRTokenType VfrLexer::act203()
{ 
		return Get;
	}


ANTLRTokenType VfrLexer::act204()
{ 
		return True;
	}


ANTLRTokenType VfrLexer::act205()
{ 
		return False;
	}


ANTLRTokenType VfrLexer::act206()
{ 
		return One;
	}


ANTLRTokenType VfrLexer::act207()
{ 
		return Ones;
	}


ANTLRTokenType VfrLexer::act208()
{ 
		return Zero;
	}


ANTLRTokenType VfrLexer::act209()
{ 
		return Undefined;
	}


ANTLRTokenType VfrLexer::act210()
{ 
		return Version;
	}


ANTLRTokenType VfrLexer::act211()
{ 
		return Length;
	}


ANTLRTokenType VfrLexer::act212()
{ 
		return AND;
	}


ANTLRTokenType VfrLexer::act213()
{ 
		return OR;
	}


ANTLRTokenType VfrLexer::act214()
{ 
		return NOT;
	}


ANTLRTokenType VfrLexer::act215()
{ 
		return Set;
	}


ANTLRTokenType VfrLexer::act216()
{ 
		return BitWiseNot;
	}


ANTLRTokenType VfrLexer::act217()
{ 
		return BoolVal;
	}


ANTLRTokenType VfrLexer::act218()
{ 
		return StringVal;
	}


ANTLRTokenType VfrLexer::act219()
{ 
		return UnIntVal;
	}


ANTLRTokenType VfrLexer::act220()
{ 
		return ToUpper;
	}


ANTLRTokenType VfrLexer::act221()
{ 
		return ToLower;
	}


ANTLRTokenType VfrLexer::act222()
{ 
		return Match;
	}


ANTLRTokenType VfrLexer::act223()
{ 
		return Match2;
	}


ANTLRTokenType VfrLexer::act224()
{ 
		return Catenate;
	}


ANTLRTokenType VfrLexer::act225()
{ 
		return QuestionRefVal;
	}


ANTLRTokenType VfrLexer::act226()
{ 
		return StringRefVal;
	}


ANTLRTokenType VfrLexer::act227()
{ 
		return Map;
	}


ANTLRTokenType VfrLexer::act228()
{ 
		return RefreshGuid;
	}


ANTLRTokenType VfrLexer::act229()
{ 
		return (ANTLRTokenType)234;
	}


ANTLRTokenType VfrLexer::act230()
{ 
		return (ANTLRTokenType)235;
	}


ANTLRTokenType VfrLexer::act231()
{ 
		return (ANTLRTokenType)236;
	}


ANTLRTokenType VfrLexer::act232()
{ 
		return (ANTLRTokenType)237;
	}


ANTLRTokenType VfrLexer::act233()
{ 
		return (ANTLRTokenType)238;
	}


ANTLRTokenType VfrLexer::act234()
{ 
		return (ANTLRTokenType)239;
	}


ANTLRTokenType VfrLexer::act235()
{ 
		return (ANTLRTokenType)240;
	}


ANTLRTokenType VfrLexer::act236()
{ 
		return (ANTLRTokenType)241;
	}


ANTLRTokenType VfrLexer::act237()
{ 
		return (ANTLRTokenType)242;
	}


ANTLRTokenType VfrLexer::act238()
{ 
		return (ANTLRTokenType)243;
	}


ANTLRTokenType VfrLexer::act239()
{ 
		return (ANTLRTokenType)244;
	}


ANTLRTokenType VfrLexer::act240()
{ 
		return (ANTLRTokenType)245;
	}


ANTLRTokenType VfrLexer::act241()
{ 
		return Cond;
	}


ANTLRTokenType VfrLexer::act242()
{ 
		return Find;
	}


ANTLRTokenType VfrLexer::act243()
{ 
		return Mid;
	}


ANTLRTokenType VfrLexer::act244()
{ 
		return Tok;
	}


ANTLRTokenType VfrLexer::act245()
{ 
		return Span;
	}


ANTLRTokenType VfrLexer::act246()
{ 
		return (ANTLRTokenType)253;
	}


ANTLRTokenType VfrLexer::act247()
{ 
		return (ANTLRTokenType)254;
	}


ANTLRTokenType VfrLexer::act248()
{ 
		return (ANTLRTokenType)255;
	}


ANTLRTokenType VfrLexer::act249()
{ 
		return (ANTLRTokenType)256;
	}


ANTLRTokenType VfrLexer::act250()
{ 
		return (ANTLRTokenType)257;
	}


ANTLRTokenType VfrLexer::act251()
{ 
		return StringIdentifier;
	}


ANTLRTokenType VfrLexer::act252()
{ 
		return Number;
	}

 unsigned char VfrLexer::shift0[257] = {
  0, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  3, 4, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 2, 81, 34, 23, 89, 86, 80, 
  89, 19, 20, 85, 84, 70, 76, 75, 1, 32, 
  30, 29, 28, 27, 33, 26, 33, 31, 33, 72, 
  71, 82, 73, 83, 87, 89, 48, 52, 57, 47, 
  54, 62, 63, 58, 56, 88, 66, 53, 50, 44, 
  45, 51, 65, 59, 64, 49, 55, 46, 69, 78, 
  67, 77, 21, 89, 22, 89, 43, 89, 38, 42, 
  37, 35, 5, 10, 15, 39, 25, 88, 14, 24, 
  12, 9, 11, 13, 68, 8, 40, 7, 41, 36, 
  60, 6, 16, 61, 17, 74, 18, 79, 89, 89, 
  89, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 89, 89, 89, 89, 89, 89, 89, 
  89, 89, 89, 89, 89, 89, 89
};


ANTLRTokenType VfrLexer::act253()
{ 
		return (ANTLRTokenType)1;
	}


ANTLRTokenType VfrLexer::act254()
{ 
    mode (START);   
		return TheString;
	}

 unsigned char VfrLexer::shift1[257] = {
  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1
};


ANTLRTokenType VfrLexer::act255()
{ 
		return (ANTLRTokenType)1;
	}


ANTLRTokenType VfrLexer::act256()
{ 
    skip ();   
		return (ANTLRTokenType)3;
	}


ANTLRTokenType VfrLexer::act257()
{ 
    skip (); mode (START); newline ();   
		return (ANTLRTokenType)4;
	}

 unsigned char VfrLexer::shift2[257] = {
  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1
};


const int VfrLexer::MAX_MODE=3;
const int VfrLexer::DfaStates=1332;
const int VfrLexer::START=0;
const int VfrLexer::QUOTED_STRING=1;
const int VfrLexer::CPP_COMMENT=2;

VfrLexer::DfaState VfrLexer::st0[91] = {
  1, 2, 3, 3, 4, 5, 6, 7, 8, 9, 
  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 
  20, 21, 22, 23, 24, 25, 26, 26, 26, 26, 
  26, 26, 27, 26, 1332, 28, 29, 30, 31, 32, 
  33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 
  43, 6, 44, 45, 46, 47, 48, 49, 50, 51, 
  52, 6, 53, 54, 55, 6, 6, 56, 57, 6, 
  58, 59, 60, 61, 62, 63, 64, 65, 6, 66, 
  67, 68, 69, 70, 71, 72, 73, 74, 6, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st2[91] = {
  1332, 75, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st3[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st4[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st5[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 77, 76, 76, 78, 
  79, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st6[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st7[91] = {
  1332, 1332, 1332, 1332, 1332, 80, 76, 76, 76, 76, 
  76, 81, 76, 76, 76, 76, 82, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 83, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st8[91] = {
  1332, 1332, 1332, 1332, 1332, 84, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 85, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 86, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st9[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 87, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 88, 76, 
  76, 89, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st10[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 90, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 91, 92, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st11[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 93, 94, 
  76, 76, 76, 95, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st12[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 96, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 97, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 98, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st13[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 99, 76, 
  76, 100, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 101, 76, 
  76, 102, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st14[91] = {
  1332, 1332, 1332, 1332, 1332, 103, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st15[91] = {
  1332, 1332, 1332, 1332, 1332, 104, 76, 76, 105, 76, 
  76, 106, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 107, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st16[91] = {
  1332, 1332, 1332, 1332, 1332, 108, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st17[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st18[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st19[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st20[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st21[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st22[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st23[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 109, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 110, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st24[91] = {
  1332, 1332, 1332, 1332, 1332, 111, 76, 76, 76, 76, 
  76, 112, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 113, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 114, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st25[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 115, 
  76, 76, 116, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 117, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st26[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 26, 26, 26, 26, 
  26, 26, 26, 26, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st27[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 118, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 26, 26, 26, 26, 
  26, 26, 26, 26, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st28[91] = {
  1332, 1332, 1332, 1332, 1332, 119, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 120, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 121, 76, 
  76, 122, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st29[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 123, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st30[91] = {
  1332, 1332, 1332, 1332, 1332, 124, 76, 76, 76, 76, 
  76, 125, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 126, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 127, 128, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st31[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 129, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 130, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 131, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st32[91] = {
  1332, 1332, 1332, 1332, 1332, 132, 76, 76, 76, 76, 
  76, 133, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 134, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st33[91] = {
  1332, 1332, 1332, 1332, 1332, 135, 76, 136, 76, 76, 
  76, 76, 76, 137, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 138, 139, 
  76, 140, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st34[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 141, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st35[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 142, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 143, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st36[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 144, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st37[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 145, 146, 76, 76, 76, 
  76, 76, 76, 76, 147, 148, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st38[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 149, 76, 76, 76, 76, 150, 
  76, 151, 76, 76, 76, 76, 76, 76, 76, 152, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st39[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 153, 76, 154, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st40[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 155, 76, 
  76, 76, 76, 76, 156, 76, 157, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st41[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 158, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st42[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 159, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st43[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 160, 76, 76, 161, 76, 
  76, 76, 76, 76, 76, 162, 163, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st44[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 164, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st45[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 165, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st46[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 166, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st47[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 167, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 168, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st48[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 169, 76, 76, 76, 76, 76, 
  170, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st49[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 171, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st50[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 172, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st51[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 173, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st52[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 174, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 175, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st53[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 176, 76, 
  76, 76, 76, 76, 76, 76, 177, 76, 76, 178, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st54[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 179, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st55[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 180, 
  76, 76, 76, 76, 181, 76, 182, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st56[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 183, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st57[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 184, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st58[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st59[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st60[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st61[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 185, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st62[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st63[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st64[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st65[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 186, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st66[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st67[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st68[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 187, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st69[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 188, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 189, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st70[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 190, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 191, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st71[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st72[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st73[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st74[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st75[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st76[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st77[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 192, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st78[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 193, 76, 194, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st79[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 195, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st80[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 196, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st81[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 197, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 198, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 199, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st82[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 200, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st83[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 201, 76, 76, 
  76, 76, 202, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st84[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  203, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 204, 76, 
  205, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st85[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 206, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st86[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 207, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st87[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  208, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st88[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 209, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st89[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 210, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st90[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 211, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st91[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 212, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st92[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 213, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st93[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 214, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st94[91] = {
  1332, 1332, 1332, 1332, 1332, 215, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st95[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 216, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st96[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 217, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 218, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st97[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 219, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 220, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st98[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 221, 222, 76, 76, 
  76, 76, 76, 223, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st99[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 224, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st100[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 225, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st101[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 226, 76, 76, 
  227, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st102[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  228, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st103[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 229, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st104[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 230, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st105[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 231, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st106[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 232, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st107[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 233, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st108[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 234, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st109[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 235, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st110[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 236, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st111[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 237, 
  238, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st112[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 239, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st113[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 240, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st114[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 241, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st115[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 242, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 243, 244, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st116[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 245, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st117[91] = {
  1332, 1332, 1332, 1332, 1332, 246, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st118[91] = {
  1332, 1332, 1332, 1332, 1332, 247, 1332, 1332, 1332, 1332, 
  247, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 247, 247, 247, 247, 
  247, 247, 247, 247, 1332, 247, 1332, 247, 247, 1332, 
  1332, 1332, 247, 1332, 1332, 1332, 1332, 247, 247, 1332, 
  1332, 1332, 247, 1332, 247, 1332, 1332, 247, 1332, 1332, 
  1332, 1332, 247, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st119[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  248, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 249, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st120[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  250, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st121[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 251, 76, 76, 
  76, 76, 76, 76, 76, 76, 252, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st122[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 253, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st123[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 254, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 255, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st124[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 256, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st125[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 257, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st126[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 258, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st127[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 259, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st128[91] = {
  1332, 1332, 1332, 1332, 1332, 260, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st129[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 261, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st130[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 262, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st131[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 263, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st132[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 264, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st133[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 265, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st134[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 266, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st135[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 267, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 268, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st136[91] = {
  1332, 1332, 1332, 1332, 1332, 269, 76, 76, 270, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st137[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 271, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st138[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 272, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st139[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 273, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st140[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 274, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 275, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st141[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 276, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st142[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 277, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st143[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 278, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st144[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 279, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st145[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 280, 76, 76, 76, 76, 281, 
  76, 76, 76, 76, 282, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st146[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 283, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st147[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 284, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st148[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  285, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st149[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 286, 76, 287, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st150[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 288, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st151[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 289, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st152[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st153[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 290, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st154[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 291, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st155[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 292, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st156[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 293, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st157[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 294, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st158[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 295, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st159[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 296, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st160[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 297, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st161[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 298, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st162[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 299, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st163[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 300, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st164[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 301, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st165[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 302, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 303, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st166[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 304, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st167[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 305, 76, 76, 
  76, 76, 76, 76, 76, 76, 306, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st168[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 307, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st169[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 308, 
  76, 309, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 310, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st170[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 311, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st171[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 312, 76, 
  76, 76, 76, 76, 313, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st172[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 314, 76, 76, 76, 315, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st173[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 316, 76, 
  76, 76, 76, 76, 76, 76, 76, 317, 76, 76, 
  76, 76, 76, 76, 318, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st174[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 319, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st175[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 320, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st176[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 321, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st177[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 322, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st178[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 323, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st179[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 324, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st180[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 325, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 326, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st181[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 327, 76, 76, 76, 76, 328, 
  76, 76, 76, 76, 76, 76, 76, 329, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st182[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 330, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st183[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 331, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st184[91] = {
  1332, 1332, 1332, 1332, 1332, 332, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st185[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st186[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 333, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st187[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st188[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st189[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st190[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st191[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st192[91] = {
  1332, 1332, 1332, 1332, 1332, 334, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st193[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 335, 336, 337, 
  338, 339, 76, 340, 76, 341, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 342, 343, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 344, 76, 345, 346, 76, 
  347, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st194[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 348, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st195[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 349, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st196[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 350, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st197[91] = {
  1332, 1332, 1332, 1332, 1332, 351, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st198[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 352, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st199[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 353, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st200[91] = {
  1332, 1332, 1332, 1332, 1332, 354, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st201[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 355, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st202[91] = {
  1332, 1332, 1332, 1332, 1332, 356, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st203[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 357, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st204[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 358, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st205[91] = {
  1332, 1332, 1332, 1332, 1332, 359, 76, 360, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st206[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 361, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st207[91] = {
  1332, 1332, 1332, 1332, 1332, 362, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st208[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 363, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st209[91] = {
  1332, 1332, 1332, 1332, 1332, 364, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st210[91] = {
  1332, 1332, 1332, 1332, 1332, 365, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st211[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 366, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st212[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 367, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st213[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 368, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st214[91] = {
  1332, 1332, 1332, 1332, 1332, 369, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st215[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 370, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st216[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 371, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st217[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 372, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st218[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 373, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st219[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 374, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  375, 376, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st220[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st221[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 377, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 378, 76, 76, 
  379, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st222[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 380, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st223[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 381, 76, 76, 
  76, 76, 76, 76, 76, 382, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st224[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 383, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st225[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st226[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 384, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st227[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  385, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st228[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 386, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st229[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st230[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st231[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 387, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st232[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 388, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st233[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 389, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st234[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 390, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st235[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 391, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st236[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 392, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st237[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 393, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st238[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 394, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st239[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 395, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st240[91] = {
  1332, 1332, 1332, 1332, 1332, 396, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st241[91] = {
  1332, 1332, 1332, 1332, 1332, 397, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st242[91] = {
  1332, 1332, 1332, 1332, 1332, 398, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st243[91] = {
  1332, 1332, 1332, 1332, 1332, 399, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st244[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 400, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st245[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 401, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st246[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 402, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st247[91] = {
  1332, 1332, 1332, 1332, 1332, 247, 1332, 1332, 1332, 1332, 
  247, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 247, 247, 247, 247, 
  247, 247, 247, 247, 1332, 247, 1332, 247, 247, 1332, 
  1332, 1332, 247, 1332, 1332, 1332, 1332, 247, 247, 1332, 
  1332, 1332, 247, 1332, 247, 1332, 1332, 247, 1332, 1332, 
  1332, 1332, 247, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st248[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 403, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st249[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 404, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st250[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 405, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st251[91] = {
  1332, 1332, 1332, 1332, 1332, 406, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 407, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st252[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st253[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st254[91] = {
  1332, 1332, 1332, 1332, 1332, 408, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 409, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  410, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st255[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 411, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st256[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 412, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st257[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  413, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 414, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st258[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  415, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st259[91] = {
  1332, 1332, 1332, 1332, 1332, 416, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st260[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 417, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st261[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 418, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st262[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 419, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st263[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 420, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st264[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 421, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st265[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 422, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st266[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 423, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st267[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st268[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 424, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 425, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st269[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 426, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st270[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 427, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 428, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st271[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 429, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st272[91] = {
  1332, 1332, 1332, 1332, 1332, 430, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st273[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  431, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st274[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 432, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st275[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 433, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 434, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st276[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 435, 
  76, 436, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st277[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 437, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st278[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 438, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st279[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 439, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st280[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 440, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st281[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st282[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  441, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st283[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 442, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st284[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 443, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st285[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 444, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st286[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 445, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st287[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 446, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st288[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 447, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st289[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 448, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st290[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 449, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st291[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 450, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st292[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 451, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st293[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 452, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st294[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 453, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 454, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st295[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st296[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 455, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st297[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 456, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st298[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 457, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st299[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 458, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st300[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 459, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st301[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 460, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st302[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 461, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st303[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 462, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st304[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 463, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st305[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 464, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st306[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 465, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st307[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 466, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st308[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 467, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st309[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 468, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st310[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 469, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st311[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 470, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st312[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 471, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st313[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 472, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st314[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 473, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st315[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 474, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st316[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 475, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st317[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 476, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st318[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 477, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st319[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 478, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st320[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 479, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st321[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 480, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st322[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 481, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st323[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 482, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st324[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 483, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st325[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 484, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st326[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 485, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st327[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 486, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st328[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 487, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st329[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 488, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st330[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 489, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st331[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 490, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st332[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  491, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st333[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 492, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st334[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 493, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st335[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 494, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st336[91] = {
  1332, 1332, 1332, 1332, 1332, 495, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 496, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st337[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 497, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st338[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 498, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st339[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 499, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st340[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 500, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st341[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 501, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st342[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 502, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st343[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  503, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st344[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 504, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st345[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 505, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st346[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 506, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st347[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 507, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 508, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st348[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 509, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st349[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 510, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st350[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st351[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 511, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st352[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  512, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st353[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 513, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st354[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 514, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st355[91] = {
  1332, 1332, 1332, 1332, 1332, 515, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st356[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 516, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st357[91] = {
  1332, 1332, 1332, 1332, 1332, 517, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st358[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st359[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 518, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st360[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 519, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st361[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 520, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st362[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 521, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st363[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 522, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st364[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 523, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st365[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 524, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st366[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 525, 526, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 527, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  528, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st367[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  529, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st368[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st369[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 530, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st370[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  531, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st371[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 532, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st372[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 533, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st373[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 534, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st374[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 535, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st375[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 536, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st376[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 537, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st377[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 538, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st378[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 539, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st379[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 540, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st380[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 541, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st381[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 542, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st382[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 543, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st383[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 544, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st384[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st385[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  545, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st386[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 546, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st387[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 547, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st388[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st389[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 548, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st390[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st391[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 549, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st392[91] = {
  1332, 1332, 1332, 1332, 1332, 550, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st393[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 551, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st394[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st395[91] = {
  1332, 1332, 1332, 1332, 1332, 552, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st396[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st397[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 553, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st398[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 554, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st399[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 555, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st400[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 556, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st401[91] = {
  1332, 1332, 1332, 1332, 1332, 557, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st402[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 558, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 559, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st403[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 560, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st404[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 561, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st405[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 562, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st406[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st407[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 563, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st408[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 564, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st409[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 565, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st410[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 566, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 567, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st411[91] = {
  1332, 1332, 1332, 1332, 1332, 568, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st412[91] = {
  1332, 1332, 1332, 1332, 1332, 569, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st413[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 570, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st414[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st415[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  571, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st416[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 572, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st417[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 573, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st418[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 574, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st419[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 575, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st420[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 576, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st421[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st422[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st423[91] = {
  1332, 1332, 1332, 1332, 1332, 577, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st424[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 578, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st425[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 579, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st426[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st427[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 580, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st428[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 581, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st429[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st430[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st431[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st432[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 582, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st433[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 583, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st434[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 584, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st435[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 585, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st436[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 586, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st437[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 587, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st438[91] = {
  1332, 1332, 1332, 1332, 1332, 588, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st439[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 589, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st440[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 590, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st441[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 591, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st442[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 592, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st443[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 593, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st444[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 594, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st445[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 595, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st446[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st447[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 596, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st448[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 597, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st449[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 598, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st450[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 599, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st451[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 600, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st452[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 601, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st453[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 602, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st454[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 603, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st455[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st456[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 604, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st457[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 605, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st458[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 606, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st459[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 607, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st460[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 608, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st461[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 609, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st462[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 610, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st463[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 611, 76, 
  76, 76, 76, 76, 612, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st464[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 613, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st465[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 614, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st466[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 615, 76, 616, 76, 
  617, 618, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st467[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 619, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st468[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 620, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st469[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 621, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st470[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 622, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st471[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  623, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st472[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 624, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st473[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 625, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st474[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 626, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st475[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 627, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st476[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 628, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st477[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 629, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st478[91] = {
  1332, 1332, 1332, 1332, 1332, 630, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st479[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 631, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st480[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 632, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st481[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 633, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st482[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 634, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st483[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 635, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st484[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 636, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st485[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 637, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st486[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 638, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st487[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 639, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st488[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 640, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st489[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 641, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st490[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 642, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st491[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 643, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st492[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st493[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 644, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st494[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 645, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st495[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  646, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st496[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 647, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st497[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 648, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st498[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 649, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st499[91] = {
  1332, 1332, 1332, 1332, 1332, 650, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st500[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  651, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st501[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 652, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st502[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  653, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st503[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st504[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 654, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st505[91] = {
  1332, 1332, 1332, 1332, 1332, 655, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st506[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 656, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st507[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 657, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st508[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 658, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st509[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 659, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st510[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 660, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st511[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st512[91] = {
  1332, 1332, 1332, 1332, 1332, 661, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st513[91] = {
  1332, 1332, 1332, 1332, 1332, 662, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st514[91] = {
  1332, 1332, 1332, 1332, 1332, 663, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st515[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st516[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 664, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st517[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  665, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st518[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 666, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st519[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 667, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st520[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st521[91] = {
  1332, 1332, 1332, 1332, 1332, 668, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st522[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 669, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st523[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 670, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st524[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 671, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st525[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 672, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st526[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 673, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st527[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 674, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st528[91] = {
  1332, 1332, 1332, 1332, 1332, 675, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st529[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st530[91] = {
  1332, 1332, 1332, 1332, 1332, 676, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st531[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st532[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 677, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st533[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st534[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st535[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 678, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st536[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 679, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st537[91] = {
  1332, 1332, 1332, 1332, 1332, 680, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st538[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 681, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st539[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 682, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st540[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 683, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st541[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 684, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st542[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 685, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st543[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 686, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st544[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 687, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st545[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 688, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st546[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 689, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st547[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 690, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st548[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 691, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st549[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 692, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st550[91] = {
  1332, 1332, 693, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st551[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 694, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st552[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 695, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st553[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st554[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 696, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st555[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 697, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st556[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  698, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st557[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st558[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 699, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st559[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 700, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st560[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 701, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st561[91] = {
  1332, 1332, 1332, 1332, 1332, 702, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st562[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 703, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st563[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 704, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st564[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 705, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st565[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st566[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 706, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st567[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 707, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st568[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st569[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 708, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st570[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 709, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st571[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 710, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st572[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 711, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st573[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 712, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st574[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 713, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st575[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st576[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 714, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st577[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 715, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st578[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 716, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st579[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 717, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st580[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 718, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st581[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 719, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st582[91] = {
  1332, 1332, 1332, 1332, 1332, 720, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st583[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 721, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st584[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 722, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st585[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 723, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st586[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st587[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 724, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st588[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 725, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st589[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 726, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st590[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 727, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st591[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 728, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st592[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 729, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st593[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 730, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st594[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 731, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st595[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 732, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st596[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 733, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st597[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 734, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st598[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 735, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st599[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 736, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st600[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 737, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st601[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 738, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st602[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 739, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st603[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 740, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st604[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 741, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st605[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 742, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st606[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 743, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st607[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 744, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st608[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 745, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st609[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 746, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st610[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 747, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st611[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 748, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st612[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 749, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st613[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 750, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st614[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 751, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st615[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 752, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st616[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 753, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st617[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 754, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st618[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st619[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 755, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st620[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 756, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st621[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 757, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st622[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 758, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st623[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 759, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st624[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 760, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st625[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 761, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st626[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 762, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st627[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 763, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st628[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 764, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st629[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 765, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st630[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st631[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 766, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st632[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st633[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 767, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st634[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 768, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st635[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 769, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st636[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 770, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st637[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 771, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st638[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 772, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st639[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 773, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st640[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 774, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st641[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 775, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st642[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 776, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st643[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 777, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st644[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st645[91] = {
  1332, 1332, 1332, 1332, 1332, 778, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st646[91] = {
  1332, 1332, 1332, 1332, 1332, 779, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st647[91] = {
  1332, 1332, 1332, 1332, 1332, 780, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st648[91] = {
  1332, 1332, 1332, 1332, 1332, 781, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st649[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 782, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st650[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 783, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st651[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  784, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st652[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 785, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st653[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 786, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st654[91] = {
  1332, 1332, 1332, 1332, 1332, 787, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st655[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 788, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st656[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 789, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st657[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 790, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st658[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 791, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st659[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 792, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st660[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  793, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st661[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 794, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st662[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 795, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st663[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  796, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st664[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 797, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st665[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 798, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st666[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 799, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st667[91] = {
  1332, 1332, 1332, 1332, 1332, 800, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st668[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  801, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st669[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 802, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st670[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 803, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st671[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 804, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st672[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 805, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st673[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 806, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st674[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st675[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 807, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st676[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 808, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st677[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st678[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 809, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st679[91] = {
  1332, 1332, 1332, 1332, 1332, 810, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st680[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st681[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 811, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st682[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 812, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st683[91] = {
  1332, 1332, 1332, 1332, 1332, 813, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st684[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st685[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 814, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st686[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 815, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st687[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st688[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 816, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st689[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 817, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st690[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 818, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st691[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st692[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 819, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st693[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 820, 820, 820, 820, 
  820, 820, 820, 820, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st694[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st695[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st696[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 821, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st697[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 822, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st698[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 823, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st699[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st700[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 824, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st701[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 825, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st702[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 826, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st703[91] = {
  1332, 1332, 1332, 1332, 1332, 827, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st704[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 828, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st705[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 829, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st706[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 830, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st707[91] = {
  1332, 1332, 1332, 1332, 1332, 831, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st708[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st709[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st710[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 832, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st711[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 833, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st712[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 834, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st713[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 835, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st714[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st715[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st716[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st717[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 836, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st718[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 837, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 838, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st719[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st720[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  839, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st721[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 840, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st722[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  841, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st723[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 842, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st724[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 843, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st725[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st726[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 844, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st727[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 845, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st728[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 846, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st729[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 847, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st730[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 848, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st731[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 849, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st732[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 850, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st733[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 851, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st734[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 852, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 853, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st735[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 854, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st736[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 855, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st737[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 856, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st738[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 857, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st739[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 858, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st740[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 859, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st741[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 860, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st742[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 861, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st743[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 862, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st744[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 863, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st745[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 864, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st746[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 865, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st747[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 866, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st748[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 867, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st749[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 868, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st750[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 869, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st751[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st752[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st753[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st754[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st755[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 870, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st756[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 871, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st757[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 872, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st758[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 873, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st759[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st760[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 874, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st761[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 875, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st762[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 876, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st763[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 877, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st764[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 878, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st765[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 879, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st766[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 880, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st767[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 881, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st768[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 882, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st769[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 883, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st770[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 884, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st771[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 885, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st772[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 886, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st773[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 887, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st774[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 888, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st775[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 889, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st776[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 890, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st777[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 891, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st778[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st779[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 892, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st780[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st781[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 893, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st782[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  894, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st783[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  895, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st784[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  896, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st785[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 897, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st786[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st787[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st788[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 898, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st789[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 899, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st790[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 900, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st791[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 901, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st792[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 902, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st793[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 903, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st794[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st795[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st796[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st797[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st798[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 904, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st799[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 905, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st800[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st801[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st802[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 906, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st803[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 907, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st804[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st805[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st806[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 908, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st807[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 909, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 910, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st808[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 911, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st809[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st810[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st811[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st812[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 912, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st813[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st814[91] = {
  1332, 1332, 1332, 1332, 1332, 913, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st815[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st816[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 914, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st817[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  915, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st818[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 916, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st819[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st820[91] = {
  1332, 1332, 917, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 820, 820, 820, 820, 
  820, 820, 820, 820, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st821[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 918, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st822[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 919, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st823[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  920, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st824[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 921, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st825[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  922, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st826[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 923, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st827[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 924, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st828[91] = {
  1332, 1332, 1332, 1332, 1332, 925, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st829[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 926, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st830[91] = {
  1332, 1332, 1332, 1332, 1332, 927, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st831[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st832[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 928, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st833[91] = {
  1332, 1332, 1332, 1332, 1332, 929, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st834[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 930, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st835[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 931, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st836[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 932, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st837[91] = {
  1332, 1332, 1332, 1332, 1332, 933, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st838[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 934, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st839[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  935, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st840[91] = {
  1332, 1332, 1332, 1332, 1332, 936, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st841[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  937, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st842[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 938, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st843[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st844[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 939, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st845[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 940, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st846[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st847[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 941, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st848[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 942, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st849[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 943, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st850[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 944, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st851[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 945, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st852[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 946, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st853[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 947, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st854[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st855[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 948, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st856[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 949, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st857[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st858[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 950, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st859[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 951, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st860[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 952, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st861[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 953, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st862[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 954, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st863[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 955, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st864[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st865[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 956, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st866[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 957, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st867[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 958, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st868[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 959, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st869[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 960, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st870[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 961, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st871[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 962, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st872[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 963, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st873[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 964, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st874[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 965, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st875[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 966, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st876[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 967, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st877[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 968, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st878[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 969, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st879[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 970, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st880[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 971, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st881[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 972, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st882[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 973, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st883[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 974, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st884[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 975, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st885[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 976, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st886[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 977, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st887[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 978, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st888[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 979, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st889[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 980, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st890[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 981, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st891[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 982, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st892[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 983, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st893[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 984, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st894[91] = {
  1332, 1332, 1332, 1332, 1332, 985, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st895[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st896[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 986, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st897[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 987, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st898[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 988, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st899[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 989, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st900[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 990, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st901[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 991, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st902[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st903[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 992, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st904[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 993, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st905[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 994, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st906[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 995, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st907[91] = {
  1332, 1332, 1332, 1332, 1332, 996, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st908[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 997, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st909[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 998, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st910[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 999, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st911[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 1000, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st912[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 1001, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st913[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st914[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st915[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st916[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  1002, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st917[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1003, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st918[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st919[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1004, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st920[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 1005, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st921[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 1006, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st922[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 1007, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st923[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 1008, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st924[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  1009, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st925[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st926[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st927[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 1010, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st928[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 1011, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st929[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st930[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st931[91] = {
  1332, 1332, 1332, 1332, 1332, 1012, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st932[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st933[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  1013, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st934[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1014, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st935[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 1015, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st936[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st937[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st938[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st939[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1016, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st940[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1017, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st941[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1018, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st942[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1019, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st943[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1020, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st944[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1021, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st945[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1022, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st946[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1023, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st947[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1024, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st948[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1025, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st949[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1026, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st950[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1027, 1028, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st951[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1029, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st952[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 1030, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st953[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1031, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st954[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1032, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st955[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1033, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st956[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1034, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st957[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 1035, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st958[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1036, 76, 1037, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1038, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st959[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1039, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st960[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1040, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st961[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1041, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st962[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1042, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st963[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1043, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st964[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1044, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st965[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 1045, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st966[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 1046, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st967[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1047, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st968[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1048, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st969[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1049, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st970[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1050, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st971[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  1051, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st972[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1052, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st973[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 1053, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st974[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1054, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st975[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1055, 76, 76, 76, 76, 1056, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1057, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st976[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1058, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st977[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1059, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st978[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 1060, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st979[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1061, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st980[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1062, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st981[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 1063, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st982[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 1064, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 1065, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st983[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 1066, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st984[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 1067, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st985[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 1068, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st986[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 1069, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st987[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st988[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 1070, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st989[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st990[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st991[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1071, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st992[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 1072, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st993[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 1073, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st994[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 1074, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st995[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  1075, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st996[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 1076, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st997[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 1077, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st998[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 1078, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st999[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1000[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  1079, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1001[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 1080, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1002[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1003[91] = {
  1332, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1332, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1332
};

VfrLexer::DfaState VfrLexer::st1004[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1005[91] = {
  1332, 1332, 1332, 1332, 1332, 1082, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1006[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  1083, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1007[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 1084, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1008[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 1085, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1009[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1010[91] = {
  1332, 1332, 1332, 1332, 1332, 1086, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1011[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1012[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1013[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 1087, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1014[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1015[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  1088, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1016[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1089, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1017[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1090, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1018[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1019[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1091, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1020[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1092, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1021[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1093, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1022[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1094, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1023[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 1095, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1024[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1096, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1025[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1097, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1026[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1098, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1027[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1099, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1028[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1100, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1029[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1101, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1030[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 1102, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1031[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1103, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1032[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1104, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1033[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 1105, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1034[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1106, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1035[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1107, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1036[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1108, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1037[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1109, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1038[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1110, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1039[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 1111, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1040[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1041[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1112, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1042[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1113, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1043[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1114, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1044[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1115, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1045[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1116, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1046[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1117, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1047[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 1118, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1048[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1049[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 1119, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1050[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1120, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1051[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1052[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 1121, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1053[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1122, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1054[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 1123, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1055[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1124, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1056[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1125, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1057[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1126, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1058[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1127, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1059[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1060[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 1128, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1061[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 1129, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1062[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1130, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1063[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1131, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1064[91] = {
  1332, 1332, 1332, 1332, 1332, 1132, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1065[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 1133, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1066[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 1134, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1067[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1068[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1069[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 1135, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1070[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 1136, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1071[91] = {
  1332, 1332, 1332, 1332, 1332, 1137, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1072[91] = {
  1332, 1332, 1332, 1332, 1332, 1138, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1073[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 1139, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1074[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 1140, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1075[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1076[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 1141, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1077[91] = {
  1332, 1332, 1332, 1332, 1332, 1142, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1078[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 1143, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1079[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 1144, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1080[91] = {
  1332, 1332, 1332, 1332, 1332, 1145, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1081[91] = {
  1332, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1146, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 1081, 
  1332
};

VfrLexer::DfaState VfrLexer::st1082[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 1147, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1083[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 1148, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1084[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 1149, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1085[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1086[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 1150, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1087[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 1151, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1088[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1089[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1152, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1090[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1091[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1153, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1092[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1154, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1093[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1155, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1094[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1156, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1095[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1157, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1096[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 1158, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1097[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1159, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1098[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1160, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1099[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1161, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1100[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1162, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1101[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1163, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1102[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1164, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1103[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1165, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1104[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1105[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 1166, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1106[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1107[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1167, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1108[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1168, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1109[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1169, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1110[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 1170, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1111[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 1171, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1112[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1172, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1113[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1173, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1114[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1174, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1115[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1175, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1116[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1176, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1117[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1177, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1118[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1119[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1178, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1120[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1179, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1121[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1180, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1122[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1123[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 1181, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1124[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1182, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1125[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1183, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1126[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1184, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1127[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1185, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1128[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1186, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1129[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 1187, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1130[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1131[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1188, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1132[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  1189, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1133[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1134[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 1190, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1135[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1136[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1137[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1138[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1139[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1140[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1141[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 1191, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1142[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1143[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1144[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1145[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 1192, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1146[91] = {
  1332, 1332, 1193, 1193, 1194, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1147[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 1195, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1148[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1149[91] = {
  1332, 1332, 1332, 1332, 1332, 1196, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1150[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 1197, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1151[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1198, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1152[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1199, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1153[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1200, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1154[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1201, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1155[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1202, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1156[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1203, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1157[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1204, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1158[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1205, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1159[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1206, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1160[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1207, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1161[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1208, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1162[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 1209, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1163[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1164[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1210, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1165[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1211, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1166[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1212, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1167[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1213, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1168[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1214, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1169[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1215, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1170[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1171[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1216, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1172[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1173[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1217, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1174[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1175[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1176[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 1218, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1177[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1219, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1178[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1220, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1179[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1221, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1180[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1222, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1181[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 1223, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1182[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1224, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1183[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1225, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1184[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1226, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1185[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1227, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1186[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1228, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1187[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1229, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1188[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1230, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1189[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 1231, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1190[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 1232, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1191[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  1233, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1192[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  1234, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1193[91] = {
  1332, 1332, 1193, 1193, 1194, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1194[91] = {
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1195[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 1235, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1196[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1197[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 1236, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1198[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1199[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 1237, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1200[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1238, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1201[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 1239, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1202[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1240, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1203[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1204[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 1241, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1205[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1206[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1207[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1208[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 1242, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1209[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1243, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1210[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1244, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1211[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 1245, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1212[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1246, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1213[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1247, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1214[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1215[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1216[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1248, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1217[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1218[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1249, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1219[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1250, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1220[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1251, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1221[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1252, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1222[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1253, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1223[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1254, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1224[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1255, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1225[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1226[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1256, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1227[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1228[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1257, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1229[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1258, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1230[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1259, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1231[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 1260, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1232[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 1261, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1233[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 1262, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1234[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1235[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  1263, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1236[91] = {
  1332, 1332, 1332, 1332, 1332, 1264, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1237[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1265, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1238[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1266, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1239[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 1267, 76, 1268, 
  1269, 1270, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1240[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1271, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1241[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1272, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1242[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1273, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1274, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1243[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1275, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1244[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1276, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1245[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1246[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1277, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1247[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1278, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1248[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1249[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1279, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1250[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1251[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1280, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1252[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1281, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1253[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1282, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1254[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1283, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1255[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 1284, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1256[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 1285, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1257[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1286, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1258[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1287, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1259[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1260[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 1288, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1261[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1262[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 1289, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1263[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1264[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1265[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1290, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1266[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1267[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1268[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1269[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1270[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1271[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1272[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 1291, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1273[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1292, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1274[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1293, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1275[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1294, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1276[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1277[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1295, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1278[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1279[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 1296, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1280[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1297, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1281[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1282[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1298, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1283[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 1299, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1284[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1285[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1286[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1300, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1287[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1301, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1288[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1289[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 1302, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1290[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 1303, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1291[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1304, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1292[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1305, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1293[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1306, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1294[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1295[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1296[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1307, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1297[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1308, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1298[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1299[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 1309, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1300[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1310, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1301[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1302[91] = {
  1332, 1332, 1332, 1332, 1332, 1311, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1303[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1304[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 1312, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1305[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1306[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1307[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 1313, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1308[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1314, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1309[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 1315, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1310[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1316, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1311[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1312[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 1317, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1313[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1318, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1314[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1319, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1315[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 1320, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1316[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1317[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1318[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 1321, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1319[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1320[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1322, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1321[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 1323, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1322[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1323[91] = {
  1332, 1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 1332, 1332, 1332, 
  1332, 1332, 1332, 1332, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 1332, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 76, 1332, 
  1332, 1332, 1332, 1332, 1332, 1332, 1332, 1332, 76, 1332, 
  1332
};

VfrLexer::DfaState VfrLexer::st1324[4] = {
  1325, 1326, 1327, 1332
};

VfrLexer::DfaState VfrLexer::st1325[4] = {
  1332, 1332, 1332, 1332
};

VfrLexer::DfaState VfrLexer::st1326[4] = {
  1332, 1326, 1327, 1332
};

VfrLexer::DfaState VfrLexer::st1327[4] = {
  1332, 1332, 1332, 1332
};

VfrLexer::DfaState VfrLexer::st1328[4] = {
  1329, 1330, 1331, 1332
};

VfrLexer::DfaState VfrLexer::st1329[4] = {
  1332, 1332, 1332, 1332
};

VfrLexer::DfaState VfrLexer::st1330[4] = {
  1332, 1330, 1332, 1332
};

VfrLexer::DfaState VfrLexer::st1331[4] = {
  1332, 1332, 1332, 1332
};


VfrLexer::DfaState *VfrLexer::dfa[1332] = {
	st0,
	st1,
	st2,
	st3,
	st4,
	st5,
	st6,
	st7,
	st8,
	st9,
	st10,
	st11,
	st12,
	st13,
	st14,
	st15,
	st16,
	st17,
	st18,
	st19,
	st20,
	st21,
	st22,
	st23,
	st24,
	st25,
	st26,
	st27,
	st28,
	st29,
	st30,
	st31,
	st32,
	st33,
	st34,
	st35,
	st36,
	st37,
	st38,
	st39,
	st40,
	st41,
	st42,
	st43,
	st44,
	st45,
	st46,
	st47,
	st48,
	st49,
	st50,
	st51,
	st52,
	st53,
	st54,
	st55,
	st56,
	st57,
	st58,
	st59,
	st60,
	st61,
	st62,
	st63,
	st64,
	st65,
	st66,
	st67,
	st68,
	st69,
	st70,
	st71,
	st72,
	st73,
	st74,
	st75,
	st76,
	st77,
	st78,
	st79,
	st80,
	st81,
	st82,
	st83,
	st84,
	st85,
	st86,
	st87,
	st88,
	st89,
	st90,
	st91,
	st92,
	st93,
	st94,
	st95,
	st96,
	st97,
	st98,
	st99,
	st100,
	st101,
	st102,
	st103,
	st104,
	st105,
	st106,
	st107,
	st108,
	st109,
	st110,
	st111,
	st112,
	st113,
	st114,
	st115,
	st116,
	st117,
	st118,
	st119,
	st120,
	st121,
	st122,
	st123,
	st124,
	st125,
	st126,
	st127,
	st128,
	st129,
	st130,
	st131,
	st132,
	st133,
	st134,
	st135,
	st136,
	st137,
	st138,
	st139,
	st140,
	st141,
	st142,
	st143,
	st144,
	st145,
	st146,
	st147,
	st148,
	st149,
	st150,
	st151,
	st152,
	st153,
	st154,
	st155,
	st156,
	st157,
	st158,
	st159,
	st160,
	st161,
	st162,
	st163,
	st164,
	st165,
	st166,
	st167,
	st168,
	st169,
	st170,
	st171,
	st172,
	st173,
	st174,
	st175,
	st176,
	st177,
	st178,
	st179,
	st180,
	st181,
	st182,
	st183,
	st184,
	st185,
	st186,
	st187,
	st188,
	st189,
	st190,
	st191,
	st192,
	st193,
	st194,
	st195,
	st196,
	st197,
	st198,
	st199,
	st200,
	st201,
	st202,
	st203,
	st204,
	st205,
	st206,
	st207,
	st208,
	st209,
	st210,
	st211,
	st212,
	st213,
	st214,
	st215,
	st216,
	st217,
	st218,
	st219,
	st220,
	st221,
	st222,
	st223,
	st224,
	st225,
	st226,
	st227,
	st228,
	st229,
	st230,
	st231,
	st232,
	st233,
	st234,
	st235,
	st236,
	st237,
	st238,
	st239,
	st240,
	st241,
	st242,
	st243,
	st244,
	st245,
	st246,
	st247,
	st248,
	st249,
	st250,
	st251,
	st252,
	st253,
	st254,
	st255,
	st256,
	st257,
	st258,
	st259,
	st260,
	st261,
	st262,
	st263,
	st264,
	st265,
	st266,
	st267,
	st268,
	st269,
	st270,
	st271,
	st272,
	st273,
	st274,
	st275,
	st276,
	st277,
	st278,
	st279,
	st280,
	st281,
	st282,
	st283,
	st284,
	st285,
	st286,
	st287,
	st288,
	st289,
	st290,
	st291,
	st292,
	st293,
	st294,
	st295,
	st296,
	st297,
	st298,
	st299,
	st300,
	st301,
	st302,
	st303,
	st304,
	st305,
	st306,
	st307,
	st308,
	st309,
	st310,
	st311,
	st312,
	st313,
	st314,
	st315,
	st316,
	st317,
	st318,
	st319,
	st320,
	st321,
	st322,
	st323,
	st324,
	st325,
	st326,
	st327,
	st328,
	st329,
	st330,
	st331,
	st332,
	st333,
	st334,
	st335,
	st336,
	st337,
	st338,
	st339,
	st340,
	st341,
	st342,
	st343,
	st344,
	st345,
	st346,
	st347,
	st348,
	st349,
	st350,
	st351,
	st352,
	st353,
	st354,
	st355,
	st356,
	st357,
	st358,
	st359,
	st360,
	st361,
	st362,
	st363,
	st364,
	st365,
	st366,
	st367,
	st368,
	st369,
	st370,
	st371,
	st372,
	st373,
	st374,
	st375,
	st376,
	st377,
	st378,
	st379,
	st380,
	st381,
	st382,
	st383,
	st384,
	st385,
	st386,
	st387,
	st388,
	st389,
	st390,
	st391,
	st392,
	st393,
	st394,
	st395,
	st396,
	st397,
	st398,
	st399,
	st400,
	st401,
	st402,
	st403,
	st404,
	st405,
	st406,
	st407,
	st408,
	st409,
	st410,
	st411,
	st412,
	st413,
	st414,
	st415,
	st416,
	st417,
	st418,
	st419,
	st420,
	st421,
	st422,
	st423,
	st424,
	st425,
	st426,
	st427,
	st428,
	st429,
	st430,
	st431,
	st432,
	st433,
	st434,
	st435,
	st436,
	st437,
	st438,
	st439,
	st440,
	st441,
	st442,
	st443,
	st444,
	st445,
	st446,
	st447,
	st448,
	st449,
	st450,
	st451,
	st452,
	st453,
	st454,
	st455,
	st456,
	st457,
	st458,
	st459,
	st460,
	st461,
	st462,
	st463,
	st464,
	st465,
	st466,
	st467,
	st468,
	st469,
	st470,
	st471,
	st472,
	st473,
	st474,
	st475,
	st476,
	st477,
	st478,
	st479,
	st480,
	st481,
	st482,
	st483,
	st484,
	st485,
	st486,
	st487,
	st488,
	st489,
	st490,
	st491,
	st492,
	st493,
	st494,
	st495,
	st496,
	st497,
	st498,
	st499,
	st500,
	st501,
	st502,
	st503,
	st504,
	st505,
	st506,
	st507,
	st508,
	st509,
	st510,
	st511,
	st512,
	st513,
	st514,
	st515,
	st516,
	st517,
	st518,
	st519,
	st520,
	st521,
	st522,
	st523,
	st524,
	st525,
	st526,
	st527,
	st528,
	st529,
	st530,
	st531,
	st532,
	st533,
	st534,
	st535,
	st536,
	st537,
	st538,
	st539,
	st540,
	st541,
	st542,
	st543,
	st544,
	st545,
	st546,
	st547,
	st548,
	st549,
	st550,
	st551,
	st552,
	st553,
	st554,
	st555,
	st556,
	st557,
	st558,
	st559,
	st560,
	st561,
	st562,
	st563,
	st564,
	st565,
	st566,
	st567,
	st568,
	st569,
	st570,
	st571,
	st572,
	st573,
	st574,
	st575,
	st576,
	st577,
	st578,
	st579,
	st580,
	st581,
	st582,
	st583,
	st584,
	st585,
	st586,
	st587,
	st588,
	st589,
	st590,
	st591,
	st592,
	st593,
	st594,
	st595,
	st596,
	st597,
	st598,
	st599,
	st600,
	st601,
	st602,
	st603,
	st604,
	st605,
	st606,
	st607,
	st608,
	st609,
	st610,
	st611,
	st612,
	st613,
	st614,
	st615,
	st616,
	st617,
	st618,
	st619,
	st620,
	st621,
	st622,
	st623,
	st624,
	st625,
	st626,
	st627,
	st628,
	st629,
	st630,
	st631,
	st632,
	st633,
	st634,
	st635,
	st636,
	st637,
	st638,
	st639,
	st640,
	st641,
	st642,
	st643,
	st644,
	st645,
	st646,
	st647,
	st648,
	st649,
	st650,
	st651,
	st652,
	st653,
	st654,
	st655,
	st656,
	st657,
	st658,
	st659,
	st660,
	st661,
	st662,
	st663,
	st664,
	st665,
	st666,
	st667,
	st668,
	st669,
	st670,
	st671,
	st672,
	st673,
	st674,
	st675,
	st676,
	st677,
	st678,
	st679,
	st680,
	st681,
	st682,
	st683,
	st684,
	st685,
	st686,
	st687,
	st688,
	st689,
	st690,
	st691,
	st692,
	st693,
	st694,
	st695,
	st696,
	st697,
	st698,
	st699,
	st700,
	st701,
	st702,
	st703,
	st704,
	st705,
	st706,
	st707,
	st708,
	st709,
	st710,
	st711,
	st712,
	st713,
	st714,
	st715,
	st716,
	st717,
	st718,
	st719,
	st720,
	st721,
	st722,
	st723,
	st724,
	st725,
	st726,
	st727,
	st728,
	st729,
	st730,
	st731,
	st732,
	st733,
	st734,
	st735,
	st736,
	st737,
	st738,
	st739,
	st740,
	st741,
	st742,
	st743,
	st744,
	st745,
	st746,
	st747,
	st748,
	st749,
	st750,
	st751,
	st752,
	st753,
	st754,
	st755,
	st756,
	st757,
	st758,
	st759,
	st760,
	st761,
	st762,
	st763,
	st764,
	st765,
	st766,
	st767,
	st768,
	st769,
	st770,
	st771,
	st772,
	st773,
	st774,
	st775,
	st776,
	st777,
	st778,
	st779,
	st780,
	st781,
	st782,
	st783,
	st784,
	st785,
	st786,
	st787,
	st788,
	st789,
	st790,
	st791,
	st792,
	st793,
	st794,
	st795,
	st796,
	st797,
	st798,
	st799,
	st800,
	st801,
	st802,
	st803,
	st804,
	st805,
	st806,
	st807,
	st808,
	st809,
	st810,
	st811,
	st812,
	st813,
	st814,
	st815,
	st816,
	st817,
	st818,
	st819,
	st820,
	st821,
	st822,
	st823,
	st824,
	st825,
	st826,
	st827,
	st828,
	st829,
	st830,
	st831,
	st832,
	st833,
	st834,
	st835,
	st836,
	st837,
	st838,
	st839,
	st840,
	st841,
	st842,
	st843,
	st844,
	st845,
	st846,
	st847,
	st848,
	st849,
	st850,
	st851,
	st852,
	st853,
	st854,
	st855,
	st856,
	st857,
	st858,
	st859,
	st860,
	st861,
	st862,
	st863,
	st864,
	st865,
	st866,
	st867,
	st868,
	st869,
	st870,
	st871,
	st872,
	st873,
	st874,
	st875,
	st876,
	st877,
	st878,
	st879,
	st880,
	st881,
	st882,
	st883,
	st884,
	st885,
	st886,
	st887,
	st888,
	st889,
	st890,
	st891,
	st892,
	st893,
	st894,
	st895,
	st896,
	st897,
	st898,
	st899,
	st900,
	st901,
	st902,
	st903,
	st904,
	st905,
	st906,
	st907,
	st908,
	st909,
	st910,
	st911,
	st912,
	st913,
	st914,
	st915,
	st916,
	st917,
	st918,
	st919,
	st920,
	st921,
	st922,
	st923,
	st924,
	st925,
	st926,
	st927,
	st928,
	st929,
	st930,
	st931,
	st932,
	st933,
	st934,
	st935,
	st936,
	st937,
	st938,
	st939,
	st940,
	st941,
	st942,
	st943,
	st944,
	st945,
	st946,
	st947,
	st948,
	st949,
	st950,
	st951,
	st952,
	st953,
	st954,
	st955,
	st956,
	st957,
	st958,
	st959,
	st960,
	st961,
	st962,
	st963,
	st964,
	st965,
	st966,
	st967,
	st968,
	st969,
	st970,
	st971,
	st972,
	st973,
	st974,
	st975,
	st976,
	st977,
	st978,
	st979,
	st980,
	st981,
	st982,
	st983,
	st984,
	st985,
	st986,
	st987,
	st988,
	st989,
	st990,
	st991,
	st992,
	st993,
	st994,
	st995,
	st996,
	st997,
	st998,
	st999,
	st1000,
	st1001,
	st1002,
	st1003,
	st1004,
	st1005,
	st1006,
	st1007,
	st1008,
	st1009,
	st1010,
	st1011,
	st1012,
	st1013,
	st1014,
	st1015,
	st1016,
	st1017,
	st1018,
	st1019,
	st1020,
	st1021,
	st1022,
	st1023,
	st1024,
	st1025,
	st1026,
	st1027,
	st1028,
	st1029,
	st1030,
	st1031,
	st1032,
	st1033,
	st1034,
	st1035,
	st1036,
	st1037,
	st1038,
	st1039,
	st1040,
	st1041,
	st1042,
	st1043,
	st1044,
	st1045,
	st1046,
	st1047,
	st1048,
	st1049,
	st1050,
	st1051,
	st1052,
	st1053,
	st1054,
	st1055,
	st1056,
	st1057,
	st1058,
	st1059,
	st1060,
	st1061,
	st1062,
	st1063,
	st1064,
	st1065,
	st1066,
	st1067,
	st1068,
	st1069,
	st1070,
	st1071,
	st1072,
	st1073,
	st1074,
	st1075,
	st1076,
	st1077,
	st1078,
	st1079,
	st1080,
	st1081,
	st1082,
	st1083,
	st1084,
	st1085,
	st1086,
	st1087,
	st1088,
	st1089,
	st1090,
	st1091,
	st1092,
	st1093,
	st1094,
	st1095,
	st1096,
	st1097,
	st1098,
	st1099,
	st1100,
	st1101,
	st1102,
	st1103,
	st1104,
	st1105,
	st1106,
	st1107,
	st1108,
	st1109,
	st1110,
	st1111,
	st1112,
	st1113,
	st1114,
	st1115,
	st1116,
	st1117,
	st1118,
	st1119,
	st1120,
	st1121,
	st1122,
	st1123,
	st1124,
	st1125,
	st1126,
	st1127,
	st1128,
	st1129,
	st1130,
	st1131,
	st1132,
	st1133,
	st1134,
	st1135,
	st1136,
	st1137,
	st1138,
	st1139,
	st1140,
	st1141,
	st1142,
	st1143,
	st1144,
	st1145,
	st1146,
	st1147,
	st1148,
	st1149,
	st1150,
	st1151,
	st1152,
	st1153,
	st1154,
	st1155,
	st1156,
	st1157,
	st1158,
	st1159,
	st1160,
	st1161,
	st1162,
	st1163,
	st1164,
	st1165,
	st1166,
	st1167,
	st1168,
	st1169,
	st1170,
	st1171,
	st1172,
	st1173,
	st1174,
	st1175,
	st1176,
	st1177,
	st1178,
	st1179,
	st1180,
	st1181,
	st1182,
	st1183,
	st1184,
	st1185,
	st1186,
	st1187,
	st1188,
	st1189,
	st1190,
	st1191,
	st1192,
	st1193,
	st1194,
	st1195,
	st1196,
	st1197,
	st1198,
	st1199,
	st1200,
	st1201,
	st1202,
	st1203,
	st1204,
	st1205,
	st1206,
	st1207,
	st1208,
	st1209,
	st1210,
	st1211,
	st1212,
	st1213,
	st1214,
	st1215,
	st1216,
	st1217,
	st1218,
	st1219,
	st1220,
	st1221,
	st1222,
	st1223,
	st1224,
	st1225,
	st1226,
	st1227,
	st1228,
	st1229,
	st1230,
	st1231,
	st1232,
	st1233,
	st1234,
	st1235,
	st1236,
	st1237,
	st1238,
	st1239,
	st1240,
	st1241,
	st1242,
	st1243,
	st1244,
	st1245,
	st1246,
	st1247,
	st1248,
	st1249,
	st1250,
	st1251,
	st1252,
	st1253,
	st1254,
	st1255,
	st1256,
	st1257,
	st1258,
	st1259,
	st1260,
	st1261,
	st1262,
	st1263,
	st1264,
	st1265,
	st1266,
	st1267,
	st1268,
	st1269,
	st1270,
	st1271,
	st1272,
	st1273,
	st1274,
	st1275,
	st1276,
	st1277,
	st1278,
	st1279,
	st1280,
	st1281,
	st1282,
	st1283,
	st1284,
	st1285,
	st1286,
	st1287,
	st1288,
	st1289,
	st1290,
	st1291,
	st1292,
	st1293,
	st1294,
	st1295,
	st1296,
	st1297,
	st1298,
	st1299,
	st1300,
	st1301,
	st1302,
	st1303,
	st1304,
	st1305,
	st1306,
	st1307,
	st1308,
	st1309,
	st1310,
	st1311,
	st1312,
	st1313,
	st1314,
	st1315,
	st1316,
	st1317,
	st1318,
	st1319,
	st1320,
	st1321,
	st1322,
	st1323,
	st1324,
	st1325,
	st1326,
	st1327,
	st1328,
	st1329,
	st1330,
	st1331
};


VfrLexer::DfaState VfrLexer::accepts[1333] = {
  0, 1, 166, 3, 4, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 7, 8, 9, 
  10, 11, 12, 0, 251, 251, 252, 252, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 152, 155, 
  160, 161, 163, 164, 165, 251, 216, 229, 0, 232, 
  234, 238, 239, 240, 246, 2, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 0, 
  0, 251, 251, 251, 251, 251, 251, 251, 0, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 213, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 230, 251, 231, 233, 236, 
  235, 237, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  243, 251, 251, 227, 251, 151, 251, 251, 251, 85, 
  203, 251, 251, 251, 251, 0, 0, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 252, 251, 251, 
  251, 251, 41, 192, 194, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 215, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 214, 251, 251, 251, 251, 251, 206, 251, 251, 
  251, 251, 251, 251, 251, 212, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  34, 251, 251, 251, 251, 251, 42, 251, 117, 251, 
  251, 251, 114, 251, 108, 251, 27, 251, 242, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 154, 251, 150, 251, 79, 60, 
  39, 0, 0, 251, 104, 251, 107, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 37, 136, 251, 251, 
  251, 251, 251, 251, 241, 251, 251, 251, 251, 251, 
  251, 33, 44, 251, 251, 251, 67, 251, 251, 245, 
  100, 149, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 207, 251, 251, 251, 
  251, 251, 251, 251, 251, 204, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 208, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 84, 251, 251, 251, 251, 251, 251, 
  251, 244, 251, 251, 251, 18, 251, 251, 251, 251, 
  105, 251, 251, 251, 251, 251, 251, 251, 251, 36, 
  251, 20, 251, 40, 137, 251, 251, 251, 251, 251, 
  251, 222, 251, 251, 251, 251, 251, 251, 251, 0, 
  0, 251, 251, 48, 251, 251, 251, 112, 251, 251, 
  251, 251, 251, 251, 251, 109, 251, 251, 116, 251, 
  251, 95, 251, 251, 251, 103, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 53, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 59, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  118, 251, 205, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 5, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 19, 251, 251, 35, 251, 251, 
  45, 251, 251, 251, 223, 251, 251, 22, 251, 251, 
  251, 133, 0, 0, 211, 113, 251, 251, 251, 196, 
  251, 251, 251, 251, 251, 251, 251, 251, 106, 128, 
  251, 251, 251, 251, 127, 78, 46, 251, 71, 52, 
  251, 251, 251, 251, 251, 102, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 184, 55, 56, 57, 251, 251, 251, 251, 58, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 43, 251, 
  115, 251, 26, 251, 251, 251, 25, 38, 251, 251, 
  251, 251, 251, 251, 221, 220, 98, 49, 130, 251, 
  99, 199, 251, 251, 63, 28, 251, 15, 251, 65, 
  73, 66, 251, 74, 251, 30, 251, 251, 251, 153, 
  0, 251, 251, 251, 195, 68, 251, 251, 251, 251, 
  251, 125, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 217, 251, 251, 185, 251, 251, 251, 
  251, 251, 251, 251, 210, 251, 251, 86, 251, 251, 
  251, 251, 251, 251, 54, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 21, 251, 251, 251, 251, 
  251, 251, 75, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 29, 69, 201, 251, 0, 131, 251, 
  251, 251, 101, 251, 251, 135, 193, 123, 251, 224, 
  61, 251, 202, 251, 251, 251, 31, 96, 219, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 110, 251, 251, 251, 251, 134, 251, 129, 
  72, 251, 251, 251, 251, 251, 251, 251, 251, 16, 
  251, 251, 47, 0, 50, 251, 251, 251, 251, 77, 
  251, 97, 122, 200, 218, 251, 251, 251, 89, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  209, 251, 251, 251, 251, 251, 251, 251, 93, 251, 
  251, 82, 251, 251, 251, 251, 251, 251, 251, 247, 
  251, 251, 251, 251, 251, 251, 251, 64, 17, 251, 
  251, 251, 251, 251, 251, 83, 251, 251, 251, 251, 
  251, 0, 251, 251, 251, 14, 251, 251, 76, 251, 
  138, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 183, 251, 92, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 167, 251, 
  251, 251, 147, 251, 251, 251, 251, 251, 251, 251, 
  148, 251, 251, 111, 251, 70, 62, 32, 124, 228, 
  119, 251, 6, 80, 23, 251, 0, 251, 197, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 
  251, 251, 251, 139, 251, 251, 251, 251, 251, 251, 
  159, 251, 88, 251, 248, 189, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 251, 251, 251, 251, 198, 
  251, 251, 251, 0, 13, 251, 121, 251, 226, 251, 
  251, 251, 251, 144, 251, 94, 140, 172, 251, 251, 
  251, 251, 251, 251, 157, 158, 251, 142, 251, 251, 
  251, 251, 251, 251, 251, 174, 251, 162, 251, 251, 
  251, 251, 251, 251, 24, 251, 251, 251, 251, 251, 
  251, 251, 251, 251, 251, 87, 251, 251, 156, 251, 
  186, 251, 251, 251, 251, 251, 251, 251, 251, 170, 
  251, 120, 251, 81, 132, 251, 141, 178, 177, 176, 
  179, 143, 190, 251, 251, 251, 171, 251, 249, 251, 
  251, 90, 251, 251, 173, 175, 251, 251, 225, 251, 
  251, 251, 251, 251, 180, 187, 251, 251, 250, 251, 
  251, 188, 251, 51, 251, 181, 182, 168, 251, 251, 
  251, 126, 251, 251, 251, 251, 145, 191, 251, 91, 
  251, 251, 146, 169, 0, 253, 0, 254, 256, 255, 
  256, 257, 0
};

PtrVfrLexerMemberFunc VfrLexer::actions[258] = {
	&VfrLexer::erraction,
	&VfrLexer::act1,
	&VfrLexer::act2,
	&VfrLexer::act3,
	&VfrLexer::act4,
	&VfrLexer::act5,
	&VfrLexer::act6,
	&VfrLexer::act7,
	&VfrLexer::act8,
	&VfrLexer::act9,
	&VfrLexer::act10,
	&VfrLexer::act11,
	&VfrLexer::act12,
	&VfrLexer::act13,
	&VfrLexer::act14,
	&VfrLexer::act15,
	&VfrLexer::act16,
	&VfrLexer::act17,
	&VfrLexer::act18,
	&VfrLexer::act19,
	&VfrLexer::act20,
	&VfrLexer::act21,
	&VfrLexer::act22,
	&VfrLexer::act23,
	&VfrLexer::act24,
	&VfrLexer::act25,
	&VfrLexer::act26,
	&VfrLexer::act27,
	&VfrLexer::act28,
	&VfrLexer::act29,
	&VfrLexer::act30,
	&VfrLexer::act31,
	&VfrLexer::act32,
	&VfrLexer::act33,
	&VfrLexer::act34,
	&VfrLexer::act35,
	&VfrLexer::act36,
	&VfrLexer::act37,
	&VfrLexer::act38,
	&VfrLexer::act39,
	&VfrLexer::act40,
	&VfrLexer::act41,
	&VfrLexer::act42,
	&VfrLexer::act43,
	&VfrLexer::act44,
	&VfrLexer::act45,
	&VfrLexer::act46,
	&VfrLexer::act47,
	&VfrLexer::act48,
	&VfrLexer::act49,
	&VfrLexer::act50,
	&VfrLexer::act51,
	&VfrLexer::act52,
	&VfrLexer::act53,
	&VfrLexer::act54,
	&VfrLexer::act55,
	&VfrLexer::act56,
	&VfrLexer::act57,
	&VfrLexer::act58,
	&VfrLexer::act59,
	&VfrLexer::act60,
	&VfrLexer::act61,
	&VfrLexer::act62,
	&VfrLexer::act63,
	&VfrLexer::act64,
	&VfrLexer::act65,
	&VfrLexer::act66,
	&VfrLexer::act67,
	&VfrLexer::act68,
	&VfrLexer::act69,
	&VfrLexer::act70,
	&VfrLexer::act71,
	&VfrLexer::act72,
	&VfrLexer::act73,
	&VfrLexer::act74,
	&VfrLexer::act75,
	&VfrLexer::act76,
	&VfrLexer::act77,
	&VfrLexer::act78,
	&VfrLexer::act79,
	&VfrLexer::act80,
	&VfrLexer::act81,
	&VfrLexer::act82,
	&VfrLexer::act83,
	&VfrLexer::act84,
	&VfrLexer::act85,
	&VfrLexer::act86,
	&VfrLexer::act87,
	&VfrLexer::act88,
	&VfrLexer::act89,
	&VfrLexer::act90,
	&VfrLexer::act91,
	&VfrLexer::act92,
	&VfrLexer::act93,
	&VfrLexer::act94,
	&VfrLexer::act95,
	&VfrLexer::act96,
	&VfrLexer::act97,
	&VfrLexer::act98,
	&VfrLexer::act99,
	&VfrLexer::act100,
	&VfrLexer::act101,
	&VfrLexer::act102,
	&VfrLexer::act103,
	&VfrLexer::act104,
	&VfrLexer::act105,
	&VfrLexer::act106,
	&VfrLexer::act107,
	&VfrLexer::act108,
	&VfrLexer::act109,
	&VfrLexer::act110,
	&VfrLexer::act111,
	&VfrLexer::act112,
	&VfrLexer::act113,
	&VfrLexer::act114,
	&VfrLexer::act115,
	&VfrLexer::act116,
	&VfrLexer::act117,
	&VfrLexer::act118,
	&VfrLexer::act119,
	&VfrLexer::act120,
	&VfrLexer::act121,
	&VfrLexer::act122,
	&VfrLexer::act123,
	&VfrLexer::act124,
	&VfrLexer::act125,
	&VfrLexer::act126,
	&VfrLexer::act127,
	&VfrLexer::act128,
	&VfrLexer::act129,
	&VfrLexer::act130,
	&VfrLexer::act131,
	&VfrLexer::act132,
	&VfrLexer::act133,
	&VfrLexer::act134,
	&VfrLexer::act135,
	&VfrLexer::act136,
	&VfrLexer::act137,
	&VfrLexer::act138,
	&VfrLexer::act139,
	&VfrLexer::act140,
	&VfrLexer::act141,
	&VfrLexer::act142,
	&VfrLexer::act143,
	&VfrLexer::act144,
	&VfrLexer::act145,
	&VfrLexer::act146,
	&VfrLexer::act147,
	&VfrLexer::act148,
	&VfrLexer::act149,
	&VfrLexer::act150,
	&VfrLexer::act151,
	&VfrLexer::act152,
	&VfrLexer::act153,
	&VfrLexer::act154,
	&VfrLexer::act155,
	&VfrLexer::act156,
	&VfrLexer::act157,
	&VfrLexer::act158,
	&VfrLexer::act159,
	&VfrLexer::act160,
	&VfrLexer::act161,
	&VfrLexer::act162,
	&VfrLexer::act163,
	&VfrLexer::act164,
	&VfrLexer::act165,
	&VfrLexer::act166,
	&VfrLexer::act167,
	&VfrLexer::act168,
	&VfrLexer::act169,
	&VfrLexer::act170,
	&VfrLexer::act171,
	&VfrLexer::act172,
	&VfrLexer::act173,
	&VfrLexer::act174,
	&VfrLexer::act175,
	&VfrLexer::act176,
	&VfrLexer::act177,
	&VfrLexer::act178,
	&VfrLexer::act179,
	&VfrLexer::act180,
	&VfrLexer::act181,
	&VfrLexer::act182,
	&VfrLexer::act183,
	&VfrLexer::act184,
	&VfrLexer::act185,
	&VfrLexer::act186,
	&VfrLexer::act187,
	&VfrLexer::act188,
	&VfrLexer::act189,
	&VfrLexer::act190,
	&VfrLexer::act191,
	&VfrLexer::act192,
	&VfrLexer::act193,
	&VfrLexer::act194,
	&VfrLexer::act195,
	&VfrLexer::act196,
	&VfrLexer::act197,
	&VfrLexer::act198,
	&VfrLexer::act199,
	&VfrLexer::act200,
	&VfrLexer::act201,
	&VfrLexer::act202,
	&VfrLexer::act203,
	&VfrLexer::act204,
	&VfrLexer::act205,
	&VfrLexer::act206,
	&VfrLexer::act207,
	&VfrLexer::act208,
	&VfrLexer::act209,
	&VfrLexer::act210,
	&VfrLexer::act211,
	&VfrLexer::act212,
	&VfrLexer::act213,
	&VfrLexer::act214,
	&VfrLexer::act215,
	&VfrLexer::act216,
	&VfrLexer::act217,
	&VfrLexer::act218,
	&VfrLexer::act219,
	&VfrLexer::act220,
	&VfrLexer::act221,
	&VfrLexer::act222,
	&VfrLexer::act223,
	&VfrLexer::act224,
	&VfrLexer::act225,
	&VfrLexer::act226,
	&VfrLexer::act227,
	&VfrLexer::act228,
	&VfrLexer::act229,
	&VfrLexer::act230,
	&VfrLexer::act231,
	&VfrLexer::act232,
	&VfrLexer::act233,
	&VfrLexer::act234,
	&VfrLexer::act235,
	&VfrLexer::act236,
	&VfrLexer::act237,
	&VfrLexer::act238,
	&VfrLexer::act239,
	&VfrLexer::act240,
	&VfrLexer::act241,
	&VfrLexer::act242,
	&VfrLexer::act243,
	&VfrLexer::act244,
	&VfrLexer::act245,
	&VfrLexer::act246,
	&VfrLexer::act247,
	&VfrLexer::act248,
	&VfrLexer::act249,
	&VfrLexer::act250,
	&VfrLexer::act251,
	&VfrLexer::act252,
	&VfrLexer::act253,
	&VfrLexer::act254,
	&VfrLexer::act255,
	&VfrLexer::act256,
	&VfrLexer::act257
};

VfrLexer::DfaState VfrLexer::dfa_base[] = {
	0,
	1324,
	1328
};

 unsigned char *VfrLexer::b_class_no[] = {
	shift0,
	shift1,
	shift2
};

DLGChar VfrLexer::alternatives[1333] = {
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	1,
	0,
	0,
	0,
	1,
	0,
	0,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	0,
	1,
	0,
	1,
	0,
/* must have 0 for zzalternatives[DfaStates] */
	0
};

#define DLGLexer VfrLexer
#include "DLexer.h"
