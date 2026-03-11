/**
 * ComputeValue
 * Computes the result of two values based on a value operator
 *
 * This function expects the op argument to be one of the operators
 * in the table below. If an unsupported operator is passed in, then NULL will be returned.
 * This function uses other functions to compute the return value based on the operator.
 * The table below outlines what function is used to compute each result
 *
 * ---------------------------------------------------------
 * | operator type             | computation function used |
 * |---------------------------|---------------------------|
 * | enValueOperatorAdd        | AddValues()               |
 * | enValueOperatorSubtract   | SubtractValues()          |
 * | enValueOperatorMultiply   | MultiplyValues()          |
 * | enValueOperatorPower      | PowValues()               |
 * | enValueOperatorDivide     | DivideValues()            |
 * | enValueOperatorIntDivide  | IntDivideValues()         |
 * | enValueOperatorModulo     | ModuloValues()            |
 * | enValueOperatorBitwiseAnd | BitwiseAndValues()        |
 * | enValueOperatorBitwiseOr  | BitwiseOrValues()         |
 * | enValueOperatorBitwiseXor | BitwiseXorValues()        |
 * | enValueOperatorShiftRight | BitwiseShiftRightValues() |
 * | enValueOperatorShiftLeft  | BitwiseShiftLeftValues()  |
 * ---------------------------------------------------------
 *
 * IMPORTANT: This function expects that the two values that are passed into
 * this function are valid for the operation being performed. If not, then
 * NULL will most likely be returned (depending on the underlying function being called)
 * For example, if you try to subtract a string from a fraction, you'll get NULL.
 * Take a look at the underlying functions in the table above to get a list of
 * all the expected value types for each operation.
 *
 * @param value1 A pointer to the first value to perform the computation on
 * @param op     The operator to use for the computation
 * @param value2 A pointer to the second value to perform the computation on
 * @return       A pointer to the result of the computation or NULL if the computation can't be performed
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ComputeValue_Header_DEF
#define ComputeValue_Header_DEF

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
typeValueRef* ComputeValue(
	typeValueRef* value1,
	enValueOperator op,
	typeValueRef* value2
);

#endif
