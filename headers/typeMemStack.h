/**
 * typeMemStack
 * A memory stack. This is responsible for tracking all typeValue based value allocations
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/19/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeMemStack_DEF
#define typeMemStack_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeMemStack {

	// Whether or not to track memory. By default this is set to true
	// It gets set to false when a call to PauseMem() happens
	// And it gets se to true when a call to StartMem() happens
	typeBool track;

	// A pointer to the upper level or previous memory stack if any
	struct typeMemStack* prevStack;

	// A pointer to the lower level or next memory stack if any
	struct typeMemStack* nextStack;

	// A pointer to the first value that's tracked on the memory stack
	// --- Cl Disable Inspection ---
	struct typeValue* firstValue;

	// A pointer to the last value that's tracked on the memory stack
	// --- Cl Disable Inspection ---
	struct typeValue* atValue;

	// The number of uncounted memory allocations on the memory stack
	// This gets incremented whenever a new typeValue based value is created
	intmax_t uncounted;

} typeMemStack;

#endif
