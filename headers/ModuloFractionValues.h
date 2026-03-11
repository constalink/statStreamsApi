/**
 * ModuloFractionValues
 * Calculates and returns fraction1 modulo fraction 2. This is the
 * remainder after fraction1 is divided by fraction2. This function also
 * handles infinity values as well as negative fractions
 *
 * Here's are a few examples:
 * fraction1: 10 0/1
 * fraction2: 3 1/2
 * Result:    3 0/1 because 10 / 3.5 = 2 with a remainder of 3
 *
 * fraction1: 3 2/5
 * fraction2: 1 9/10
 * Result:    1 1/2 because 3.4 / 1.9 = 1 with a remainder of 1.5
 *
 * If fraction1 is infinity or negative infinity, then zero (as a fraction) is returned
 * If fraction2 is infinity or negative infinity, then fraction1 is returned
 * If fraction2 is zero, then zero is returned
 * If both fraction1 and fraction2 are negative or positive, then the result will be positive
 * If fraction1 is negative and fraction2 is positive, then the result will be negative
 * If fraction1 is positive and fraction2 is negative, then the result will be negative
 *
 * @param fraction1 A pointer to the dividend or the fraction being divided
 * @param fraction2 A pointer to the divisor or the fraction to divide by
 * @return          A fraction that contains the remainder after dividing fraction1 by fraction2
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/23/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ModuloFractionValues_Header_DEF
#define ModuloFractionValues_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeFractionValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeFractionValue* ModuloFractionValues(
	typeFractionValue* fraction1,
	typeFractionValue* fraction2
);

#endif
