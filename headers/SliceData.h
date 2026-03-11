/**
 * SliceData
 * Slices a typeData value and returns a new typeData value that contains that slice
 * This function does not modify the typeData value that's passed in, but rather it
 * creates a new typeData value that contains the bytes of the slice
 *
 * This function does not maintain a pointer to the original typeData value, instead
 * it copies the raw bytes into the new typeData value so that the 2 values are
 * complete separated. Changing the slice won't affect the original value
 *
 * @param data     A pointer to a typeData value to take the slice from
 * @param startPos The zero based index to start the slice at. Negative indexes are supported
 * @param endPos   The zero based index to end the slice at. Negative indexes are supported
 *                 The return value does not include the byte at the endPos index
 * @return         A pointer to a new typeData value that contains the bytes of the slice
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SliceData_Header_DEF
#define SliceData_Header_DEF

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
typeData* SliceData(typeData* data, intmax_t startPos, intmax_t endPos);

#endif
