/**
 * typeData
 * A data object that can hold a string or binary data.
 * There is no distinction between a string or binary data as they both
 * simply contain raw bytes. It is said that a typeData value contains
 * a string if all the bytes in the string are made up of UTF-8 encoded code points
 * and it is said that a typeData value contains a binary value if it is
 * made up of bytes that can't be interpreted as UTF-8 code points, however
 * the final interpretation of the underlying value is left to the developer.
 *
 * To see if a typeData value contains binary data or not, simply iterate
 * over the byte array and make your determination based on the bytes it contains
 *
 * Also, since a typeData value contains a length, there is no concept of
 * a null terminated string at the top level, however, every underlying
 * typeData value has a null byte at the "length" index of the byte array
 * whether it contains a binary value or not. This allows you to pass string
 * values directly into functions that expect a null terminated string as
 * long as the underlying value contains just UTF8 code points.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeData_DEF
#define typeData_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeData {
	VALUEMEMBERS;

	// A pointer to an array of unsigned bytes
	uint8_t* data;

	// The length of the byte array
	intmax_t length;

} typeData;

#endif
