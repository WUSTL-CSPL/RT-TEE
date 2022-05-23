/*
 * EfiVfrParser: P a r s e r  H e a d e r 
 *
 * Generated from: VfrSyntax.g
 *
 * Terence Parr, Russell Quong, Will Cohen, and Hank Dietz: 1989-2001
 * Parr Research Corporation
 * with Purdue University Electrical Engineering
 * with AHPCRC, University of Minnesota
 * ANTLR Version 1.33MR33
 */

#ifndef EfiVfrParser_h
#define EfiVfrParser_h

#ifndef ANTLR_VERSION
#define ANTLR_VERSION 13333
#endif

#include "AParser.h"



#include "EfiVfr.h"
#include "VfrFormPkg.h"
#include "VfrError.h"
#include "VfrUtilityLib.h"
#include "AToken.h"
#include "ATokPtr.h"
class EfiVfrParser : public ANTLRParser {
public:
	static  const ANTLRChar *tokenName(int tk);
	enum { SET_SIZE = 258 };
protected:
	static const ANTLRChar *_token_tbl[];
private:
protected:
	static SetWordType setwd1[258];
	static SetWordType err1[36];
	static SetWordType err2[36];
	static SetWordType err3[36];
	static SetWordType err4[36];
	static SetWordType err5[36];
	static SetWordType err6[36];
	static SetWordType err7[36];
	static SetWordType err8[36];
	static SetWordType err9[36];
	static SetWordType setwd2[258];
	static SetWordType err10[36];
	static SetWordType err11[36];
	static SetWordType err12[36];
	static SetWordType err13[36];
	static SetWordType setwd3[258];
	static SetWordType setwd4[258];
	static SetWordType err14[36];
	static SetWordType err15[36];
	static SetWordType err16[36];
	static SetWordType err17[36];
	static SetWordType err18[36];
	static SetWordType err19[36];
	static SetWordType err20[36];
	static SetWordType err21[36];
	static SetWordType setwd5[258];
	static SetWordType err22[36];
	static SetWordType err23[36];
	static SetWordType err24[36];
	static SetWordType err25[36];
	static SetWordType err26[36];
	static SetWordType err27[36];
	static SetWordType err28[36];
	static SetWordType setwd6[258];
	static SetWordType err29[36];
	static SetWordType err30[36];
	static SetWordType err31[36];
	static SetWordType err32[36];
	static SetWordType err33[36];
	static SetWordType err34[36];
	static SetWordType setwd7[258];
	static SetWordType err35[36];
	static SetWordType err36[36];
	static SetWordType err37[36];
	static SetWordType err38[36];
	static SetWordType err39[36];
	static SetWordType err40[36];
	static SetWordType err41[36];
	static SetWordType err42[36];
	static SetWordType setwd8[258];
	static SetWordType err43[36];
	static SetWordType err44[36];
	static SetWordType err45[36];
	static SetWordType err46[36];
	static SetWordType err47[36];
	static SetWordType err48[36];
	static SetWordType err49[36];
	static SetWordType err50[36];
	static SetWordType err51[36];
	static SetWordType setwd9[258];
	static SetWordType err52[36];
	static SetWordType err53[36];
	static SetWordType err54[36];
	static SetWordType err55[36];
	static SetWordType err56[36];
	static SetWordType err57[36];
	static SetWordType err58[36];
	static SetWordType err59[36];
	static SetWordType err60[36];
	static SetWordType err61[36];
	static SetWordType err62[36];
	static SetWordType setwd10[258];
	static SetWordType err63[36];
	static SetWordType err64[36];
	static SetWordType err65[36];
	static SetWordType err66[36];
	static SetWordType setwd11[258];
	static SetWordType err67[36];
	static SetWordType err68[36];
	static SetWordType err69[36];
	static SetWordType err70[36];
	static SetWordType err71[36];
	static SetWordType err72[36];
	static SetWordType err73[36];
	static SetWordType setwd12[258];
	static SetWordType err74[36];
	static SetWordType err75[36];
	static SetWordType err76[36];
	static SetWordType setwd13[258];
	static SetWordType err77[36];
	static SetWordType err78[36];
	static SetWordType setwd14[258];
	static SetWordType err79[36];
	static SetWordType err80[36];
	static SetWordType err81[36];
	static SetWordType err82[36];
	static SetWordType setwd15[258];
	static SetWordType err83[36];
	static SetWordType err84[36];
	static SetWordType err85[36];
	static SetWordType setwd16[258];
	static SetWordType err86[36];
	static SetWordType err87[36];
	static SetWordType err88[36];
	static SetWordType err89[36];
	static SetWordType err90[36];
	static SetWordType setwd17[258];
	static SetWordType err91[36];
	static SetWordType err92[36];
	static SetWordType err93[36];
	static SetWordType setwd18[258];
	static SetWordType err94[36];
	static SetWordType err95[36];
	static SetWordType err96[36];
	static SetWordType err97[36];
	static SetWordType err98[36];
	static SetWordType setwd19[258];
	static SetWordType err99[36];
	static SetWordType err100[36];
	static SetWordType err101[36];
	static SetWordType err102[36];
	static SetWordType err103[36];
	static SetWordType err104[36];
	static SetWordType err105[36];
	static SetWordType err106[36];
	static SetWordType err107[36];
	static SetWordType setwd20[258];
	static SetWordType err108[36];
	static SetWordType err109[36];
	static SetWordType err110[36];
	static SetWordType err111[36];
	static SetWordType err112[36];
	static SetWordType err113[36];
	static SetWordType err114[36];
	static SetWordType setwd21[258];
	static SetWordType err115[36];
	static SetWordType err116[36];
	static SetWordType err117[36];
	static SetWordType err118[36];
	static SetWordType setwd22[258];
	static SetWordType err119[36];
	static SetWordType err120[36];
	static SetWordType err121[36];
	static SetWordType setwd23[258];
	static SetWordType err122[36];
	static SetWordType err123[36];
	static SetWordType err124[36];
	static SetWordType err125[36];
	static SetWordType err126[36];
	static SetWordType err127[36];
	static SetWordType err128[36];
	static SetWordType setwd24[258];
	static SetWordType err129[36];
	static SetWordType err130[36];
	static SetWordType err131[36];
	static SetWordType err132[36];
	static SetWordType err133[36];
	static SetWordType err134[36];
	static SetWordType setwd25[258];
	static SetWordType err135[36];
	static SetWordType err136[36];
	static SetWordType err137[36];
	static SetWordType err138[36];
	static SetWordType err139[36];
	static SetWordType setwd26[258];
	static SetWordType err140[36];
	static SetWordType err141[36];
	static SetWordType err142[36];
	static SetWordType err143[36];
	static SetWordType err144[36];
	static SetWordType setwd27[258];
	static SetWordType err145[36];
	static SetWordType err146[36];
	static SetWordType err147[36];
	static SetWordType err148[36];
	static SetWordType setwd28[258];
	static SetWordType err149[36];
	static SetWordType err150[36];
	static SetWordType err151[36];
	static SetWordType err152[36];
	static SetWordType err153[36];
	static SetWordType err154[36];
	static SetWordType setwd29[258];
	static SetWordType err155[36];
	static SetWordType err156[36];
	static SetWordType setwd30[258];
	static SetWordType err157[36];
	static SetWordType setwd31[258];
	static SetWordType err158[36];
	static SetWordType err159[36];
	static SetWordType err160[36];
	static SetWordType setwd32[258];
	static SetWordType err161[36];
	static SetWordType err162[36];
	static SetWordType err163[36];
	static SetWordType setwd33[258];
	static SetWordType err164[36];
	static SetWordType err165[36];
	static SetWordType err166[36];
	static SetWordType err167[36];
	static SetWordType setwd34[258];
	static SetWordType err168[36];
	static SetWordType setwd35[258];
	static SetWordType err169[36];
	static SetWordType err170[36];
	static SetWordType err171[36];
	static SetWordType err172[36];
	static SetWordType setwd36[258];
	static SetWordType err173[36];
	static SetWordType err174[36];
	static SetWordType err175[36];
	static SetWordType err176[36];
	static SetWordType setwd37[258];
	static SetWordType err177[36];
	static SetWordType err178[36];
	static SetWordType err179[36];
	static SetWordType err180[36];
	static SetWordType setwd38[258];
	static SetWordType err181[36];
	static SetWordType err182[36];
	static SetWordType err183[36];
	static SetWordType setwd39[258];
	static SetWordType err184[36];
	static SetWordType err185[36];
	static SetWordType err186[36];
	static SetWordType err187[36];
	static SetWordType err188[36];
	static SetWordType setwd40[258];
	static SetWordType err189[36];
	static SetWordType err190[36];
	static SetWordType err191[36];
	static SetWordType setwd41[258];
	static SetWordType err192[36];
	static SetWordType err193[36];
	static SetWordType err194[36];
	static SetWordType err195[36];
	static SetWordType err196[36];
	static SetWordType err197[36];
	static SetWordType err198[36];
	static SetWordType setwd42[258];
	static SetWordType err199[36];
	static SetWordType err200[36];
	static SetWordType err201[36];
	static SetWordType err202[36];
	static SetWordType err203[36];
	static SetWordType setwd43[258];
	static SetWordType setwd44[258];
	static SetWordType err204[36];
	static SetWordType setwd45[258];
	static SetWordType err205[36];
	static SetWordType err206[36];
	static SetWordType setwd46[258];
	static SetWordType err207[36];
	static SetWordType err208[36];
	static SetWordType err209[36];
	static SetWordType err210[36];
	static SetWordType err211[36];
	static SetWordType setwd47[258];
	static SetWordType err212[36];
	static SetWordType err213[36];
	static SetWordType err214[36];
	static SetWordType err215[36];
	static SetWordType setwd48[258];
	static SetWordType err216[36];
	static SetWordType err217[36];
	static SetWordType err218[36];
	static SetWordType setwd49[258];
	static SetWordType err219[36];
	static SetWordType err220[36];
	static SetWordType err221[36];
	static SetWordType setwd50[258];
	static SetWordType err222[36];
	static SetWordType setwd51[258];
private:
	void zzdflthandlers( int _signal, int *_retsignal );

public:
	EfiVfrParser(ANTLRTokenBuffer *input);
	UINT8 vfrProgram(void);
	void pragmaPackShowDef(void);
	void pragmaPackStackDef(void);
	void pragmaPackNumber(void);
	void vfrPragmaPackDefinition(void);
	void vfrDataUnionDefinition(void);
	void vfrDataStructDefinition(void);
	void vfrDataStructFields(BOOLEAN FieldInUnion);
	void dataStructField64(BOOLEAN FieldInUnion);
	void dataStructField32(BOOLEAN FieldInUnion);
	void dataStructField16(BOOLEAN FieldInUnion);
	void dataStructField8(BOOLEAN FieldInUnion);
	void dataStructFieldBool(BOOLEAN FieldInUnion);
	void dataStructFieldString(BOOLEAN FieldInUnion);
	void dataStructFieldDate(BOOLEAN FieldInUnion);
	void dataStructFieldTime(BOOLEAN FieldInUnion);
	void dataStructFieldRef(BOOLEAN FieldInUnion);
	void dataStructFieldUser(BOOLEAN FieldInUnion);
	void dataStructBitField64(BOOLEAN FieldInUnion);
	void dataStructBitField32(BOOLEAN FieldInUnion);
	void dataStructBitField16(BOOLEAN FieldInUnion);
	void dataStructBitField8(BOOLEAN FieldInUnion);
	void guidSubDefinition(EFI_GUID & Guid);
	void guidDefinition(EFI_GUID & Guid);
	void vfrFormSetDefinition(void);
	void vfrFormSetList(void);
	void vfrStatementExtension(void);
	void vfrExtensionData(UINT8 * DataBuff,UINT32 Size,CHAR8 * TypeName,UINT32 TypeSize,BOOLEAN IsStruct,UINT32 ArrayNum);
	void vfrStatementDefaultStore(void);
	void vfrStatementVarStoreLinear(void);
	void vfrStatementVarStoreEfi(void);
	void vfrVarStoreEfiAttr(UINT32 & Attr);
	void vfrStatementVarStoreNameValue(void);
	void classDefinition(UINT16 & Class);
	void validClassNames(UINT16 & Class);
	void subclassDefinition(UINT16 & SubClass);
	void vfrStatementDisableIfFormSet(void);
	void vfrStatementSuppressIfFormSet(void);
	void vfrStatementHeader(CIfrStatementHeader * SHObj);
	void vfrQuestionBaseInfo(EFI_VARSTORE_INFO & Info,EFI_QUESTION_ID & QId,EFI_QUESION_TYPE QType = QUESTION_NORMAL);
	void vfrQuestionHeader(CIfrQuestionHeader & QHObj,EFI_QUESION_TYPE QType = QUESTION_NORMAL);
	void questionheaderFlagsField(UINT8 & Flags);
	void vfrStorageVarId(EFI_VARSTORE_INFO & Info,CHAR8 *& QuestVarIdStr,BOOLEAN CheckFlag = TRUE);
	void vfrQuestionDataFieldName(EFI_QUESTION_ID & QId,UINT32 & Mask,CHAR8 *& VarIdStr,UINT32 & LineNo);
	void vfrConstantValueField(UINT8 Type,EFI_IFR_TYPE_VALUE & Value,BOOLEAN & ListType);
	void vfrFormDefinition(void);
	void vfrFormMapDefinition(void);
	void vfrStatementRules(void);
	void vfrStatementDefault(void);
	void vfrStatementStat(void);
	void vfrStatementQuestions(void);
	void vfrStatementConditional(void);
	void vfrStatementConditionalNew(void);
	void vfrStatementSuppressIfStat(void);
	void vfrStatementGrayOutIfStat(void);
	void vfrStatementInvalid(void);
	void flagsField(void);
	void vfrStatementValue(void);
	void vfrStatementRead(void);
	void vfrStatementWrite(void);
	void vfrStatementSubTitle(void);
	void vfrSubtitleFlags(CIfrSubtitle & SObj);
	void subtitleFlagsField(UINT8 & Flags);
	void vfrStatementStaticText(void);
	void staticTextFlagsField(UINT8 & HFlags);
	void vfrStatementCrossReference(void);
	void vfrStatementGoto(void);
	void vfrGotoFlags(CIfrQuestionHeader * QHObj,UINT32 LineNum);
	void gotoFlagsField(UINT8 & HFlags);
	void getStringId(void);
	void vfrStatementResetButton(void);
	void vfrStatementBooleanType(void);
	void vfrStatementCheckBox(void);
	void vfrCheckBoxFlags(CIfrCheckBox & CBObj,UINT32 LineNum);
	void checkboxFlagsField(UINT8 & LFlags,UINT8 & HFlags);
	void vfrStatementAction(void);
	void vfrActionFlags(CIfrAction & AObj,UINT32 LineNum);
	void actionFlagsField(UINT8 & HFlags);
	void vfrStatementDate(void);
	void minMaxDateStepDefault(EFI_HII_DATE & D,UINT8 KeyValue);
	void vfrDateFlags(CIfrDate & DObj,UINT32 LineNum);
	void dateFlagsField(UINT8 & Flags);
	void vfrStatementNumericType(void);
	void vfrSetMinMaxStep(CIfrMinMaxStepData & MMSDObj);
	void vfrStatementNumeric(void);
	void vfrNumericFlags(CIfrNumeric & NObj,UINT32 LineNum);
	void numericFlagsField(UINT8 & HFlags,UINT8 & LFlags,BOOLEAN & IsSetType,BOOLEAN & IsDisplaySpecified,UINT32 LineNum);
	void vfrStatementOneOf(void);
	void vfrOneofFlagsField(CIfrOneOf & OObj,UINT32 LineNum);
	void vfrStatementStringType(void);
	void vfrStatementString(void);
	void vfrStringFlagsField(CIfrString & SObj,UINT32 LineNum);
	void stringFlagsField(UINT8 & HFlags,UINT8 & LFlags);
	void vfrStatementPassword(void);
	void vfrPasswordFlagsField(CIfrPassword & PObj,UINT32 LineNum);
	void passwordFlagsField(UINT8 & HFlags);
	void vfrStatementOrderedList(void);
	void vfrOrderedListFlags(CIfrOrderedList & OLObj,UINT32 LineNum);
	void orderedlistFlagsField(UINT8 & HFlags,UINT8 & LFlags);
	void vfrStatementTime(void);
	void minMaxTimeStepDefault(EFI_HII_TIME & T,UINT8 KeyValue);
	void vfrTimeFlags(CIfrTime & TObj,UINT32 LineNum);
	void timeFlagsField(UINT8 & Flags);
	void vfrStatementQuestionTag(void);
	void vfrStatementQuestionTagList(void);
	void vfrStatementQuestionOptionTag(void);
	void vfrStatementQuestionOptionList(void);
	void vfrStatementStatList(void);
	void vfrStatementStatListOld(void);
	void vfrStatementDisableIfStat(void);
	void vfrStatementInconsistentIfStat(void);
	void vfrStatementgrayoutIfSuppressIf(void);
	void vfrStatementsuppressIfGrayOutIf(void);
	void vfrStatementSuppressIfStatNew(void);
	void vfrStatementGrayOutIfStatNew(void);
	void vfrStatementSuppressIfStatOld(void);
	void vfrStatementGrayOutIfStatOld(void);
	void vfrImageTag(void);
	void vfrLockedTag(void);
	void vfrModalTag(void);
	void vfrStatementStatTag(void);
	void vfrStatementStatTagList(void);
	void vfrStatementImage(void);
	void vfrStatementModal(void);
	void vfrStatementLocked(void);
	void vfrStatementInconsistentIf(void);
	void vfrStatementNoSubmitIf(void);
	void vfrStatementWarningIf(void);
	void vfrStatementDisableIfQuest(void);
	void vfrStatementRefresh(void);
	void vfrStatementRefreshEvent(void);
	void vfrStatementVarstoreDevice(void);
	void vfrStatementSuppressIfQuest(void);
	void vfrStatementGrayOutIfQuest(void);
	void vfrStatementOptions(void);
	void vfrStatementOneOfOption(void);
	void vfrOneOfOptionFlags(CIfrOneOfOption & OOOObj,UINT32 LineNum);
	void oneofoptionFlagsField(UINT8 & HFlags,UINT8 & LFlags);
	void vfrStatementLabel(void);
	void vfrStatementBanner(void);
	void vfrStatementInvalidHidden(void);
	void vfrStatementInvalidInconsistentIf(void);
	void vfrStatementInvalidInventory(void);
	void vfrStatementInvalidSaveRestoreDefaults(void);
	void vfrStatementExpression(UINT32 RootLevel,UINT32 ExpOpCount = 0);
	void vfrStatementExpressionSub(UINT32 RootLevel,UINT32 & ExpOpCount);
	void andTerm(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void bitwiseorTerm(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void bitwiseandTerm(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void equalTerm(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void compareTerm(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void shiftTerm(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void addMinusTerm(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void multdivmodTerm(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void castTerm(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void atomTerm(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void vfrExpressionCatenate(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void vfrExpressionMatch(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void vfrExpressionMatch2(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void vfrExpressionParen(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void vfrExpressionBuildInFunction(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void dupExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void vareqvalExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void ideqvalExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void ideqidExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void ideqvallistExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void questionref1Exp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void rulerefExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void stringref1Exp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void pushthisExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void securityExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void numericVarStoreType(UINT8 & VarType);
	void getExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void vfrExpressionConstant(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void vfrExpressionUnaryOp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void lengthExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void bitwisenotExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void question23refExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void stringref2Exp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void toboolExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void tostringExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void unintExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void toupperExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void tolwerExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void setExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void vfrExpressionTernaryOp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void conditionalExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void findExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void findFormat(UINT8 & Format);
	void midExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void tokenExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void spanExp(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void vfrExpressionMap(UINT32 & RootLevel,UINT32 & ExpOpCount);
	void spanFlags(UINT8 & Flags);

private:
UINT8               mParserStatus;
BOOLEAN             mConstantOnlyInExpression;

CVfrQuestionDB      mCVfrQuestionDB;
CVfrRulesDB         mCVfrRulesDB;

CIfrOpHeader *      mCIfrOpHdr[MAX_IFR_EXPRESSION_DEPTH];
UINT32              mCIfrOpHdrLineNo[MAX_IFR_EXPRESSION_DEPTH];
UINT8               mCIfrOpHdrIndex;
VOID                _SAVE_OPHDR_COND (IN CIfrOpHeader &, IN BOOLEAN, UINT32 LineNo = 0);
VOID                _CLEAR_SAVED_OPHDR (VOID);
VOID                _INIT_OPHDR_COND (VOID);
BOOLEAN             _SET_SAVED_OPHDR_SCOPE (VOID);


EFI_VARSTORE_INFO   mCurrQestVarInfo;
EFI_GUID            *mOverrideClassGuid;
CHAR8*              mLastFormEndAddr;

//
// Whether the question already has default value.
//
UINT16              mUsedDefaultArray[EFI_IFR_MAX_DEFAULT_TYPE];
UINT16              mUsedDefaultCount;

//
// For framework vfr compatibility
//
BOOLEAN             mCompatibleMode;
EFI_GUID            mFormsetGuid;

VOID                _CRT_OP (IN BOOLEAN);

VOID                _SAVE_CURRQEST_VARINFO (IN EFI_VARSTORE_INFO &);
EFI_VARSTORE_INFO & _GET_CURRQEST_VARTINFO (VOID);

UINT8               _GET_CURRQEST_DATATYPE ();
UINT32              _GET_CURRQEST_VARSIZE ();
UINT32              _GET_CURRQEST_ARRAY_SIZE();
VOID                CheckDuplicateDefaultValue (IN EFI_DEFAULT_ID, IN ANTLRTokenPtr);

public:
VOID                _PCATCH (IN INTN, IN INTN, IN ANTLRTokenPtr, IN CONST CHAR8 *);
VOID                _PCATCH (IN EFI_VFR_RETURN_CODE);
VOID                _PCATCH (IN EFI_VFR_RETURN_CODE, IN ANTLRTokenPtr);
VOID                _PCATCH (IN EFI_VFR_RETURN_CODE, IN UINT32);
VOID                _PCATCH (IN EFI_VFR_RETURN_CODE, IN UINT32, IN CONST CHAR8 *);

VOID                syn     (ANTLRAbstractToken  *, ANTLRChar *, SetWordType *, ANTLRTokenType, INT32);

CHAR8*              TrimHex (IN CHAR8 *, OUT BOOLEAN *);
CHAR8*              _U32TOS (IN UINT32);
UINT8               _STOU8  (IN CHAR8 *, IN UINT32);
UINT16              _STOU16 (IN CHAR8 *, IN UINT32);
UINT32              _STOU32 (IN CHAR8 *, IN UINT32);
UINT64              _STOU64 (IN CHAR8 *, IN UINT32);
EFI_HII_DATE        _STOD   (IN CHAR8 *, IN CHAR8 *, IN CHAR8 *, IN UINT32);
EFI_HII_TIME        _STOT   (IN CHAR8 *, IN CHAR8 *, IN CHAR8 *, IN UINT32);
EFI_HII_REF         _STOR   (IN CHAR8 *, IN CHAR8 *, IN EFI_GUID *, IN CHAR8 *, IN UINT32);

EFI_STRING_ID       _STOSID (IN CHAR8 *, IN UINT32);
EFI_FORM_ID         _STOFID (IN CHAR8 *, IN UINT32);
EFI_QUESTION_ID     _STOQID (IN CHAR8 *, IN UINT32);

VOID                _STRCAT (IN OUT CHAR8 **, IN CONST CHAR8 *);

VOID                _DeclareDefaultLinearVarStore (IN UINT32);
VOID                _DeclareStandardDefaultStorage (IN UINT32);
VOID                _DeclareDefaultFrameworkVarStore (IN UINT32);

VOID                AssignQuestionKey (IN CIfrQuestionHeader &, IN ANTLRTokenPtr);

VOID                ConvertIdExpr         (IN UINT32 &, IN UINT32, IN EFI_QUESTION_ID, IN CHAR8 *, IN UINT32);
VOID                IdEqValDoSpecial      (IN UINT32 &, IN UINT32, IN EFI_QUESTION_ID, IN CHAR8 *, IN UINT32, IN UINT16, IN EFI_COMPARE_TYPE);
VOID                IdEqIdDoSpecial       (IN UINT32 &, IN UINT32, IN EFI_QUESTION_ID, IN CHAR8 *, IN UINT32, IN EFI_QUESTION_ID, IN CHAR8 *, IN UINT32, IN EFI_COMPARE_TYPE);
VOID                IdEqListDoSpecial     (IN UINT32 &, IN UINT32, IN EFI_QUESTION_ID, IN CHAR8 *, IN UINT32, IN UINT16, IN UINT16 *);
VOID                SetOverrideClassGuid  (IN EFI_GUID *);
//
// For framework vfr compatibility
//
VOID                SetCompatibleMode (IN BOOLEAN);
};

#endif /* EfiVfrParser_h */
