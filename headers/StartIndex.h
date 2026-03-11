/**
 * StartIndex
 * Converts a start index and length into a normalized zero based index
 * This function allows negative indexes that count backward from the end
 *
 * @param length     The length of the list like value. This should be the zero based end index + 1
 * @param startIndex The start index. This can be negative
 * @return           The positive zero based index that gets calculated
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StartIndex_Header_DEF
#define StartIndex_Header_DEF

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
intmax_t StartIndex(intmax_t length, intmax_t startIndex);

#endif
