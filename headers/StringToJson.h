/**
 * StringToJson
 * Converts a string to JSON
 *
 * This function expects a pointer to a typeData value as the string argument.
 * The function is written with a void* pointer so that this function
 * conforms to the typeItemToJsonFunc typedef
 *
 * You must take care to only pass in a pointer to a typeData value or you'll most
 * likely end up with buffer overflows or segmentation faults.
 *
 * Here's an example of how to call this function
 *
 * // The result will be "\"Hello World\""
 * typeData* result = StringToJson(String("Hello World"));
 *
 * This function handles escaping string data properly and can handle multi-byte
 * characters up to a U+10FFFF UTF8 code point. Any UTF8 character above code
 * point U+FFFF is encoded as a 12 character sequence, encoding the UTF16 surrogate
 * pair as per JSON standards. Any data that isn't a UTF8 code point
 * is encoded as a 6 character hex escape sequence. An example of this is
 * the \xFF byte which will be encoded as \u00FF
 *
 * @param string A pointer to an typeData value to encode
 * @return       A pointer to a typeData value that contains the JSON encoded result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StringToJson_Header_DEF
#define StringToJson_Header_DEF

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
typeData* StringToJson(void* string);

#endif
