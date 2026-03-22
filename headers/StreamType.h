/**
 * StreamType
 * Creates a stream typeType value and returns a pointer to it
 *
 * This function allocates a new typeType value from the values passed in
 * and tracks it on the current memory stack
 *
 * @param name       A pointer to the stream name - This should be the same as the stream ID
 * @param paramType  A pointer to the open parameter type that the stream expects when opening the stream
 * @param outputType A pointer to the output data type that the stream outputs when being read from
 * @param inputType  A pointer to the input data type that the stream expects when being written to
 * @param optional   Whether or not the type is optional or can hold empty values
 * @return           A pointer to the new stream type
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/4/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StreamType_Header_DEF
#define StreamType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeData.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* StreamType(
	typeData* name,
	typeType* paramType,
	typeType* outputType,
	typeType* inputType,
	typeBool optional
);

#endif
