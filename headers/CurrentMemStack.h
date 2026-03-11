/**
 * CurrentMemStack
 * Returns the current memory stack based on the current thread id
 * If the TrackMem function hasn't been called on the current thread
 * then NULL is returned.
 *
 * @return The memory stack that was created the last time TrackMem was called
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/20/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CurrentMemStack_Header_DEF
#define CurrentMemStack_Header_DEF

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
typeMemStack* CurrentMemStack();

#endif
