/**
 * Wait
 * Waits or pauses execution on the current thread for a number of milliseconds
 *
 * @param milliSeconds The number of milli seconds to pause execution for
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/23/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Wait_Header_DEF
#define Wait_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void Wait(intmax_t milliSeconds);

#endif
