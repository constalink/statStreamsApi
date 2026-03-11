/**
 * EndIndex
 * Converts a length, start index, and end index into a normalized zero based index
 * This function allows negative indexes that count backward from the end. Also, this
 * function makes sure that the end index is greater than or equal to the start index
 * so that ranges of items are properly calculated
 *
 * @param length     The list length
 * @param startIndex The start index. If endIndex is less than this,
 *                   then it is calculated as if it is equal to this value
 * @param endIndex   The end index. This can be negative. If it ends up being
 *                   calculated to be less than startIndex, then startIndex is returned
 * @return           The calculated end index
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef EndIndex_Header_DEF
#define EndIndex_Header_DEF

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
intmax_t EndIndex(intmax_t length, intmax_t startIndex, intmax_t endIndex);

#endif
