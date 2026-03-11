/**
 * Thread
 * Creates a typeThread value and returns a pointer to that value.
 * This function allocates the memory for a typeThread value and tracks
 * it on the current memory stack. It also takes care of incrementing
 * reference counts and initializing all struct members.
 *
 * This function expects a typeValue* based pointer for the inputParameter.
 * The function signature is written with a void* pointer so that any value thats
 * derived from the typeValue typedef can simply be passed into this function
 * without a type cast.
 *
 * You must take care to pass in supported typeValue based pointers or you'll
 * most likely end up with buffer overflows or segmentation faults
 *
 * @param function       A pointer to the function that should be called when thread execution starts
 * @param inputParameter A typeValue based pointer to be passed into the thread function
 * @return               A pointer to the new typeThread value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	2/8/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Thread_Header_DEF
#define Thread_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeThread.h"
#include "typeThreadedFunction.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeThread* Thread(typeThreadedFunction* function, void* inputParameter);

#endif
