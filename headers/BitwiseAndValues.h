/**
 * BitwiseAndValues
 * Performs a bitwise AND operation on two integer values
 * This function does not modify either of the integer values that are passed
 * in but rather, it creates a brand new typeIntegerValue value and copies the words
 * into it while performing a bitwise AND operation as it copies
 *
 * @param value1 The first integer value
 * @param value2 The second integer value
 * @return       A new integer value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/7/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef BitwiseAndValues_Header_DEF
#define BitwiseAndValues_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeIntegerValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeIntegerValue* BitwiseAndValues(
	typeIntegerValue* value1,
	typeIntegerValue* value2
);

#endif
