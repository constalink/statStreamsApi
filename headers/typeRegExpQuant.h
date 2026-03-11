/**
 * typeRegExpQuant
 * A regular expression quantifier
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/25/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeRegExpQuant_DEF
#define typeRegExpQuant_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeBool.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeRegExpQuant {
	VALUEMEMBERS;

	intmax_t startPos;
	intmax_t endPos;
	intmax_t atLeast;
	intmax_t atMost;
	typeBool greedy;

} typeRegExpQuant;

#endif
