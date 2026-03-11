/**
 * ConvertBinaryToInt
 * Converts a binary value to an integer
 *
 * This function creates a new integer value with a length such that
 * all the bytes in the binary value fit into 64 bit words.
 * It then copies all the bytes directly into the 64 bit words in the integer value
 * This function doe not do string to integer conversion, but rather,
 * it simply interprets a binary value as an integer.
 *
 * The return value will be a typeValueRef value that has the typeValueRef->type
 * property set to enValueRefTypeInteger and has the typeValueRef->value property
 * set to the typeIntegerValue that contains the converted integer value
 *
 * @param binary A pointer to the binary value to convert
 * @return       A pointer to the converted value
 *
 * @param binary The binary value to convert
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/11/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertBinaryToInt_Header_DEF
#define ConvertBinaryToInt_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertBinaryToInt(typeData* binary);

#endif
