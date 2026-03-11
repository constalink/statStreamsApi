/**
 * typeStreamDefFunc
 * A type def for a stream definition function
 *
 * Stream plugins should define a single public function that implements this function signature
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	11/25/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeStreamDefFunc_DEF
#define typeStreamDefFunc_DEF

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
typedef typeStreamDef* typeStreamDefFunc();

#endif
