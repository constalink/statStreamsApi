/**
 * typeReadFileResult
 * The result of a "read file" operation. This struct will either contain
 * the content of a file or an error message but not both
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeReadFileResult_DEF
#define typeReadFileResult_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

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
typedef struct typeReadFileResult {
	VALUEMEMBERS;

	typeData* content;
	typeData* errorMessage;

} typeReadFileResult;

#endif
