/**
 * AddTypes
 * Adds two or more data types in a union like fashion.
 * This function doesn't just combine data types into a union,
 * it combines data types such that if a data type is a subset
 * of another one, it gets rid of it. A simple example is this:
 *
 * A string plus an optional string is an optional string
 * string + string? = string?
 *
 * The resultant data type that's returned encompasses all the
 * data types that are passed in which means that a value that
 * takes on the resultant data type can be any of the data types
 * that are passed in. This operation is sort of an "OR" operation
 * for data types
 *
 * If an empty list is passed in, then the unknown type is returned
 * and if the list contains a single type, then that type is returned
 *
 * @param types   A pointer to a list of typeType values to add together
 * @param unalias Whether or not to unalias all types before adding them together
 * @return        A single data type that encompasses all types passed in
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/14/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef AddTypes_Header_DEF
#define AddTypes_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeType.h"
#include "typeTypeList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* AddTypes(typeTypeList* types, typeBool unalias);

#endif
