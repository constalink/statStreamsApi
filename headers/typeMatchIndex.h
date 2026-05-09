/**
 * typeMatchIndex
 * A regular expression match index result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/3/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeMatchIndex_DEF
#define typeMatchIndex_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeMatchIndexGroupList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeMatchIndex {
	VALUEMEMBERS;

	typeMatchIndexGroupList* groups;
	intmax_t startIndex;
	intmax_t endIndex;

} typeMatchIndex;

#endif
