/**
 * IndexOf
 * Finds the position of typeData value in another typeData value. If it isn't found, then -1 is returned
 * This function takes a typeData pointer to search in, a typeData pointer to
 * search for, and a zero based byte offset to start searching from.
 *
 * It returns the zero based index of the first found position of search within data
 * or -1 if it isn't found
 *
 * @param data   A pointer to a typeData value to search in
 * @param search A pointer to a typeData value to search for
 * @param offset A zero based byte offset to start searching from. Negative indexes are supported
 * @return       The zero based byte index where "search" is found or -1 if it isn't found
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IndexOf_Header_DEF
#define IndexOf_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

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
intmax_t IndexOf(typeData* data, typeData* search, intmax_t offset);

#endif
