/**
 * FreeMem
 * Frees the memory from the current stack and pops the stack
 * Call this function before returning from a function where you've called TrackMem
 * You can also call one of the Return macros defined here
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/26/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FreeMem_Header_DEF
#define FreeMem_Header_DEF

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
// Included functions
//-------------------------------------------------------------------------------------
#include "ElevateValue.h"

//-------------------------------------------------------------------------------------
// Macros
//-------------------------------------------------------------------------------------
#define Return(arg) ElevateValue(arg); FreeMem(); return arg
#define ReturnVoid FreeMem(); return

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void FreeMem();

#endif
