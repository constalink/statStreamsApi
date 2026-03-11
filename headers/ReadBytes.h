/**
 * ReadBytes
 * Reads a given number of bytes from a file descriptor like STDIN.
 * This function will continue to read until the specified number of bytes are read.
 * If there are no more bytes available, it will return whatever value has already
 * been read.
 *
 * If ther was an error, then NULL is returned
 *
 * @param fileDescriptor The file descriptor to read from
 * @param bytes          The number of bytes to read
 * @return               A pointer to a typeData value that contains the bytes that were read
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/2/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReadBytes_Header_DEF
#define ReadBytes_Header_DEF

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
typeData* ReadBytes(int32_t fileDescriptor, intmax_t bytes);

#endif
