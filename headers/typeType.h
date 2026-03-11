/**
 * typeType
 * A data type.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeType_DEF
#define typeType_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeData.h"
#include "typeDataList.h"
#include "typeTypeList.h"
#include "typeStructTypeMemberDict.h"
#include "typeFunctionType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enType.h"
#include "enValueType.h"

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeType {
	VALUEMEMBERS;

	// If the type is an alias or generic, this will contain the name
	typeData* name;

	// If the type is defined in a file, this will contain the file path
	typeData* filePath;

	// If the type is an enum, this will contain the enum choices
	typeDataList* choices;

	// If the type is a list or dictionary, this will contain the subtype
	struct typeType* subType;

	// If the type is a stream, these will contain the input and output types
	// The output type is the data type that is output or read from the stream
	struct typeType* outputType;

	// The input type is the data type passed as input or written to the stream
	struct typeType* inputType;

	// If the type is a union, this will contain a list of possible types
	struct typeTypeList* unionTypes;

	// If the type is a struct, this will contain a dictionary of properties and types
	struct typeStructTypeMemberDict* structTypes;

	// If the type is a function, this will contain the function type
	struct typeFunctionType* functionType;

	// The type
	enType type;

	// Optional modifier setting
	enValueType valueType;

} typeType;

#endif
