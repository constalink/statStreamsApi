/**
 * ModuloIntegers
 * Calculates and returns integer modulo mod. This is the
 * remainder after integer is divided by mod.
 *
 * Here's an example:
 * integer: 11
 * mod:     4
 * Result:  3 because 11 / 4 is 2 with a remainder of 3
 *
 * @param integer A pointer to the dividend or the integer being divided
 * @param mod     A pointer to the divisor or the integer to divide by
 * @return        A pointer to an integer that contains the remainder after dividing integer by mod
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/23/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ModuloIntegers_Header_DEF
#define ModuloIntegers_Header_DEF

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
typeInteger* ModuloIntegers(typeInteger* integer, typeInteger* mod);

#endif
