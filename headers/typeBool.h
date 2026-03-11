/**
 * typeBool
 * Boolean definitions
 * This header simply assigns 0 to false and 1 to true
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeBool_DEF
#define typeBool_DEF

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
// Definitions
//-------------------------------------------------------------------------------------
#define typeBool uint8_t
#define false 0
#define true 1

#endif
