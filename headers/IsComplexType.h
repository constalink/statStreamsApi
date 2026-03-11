/**
 * IsComplexType
 * Tells if a type is a complex type
 *
 * A complex type is a list, dictionary, struct, union, function, or a stream
 *
 * @param type The type to check
 * @return     true if the type is a complex type or false if not
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/1/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsComplexType_Header_DEF
#define IsComplexType_Header_DEF

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
typeBool IsComplexType(typeType* type);

#endif
