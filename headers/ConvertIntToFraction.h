/**
 * ConvertIntToFraction
 * Convert an integer value to a fraction value
 *
 * This function simply returns a fraction that has the same integer value
 * and a zero numerator / one denominator.
 *
 * The return value will be a typeValueRef value with the type property set to
 * enValueRefTypeFraction and the value property set to a typeFractionValue value
 * pointer that contains the fraction value.
 *
 * IMPORTANT: This function does not do a deep copy. This means that the return value
 * will share the same underlying typeInteger pointer as the integer value that's passed in
 *
 * @param intValue A pointer to the integer value to convert
 * @return         A pointer to the fraction value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/11/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertIntToFraction_Header_DEF
#define ConvertIntToFraction_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeIntegerValue.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertIntToFraction(typeIntegerValue* intValue);

#endif
