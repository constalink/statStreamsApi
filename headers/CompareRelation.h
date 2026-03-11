/**
 * CompareRelation
 * Compares a value to a data type based on a value operator
 * Basically, this function tells if a value matches or doesn't match a given data type
 *
 * This function expects the op argument to be either enValueOperatorRelated
 * or enValueOperatorNotRelated. If the op argument is neither of these, then
 * NULL will be returned.
 *
 * If the op argument is enValueOperatorRelated, then the function
 * compares the value argument against the type argument using the IsA function
 *
 * If the op argument is enValueOperatorNotRelated, then the function
 * compares the value argument against the type argument using the IsNotA function
 *
 * The return value will be a typeValueRef value that has the typeValueRef->type
 * property set to enValueRefTypeBool and the typeValueRef->value property set to
 * a typeBoolValue value that's either true or false. Basically, it'll either return
 * BoolTrue() or BoolFalse()
 *
 * @param value A pointer to the value reference to compare
 * @param op    The operator to use for the comparison.
 *              Should be either enValueOperatorRelated or enValueOperatorNotRelated
 * @param type  A pointer to the data type to compare against
 * @return      A true or false value reference depending on the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/12/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CompareRelation_Header_DEF
#define CompareRelation_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeType.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enValueOperator.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* CompareRelation(
	typeValueRef* value,
	enValueOperator op,
	typeType* type
);

#endif
