/**
 * HtmlDecodeInto
 * Takes a source and destination data value and decodes the HTML encoded string value
 * into the decoded value. HTML encoded entities such as &lt;, &amp;, &gt; are replaced
 * by their plain text characters. Any non-printable or non HTML entity sequences are
 * simply copied over as is. The return value is the number of bytes written into the
 * encoded value. You must make sure that the encoded value has enough space to hold all
 * the decoded data. Checkout the HtmlDecodeLength function to get the byte length necessary
 * to hold the plain text value.
 *
 * This is a lower level version of the HtmlDecode function. In face, the HtmlDecode
 * function calls this function in order to copy data from the HTML encoded value into
 * the decoded value.
 *
 * IMPORTANT: This is not a comprehensive conversion. It'll only handle a limited set
 * of possible HTML entities. It's only meant to reverse the HtmlEncode function and
 * still doesn't do it exactly because it can't put back unprintable characters that
 * were discarded during the HtmlEncode process. It won't handle the thousands of
 * modern HTML5 entities such as &copy; or &reg;
 *
 * @param html    A pointer to the uint8_t array of bytes to decode
 * @param htmlLen The byte length of the "html" array to decode
 * @param encoded A pointer to a uint8_t array to write the decoded value to
 * @return        The number of bytes written into the decoded array
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/1/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef HtmlDecodeInto_Header_DEF
#define HtmlDecodeInto_Header_DEF

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
intmax_t HtmlDecodeInto(uint8_t* html, intmax_t htmlLen, uint8_t* decoded);

#endif
