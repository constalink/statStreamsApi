/**
 * ModuloIntegerValues
 * Calculates and returns int1 modulo int2. This is the
 * remainder after int1 is divided by int2. This function also
 * handles infinity values as well as negative integers
 *
 * Here is an example:
 * int1:   11
 * int2:   4
 * Result: 3 because 11 / 4 is 2 with a remainder of 3
 *
 * If int1 is infinity or negative infinity, then zero is returned
 * If int2 is infinity or negative infinity, then int1 is returned
 * If int2 is zero, then zero is returned
 * If both int1 and int2 are negative or positive, then the result will be positive
 * If int1 is negative and int2 is positive, then the result will be negative
 * If int1 is positive and int2 is negative, then the result will be negative
 *
 * @param int1 A pointer to the dividend or the integer being divided
 * @param int2 A pointer to the divisor or the integer to divide by
 * @return     An integer that contains the remainder after dividing int1 by int2
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/23/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ModuloIntegerValues_Header_DEF
#define ModuloIntegerValues_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeIntegerValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeIntegerValue* ModuloIntegerValues(typeIntegerValue* int1, typeIntegerValue* int2);

#endif
