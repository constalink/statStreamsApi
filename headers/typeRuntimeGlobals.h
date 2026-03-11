/**
 * typeRuntimeGlobals
 * Runtime global variables
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/29/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeRuntimeGlobals_DEF
#define typeRuntimeGlobals_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeData.h"
#include "typeRegExp.h"
#include "typeRegExpList.h"
#include "typeMatchGroup.h"
#include "typeBoolValue.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeRuntimeGlobals {
	VALUEMEMBERS;

	// "0"
	typeData* zeroStr;

	// "1"
	typeData* oneStr;

	// "infinity"
	typeData* infinityStr;

	// "inf"
	typeData* infStr;

	// "-infinity"
	typeData* negInfinityStr;

	// "-inf"
	typeData* negInfStr;

	// "false"
	typeData* falseStr;
	// The false boolean value
	typeBoolValue* falseVal;
	// The false boolean value reference
	typeValueRef* falseRef;
	// A string reference that contains "false"
	typeValueRef* falseStringRef;

	// "true"
	typeData* trueStr;
	// The true boolean value
	typeBoolValue* trueVal;
	// The true boolean value reference
	typeValueRef* trueRef;
	// A string reference that contains "true"
	typeValueRef* trueStringRef;

	// "" - A zero length string
	typeData* emptyStr;
	// The empty value reference
	typeValueRef* emptyRef;
	// A string reference that contains an empty string
	typeValueRef* emptyStringRef;
	// A binary reference that contains a zero length binary value
	typeValueRef* emptyBinRef;

	// A string reference that contains "infinity"
	typeValueRef* infinityStringRef;
	// A string reference that contains "-infinity"
	typeValueRef* negInfinityStringRef;
	// A string reference that contains "0"
	typeValueRef* zeroStringRef;

	// Regular expressions used for converting strings to fraction values
	// /^-?(0x)([0-9a-fA-F]+)\s+([0-9a-fA-F]+)\s*\/\s*([0-9a-fA-F]+)$/
	typeRegExp* hexStrToFractRegExp;
	// /^-?(0o)([0-7]+)\s+([0-7]+)\s*\/\s*([0-7]+)$/
	typeRegExp* octStrToFractRegExp;
	// /^-?(0b)([0-1]+)\s+([0-1]+)\s*\/\s*([0-1]+)$/
	typeRegExp* binStrToFractRegExp;
	// /^-?(0d)?([0-9]+)\s+([0-9]+)\s*\/\s*([0-9]+)$/
	typeRegExp* decStrToFractRegExp;
	// /^-?(0x)([0-9a-fA-F]+)\.([0-9a-fA-F]+)$/
	typeRegExp* hexStrToFloatRegExp;
	// /^-?(0o)([0-7]+)\.([0-7]+)$/
	typeRegExp* octStrToFloatRegExp;
	// /^-?(0b)([0-1]+)\.([0-1]+)$/
	typeRegExp* binStrToFloatRegExp;
	// /^-?(0d)?([0-9]+)\.([0-9]+)$/
	typeRegExp* decStrToFloatRegExp;
	// A list of all the regular expressions above
	typeRegExpList* stringToFractRegExpList;

	// Regular expressions used for converting strings to integer values
	// /^-?0x[0-9a-fA-F]+$/
	typeRegExp* hexStrToIntRegExp;
	// /^-?0o[0-7]+$/
	typeRegExp* octStrToIntRegExp;
	// /^-?0b[0-1]+$/
	typeRegExp* binStrToIntRegExp;
	// /^-?(0d)?([0-9]+)$/
	typeRegExp* decStrToIntRegExp;
	// A list of all the regular expressions above
	typeRegExpList* stringToIntRegExpList;

	// Regular expressions for use in running regular expressions
	// /([/\\(){}[\].|*+?^$])/
	typeRegExp* regExpEscValue;
	// /([\\\]\-])/
	typeRegExp* regExpEscCsValue;

	// Strings for use in running regular expressions
	// "\$1"
	typeData* regExpEscReplace;
	// "("
	typeData* regExpOpenParen;
	// ")"
	typeData* regExpCloseParen;
	// "(?:"
	typeData* regExpNonCapture;
	// "(?="
	typeData* regExpLookAhead;
	// "(?!"
	typeData* regExpNegLookAhead;
	// "["
	typeData* regExpOpenBracket;
	// "]"
	typeData* regExpCloseBracket;

	// Regular expressions for converting strings to a range value
	// /^(-?[0-9a-fA-Foxb]+)(\.\.\.?)(-?([0-9a-fA-Foxb]+|infinity))?$/
	typeRegExp* stringToRangeRegExp;

	// The empty match group for when a regular expression doesn't match
	typeMatchGroup* noMatches;

} typeRuntimeGlobals;

#endif
