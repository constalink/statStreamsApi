/**
 * typeValueRef
 * A value reference. This value should contain a value that matches the type
 *
 * Here is a list of all the types and associated values that are expected:
 *
 * ----------------------------------------------
 * | type                   | value             |
 * | -----------------------|-------------------|
 * | enValueRefTypeString   | typeStringValue   |
 * | enValueRefTypeBinary   | typeData          |
 * | enValueRefTypeInteger  | typeIntegerValue  |
 * | enValueRefTypeFraction | typeFractionValue |
 * | enValueRefTypeBool     | typeBoolValue     |
 * | enValueRefTypeRegExp   | typeRegExp        |
 * | enValueRefTypeRange    | typeRangeValue    |
 * | enValueRefTypeList     | typeValueRefList  |
 * | enValueRefTypeDict     | typeValueRefDict  |
 * | enValueRefTypeEmpty    | NULL              |
 * | enValueRefTypeStream   | typeStreamValue   |
 * | enValueRefTypeEnum     | typeEnumValue     |
 * | enValueRefTypeFunction | typeFunctionValue |
 * | enValueRefTypePromise  | typePromise       |
 * ----------------------------------------------
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeValueRef_DEF
#define typeValueRef_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enValueRefType.h"

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeValueRef {
	VALUEMEMBERS;

	void* value;
	enValueRefType type;

} typeValueRef;

#endif
