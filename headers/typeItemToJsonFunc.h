/**
 * typeItemToJsonFunc
 * A type def for an item to JSON conversion function
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeItemToJsonFunc_DEF
#define typeItemToJsonFunc_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef typeData* typeItemToJsonFunc(void* item);

#endif
