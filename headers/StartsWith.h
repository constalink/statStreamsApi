/**
 * StartsWith
 * Whether or not a typeData value starts with another typeData value
 * This function compares two typeData values and returns true if the
 * data value starts with the startsWith value at the specified offset
 *
 * @param data       A typeData pointer to compare against
 * @param startsWith The prefix typeData pointer to compare against
 * @param offset     The zero based index to begin searching at. Negative indexes are supported
 * @return           true if the data value starts with the startsWith value or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StartsWith_Header_DEF
#define StartsWith_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool StartsWith(typeData* data, typeData* startsWith, intmax_t offset);

#endif
