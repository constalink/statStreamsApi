/**
 * DataToLong
 * Converts a data object to an unsigned long
 *
 * This isn't a string to integer conversion, instead, this function
 * takes the raw bytes and copies them into a 64 bit unsigned integer
 * taking into account if the system is big or little endian
 *
 * If the data object is larger than 64 bit (8 bytes), then the max
 * long value is returned which is 0xffffffffffffffff
 *
 * @param data The data value to convert
 * @return     The equivalent integer
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/28/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DataToLong_Header_DEF
#define DataToLong_Header_DEF

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
uintmax_t DataToLong(typeData* data);

#endif
