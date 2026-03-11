/**
 * UnlockThread
 * Unlocks a thread that was previously locked by the LockThread function
 *
 * @param thread A pointer to the thread to unlock
 * @return       true if the unlock succeeded or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	2/8/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef UnlockThread_Header_DEF
#define UnlockThread_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeThread.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool UnlockThread(typeThread* thread);

#endif
