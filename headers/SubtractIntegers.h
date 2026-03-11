/**
 * SubtractIntegers
 * Subtracts two integer values and return the result
 *
 * @param int1 A pointer to an integer value
 * @param int2 A pointer to an integer value to subtract
 * @return     A pointer to an integer value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/21/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SubtractIntegers_Header_DEF
#define SubtractIntegers_Header_DEF

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
typeInteger* SubtractIntegers(typeInteger* int1, typeInteger* int2);

#endif
