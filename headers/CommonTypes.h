/**
 * CommonTypes
 * Takes 2 types and returns a type that has only the common types
 * It only makes sense to pass at least 1 Union type otherwise the Undefined type will be returned
 *
 * For example: If you pass in string and bool, undefined will be returned
 * But if you pass:  (string | int) and (int | bool) then int will be returned
 *
 * This function handles more complex unions as well
 * If you pass:  (string | int | bool) and (bool | int | fraction)?
 * Then (int | bool) is returned
 *
 * @param type1 A pointer to the first type to compare
 * @param type2 A pointer to the second type to compare
 * @return      A pointer to the common types between the two
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/22/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CommonTypes_Header_DEF
#define CommonTypes_Header_DEF

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
typeType* CommonTypes(typeType* type1, typeType* type2);

#endif
