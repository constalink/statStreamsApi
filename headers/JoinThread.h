/**
 * JoinThread
 * Joins a running thread
 * This function takes a typeThread pointer and joins it. It then returns the value
 * that the thread returned which will be a typeValue based pointer.
 *
 * This function returns a typeValue based pointer. The function signature is
 * written with a void* pointer so that the return value can simply be assigned
 * to any typeValue* derived type without a type cast.
 *
 * You must take care to assign the return value to a typeValue based pointer or
 * you'll most likely end up with buffer overflows or segmentation faults
 *
 * @param thread The thread pointer to join
 * @return       The value that the thread returned
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/26/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef JoinThread_Header_DEF
#define JoinThread_Header_DEF

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
void* JoinThread(typeThread* thread);

#endif
