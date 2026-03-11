/**
 * typeFraction
 * A fraction value. This struct has no concept of negative.
 * For a fraction value that can be negative, take a look at the
 * typeFractionValue struct instead
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/21/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeFraction_DEF
#define typeFraction_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeFraction {
	VALUEMEMBERS;

	typeInteger* intValue;
	typeInteger* numerator;
	typeInteger* denominator;

} typeFraction;

#endif
