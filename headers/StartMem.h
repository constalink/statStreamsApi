/**
 * StartMem
 * Starts tracking memory after a PauseMem call
 * After this call, memory begins tracking again at the current stack
 *
 * Calls to PauseMem and StartMem must be balanced.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/20/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StartMem_Header_DEF
#define StartMem_Header_DEF

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
void StartMem();

#endif
