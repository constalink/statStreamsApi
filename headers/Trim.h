/**
 * Trim
 * Trims whitespace from the start and end of a typeData object
 * This function does not modify the typeData value passed in, but rather, it
 * creates a new typeData value with whitespace characters removed from
 * the start and end of the value.
 *
 * This function trims the following characters:
 * - \t - tabs
 * - \n - new lines
 * - \r - carriage returns
 * - \f - form feeds
 * - \v - vertical tabs
 * - \0 - null bytes
 * - and the space character
 *
 * @param data A pointer to a typeData value to trim
 * @return     A new typeData value with whitespace trimmed
 *
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/28/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Trim_Header_DEF
#define Trim_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* Trim(typeData* data);

#endif
