/**
 * CompareIntegerValues
 * Compares two integer values
 *
 * This function handles infinity values as well as negative numbers
 * The return value will be as follows
 *
 *  1 - The first integer is greater
 *  0 - The two integers are equal
 * -1 - The second integer is greater
 *
 * @param int1 A pointer to the first integer value to compare
 * @param int2 A pointer to the second integer value to compare
 * @return     The result of the comparison
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/20/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CompareIntegerValues_Header_DEF
#define CompareIntegerValues_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeIntegerValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
int8_t CompareIntegerValues(typeIntegerValue* int1, typeIntegerValue* int2);

#endif
