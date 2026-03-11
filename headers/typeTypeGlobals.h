/**
 * typeTypeGlobals
 * Data type globals
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/6/2025
 * @copyright	Constalink, all rights reserved
 */

#ifndef typeTypeGlobals_DEF
#define typeTypeGlobals_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeData.h"
#include "typeDataList.h"
#include "typeDocumentedTypeDict.h"
#include "typeType.h"
#include "typeTypeDict.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeTypeGlobals {
	VALUEMEMBERS;

	// "match"
	typeData* matchStr;

	// "range"
	typeData* rangeStr;

	// "captures"
	typeData* capturesStr;

	// "listeners"
	typeData* listenersStr;

	// "enterListeners"
	typeData* enterListenersStr;

	// "exitListeners"
	typeData* exitListenersStr;

	// "filePath"
	typeData* filePathStr;

	// "length"
	typeData* lengthStr;

	// "integer"
	typeData* integerStr;

	// "numerator"
	typeData* numeratorStr;

	// "denominator"
	typeData* denominatorStr;

	// "start"
	typeData* startStr;

	// "end"
	typeData* endStr;

	// "includeEnd"
	typeData* includeEndStr;

	// "byteLength"
	typeData* byteLengthStr;

	// "charLength"
	typeData* charLengthStr;

	// "ignoreCase"
	typeData* ignoreCaseStr;

	// "multiLine"
	typeData* multiLineStr;

	// "dotAll"
	typeData* dotAllStr;

	// "opened"
	typeData* openedStr;

	// "error"
	typeData* errorStr;

	// "uri"
	typeData* uriStr;

	// "properties"
	typeData* propertiesStr;

	// string
	typeType* stringType;

	// string?
	typeType* optStringType;

	// binary
	typeType* binaryType;

	// binary?
	typeType* optBinaryType;

	// int
	typeType* intType;

	// int?
	typeType* optIntType;

	// fraction
	typeType* fractionType;

	// fraction?
	typeType* optFractionType;

	// bool
	typeType* boolType;

	// bool?
	typeType* optBoolType;

	// regExp;
	typeType* regExpType;

	// regExp?
	typeType* optRegExpType;

	// range
	typeType* rangeType;

	// range?
	typeType* optRangeType;

	// any
	typeType* anyType;

	// any?
	typeType* optAnyType;

	// empty
	typeType* emptyType;

	// unknown
	typeType* unknownType;

	// undefined
	typeType* undefinedType;

	// {match: string, range: range, captures:[{match: string, range: range}]}?
	typeType* matchOnceStringType;

	// {match: binary, range: range, captures:[{match: binary, range: range}]}?
	typeType* matchOnceBinaryType;

	// [{match: string, range: range, captures:[{match: string, range: range}]}]
	typeType* matchAllStringType;

	// [{match: binary, range: range, captures:[{match: binary, range: range}]}]
	typeType* matchAllBinaryType;

	// [int]
	typeType* intListType;

	// {listeners: [int], enterListeners: [int], exitListeners: [int], filePath: string}
	typeTypeDict* functionPropertyTypes;

	// {length: int}
	typeTypeDict* collectionPropertyTypes;

	// {integer: int, numerator: int, denominator: int}
	typeTypeDict* fractionPropertyTypes;

	// {start: int, end: int, includeEnd: bool}
	typeTypeDict* rangePropertyTypes;

	// {byteLength: int, charLength: int}
	typeTypeDict* stringPropertyTypes;

	// {byteLength: int}
	typeTypeDict* binaryPropertyTypes;

	// {byteLength: int, ignoreCase: bool, multiLine: bool, dotAll: bool}
	typeTypeDict* regExpPropertyTypes;

	// {opened: bool, error: string?, uri: string}
	typeTypeDict* streamPropertyTypes;

	// A full dictionary of all the available stream types
	typeDocumentedTypeDict* streamTypes;

	// List of data type strings
	typeDataList* dataTypesList;

	// List of issue codes
	typeDataList* issueCodes;

} typeTypeGlobals;

#endif
