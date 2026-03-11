/**
 * IsTypeUnknown
 * Tells if a type or sub-type is unknown. This function searches an entire type
 * tree to see if it find the unknown type. If so, it'll return true
 *
 * @param type A pointer to the type to check
 * @return     true if the type or any sub type is unknown or false if not
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsTypeUnknown_Header_DEF
#define IsTypeUnknown_Header_DEF

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
typeBool IsTypeUnknown(typeType* type);

#endif
