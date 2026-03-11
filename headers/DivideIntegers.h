/**
 * DivideIntegers
 * Divides two integer values and returns the result as a fraction value
 *
 * This function does not modify either of the integers passed in
 *
 * @param intVal   An integer that represents the dividend or the number being divided
 * @param divideBy An integer that represents the divisor or the number to divide by
 * @return         A fraction value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/23/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DivideIntegers_Header_DEF
#define DivideIntegers_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeInteger.h"
#include "typeFraction.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeFraction* DivideIntegers(typeInteger* intVal, typeInteger* divideBy);

#endif
