/**
 * UndefinedType
 * The undefined type. This type is used for types that are impossible.
 * In most cases, any time the linter encounters this type, the result is a compile time error
 *
 * Returns the "undefined" typeType value. The return value is a global
 * value and is tracked on the global memory stack. Also, every time you call
 * this function, the same pointer will be returned as it's a singleton
 *
 * @return A pointer to the "undefined" typeType value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/12/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef UndefinedType_Header_DEF
#define UndefinedType_Header_DEF

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
typeType* UndefinedType();

#endif
