/**
 * typeFreeFunc
 * A free function type definition. If a typeValue based value has the FREEFUNCTION
 * flag set, then the free function for that value should implement this signature
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/4/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeFreeFunc_DEF
#define typeFreeFunc_DEF

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
// Macros
//-------------------------------------------------------------------------------------
#define FREEFUNCTION 0x08

//-------------------------------------------------------------------------------------
// Type definition
//-------------------------------------------------------------------------------------
typedef void typeFreeFunc(void* value);

#endif
