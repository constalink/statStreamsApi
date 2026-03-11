/**
 * MultiplyMod
 * Multiply two integers and return the remainder
 *
 * This function calculates (int1*int2) % mod. It does this without having to calculate int1 * int2 directly
 * This function can handle very large integers and is ideal for encryption calculations
 *
 * @param int1 The first integer to multiply
 * @param int2 The second integer to multiply
 * @param mod  The modulus which is the number to divide the product of int1 and int2 by
 * @return     The remainder after dividing the product of int1 and int2 by mod
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/25/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MultiplyMod_Header_DEF
#define MultiplyMod_Header_DEF

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
typeInteger* MultiplyMod(typeInteger* int1, typeInteger* int2, typeInteger* mod);

#endif
