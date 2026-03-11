/**
 * ReduceFraction
 * Reduces a fraction. This function takes a fraction and
 * reduces it such that the numerator and denominator use the smallest
 * possible values without changing the value of the fraction
 *
 * This function does not modify the fraction passed in but rather,
 * it creates a new typeFraction value and stores the result in there.
 * If the original fraction has 1 as a numerator, then it can't be
 * reduced any further and the original fraction is returned
 *
 * IMPORTANT: The fraction that's returned will share the underlying integer value
 * and possibly the original numerator or denominator with the original fraction
 * that's passed in. In other words, the new fraction value will use the same
 * pointer as the original fraction value
 *
 * @param fraction A pointer to the fraction value to reduce
 * @return         A pointer to the reduced fraction value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/24/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReduceFraction_Header_DEF
#define ReduceFraction_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeFraction.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeFraction* ReduceFraction(typeFraction* fraction);

#endif
