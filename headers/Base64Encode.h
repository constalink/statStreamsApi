/**
 * Base64Encode
 * Encodes binary data into a base64 encoded string
 *
 * @param data A pointer to the binary data value that you want to encode
 * @return     A pointer to the encoded data
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/3/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Base64Encode_Header_DEF
#define Base64Encode_Header_DEF

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
typeData* Base64Encode(typeData* data);

#endif
