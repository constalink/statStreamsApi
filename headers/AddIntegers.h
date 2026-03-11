/**
 * AddIntegers
 * Adds two integer values and returns the result as new integer value
 *
 * @param int1 An integer value
 * @param int2 A 2nd integer value
 * @return     A new integer value that contains the sum of the 2 integer values passed in
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/21/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef AddIntegers_Header_DEF
#define AddIntegers_Header_DEF

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
typeInteger* AddIntegers(typeInteger* int1, typeInteger* int2);

#endif
