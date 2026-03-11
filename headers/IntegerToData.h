/**
 * IntegerToData
 * Converts a typeInteger value to a typeData value
 *
 * This function creates a new typeData value with a length such
 * that all the 64-bit words in the typeInteger value fit into it.
 * It then copies all the bytes directly into the typeData byte array
 * This function does not do string to integer conversion, but rather
 * it simply interprets an integer as a binary value
 *
 * This function performs the opposite operation of the DataToInteger function
 *
 * @param integer A pointer to a typeInteger value to convert
 * @return        A pointer to a typeData value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/16/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IntegerToData_Header_DEF
#define IntegerToData_Header_DEF

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
typeData* IntegerToData(typeInteger* integer);

#endif
