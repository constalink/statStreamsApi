/**
 * ReadInput
 * Reads data from a file descriptor like an open file. This function will continue to read until there
 * are no more bytes available and return the result as a typeData object
 *
 * If there were no bytes to be read, then an empty object is returned
 * If there was an error, then NULL is returned
 *
 * WARNING: Do not use this function with STDIN. If you do, it'll never return
 * because every read operation reads at least 1 character which is the new line
 *
 * @param fileDescriptor The file descriptor to read from
 * @return               A pointer to a typeData value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	2/22/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReadInput_Header_DEF
#define ReadInput_Header_DEF

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
typeData* ReadInput(int32_t fileDescriptor);

#endif
