/**
 * Sha224
 * Calculates and returns an SHA224 hash for a piece of data
 * The return value will always be 224 bits long (or 28 bytes)
 *
 * IMPORTANT: The return value will be raw binary bytes. This means that
 * it'll be unreadable as is. You'll need to hex encode the result if you
 * want it to be in a readable format. See the HexEncode function
 *
 * @param data A pointer to the data to hash
 * @return     A pointer to the hashed value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/4/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Sha224_Header_DEF
#define Sha224_Header_DEF

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
typeData* Sha224(typeData* data);

#endif
