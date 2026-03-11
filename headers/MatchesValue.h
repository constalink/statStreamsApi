/**
 * MatchesValue
 * Tells if a value matches a regular expression
 *
 * This function expects a value reference that can be converted to binary for the value
 * argument and a regular expression reference for the regExp argument. If that isn't
 * the case, then -1 will be returned
 *
 * If the value and regExp arguments are the currect type, then the return value
 * will be 1 if the value matches the regular expression or 0 if not
 *
 * @param value  A pointer to the value to match
 * @param regExp A pointer to a regular expression to match against
 * @return       1 if the value matches the regular expression or 0 if not
 *               or -1 if the arguments passed in aren't what's expected
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	11/16/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MatchesValue_Header_DEF
#define MatchesValue_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
int8_t MatchesValue(typeValueRef* value, typeValueRef* regExp);

#endif
