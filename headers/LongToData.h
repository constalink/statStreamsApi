/**
 * LongToData
 * Converts an unsigned long to a typeData value.
 * This is not a number to string conversion. This function copies raw bytes
 * from a 64 bit integer into a binary typeData value taking into consideration
 * whether or not the system is big or little endian and trimming off any starting null bytes
 *
 * The result typeData value will never be larger than 8 bytes.
 *
 * @param value The integer to convert
 * @return      A typeData pointer that contains the raw bytes in the integer
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/28/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef LongToData_Header_DEF
#define LongToData_Header_DEF

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
typeData* LongToData(uintmax_t value);

#endif
