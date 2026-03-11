/**
 * typeDeleteFileResult
 * A delete file result. If this struct contains an error message
 * then the delete operation failed and the errorCode will also be set
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeDeleteFileResult_DEF
#define typeDeleteFileResult_DEF

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

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeDeleteFileResult {
	VALUEMEMBERS;

	typeData* path;
	typeData* errorMessage;
	int8_t errorCode;
	typeBool deleted;

} typeDeleteFileResult;

#endif
