/**
 * Repeat
 * Repeats a typeData value. This function takes a typeData pointer, duplicates
 * it a given number of times and returns a pointer to a concatenated value.
 * The passed in typeData value is not modified at all. Rather a new typeData
 * value is created and the bytes from "data" are copied into it the set number of times
 *
 * The result typeData value will be (data->length * times) bytes long so be careful
 * when calling this function against large values
 *
 * @param data  A pointer to a typeData value to repeat
 * @param times The number of times to repeat the value
 * @return      The concatenated typeData value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Repeat_Header_DEF
#define Repeat_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* Repeat(typeData* data, intmax_t times);

#endif
