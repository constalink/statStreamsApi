/**
 * RegExpSplit
 * Splits a typeData value int a list of typeData values using a regular expression
 * separator. The separator is a regular expression that determines where each split
 * should occur. The return value is a typeDataList pointer that contains a list of
 * sub typeData values. This function is similar to the Split function but accepts a
 * regular expression as a separator instead of a plain string.
 *
 * If maxLength is 1 or data is an empty string then a list with a single element
 * is returned which is the original typeData value that's passed in.
 *
 * If maxLength is zero or less, then there will be no limit to the number of
 * splits that are performed. If maxLength is larger than zero, then the
 * list that's returned will contain at most maxLength elements with the
 * last element making up the remainder of the value.
 *
 * As an example, you can split a string at each space sequence like so:
 *
 * // Here is the string to split
 * typeData* phrase = String("The   brown fox jumped the fence");
 *
 * // Now let's split the string at each space sequence
 * typeRegExp* separator = RegExp(String("\\s+"), false, false, false);
 *
 * // Words will contain: ["The", "brown", "fox", "jumped", "the", "fence"]
 * typeDataList* words = RegExpSplit(phrase, separator, 0);
 *
 * // With a maxLength of 3: ["The", "brown", "fox jumped the fence"]
 * typeDataList* words = RegExpSplit(phrase, separator, 3);
 *
 * @param data      A pointer to the typeData value to split
 * @param sep       A pointer to the regular expression to use as a separator
 * @param maxLength The maximum number of elements in the returned list or 0 for no max
 * @return          A typeDataList pointer that contains the list of elements
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/8/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef RegExpSplit_Header_DEF
#define RegExpSplit_Header_DEF

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
#include "typeRegExp.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeDataList* RegExpSplit(typeData* data, typeRegExp* sep, intmax_t maxLength);

#endif
