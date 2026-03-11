/**
 * ReverseInteger
 * Reverses the bit order of an integer value
 *
 * This function does not modify the integer value that's passed in
 * but rather, it creates a brand new integer value and copies
 * bits into it in reverse order
 *
 * @param integer A pointer to an integer value to reverse the bit order of
 * @return        A pointer to an integer value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/6/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReverseInteger_Header_DEF
#define ReverseInteger_Header_DEF

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
typeInteger* ReverseInteger(typeInteger* integer);

#endif
