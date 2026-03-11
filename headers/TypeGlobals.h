/**
 * TypeGlobals
 * Creates the global typeTypeGlobals object
 * IMPORTANT: This function isn't thread safe until it is initialized.
 * Call this function in the main thread before starting any other threads
 * so that it can initialize. After that, it can be called from any thread
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/6/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef TypeGlobals_Header_DEF
#define TypeGlobals_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeTypeGlobals.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeTypeGlobals* TypeGlobals();

#endif
