/**
 * IteratedType
 * Returns the iterated type for a given type. The iterated type is the type
 * of elements that get assigned while iterating a value. For example, if
 * we are iterating a list of strings, then "string" is the iterated type
 *
 * @param iteratorType A pointer to the type to get the iterated type for
 * @return             A pointer to the iterated type.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/13/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IteratedType_Header_DEF
#define IteratedType_Header_DEF

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
typeType* IteratedType(typeType* iteratorType);

#endif
