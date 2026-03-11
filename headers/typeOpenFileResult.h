/**
 * typeOpenFileResult
 * Result for an open file operation. This struct will either contain a fileHandle
 * or an error message but not both.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeOpenFileResult_DEF
#define typeOpenFileResult_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For FILE
#include <stdio.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeFreeFunc.h"
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enOpenFileMode.h"

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeOpenFileResult {
	VALUEMEMBERS;

	// Free function
	typeFreeFunc* freeFunc;

	FILE* fileHandle;
	typeData* path;
	typeData* errorMessage;
	enOpenFileMode mode;

} typeOpenFileResult;

#endif
