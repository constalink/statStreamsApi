/**
 * BitwiseAnd
 * Performs a bitwise AND operation on two integers
 * This function does not modify either of the integer values that are passed
 * in but rather, it creates a brand new typeInteger value and copies the words
 * into it while performing a bitwise AND operation as it copies
 *
 * @param int1 The first integer value
 * @param int2 The second integer value
 * @return     A new integer value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/26/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef BitwiseAnd_Header_DEF
#define BitwiseAnd_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeInteger* BitwiseAnd(typeInteger* int1, typeInteger* int2);

#endif
