/**
 * TrimChars
 * Trims characters from the start and end of a typeData value
 * This function does not modify the typeData value passed in, but rather, it
 * creates a new typeData value with the specified characters removed from
 * the start and end of the value
 *
 * @param data       A pointer to a typeData value to trim
 * @param characters A pointer to a typeData value that contains characters to trim
 * @return           A pointer to a new typeData value that has the characters removed from the start and end
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/28/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef TrimChars_Header_DEF
#define TrimChars_Header_DEF

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
typeData* TrimChars(typeData* data, typeData* characters);

#endif
