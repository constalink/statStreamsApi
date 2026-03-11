/**
 * CanRead
 * Tells if a file descriptor is ready to be read from
 *
 * @param fileDescriptor The file descriptor to check
 * @return               true if the file descriptor is ready to be read from or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/27/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CanRead_Header_DEF
#define CanRead_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool CanRead(int32_t fileDescriptor);

#endif
