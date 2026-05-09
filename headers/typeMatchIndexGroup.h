/**
 * typeMatchIndexGroup
 * A regular expression match index group
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/3/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeMatchIndexGroup_DEF
#define typeMatchIndexGroup_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeMatchIndexGroup {
	VALUEMEMBERS;

	intmax_t startIndex;
	intmax_t endIndex;

} typeMatchIndexGroup;

#endif
