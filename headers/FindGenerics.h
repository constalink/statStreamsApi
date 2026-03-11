/**
 * FindGenerics
 * Searches a type and returns a dictionary of generics in that type with the
 * generic names as keys and the types as the values
 *
 * @param type A pointer to the type to search
 * @return     A dictionary of generics with generic names as keys and types as values
 *             If no generics exist in the type, then an empty dictionary is returned
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/6/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FindGenerics_Header_DEF
#define FindGenerics_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeType.h"
#include "typeTypeDict.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeTypeDict* FindGenerics(typeType* type);

#endif
