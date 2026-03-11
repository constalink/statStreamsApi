/**
 * ElevateValue
 * Elevates a value to the previous / upper level memory stack
 * This function takes a typeValue based pointer and elevates
 * that value to the previous or upper level memory stack. This function is
 * usefull for when you want to return a value from a function and you
 * don't want that value to be freed when you call FreeMem() on the current
 * memory stack.
 *
 * @param value The value to elevate to the upper memory stack.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/26/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ElevateValue_Header_DEF
#define ElevateValue_Header_DEF

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
void ElevateValue(void* value);

#endif
