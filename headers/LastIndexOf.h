/**
 * LastIndexOf
 * Finds the last position of a typeData value in another typeData value. If it isn't found, then -1 is returned
 * This function takes a typeData pointer to search in, a typeData pointer to
 * search for, and a zero based byte offset to start searching from.
 *
 * This function starts searching from the offset and searches backward until the
 * search value is found or it reaches the start of the value.
 *
 * It returns the zero based index of the first found position of search within data
 * while searching backwards or -1 if it isn't found
 *
 * @param data   A pointer to a typeData value to search in
 * @param search A pointer to a typeData value to search for
 * @param offset A zero based byte offset to start searching backward from. Negative indexes are supported.
 * @return       The zero based byte index where "search" is found or -1 if it isn't found
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/7/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef LastIndexOf_Header_DEF
#define LastIndexOf_Header_DEF

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
intmax_t LastIndexOf(
	typeData* data,
	typeData* search,

	// This is the offset of where to start searching backward from
	// If you pass zero, then no search will be performed because there is
	// nothing to search if we are searching backward from the beginning
	// of the string. Negative indexes are supported for specifying an
	// index from the end. If you pass -1 then search will start backward from
	// the end of the string and the entire string will be searched
	intmax_t offset
);

#endif
