/**
 * IsTypeOptional
 * Tells if a type is optional or not. This fuction handles alias types
 * that may be unknown and if so, it looks at the type that the alias points to
 *
 * @param type A pointer to the type to check
 * @return     true if the type is optional or if it can hold empty values or false if not
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsTypeOptional_Header_DEF
#define IsTypeOptional_Header_DEF

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
typeBool IsTypeOptional(typeType* type);

#endif
