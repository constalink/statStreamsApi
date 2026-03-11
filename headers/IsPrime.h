/**
 * IsPrime
 * Checks if a number is prime.
 *
 * @param integer An unsigned 64 bit integer
 * @return        true if the number is prime or false if not
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/24/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsPrime_Header_DEF
#define IsPrime_Header_DEF

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
typeBool IsPrime(uint64_t integer);

#endif
