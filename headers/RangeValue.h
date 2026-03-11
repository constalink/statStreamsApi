/**
 * RangeValue
 * Creates a typeRangeValue value and returns a pointer to it
 *
 * This function allocates a new typeValueRef value and tracks it on the
 * current memory stack.
 *
 * @param start      A pointer to the start value for the range
 * @param end        A pointer to the end value for the range
 * @param includeEnd Whether or not the end value is included in the range
 * @return           A pointer to the typeRangeValue value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef RangeValue_Header_DEF
#define RangeValue_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeIntegerValue.h"
#include "typeRangeValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeRangeValue* RangeValue(
	typeIntegerValue* start,
	typeIntegerValue* end,
	typeBool includeEnd
);

#endif
