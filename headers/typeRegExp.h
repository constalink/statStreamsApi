/**
 * typeRegExp
 * A regular expression
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeRegExp_DEF
#define typeRegExp_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeValue.h"
#include "typeData.h"
#include "typeRegExpInstList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Macros
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeRegExp {
	VALUEMEMBERS;

	typeData* pattern;
	typeRegExpInstList* instructions;
	typeData* startSequence;

	intmax_t groupIndex;
	typeBool ignoreCase;
	typeBool multiLine;
	typeBool dotAll;
	typeBool anchored;

} typeRegExp;

#endif
