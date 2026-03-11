/**
 * IntegerToDataLength
 * Calculates the number of bytes required to convert a typeInteger value into a typeData
 * value such that there are no prepending zero bytes.
 *
 * For example: If we pass in an integer that contains 33215, it'll return 2 even though
 * the integer value contains 1 64 bit word (8 bytes) because 33215 fits into 2 bytes
 * with no prepended zeros.
 *
 * @param integer The integer value to calculate the data length from
 * @return        The number of bytes required to fit the integer value into a typeData value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/3/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IntegerToDataLength_Header_DEF
#define IntegerToDataLength_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
intmax_t IntegerToDataLength(typeInteger* integer);

#endif
