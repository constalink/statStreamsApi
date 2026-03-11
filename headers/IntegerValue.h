/**
 * IntegerValue
 * Creates a typeIntegerValue value and returns a pointer to it
 *
 * This function allocates a new typeIntegerValue value using the passed in arguments
 * and tracks it on the current memory stack
 *
 * @param type     The number type of the integer
 * @param intValue A pointer to the underlying integer value
 * @return         A pointer to the new typeIntegerValue value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IntegerValue_Header_DEF
#define IntegerValue_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeInteger.h"
#include "typeIntegerValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enNumberType.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeIntegerValue* IntegerValue(enNumberType type, typeInteger* intValue);

#endif
