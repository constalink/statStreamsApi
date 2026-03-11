/**
 * TestFloatsEqual
 * Tests to make sure two floats are equal
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/19/2022
 * @copyright	Constalink, all rights reserved
 */

#ifndef TestFloatsEqual_Header_DEF
#define TestFloatsEqual_Header_DEF

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
#define TestFloatsEqual(float1, float2) _TestFloatsEqual(__LINE__, float1, float2)

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
int16_t _TestFloatsEqual(int16_t line, double float1, double float2);

#endif
