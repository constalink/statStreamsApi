/**
 * Dict
 * Creates a dictionary of key / value pairs
 *
 * This function allocates a new typeDict value using the passed in arguments
 * and tracks it on the current memory stack
 *
 * This function takes a variable number of arguments. The length argument is
 * the number of key / value pairs you'd like to pass into the function, and
 * every argument after that should be a key followed by a value. The number of
 * arguments you pass in should be double the length value.
 *
 * Here is an example of how to call this function
 *
 * // Creates a dictionary of 2 key/value pairs {key1: "Value 1", key2: "Value 2"}
 * typeDict* myDict = Dict(2,
 * 		String("key"), String("Value 1"),
 * 		String("key2"), String("Value 2")
 * );
 *
 * This function returns a typeDict based pointer. Even though the return value
 * will be typeDict pointer, it is written with a void* pointer so that return values are
 * automatically type cast to the expected output type
 *
 * You must take care to assign the return value to a typeDict based value or you'll
 * most likely end up with buffer overflows or segmentation faults
 *
 * @param length The number of key / value pairs
 * @param ...    Zero or more key / value pairs where keys are typeData pointers
 *               and values are typeValue based values that can be any type derived
 *               from the typeValue typedef
 * @return       A pointer to the new typeDict value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Dict_Header_DEF
#define Dict_Header_DEF

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
void* Dict(intmax_t length, ...);

#endif
