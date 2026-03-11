/**
 * Binary
 * Creates a binary typeData value and returns a pointer to it
 *
 * This function allocates a new typeData value of a given length and tracks it on the
 * current memory stack. The returned value is allocated with malloc which means that
 * the bytes that are allocated are not initialized and may contain random data. You should
 * set the value of each byte before attempting to read from it.
 *
 * @param length The number of bytes to allocate
 * @return       A pointer to a new typeData value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Binary_Header_DEF
#define Binary_Header_DEF

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
typeData* Binary(intmax_t length);

#endif
