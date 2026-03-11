/**
 * HighestCommonFactor
 * Calculates the highest common factor of two integer values
 *
 * The highest common factor is the largest positive integer that divides
 * the two integers evenly without leaving a remainder
 *
 * For example: If you pass in 60 and 72, the return value will be 12
 *
 * @param int1 The first integer
 * @param int2 The 2nd integer
 * @return     An integer value that represents the largest number that divides both without a remainder
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/23/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef HighestCommonFactor_Header_DEF
#define HighestCommonFactor_Header_DEF

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
typeInteger* HighestCommonFactor(typeInteger* int1, typeInteger* int2);

#endif
