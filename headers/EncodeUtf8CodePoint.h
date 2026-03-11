/**
 * EncodeUtf8CodePoint
 * Encodes a Unicode code point as UTF8
 *
 * This function takes a unicode code point as an integer value
 * and returns a pointer to a typeData value that contains the
 * code point encoded as UTF8
 *
 * For example... to encode the character pi π which is 0x3C0 or 960
 * typeData* pi = EncodeUtf8CodePoint(0x3c0);
 *
 * pi is now a 2 byte value "\xcf\x80"
 *
 * @param codePoint the unicode code point to encode
 * @return          A pointer to a typeData value that contains the encoded code point
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/27/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef EncodeUtf8CodePoint_Header_DEF
#define EncodeUtf8CodePoint_Header_DEF

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
typeData* EncodeUtf8CodePoint(intmax_t codePoint);

#endif
