/**
 * typeFractionValue
 * A fraction value. This struct can be negative, positive, infinity, or negative infinity
 *
 * Zero fractions are always positive
 * Infinity and negative infinity fractions have a zero and zero / 1 fraction
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/30/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeFractionValue_DEF
#define typeFractionValue_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeFraction.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enNumberType.h"

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeFractionValue {
	VALUEMEMBERS;

	typeFraction* fraction;
	enNumberType type;

} typeFractionValue;

#endif
