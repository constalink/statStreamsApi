/**
 * ValueRef
 * Creates a new typeValueRef value and returns a pointer to it
 *
 * This function allocates a new typeValueRef value and tracks it on the
 * current memory stack
 *
 * It is expected that the type parameter and value type match. If they don't
 * you will most likely end up with buffer overflows, segmentation defaults or
 * undefined behavior because other functions expect that the type and value match
 *
 * This function expects a typeValue based pointer for the value argument. This
 * function is written with a void* pointer so that any typeValue based value
 * can easily be passed in without a type cast. You must take care to pass in a
 * valid typeValue based value or you'll end up with segmentation faults or memory errors
 *
 * The type and value type should match as listed in the following table:
 * ----------------------------------------------
 * | type                   | value             |
 * |------------------------|-------------------|
 * | enValueRefTypeString   | typeStringValue   |
 * | enValueRefTypeBinary   | typeData          |
 * | enValueRefTypeInteger  | typeIntegerValue  |
 * | enValueRefTypeFraction | typeFractionValue |
 * | enValueRefTypeBool     | typeBoolValue     |
 * | enValueRefTypeRegExp   | typeRegExp        |
 * | enValueRefTypeRange    | typeRangeValue    |
 * | enValueRefTypeList     | typeValueRefList  |
 * | enValueRefTypeDict     | typeValueRefDict  |
 * | enValueRefTypeEmpty    | NULL              |
 * | enValueRefTypeStream   | typeStreamValue   |
 * | enValueRefTypeEnum     | typeEnumValue     |
 * | enValueRefTypeFunction | typeFunctionValue |
 * ----------------------------------------------
 *
 * IMPORTANT: You should avoid this function if possible. Instead use the
 * shortcut functions for creating a value reference because they automatically
 * make sure that the value and type match. Here is a list of shortcut functions
 * that make sure the value and type properly match:
 *
 * -------------------------------------------------------
 * | To create a | Call this function instead            |
 * |-------------|---------------------------------------|
 * | string      | StringRef()                           |
 * | binary      | BinaryRef()                           |
 * | int         | IntRef()                              |
 * | fraction    | FractionRef()                         |
 * | bool        | BoolRef(), BoolFalse(), or BoolTrue() |
 * | regExp      | RegExpRef()                           |
 * | range       | RangeRef()                            |
 * | list        | ListRef()                             |
 * | dict        | DictRef()                             |
 * | empty       | EmptyRef()                            |
 * | stream      | StreamRef()                           |
 * | enum        | EnumRef()                             |
 * | function    | FunctionRef()                         |
 * -------------------------------------------------------
 *
 * @param type  The value type
 * @param value The underlying value. Must match the type as outlined in the table above
 * @return      A pointer to the new typeValueRef value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ValueRef_Header_DEF
#define ValueRef_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enValueRefType.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ValueRef(enValueRefType type, void* value);

#endif
