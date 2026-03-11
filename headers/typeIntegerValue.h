/**
 * typeIntegerValue
 * An integer value. This struct can be negative, positive, infinity, or negative infinity
 *
 * Zero integers are always positive
 * Infinity and negative infinity integers have a zero intValue
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/30/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeIntegerValue_DEF
#define typeIntegerValue_DEF

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
#include "enNumberType.h"

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeIntegerValue {
	VALUEMEMBERS;

	typeInteger* intValue;
	enNumberType type;

} typeIntegerValue;

#endif
