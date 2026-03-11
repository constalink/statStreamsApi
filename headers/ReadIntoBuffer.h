/**
 * ReadIntoBuffer
 * Reads data into a buffer and returns the start position in the buffer where
 * the data resides. If the data couldn't be read, then -1 is returned.
 *
 * When this function returns, the buffer's start position is modified
 * such that the new start position is at the end of the data that was just read
 *
 * This function first reads as many bytes into the buffer as it can handle
 * if they are available in the file handle. It then increments the start
 * position in the buffer by the bytes argument that's passed in and returns
 * the start position - or where to start your read of "bytes" number of bytes from
 *
 * After this function returns, if a zero or or larger is returned, then the
 * number of bytes we want will be available at that position in the buffer
 *
 * Here's a quick example of how this process works:
 *
 * // Let's say I have a buffer that has 100 bytes of space
 * // And I want to read 20 bytes from a file handle.
 *
 * // Because this is the first read, index will be 0
 * // but buffer will contain all 100 bytes of data that it can handle
 * intmax_t index = ReadIntoBuffer(fileHandle, 20, buffer);
 *
 * // On the 2nd read 20 will be returned
 * index = ReadIntoBuffer(fileHandle, 20, buffer);
 *
 * // On the 3rd read, 40 will be returned, etc...
 * index = ReadIntoBuffer(fileHandle, 20, buffer);
 *
 * // If I now want to read 80 bytes, the buffer will shift the data such
 * // that all 80 bytes are available and it'll return the index where that data starts
 * // In this case, whatever index is returned, the start position in the buffer will be
 * // updated to that plus the 80 bytes that we need to read
 * index = ReadIntoBuffer(fileHandle, 80, buffer);
 *
 * @param fileDescriptor The file descriptor to read from
 * @param bytes          The number of bytes you plan on reading from the buffer
 *                       This must be less than or equal the length of the buffer or -1 will be returned
 * @param buffer         A pointer to the buffer you want to fill and read from
 * @return               The zero based byte index where "bytes" bytes can be read from
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/3/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReadIntoBuffer_Header_DEF
#define ReadIntoBuffer_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBuffer.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
intmax_t ReadIntoBuffer(int32_t fileDescriptor, intmax_t bytes, typeBuffer* buffer);

#endif
