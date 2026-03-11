/**
 * typeThreadedFunction
 * Type definition for a ThreadedFunction - This is a pointer to a function that can be called by StartThread()
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/20/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeThreadedFunction_DEF
#define typeThreadedFunction_DEF

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
// Struct definition
//-------------------------------------------------------------------------------------
typedef void* typeThreadedFunction(void* inputParameter);

#endif
