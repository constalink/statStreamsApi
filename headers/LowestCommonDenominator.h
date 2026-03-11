/**
 * LowestCommonDenominator
 * Returns the lowest common denominator between 2 integer values
 * The lowest common denominator is the smallest number that is a
 * common multiple of the denominators passed in.
 *
 * Example: If you pass in 12 and 15, then 60 will be returned
 *
 * This function does not modify the integer values passed in.
 * This function creates a new typeInteger value and tracks it on
 * the current memory stack
 *
 * @param den1 A pointer to the first denominator value
 * @param den2 A pointer to the 2nd denominator value
 * @return     A pointer to the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/24/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef LowestCommonDenominator_Header_DEF
#define LowestCommonDenominator_Header_DEF

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
typeInteger* LowestCommonDenominator(typeInteger* den1, typeInteger* den2);

#endif
