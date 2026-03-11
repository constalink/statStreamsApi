/**
 * ConvertEnumToBinaryList
 * Converts an enum value to a binary list value
 *
 * The resultant list value will contain binary values that match
 * the possible choices in the enum value.
 *
 * IMPORTANT: This function does not do a deep copy. This means that the
 * return value will share the same underlying typeData pointers as the enum value.
 *
 * The return value will be a typeValueRef value with the type property
 * set to enValueRefTypeList and the value property set to a typeValueRefList pointer
 * that contains a list of binary pointers. All this pointer jargon can get confusing
 * so it may be better to show an example:
 *
 * // If this enum value is passed into this function
 * typeData* status1 = String("enabled");
 * typeData* status2 = String("disabled");
 * typeEnumValue* statuses = EnumValue(
 *  	Dict(2,
 *  		status1, StringRef(StringValue(status1)),
 *  		status2, StringRef(StringValue(status2))
 *  	)
 * );
 *
 * // Like this
 * typeValueRef* binaryList = ConvertEnumToBinaryList(statuses);
 *
 * // The return value will be equivalent to this
 * binaryList = ListRef(
 *  	List(2, 2,
 *  		BinaryRef(status1),
 *  		BinaryRef(status2)
 *  	)
 * );
 *
 * @param enumVal A pointer to the enum value to convert to a binary list
 * @return        A pointer to the binary list
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertEnumToBinaryList_Header_DEF
#define ConvertEnumToBinaryList_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"
#include "typeEnumValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertEnumToBinaryList(typeEnumValue* enumVal);

#endif
