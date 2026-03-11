/**
 * typeJsonValue
 * A JSON value
 *
 * The value is expected to be one of the following:
 * - For a string value - value: typeData*, boolVal: false, type: enJsonValueTypeString
 * - For an integer value - value: typeIntegerValue*, boolVal: false, type: enJsonValueTypeInteger
 * - For a fraction value - value: typeFractionValue*, boolVal: false, type: enJsonValueTypeFraction
 * - For a boolean value - value: NULL, boolVal: true/false, type: enJsonValueTypeBool
 * - For a null value - value: NULL, boolVal: false, type: enJsonValueTypeNull
 * - For a list value - value: typeList*, boolVal: false, type: enJsonValueTypeList
 * - For a dictionary value - value: typeDict*, boolVal: false, type: enJsonValueTypeDict
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/1/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeJsonValue_DEF
#define typeJsonValue_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeBool.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enJsonValueType.h"

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeJsonValue {
	VALUEMEMBERS;

	void* value;
	typeBool boolVal;
	enJsonValueType type;

} typeJsonValue;

#endif
