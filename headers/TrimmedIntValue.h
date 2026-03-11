/**
 * TrimmedIntValue
 * Trims all leading 64 bit zero words (nulls) from an integer value
 *
 * This function does not modify the integer that's passed in but rather,
 * it creates a new integer value in which to store the result.
 * If there are no zero words at the start of the integer value thats
 * passed in, then the original integer value is returned
 *
 * @param intValue The integer value to trim
 * @return         A pointer to an integer value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/6/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef TrimmedIntValue_Header_DEF
#define TrimmedIntValue_Header_DEF

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
typeInteger* TrimmedIntValue(typeInteger* intValue);

#endif
