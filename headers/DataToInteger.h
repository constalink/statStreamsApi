/**
 * DataToInteger
 * Converts a typeData value to a typeInteger value
 *
 * This function creates a new typeInteger value with a length such
 * that all the bytes in the typeData value fit into 64 bit words.
 * It then copies all the bytes directly into the 64 bit words in the typeInteger value
 * This function does not do string to integer conversion, but rather
 * it simply interprets a binary value as an integer.
 *
 * This function performs the opposite operation of the IntegerToData function
 *
 * @param data A pointer to a typeData value to convert
 * @return     A pointer to a typeInteger value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/16/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DataToInteger_Header_DEF
#define DataToInteger_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeInteger* DataToInteger(typeData* data);

#endif
