/**
 * TestNotSame
 * Test to make sure that two pointers are not the same pointer
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/19/2022
 * @copyright	Constalink, all rights reserved
 */

#ifndef TestNotSame_Header_DEF
#define TestNotSame_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t uint8_t uint16_t uint32_t uint64_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Macros
//-------------------------------------------------------------------------------------

// --- Cl Disable Inspection ---
#define TestNotSame(value1, value2) _TestNotSame(__LINE__, value1, value2)

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
int16_t _TestNotSame(int16_t line, void* value1, void* value2);

#endif
