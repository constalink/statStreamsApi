/**
 * MemManager
 * Creates or returns the global memory manager object which is a singleton
 *
 * IMPORTANT: This function is not thread safe until after it's called once
 * from the main thread. After that, it is thread safe.
 *
 * If calling this function from a plugin, rest assured that this function
 * has already been called and it is safe to call this function even if
 * you aren't in the main thread.
 *
 * @return The global memory manager object
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/20/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MemManager_Header_DEF
#define MemManager_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeMemManager.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeMemManager* MemManager();

#endif
