/**
 * NotInteger
 * Inverts an integers bits. All zero bits become 1 bits and all 1 bits become zero
 *
 * This function does not modify the integer value that's passed in, but rather,
 * it creates a new integer value and copies inverted bits into it from the original value
 *
 * @param intVal A pointer to the integer to to invert
 * @return       A pointer to a new integer that has all bits inverted
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef NotInteger_Header_DEF
#define NotInteger_Header_DEF

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
typeInteger* NotInteger(typeInteger* intVal);

#endif
