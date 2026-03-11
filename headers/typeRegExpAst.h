/**
 * typeRegExpAst
 * A regular expression AST (Abstract syntax tree)
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/24/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeRegExpAst_DEF
#define typeRegExpAst_DEF

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
#include "typeRegExpAstList.h"
#include "typeRegExpQuant.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enRegExpElem.h"
#include "enRegExpAtt.h"

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeRegExpAst {
	VALUEMEMBERS;

	// List of children
	struct typeRegExpAstList* children;
	typeRegExpQuant* quant;
	typeData* utf8Value;

	intmax_t startPos;
	intmax_t endPos;
	enRegExpElem type;
	enRegExpAtt attribute;
	intmax_t groupIndex;
	char startRange;
	char endRange;
	uint8_t hexByte;


} typeRegExpAst;

#endif
