/**
 * BoolTrue
 * Returns the "true" value reference. The return value is a global
 * value and is tracked on the global memory stack. Also, every time you call
 * this function, the same pointer will be returned as it's a singleton
 *
 * The return value will have the typeValueRef->type property set to
 * enValueRefTypeBool
 *
 * @return A pointer to the "true" value reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/7/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef BoolTrue_Header_DEF
#define BoolTrue_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* BoolTrue();

#endif
