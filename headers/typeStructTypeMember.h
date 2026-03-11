/**
 * typeStructTypeMember
 * A structure type member
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/23/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeStructTypeMember_DEF
#define typeStructTypeMember_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeBool.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeStructTypeMember {
	VALUEMEMBERS;

	struct typeType* type;
	typeBool optional;

} typeStructTypeMember;

#endif
