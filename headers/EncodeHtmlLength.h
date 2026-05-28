/**
 * EncodeHtmlLength
 * Takes a plain text string and returns the byte length necessary for encoding
 * it as HTML such that it can be embedded into an HTML tag attribute or within
 * an HTML tag. The length is the same as the return value of the EncodeHtml
 * function. In fact, the EncodeHtml function calls this function in order to
 * determine the length before a memory allocation is performed.
 *
 * @param text The text to encode
 * @return     The byte length necessary to encode the text
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef EncodeHtmlLength_Header_DEF
#define EncodeHtmlLength_Header_DEF

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
intmax_t EncodeHtmlLength(typeData* text);

#endif
