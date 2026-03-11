/**
 * typeArgType
 * A function argument type
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/15/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeArgType_DEF
#define typeArgType_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeData.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeArgType {
	VALUEMEMBERS;
	struct typeType* type;
	struct typeType* defaultValueType;
	struct typeData* doc;

} typeArgType;

#endif
