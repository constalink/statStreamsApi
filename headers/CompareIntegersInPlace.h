/**
 * CompareIntegersInPlace
 * Compares two 64bit integer arrays in place and returns:
 * 1 if the first is greater,
 * -1 if the second is greater,
 * and 0 if they are equal
 *
 * This is a lower level version of the CompareIntegers function
 *
 * @param int1Words A pointer to a 64 bit word array to compare against
 * @param int1Len   The number of 64 bit words in the int1Words array
 * @param int2Words A pointer to a 2nd 64 bit word array to compare against
 * @param int2Len   The number of 64 bit words in the int2Words array
 * @return          1 if int1 is greater, -1 if int2 is greater or 0 if they are equal
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/18/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CompareIntegersInPlace_Header_DEF
#define CompareIntegersInPlace_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
int8_t CompareIntegersInPlace(
	uint64_t* int1Words,
	intmax_t int1Len,
	uint64_t* int2Words,
	intmax_t int2Len
);

#endif
