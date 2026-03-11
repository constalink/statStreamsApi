/**
 * RuntimeGlobals
 * Returns a struct of commonly used variables that are specific to the Stat runtime
 * The name of this function is named RuntimeGlobals because the struct
 * that's returned is tracked on the global memory stack and is never freed until
 * the program ends.
 *
 * To see what variables the struct contains, take a look at typeRunTimeGlobals.h
 *
 * IMPORTANT: This function isn't thread safe until it is initialized.
 * Call this function in the main thread before starting any other threads
 * so that it can initialize. After that, it can be called from any thread
 * If you are developing a plugin, rest assured that this function has
 * already been called by the time your plugin is loaded
 *
 * @return A dictionary of commonly used global variables for the Stat runtime
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/29/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef RuntimeGlobals_Header_DEF
#define RuntimeGlobals_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeRuntimeGlobals.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeRuntimeGlobals* RuntimeGlobals();

#endif
