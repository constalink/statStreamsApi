/**
 * UnknownType
 * The unknown type - this type can serve as a placeholder for a type that can be filled in later on.
 * For example: This type is used for an empty list where the sub type is "unknown"
 *
 * Returns the "unknown" typeType value. The return value is a global
 * value and is tracked on the global memory stack. Also, every time you call
 * this function, the same pointer will be returned as it's a singleton
 *
 * @return A pointer to the "unknown" typeType value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/13/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef UnknownType_Header_DEF
#define UnknownType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* UnknownType();

#endif
