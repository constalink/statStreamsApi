/**
 * OptionalType
 * Returns the optional version of a type.
 *
 * This function does not modify the original data type but rather
 * it'll create a new optional version of a data type if required and return that.
 *
 * If the type is already optional, then the original type is returned
 * If the type can't be converted to optional.. for example, if you
 * pass in the undefined type, then the undefined type is returned
 *
 * @param type A pointer to the type to convert to optional
 * @return     A pointer to the optional version of the type
 *             or the undefined type if the type can't be optional
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef OptionalType_Header_DEF
#define OptionalType_Header_DEF

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
typeType* OptionalType(typeType* type);

#endif
