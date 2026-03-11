/**
 * LockThread
 * Locks a thread in either read or write mode
 *
 * If the try parameter is false and a lock cannot be obtained, this function will wait or block execution
 * until the lock can be obtained. If try is set to true, then the function will return right away.
 *
 * If a write lock is currently being held, subsequent locks will wait or fail until the write lock is released.
 * Multiple read locks can be obtained at the same time.
 *
 * This function returns true if the lock was able to be obtained or false otherwise.
 *
 * If the writeLock parameter is true, then a write lock is attempted otherwise a read lock is attempted
 *
 * You must call the UnlockThread function on the same thread pointer to release a lock thats
 * obtained with this function.
 *
 * @param thread    The thread to lock
 * @param writeLock true to obtain a write lock or false to obtain a read lock
 * @param try       false to wait or block until a lock is obtained or false to return right away
 * @return          true of the lock was obtained or false otherwise.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	2/8/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef LockThread_Header_DEF
#define LockThread_Header_DEF

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
typeBool LockThread(typeThread* thread, typeBool writeLock, typeBool try);

#endif
