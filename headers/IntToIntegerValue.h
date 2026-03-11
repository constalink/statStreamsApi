/**
 * IntToIntegerValue
 * Converts an integer to an integer value
 *
 * This function allocates a new typeIntegerValue value using the passed in integer
 * and tracks it on the current memory stack. This function is equivalent to the following:
 *
 * IntegerValue(integer < 0, Integer(1, 1, abs(integer)));
 *
 * @param integer The signed integer to create the integer value from
 * @return        A pointer to the new typeIntegerValue value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/4/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IntToIntegerValue_Header_DEF
#define IntToIntegerValue_Header_DEF

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
typeIntegerValue* IntToIntegerValue(intmax_t integer);

#endif
