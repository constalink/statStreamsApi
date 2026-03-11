/**
 * IndexOfData
 * Returns the index of a data object in a data list
 * It first compares object pointers and if that doesn't match, then the underlying
 * binary data is compared. When a match is found, the corresponding index is returned.
 * If no match is found, then negative one (-1) is returned.
 *
 * @param list A pointer to a typeDataList list to search
 * @param data A pointer to a typeData value to search for
 * @return     The zero based index or negative 1 if it wasn't found
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IndexOfData_Header_DEF
#define IndexOfData_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeDataList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
intmax_t IndexOfData(typeDataList* list, typeData* data);

#endif
