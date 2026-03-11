/**
 * typePropType
 * A function property type
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/15/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typePropType_DEF
#define typePropType_DEF

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
typedef struct typePropType {
	VALUEMEMBERS;
	struct typeType* type;
	struct typeData* doc;

} typePropType;

#endif
