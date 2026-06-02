/**
 * HtmlEncodeInto
 * Takes a source and destination data value and encodes the plain text value
 * into the encoded value such that the encoded value can be embedded into an
 * HTML tag attribute or within an HTML tag as a literal text value. HTML
 * characters such as &, <, >, and quotes are replaced by their HTML entity
 * equivalent character sequences. Also, any non printable characters are removed
 * from the result. The return value is the number of bytes written into the encoded
 * value. You must make sure that the encoded value has enough space to hold all
 * the encoded data. Checkout the HtmlEncodeLength function to get the byte length
 * necessary to hold an HTML encoded value.
 *
 * This is a lower level version of the HtmlEncode function. In fact, the HtmlEncode
 * function calls this function in order to copy data from the plain text value into
 * the encoded value.
 *
 * @param text             A pointer to a uint8_t array of bytes to encode
 * @param textLen          The byte length of the "text" array to encode
 * @param encoded          A pointer to a uint8_t array to write the encoded value to
 * @param renderWhiteSpace Whether or not to render white space. If true then newline
 *                         characters will be replaced with <br> and multiple spaces
 *                         and tabs will be replaced with non breaking spaces
 * @return                 The number of bytes written into the encoded array
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef HtmlEncodeInto_Header_DEF
#define HtmlEncodeInto_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
intmax_t HtmlEncodeInto(
	uint8_t* text,
	intmax_t textLen,
	uint8_t* encoded,
	typeBool renderWhiteSpace
);

#endif
