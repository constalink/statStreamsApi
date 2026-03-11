/**
 * typeInitStreamFunc
 * A function type definition for initializing a stream
 *
 * These functions get called the first time a stream is referenced which is usually
 * the first time that a stream is being opened
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/18/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeInitStreamFunc_DEF
#define typeInitStreamFunc_DEF

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
// Function type definition
//-------------------------------------------------------------------------------------
typedef struct typeStreamDef typeStreamDef;
typedef void typeInitStreamFunc(typeStreamDef* streamDef);

#endif
