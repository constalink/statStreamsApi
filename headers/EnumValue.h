/**
 * EnumValue
 * Creates a new typeEnumValue value and returns a pointer to it
 *
 * This function allocates a new typeEnumValue value and tracks it on the
 * current memory stack
 *
 * The options argument is expected to be a typeValueRef that contains a
 * dictionary of typeValueRef strings. Also, each of the strings in the
 * enum are expected to conform to naming restrictions.
 * - They should each be unique
 * - They should each start with a lower case letter
 * - They should each only contain lower case and upper case letters and number characters
 * - They should each match the key that they are associated with
 *
 * Here is an example of a valid call to this function
 *
 * typeData* state1 = String("enabled");
 * typeData* state2 = String("disabled");
 * typeData* state3 = String("archived");
 * typeEnumValue* statuses = EnumValue(
 *  	DictRef(
 *  		Dict(3,
 *  			state1, StringRef(StringValue(state1)),
 *  			state2, StringRef(StringValue(state2)),
 *  			state3, StringRef(StringValue(state3))
 *  		)
 *  	)
 * );
 *
 * @param options A pointer to a typeValueRefDict dictionary of string references
 *                Each value in the dictionary must follow naming conventions and must match the associated key
 * @return        A pointer to the typeEnumValue value that is created
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef EnumValue_Header_DEF
#define EnumValue_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRefDict.h"
#include "typeEnumValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeEnumValue* EnumValue(

	// Options should be a dictionary of StringRef objects
	typeValueRefDict* options
);

#endif
