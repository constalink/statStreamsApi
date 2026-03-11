/**
 * SliceString
 * Slices a string based on character indexes instead of byte indexes.
 * Characters can be multi-byte in accordance with UTF8
 *
 * This function differs from the SliceData function in that the SliceData
 * function doesn't care about multi-byte characters. With SliceData, it's
 * possible to break up a multi-byte character and end up with an invalid
 * UTF8 code point in your string. Here's a quick example:
 *
 * // Notice the pi character π - this character is a 2 byte character
 * typeData* myString = String("Have a slice of π on me");
 *
 * // This will be "slice of \xcf" where the last byte is 0xCF, not π
 * typeData* badSlice = SliceData(myString, 7, 17);
 *
 * The SliceString function treats multi-byte UTF8 characters as a single index
 * so that they aren't broken up if a slice index would normally split the character
 *
 * // This will be "slice of π"
 * typeData* goodSlice = SliceString(myString, 7, 17);
 *
 * This function does not maintain a pointer to the original typeData value, instead
 * it copies the raw bytes into the new typeData value so that the 2 values are
 * complete separated. Changing the slice won't affect the original value
 *
 * @param string   A pointer to the string to take a slice of
 * @param startPos The zero based index to start the slice at. Negative indexes are supported
 * @param endPos   The zero based index to end the slice at. Negative indexes are supported
 *                 The return value does not include the character at the endPos index
 * @return         A pointer to the new typeData value that contains the characters of the slice
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/12/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SliceString_Header_DEF
#define SliceString_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeStringValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeStringValue* SliceString(
	typeStringValue* string,
	intmax_t startPos,
	intmax_t endPos
);

#endif
