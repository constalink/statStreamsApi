/**
 * Split
 * Splits a typeData value into a list of typeData values using a separator.
 * The separator is a string or binary value that determines where each split
 * should occur. The return value is a typeDataList pointer that contains a list
 * of sub typeData values.
 *
 * If maxLength is 1 or data is an empty string then a list with a single element
 * is returned which is the original typeData value that's passed in.
 * If the separator is an empty string, then the return value is a list of single
 * byte elements.
 *
 * WARNING: If an empty string is passed in as a separator, then this function
 * will split on every byte. This can pose a problem for strings that contain
 * multi-byte characters as it'll break those up into separate byte values
 * instead of preserving these as individual characters.
 *
 * If maxLength is zero, then there will be no limit to the number of
 * splits that are performed. If maxLength is larger than zero, then the
 * list that's returned will contain at most maxLength elements with the
 * last element making up the remainder of the value.
 *
 * As an example, you can split a string at each space character like so:
 *
 * // Here is the string to split
 * typeData* phrase = String("The brown fox jumped the fence");
 *
 * // Now let's split the string at each space character
 * typeData* separator = String(" ");
 *
 * // Words will contain: ["The", "brown", "fox", "jumped", "the", "fence"]
 * typeDataList* words = Split(phrase, separator, 0);
 *
 * // With a maxLength of 3: ["The", "brown", "fox jumped the fence"]
 * typeDataList* words = Split(phrase, separator, 3);
 *
 * @param data      A pointer to the typeData value to split
 * @param sep       A pointer to the typeData value to use as a separator
 * @param maxLength The maximum number of elements in the returned list or 0 for no max
 * @return          A typeDataList pointer that contains the list of elements
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Split_Header_DEF
#define Split_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeDataList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeDataList* Split(typeData* data, typeData* sep, intmax_t maxLength);

#endif
