/**
 * String
 * Creates a string typeData value and returns a pointer to it
 *
 * This function allocates a new typeData value from the null terminated string that's passed in
 * and tracks it on the current memory stack.
 *
 * Here are a few examples of how to call this function
 *
 * // Create a simple string
 * typeData* greeting = String("Hello There");
 *
 * // You can use printf formatters in your string. Just pass in matching values
 * char* name = "John";
 *
 * // Gets set to "Hello John"
 * typeData* customGreeting = String("Hello %s", name)
 *
 * @param string The null terminated string to initialize the value with. C printf formatters are supported
 * @param ...    A variable number of arguments to format into the string
 *               The type and number of variable arguments must match the
 *               printf formatters in the string
 * @return       A pointer to the new typeData value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef String_Header_DEF
#define String_Header_DEF

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
typeData* String(uint8_t* string, ...);

#endif
