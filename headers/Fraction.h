/**
 * Fraction
 * Creates a typeFraction value and returns a pointer to it
 *
 * This function allocates a new typeFraction value using the passed in typeInteger values
 * and tracks it on the current memory stack.
 *
 * NOTE: typeFraction values have no concept of positive or negative, they just represent
 * a value greater than or equal to zero. If you want to create a negative fraction value
 * take a look at the typeFractionValue struct as well as the FractionValue function
 *
 * @param intValue    A pointer to a typeInteger value that represents the integer portion of the fraction
 * @param numerator   A pointer to a typeInteger value that represents the numerator portion of the fraction
 * @param denominator A pointer to a typeInteger value that represents the denominator portion of the fraction
 * @return            A pointer to a typeFraction value that contains the fraction
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/21/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Fraction_Header_DEF
#define Fraction_Header_DEF

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
typeFraction* Fraction(
	typeInteger* intValue,
	typeInteger* numerator,
	typeInteger* denominator
);

#endif
