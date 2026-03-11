/**
 * PauseMem
 * Pauses tracking of the current memory stack.
 * Call this function when creating a value that you need to return from the current function
 * This will let it survive the function return call and will be tracked at the parent stack
 *
 * Use this function as an alternative to calling the ElevateValue function on an object
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/20/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef PauseMem_Header_DEF
#define PauseMem_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void PauseMem();

#endif
