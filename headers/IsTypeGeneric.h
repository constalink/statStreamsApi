/**
 * IsTypeGeneric
 * Tells if a type or any sub type is generic. This function recursively parses
 * types and child types to see if it can find a generic anywhere in the type tree
 *
 * @param type A pointer to the type to check
 * @return     true if the type is or contains a generic type or false if not
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsTypeGeneric_Header_DEF
#define IsTypeGeneric_Header_DEF

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
typeBool IsTypeGeneric(typeType* type);

#endif
