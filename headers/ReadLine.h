/**
 * ReadLine
 * Reads a line of data from a file descriptor. Reading continues until a
 * new line character is read or there is no more data to read. The returned
 * result contains the newline character if one is encountered
 *
 * @param fileDescriptor The file descriptor to read from
 * @return               A pointer to a typeData value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	2/6/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReadLine_Header_DEF
#define ReadLine_Header_DEF

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
typeData* ReadLine(int32_t fileDescriptor);

#endif
