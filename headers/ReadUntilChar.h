/**
 * ReadUntilChar
 * Reads data from a file descriptor until it reaches a given character.
 * The reading stops when it hits the character or there are no more bytes to read.
 *
 * NOTE: This function does not support multi-byte characters. It only supports
 * single byte characters
 *
 * @param fileDescriptor The file descriptor to read from
 * @param character      A single byte that tells reading to stop when it's encountered
 * @return               A pointer to a typeData value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	2/6/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReadUntilChar_Header_DEF
#define ReadUntilChar_Header_DEF

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
typeData* ReadUntilChar(int32_t fileDescriptor, uint8_t character);

#endif
