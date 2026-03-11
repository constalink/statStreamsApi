/**
 * IsGlobal
 * Tells if a value is on the global memory stack (See the Global function)
 *
 * This function takes a typeValue based pointer and checks to see if that value
 * is tracked on the global memory stack. If so, then true is returned otherwise
 * false is returned.
 *
 * This function expects a typeValue* based pointer. The function signature
 * is written with a void* pointer so that any value thats derived from the
 * typeValue typedef can simply be passed into this function without a type cast.
 *
 * You must take care to pass in supported typeValue based pointers or you'll
 * most likely end up with buffer overflows or segmentation faults
 *
 * @param value The typeValue based value to check
 * @return      A boolean that tells whether or not the value is tracked on the global memory stack
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/18/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsGlobal_Header_DEF
#define IsGlobal_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

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
typeBool IsGlobal(void* value);

#endif
