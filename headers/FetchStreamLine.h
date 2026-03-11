/**
 * FetchStreamLine
 * Fetches a line from a stream
 *
 * IMPORTANT: The stream must not be a binary stream or you may end up with
 * bad UTF-8 characters
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/17/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FetchStreamLine_Header_DEF
#define FetchStreamLine_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeStreamValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* FetchStreamLine(typeStreamValue* stream, intmax_t fileDescriptor);

#endif
