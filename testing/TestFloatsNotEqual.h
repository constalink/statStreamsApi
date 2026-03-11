/**
 * TestFloatsNotEqual
 * Test to make sure two floats are not equal
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/19/2022
 * @copyright	Constalink, all rights reserved
 */

#ifndef TestFloatsNotEqual_Header_DEF
#define TestFloatsNotEqual_Header_DEF

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
#define TestFloatsNotEqual(float1, float2) _TestFloatsNotEqual(__LINE__, float1, float2)

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
int16_t _TestFloatsNotEqual(int16_t line, double float1, double float2);

#endif
