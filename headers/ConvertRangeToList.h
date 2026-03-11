/**
 * ConvertRangeToList
 * Converts a range value to a list of integer values
 *
 * If the range is open ended, meaning it starts or ends at infinity or negative
 * infinity, then an empty reference is returned, otherwise, a list of every integer
 * in the range from start to end is returned.
 *
 * WARNING: If you call this function against a large range, it has the potential
 * to crash the computer as every single integer in the range will be created,
 * allocated, and tracked on the current memory stack. For example, let's say
 * the range is 1..9999999999999999999999999999999999. The computer will most definitely
 * run out of memory.
 *
 * If the range is not open ended, the return value will be a typeValueRef value with
 * the type property set to enValueRefTypeList and the value property set to a
 * typeValueRefList value that contains every integer in the range
 *
 * @param range A pointer to the range value to convert
 * @return      A pointer to a list reference that contains all integers in the range
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertRangeToList_Header_DEF
#define ConvertRangeToList_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"
#include "typeRangeValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertRangeToList(typeRangeValue* range);

#endif
