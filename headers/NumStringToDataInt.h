/**
 * NumStringToDataInt
 * Converts a string to a data integer. This function is similar to
 * StringToDataInt except that you pass in the base instead of having
 * it determine the base from the string itself
 *
 * If the string is "1122378244" and base is enIntBaseDecimal, then
 * the return value will be 4 bytes long and contain "\x42\xE6\x22\x04"
 *
 * @param string  A pointer to the typeData value that holds the string to convert
 * @param fromPos A zero based offset with "string" where the integer value starts
 *                Negative offsets are not accepted and results in undefined behavior
 * @param base    The integer base with which to interpret the string value
 * @return        A pointer to a typeData value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/9/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef NumStringToDataInt_Header_DEF
#define NumStringToDataInt_Header_DEF

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
#include "enIntBase.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* NumStringToDataInt(typeData* string, intmax_t fromPos, enIntBase base);

#endif
