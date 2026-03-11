/**
 * IsMainThread
 * Tells whether or not we are on the main thread
 *
 * @return true if the the current thread of execution is the main thread or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/26/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsMainThread_Header_DEF
#define IsMainThread_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool IsMainThread();

#endif
