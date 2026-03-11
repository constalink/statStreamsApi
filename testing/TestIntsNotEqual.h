/**
 * TestIntsNotEqual
 * Test to make sure two integers are not equal
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/19/2022
 * @copyright	Constalink, all rights reserved
 */

#ifndef TestIntsNotEqual_Header_DEF
#define TestIntsNotEqual_Header_DEF

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
#define TestIntsNotEqual(int1, int2) _TestIntsNotEqual(__LINE__, int1, int2)

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
int16_t _TestIntsNotEqual(int16_t line, int64_t int1, int64_t int2);

#endif
