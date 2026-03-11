/**
 * StartThread
 * Starts a new thread of execution
 * This function takes a pointer to a typeThread value and starts the thread
 * If the thread has already been started, then the function simply returns
 *
 * @param thread The thread to start execution for
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StartThread_Header_DEF
#define StartThread_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeThread.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void StartThread(typeThread* thread);

#endif
