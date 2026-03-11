/**
 * GlobalVars
 * Returns a struct of commonly used global variables.
 *
 * IMPORTANT: This function isn't thread safe until it is initialized.
 * Call this function in the main thread before starting any other threads
 * so that it can initialize. After that, it can be called from any thread.
 *
 * If you are developing a plugin, then rest assured, this function has already been called
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/3/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef GlobalVars_Header_DEF
#define GlobalVars_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeGlobalVars.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeGlobalVars* GlobalVars();

#endif
