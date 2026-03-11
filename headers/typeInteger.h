/**
 * typeInteger
 * Contains array of 64bit words, similar to typeData but with 8-byte list elements.
 * This struct has no concept of negative. For an integer value that can be negative,
 * take a look at the typeIntegerValue struct instead.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/15/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeInteger_DEF
#define typeInteger_DEF

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
typedef struct typeInteger {
	VALUEMEMBERS;

	uint64_t* words;
	intmax_t length;

} typeInteger;

#endif
