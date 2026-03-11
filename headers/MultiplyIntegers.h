/**
 * MultiplyIntegers
 * Multiplies two integers
 *
 * @param intVal   A pointer to the first integer to multiply
 * @param timesVal A pointer to the 2nd integer to multiply
 * @return         A pointer to the result which is the products if intVal and timesVal
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/23/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MultiplyIntegers_Header_DEF
#define MultiplyIntegers_Header_DEF

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
typeInteger* MultiplyIntegers(typeInteger* intVal, typeInteger* timesVal);

#endif
