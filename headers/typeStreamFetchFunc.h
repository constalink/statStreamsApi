/**
 * typeStreamFetchFunc
 * A stream fetch function typedef
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/4/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeStreamFetchFunc_DEF
#define typeStreamFetchFunc_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"
#include "typeStreamValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeStreamValue typeStreamValue;
typedef typeValueRef* typeStreamFetchFunc(
	typeStreamValue* stream
);

#endif
