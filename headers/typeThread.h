/**
 * typeThread
 * A thread value type definition
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	2/8/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeThread_DEF
#define typeThread_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For pthread_t
#include <pthread.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeFreeFunc.h"
#include "typeThreadedFunction.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enThreadStatus.h"

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeThread {
	VALUEMEMBERS;

	// A pointer to the free function for the thread
	// This function is automatically set when a new typeThread value is created
	// It handles cleanup of locks after a thread value is freed
	typeFreeFunc* freeFunc;

	// A pointer to the thread start execution function
	typeThreadedFunction* function;

	// A pointer to the typeValue* based value that gets passed into the start function
	void* inputParameter;

	// The current thread status. This starts at enThreadStatusNone
	enThreadStatus status;

	// The thread id. This starts at 0 and gets set when the thread starts
	pthread_t threadId;

	// A thread lock value. This is used by the LockThread function
	pthread_rwlock_t threadLock;

} typeThread;

#endif
