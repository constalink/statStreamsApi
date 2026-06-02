/**
 * HtmlDecodeLength
 * Takes an HTML encoded string and returns the byte length necessary for decoding it
 * into plain text. The length is the same as the return value of the HtmlDecode
 * function. In fact, the HtmlDecode function calls this function in order to determine
 * the length before memory allocation is performed.
 *
 * IMPORTANT: This is not a comprehensive conversion. It'll only handle a limited set
 * of possible HTML entities. It's only meant to reverse the HtmlEncode function and
 * still doesn't do it exactly because it can't put back unprintable characters that
 * were discarded during the HtmlEncode process. It won't handle the thousands of
 * modern HTML5 entities such as &copy; or &reg;
 *
 * @param html The HTML encoded text to convert to plain text
 * @return     The byte length necessary to decode the text
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/1/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef HtmlDecodeLength_Header_DEF
#define HtmlDecodeLength_Header_DEF

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
intmax_t HtmlDecodeLength(typeData* html);

#endif
