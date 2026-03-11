/**
 * CompareValues
 * Compares two values based on a value operator
 *
 * This function expects the op argument to be one of the operators
 * in the table below. If an unsupported operator is passed in, then NULL is returned
 * This function uses other functions to make the comparison based on the operator.
 * The table below outlines what function is used to make each comparison
 *
 * ------------------------------------------------------------------
 * | operator type                       | comparison function used |
 * |-------------------------------------|--------------------------|
 * | enValueOperatorEquals               | Equals()                 |
 * | enValueOperatorNotEquals            | NotEquals()              |
 * | enValueOperatorGreaterThan          | GreaterThan()            |
 * | enValueOperatorGreaterThanOrEqualTo | GreaterThanOrEqualTo()   |
 * | enValueOperatorLessThan             | LessThan()               |
 * | enValueOperatorLessThanOrEqualTo    | LessThanOrEqualTo()      |
 * | enValueOperatorContains             | Contains()               |
 * | enValueOperatorNotContains          | NotContains()            |
 * | enValueOperatorMatches              | MatchesValue()           |
 * | enValueOperatorNotMatches           | NotMatchesValue()        |
 * | enValueOperatorSame                 | IsSame()                 |
 * | enValueOperatorNotSame              | IsNotSame()              |
 * ------------------------------------------------------------------
 *
 * The return value will be a typeValueRef value that has the typeValueRef->type
 * property set to enValueRefTypeBool and the typeValueRef->value property set to
 * a typeBoolValue value that's either true or false. Basically, it'll either return
 * BoolTrue() or BoolFalse()
 *
 * @param value1 A pointer to the first value to compare
 * @param op     The operator to use for the comparison
 * @param value2 A pointer to the second value to compare
 * @return       A true or false value reference depending on the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CompareValues_Header_DEF
#define CompareValues_Header_DEF

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
#include "enValueOperator.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* CompareValues(
	typeValueRef* value1,
	enValueOperator op,
	typeValueRef* value2
);

#endif
