/**
 * MostSpecificType
 * Takes two types and returns the most specific one
 *
 * The specificity of types from most specific to least specific is as follows:
 *
 * unknown
 * empty
 * bool
 * int
 * fraction
 * enumOption
 * regExp
 * string
 * binary
 * range
 * bool?
 * int?
 * fraction?
 * enumOption?
 * regExp?
 * string?
 * binary?
 * range?
 * {struct}
 * {dict}
 * enum
 * [list]
 * <stream>
 * (function)
 * (unions)
 * {struct}?
 * {dict}?
 * enum?
 * [list]?
 * <stream>?
 * (function)?
 * (unions)?
 * any
 * any?
 *
 * NOTE: Types are unaliased before they are compared for specificity
 * This means that the pointer you pass in may not be the pointer you get back
 *
 * @param type1 A pointer to the first type to compare
 * @param type2 A pointer to the second type to compare
 * @return      The type that's most specific between the two
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/22/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MostSpecificType_Header_DEF
#define MostSpecificType_Header_DEF

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
typeType* MostSpecificType(typeType* type1, typeType* type2);

#endif
