/**
 * FractionInteger
 * Returns the integer part of a fraction (just like the floor function does in C)
 *
 * This function allocates a new typeIntegerValue value using the integer portion
 * of the fraction and tracks it on the current memory stack. The new integer value
 * takes on the same sign of the fraction. So if the fraction is positive, the integer
 * will be positive and the same goes for negative. If the fraction is infinity, the
 * returned integer will be infinity, and if the fraction is negative infinity, the
 * integer will also be negative infinity.
 *
 * IMPORTANT: The underlying integer value (typeInteger) is shared between the original
 * fraction and the new integer value. In other words, the new integer value uses the
 * same pointer to the integer as the fraction value
 *
 * @param fraction A pointer to the fraction value to take the integer from
 * @return         A pointer to a typeIntegerValue that contains the integer
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/4/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FractionInteger_Header_DEF
#define FractionInteger_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeIntegerValue.h"
#include "typeFractionValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeIntegerValue* FractionInteger(typeFractionValue* fraction);

#endif
