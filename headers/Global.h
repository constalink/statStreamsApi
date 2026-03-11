/**
 * Global
 * Elevates a value to the top most memory stack so that it doesn't get freed when exiting a stack
 *
 * The global memory stack stays until the program exits so any value that you pass
 * to this function will remain in memory for the duration of the program. You
 * should only call this function against values that you don't intend to ever free
 *
 * This function expects a typeValue* based pointer. The function signature
 * is written with a void* pointer so that any value thats derived from the
 * typeValue typedef can simply be passed into this function without a type cast.
 *
 * You must take care to pass in supported typeValue based pointers or you'll
 * most likely end up with buffer overflows or segmentation faults
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/26/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Global_Header_DEF
#define Global_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void Global(void* value);

#endif
