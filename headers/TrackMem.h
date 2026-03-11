/**
 * TrackMem
 * Starts tracking memory usage. This should be the first thing any program calls
 * This function creates a new memory tracker and pushes it unto the memory management stack
 * so that all typeValue based values that are created will be tracked on the stack.
 *
 * If you create a typeValue* based value before calling this function, then
 * you might get memory errors.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/20/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef TrackMem_Header_DEF
#define TrackMem_Header_DEF

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
void TrackMem();

#endif
