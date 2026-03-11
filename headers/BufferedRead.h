/**
 * BufferedRead
 * Reads data into a buffer and then consumes the buffer as bytes are requested
 *
 * @param fileDescriptor The file descriptor to read from
 * @param bytes          The number of bytes to read. This must be less then or equal to the size of the buffer
 * @param buffer         The buffer where we want to store data until it's read
 * @return               A pointer to a typeData value that contains the bytes we want to read
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/3/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef BufferedRead_Header_DEF
#define BufferedRead_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeBuffer.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* BufferedRead(int32_t fileDescriptor, intmax_t bytes, typeBuffer* buffer);

#endif
