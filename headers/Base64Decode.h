/**
 * Base64Decode
 * Decodes a base64 encoded string
 *
 * This function takes a pointer to a typeData value that contains a base64 encoded
 * string and returns a typeData value that contains the decoded value.
 * If the value passed in isn't a valid base64 encoded string, then a
 * zero length typeData value is returned
 *
 * @param encoded A pointer to the base64 encoded string you want to decode
 * @return        A pointer to the decoded value or an empty value if it can't be decoded
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/3/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Base64Decode_Header_DEF
#define Base64Decode_Header_DEF

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
typeData* Base64Decode(typeData* encoded);

#endif
