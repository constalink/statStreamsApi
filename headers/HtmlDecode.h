/**
 * HtmlDecode
 * Converts HTML encoded text into plain text. HTML encoded entities such as &lt;, &amp;,
 * and &gt; are replaced by their plain text characters. Any non-printable or non HTML
 * entity sequences are simply copied over as is. The return value will contain the plain
 * text value.
 *
 * IMPORTANT: This is not a comprehensive conversion. It'll only handle a limited set
 * of possible HTML entities. It's only meant to reverse the HtmlEncode function and
 * still doesn't do it exactly because it can't put back unprintable characters that
 * were discarded during the HtmlEncode process. It won't handle the thousands of
 * modern HTML5 entities such as &copy; or &reg;
 *
 * @param html A pointer to the typeData value that contains the HTML to convert into text
 * @return     A pointer to the resultant plain text value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/1/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef HtmlDecode_Header_DEF
#define HtmlDecode_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

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
typeData* HtmlDecode(typeData* html);

#endif
