/**
 * IsTypeUndefined
 * Tells if a type or a sub-type is undefined. This function searches an entire type
 * tree to see if it finds the undefined type. If so, it'll return true
 *
 * @param type A pointer to the type to check
 * @return     true if the type or any sub type is undefined or false if not
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/7/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsTypeUndefined_Header_DEF
#define IsTypeUndefined_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool IsTypeUndefined(typeType* type);

#endif
