/**
 * CopyInteger
 * Copies an integer
 * This function creates a brand new typeInteger value of the same length and
 * copies all the 64 bit words into the new value. The return value is not linked
 * to the original value in any way
 *
 * @param intVal The integer value to copy
 * @return       A new copy of the integer value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/16/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CopyInteger_Header_DEF
#define CopyInteger_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeInteger* CopyInteger(typeInteger* intVal);

#endif
