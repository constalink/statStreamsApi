/**
 * FractionDenominator
 * Returns the denominator part of a fraction
 *
 * This function allocates a new typeIntegerValue value using the denominator portion
 * of the fraction and tracks it on the current memory stack. The new integer value
 * will be positive regardless of the sign of the fraction value. So if the fraction value
 * is negative, the integer value will still be positive. If the fraction is infinity
 * or negative infinity, then the integer value will be positive 1
 *
 * IMPORTANT: The underlying denominator value (typeInteger) is shared between the original
 * fraction and the new integer value. In other words, the new integer value uses the
 * same pointer to the denominator as the fraction value
 *
 * @param fraction A pointer to the fraction value to take the denominator from
 * @return         A pointer to a typeIntegerValue that contains the denominator
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/4/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FractionDenominator_Header_DEF
#define FractionDenominator_Header_DEF

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
typeIntegerValue* FractionDenominator(typeFractionValue* fraction);

#endif
