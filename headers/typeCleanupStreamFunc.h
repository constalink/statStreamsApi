/**
 * typeCleanupStreamFunc
 * A function type definition for cleaning up a stream
 *
 * These functions get called when the program exits
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/18/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeCleanupStreamFunc_DEF
#define typeCleanupStreamFunc_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeStreamDef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeStreamDef typeStreamDef;
typedef void typeCleanupStreamFunc(typeStreamDef* streamDef);

#endif
