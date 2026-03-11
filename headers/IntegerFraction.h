/**
 * IntegerFraction
 * Converts an integer value to a fraction value and returns a pointer to the new fraction value
 * This function allocates a new typeFractionValue value and tracks it on the current memory stack
 *
 * The return integer will have the same sign / type as the integer value that's passed in.
 * If the integer value passed in in negative, the fraction will be negative. If the integer value is
 * infinity, the fraction value will be infinity, and if the integer value is negative infinity,
 * the fraction value will also be negative infinity.
 *
 * The fraction that's returned will have a zero numerator and 1 denominator along with the
 * same integer value as the passed in integer.
 *
 * IMPORTANT: The underlying integer value (typeInteger) is shared between the original
 * integer value passed in and the new fraction value. In other words, the new fraction value
 * uses the same pointer to the integer as the passed in integer value.
 *
 * @param intValue A pointer to the integer value to create a fraction from
 * @return         A pointer to the new fraction value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/5/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IntegerFraction_Header_DEF
#define IntegerFraction_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeFractionValue.h"
#include "typeIntegerValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeFractionValue* IntegerFraction(typeIntegerValue* intValue);

#endif
