/**
 * MemCount
 * Returns the memory allocation count for a typeValue object
 *
 * The memory allocation count is useful for testing purposes and doesn't serve any useful
 * purpose in production. It can be used to see if any memory leaks are possible in
 * the stack based memory management system that this framework uses. This function
 * returns the number of memory allocations performed for a typeValue based pointer
 * and then marks the MEMCOUNTED flag as "counted". It then calls itself recursively
 * against all typeValue based children of the value and adds those counts to the return value.
 * If a value already has the MEMCOUNTED flag set to counted, then 0 is returned for that value.
 *
 * This function expects a typeValue* based pointer. The function signature
 * is written with a void* pointer so that any value thats derived from the
 * typeValue typedef can simply be passed into this function without a type cast.
 *
 * You must take care to pass in supported typeValue based pointers or you'll
 * most likely end up with buffer overflows or segmentation faults
 *
 * @param value The value to count memory allocations for
 * @return      The number of memory allocations for the value and all children
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MemCount_Header_DEF
#define MemCount_Header_DEF

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
intmax_t MemCount(void* value);

#endif
