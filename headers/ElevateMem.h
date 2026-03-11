/**
 * ElevateMem
 * Elevates a managed memory object to a given memory stack
 * This function takes a typeValue based pointer and elevates
 * that value to the passed in memory stack.
 *
 * This function expects a typeValue* based pointer. The function signature
 * is written with a void* pointer so that any value thats derived from the
 * typeValue typedef can simply be passed into this function without a type cast.
 *
 * You must take care to pass in supported typeValue based pointers or you'll
 * most likely end up with buffer overflows or segmentation faults
 *
 * @param ptr      The typeValue based value to elevate
 * @param memStack The memory stack to elevate the value to
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/20/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ElevateMem_Header_DEF
#define ElevateMem_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeMemStack.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void ElevateMem(void* ptr, typeMemStack* memStack);

#endif
