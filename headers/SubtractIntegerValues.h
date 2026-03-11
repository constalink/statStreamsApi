/**
 * SubtractIntegerValues
 * Subtracts integer values
 *
 * This function handles infinity and negative values
 *
 * @param intVal   A pointer to an integer value
 * @param minusInt A pointer to an integer value to subtract
 * @return         A pointer to an integer value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SubtractIntegerValues_Header_DEF
#define SubtractIntegerValues_Header_DEF

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
typeIntegerValue* SubtractIntegerValues(
	typeIntegerValue* intVal,
	typeIntegerValue* minusInt
);

#endif
