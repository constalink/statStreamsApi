/**
 * typeMatchGroup
 * A match group
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/29/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeMatchGroup_DEF
#define typeMatchGroup_DEF

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
typedef struct typeMatchGroup {
	VALUEMEMBERS;

	typeData* match;
	intmax_t startIndex;
	intmax_t endIndex;

} typeMatchGroup;

#endif
