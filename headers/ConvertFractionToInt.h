/**
 * ConvertFractionToInt
 * Converts a fraction value to an integer value
 *
 * This function doesn't just discard the fraction part of a fraction. What it does
 * is determine if the value inside the fraction can be interpreted as an integer
 * and if so, then that integer is returned. To determine that, it takes a look at the
 * numerator part of the fraction and if it's greater than zero, this means that it
 * can't be interpreted as an integer and the empty reference is returned instead.
 *
 * This function handles infinity and negative infinity values as well. If the fraction
 * is infinity, then infinity as an integer is returned. And if the fraction is negative
 * infinity, then negative infinity as an integer is returned.
 *
 * If the fraction has a zero numerator, then the return value will be a typeValueRef value with
 * the type property set to enValueRefTypeInteger and the value property set to a typeIntegerValue
 * value pointer that contains the integer part of the fraction
 *
 * If the fraction has a non-zero numerator, then an empty reference is returned.
 * This is different from a zero integer value. Rather, it'll be a typeValueRef value where
 * the type property is set to enValueRefTypeEmpty and the value property is set to NULL
 *
 * IMPORTANT: This function does not do a deep copy. This means that the return value
 * will share the same underlying typeInteger pointer as the fraction value
 *
 * @param fraction A pointer to a fraction value to convert
 * @return         A pointer to an integer value or an empty reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/11/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertFractionToInt_Header_DEF
#define ConvertFractionToInt_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeFractionValue.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertFractionToInt(typeFractionValue* fraction);

#endif
