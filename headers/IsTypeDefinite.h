/**
 * IsTypeDefinite
 * Tells if a type is definite. A definite type is one that holds a single data type
 * Here are some definite types:
 *
 * string
 * int
 * regExp
 * [string]
 * {string}
 * T
 * [T]
 *
 * Here are some non definite types. These types can hold more than 1 data type
 *
 * string?
 * int?
 * regExp?
 * [string?]
 * [string]?
 * (int | string)
 * [(int | string)]
 *
 * Special types like these are not definite
 *
 * empty - This isn't a definite type because it doesn't have
 * 			a single data type. It has zero data types
 * any
 * undefined
 * unknown
 *
 * Non data types like these are also not definite. They don't hold data, they hold
 * something else
 *
 * function
 * stream
 * enum
 *
 * @param type A pointer to the type to check
 * @return     true if the type is a definite type or false if not
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/20/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsTypeDefinite_Header_DEF
#define IsTypeDefinite_Header_DEF

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
typeBool IsTypeDefinite(typeType* type);

#endif
