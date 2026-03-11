/**
 * ConvertEnumToStringList
 * Converts an enum value to a string list value
 *
 * The resultant list value will contain string values that match
 * the possible choices in the enum value.
 *
 * IMPORTANT: This function does not do a deep copy. This means that the
 * return value will share the same underlying typeData pointers as the enum value.
 *
 * The return value will be a typeValueRef value with the type property
 * set to enValueRefTypeList and the value property set to a typeValueRefList pointer
 * that contains a list of string value pointers. All this pointer jargon can get confusing
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
 * typeValueRef* stringList = ConvertEnumToStringList(statuses);
 *
 * // The return value will be equivalent to this
 * stringList = ListRef(
 *  	List(2, 2,
 *  		StringRef(StringValue(status1)),
 *  		StringRef(StringValue(status2))
 *  	)
 * );
 *
 * @param enumVal A pointer to the enum value to convert to a string list
 * @return        A pointer to the string list
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertEnumToStringList_Header_DEF
#define ConvertEnumToStringList_Header_DEF

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
typeValueRef* ConvertEnumToStringList(typeEnumValue* enumVal);

#endif
