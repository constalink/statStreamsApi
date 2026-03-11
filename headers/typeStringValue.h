/**
 * typeStringValue
 * A string value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/11/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeStringValue_DEF
#define typeStringValue_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeStringValue {
	VALUEMEMBERS;

	typeData* string;
	intmax_t charLength;

} typeStringValue;

#endif
