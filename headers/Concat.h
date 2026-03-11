/**
 * Concat
 * Concatenates 2 or more typeData objects and returns a pointer to a new typeData value
 * that has all the data values concatenated.
 *
 * This function doesn't modify the typeData values that are passed in, instead it creates
 * a new typeData value and copies all the bytes from each value into the new value
 *
 * @param numberOfItems The number of typeData* values that you are going to pass into the function. This should 2 or more
 * @param ...           Two or more typeData pointers to concatenate
 * @return              A new typeData value that has all the passed in values concatenated together
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Concat_Header_DEF
#define Concat_Header_DEF

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
typeData* Concat(intmax_t numberOfItems, ...);

#endif
