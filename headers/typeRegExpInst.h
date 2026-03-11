/**
 * typeRegExpInst
 * Regular expression instruction type
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/20/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeRegExpInst_DEF
#define typeRegExpInst_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeRegExpAst.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enRegExpInst.h"

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeRegExpInst {
	VALUEMEMBERS;

	typeRegExpAst* matchAst;

	enRegExpInst instruction;
	intmax_t opIndex;
	intmax_t toIndex;
	intmax_t max;

} typeRegExpInst;

#endif
