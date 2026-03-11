/**
 * typeFunctionType
 * A function type
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeFunctionType_DEF
#define typeFunctionType_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeValue.h"
#include "typeData.h"
#include "typeType.h"
#include "typeTypeDict.h"
#include "typeArgTypeDict.h"
#include "typePropTypeDict.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeFunctionType {
	VALUEMEMBERS;

	// Dictionary of generics <T: restrictedType>
	struct typeTypeDict* generics;
	struct typeArgTypeDict* argTypes;
	struct typePropTypeDict* propertyTypes;
	struct typeType* returnType;
	struct typeData* filePath;
	struct typeData* doc;

	typeBool await;
	typeBool acceptsEnterEvents;
	typeBool acceptsExitEvents;

} typeFunctionType;

#endif
