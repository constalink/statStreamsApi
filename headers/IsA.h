/**
 * IsA
 * Tells if a value is a certain type
 *
 * This function takes a value and a type and returns 1 if the value
 * matches the given type or 0 if not. If the comparison can't be made for
 * example, you pass in a generic type or the unknown type, then -1 is returned.
 *
 * @param value A pointer to the value to compare
 * @param type  A pointer to the type to compare against
 * @return      1 if the value matches the type and 0 if not
 *              or -1 if the type comparison can't be performed
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/9/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsA_Header_DEF
#define IsA_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeType.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
int8_t IsA(typeValueRef* value, typeType* type);

#endif
