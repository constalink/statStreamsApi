/**
 * HexDecode
 * Decodes a hex encoded string
 *
 * This function takes a pointer to a typeData value that contains a hex
 * encoded string and returns a typeData value that contains the decoded value.
 * If the value passed in isn't a valid hex encoded string, then a zero
 * length typeData value is returned
 *
 * @param encoded A pointer to the hex encode string you want to encode
 * @return        A pointer to the decoded value or an empty value if it can't be decoded
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/7/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef HexDecode_Header_DEF
#define HexDecode_Header_DEF

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
typeData* HexDecode(typeData* encoded);

#endif
