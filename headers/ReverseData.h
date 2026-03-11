/**
 * ReverseData
 * Reverses the byte order of a data object
 *
 * IMPORTANT: This function is not UTF8 safe. It'll reverse the byte order
 * of multi-byte characters essentially messing them up so that they aren't
 * valid UTF8 characters anymore.
 *
 * Example: π is a 2 byte character encoded as 0xCF 0x80
 * After calling this function, those 2 bytes will be 0x80 0xCF which isn't valid UTF8
 *
 * If you need to preserve UTF8 character encoding, you should use the ReverseStringData
 * function instead.
 *
 * This function does not modify the typeData value that's passed in. Rather it
 * creates a new typeData value and copies bytes into it in reverse order
 *
 * @param data A pointer to a typeData value to reverse
 * @return     A pointer to a new typeData value with the bytes in reverse order
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/6/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReverseData_Header_DEF
#define ReverseData_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

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
typeData* ReverseData(typeData* data);

#endif
