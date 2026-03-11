/**
 * typeCreateStreamFunc
 * A function type definition for creating a stream
 *
 * These functions get called every time an open stream expression is executed
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	11/25/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeCreateStreamFunc_DEF
#define typeCreateStreamFunc_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeStreamValue.h"
#include "typeValueRef.h"
#include "typeStreamDef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Function type definition
//-------------------------------------------------------------------------------------
typedef struct typeStreamDef typeStreamDef;
typedef typeStreamValue* typeCreateStreamFunc(
	typeStreamDef* streamDef,
	typeValueRef* params
);

#endif
