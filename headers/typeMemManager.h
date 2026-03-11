/**
 * typeMemManager
 * The global memory manager.
 *
 * IMPORTANT: There should only be a single global memory manager.
 * You should never create this object. Always get the global memory manager
 * by calling the MemManager() function. This function will create the global memory
 * manager if it doesn't exist, or return the existing one if it does.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/20/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeMemManager_DEF
#define typeMemManager_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For pthread_rwlock_t
#include <pthread.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeMemStack.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeMemManager {

	// The main thread id
	pthread_t mainThreadId;

	// The memory stack lock. Used to avoid cross thread issues when elevating
	// values to the global memory stack from another thread
	pthread_rwlock_t memStackLock;

	// Memory stack key. Used to get and pop the current memory stack for the current thread
	pthread_key_t memStackKey;

	// A pointer to the global memory stack that's tracked on the main thread
	struct typeMemStack* globalMemStack;

} typeMemManager;

#endif
