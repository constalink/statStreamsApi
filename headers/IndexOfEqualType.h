/**
 * IndexOfEqualType
 * Returns the index for a type that is equivalent to one in a list of types
 * If a match is found, the index of the type is returned, otherwise, -1 is returned
 *
 * IMPORTANT: A matching type doesn't have to be the same pointer, it just has to have
 * the same equivalent properties
 *
 * @param typesList     A pointer to a list of types to search
 * @param searchForType A pointer to the type to search for
 * @return              The index of the matching type or -1 if it isn't found
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IndexOfEqualType_Header_DEF
#define IndexOfEqualType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeType.h"
#include "typeTypeList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
intmax_t IndexOfEqualType(typeTypeList* typesList, typeType* searchForType);

#endif
