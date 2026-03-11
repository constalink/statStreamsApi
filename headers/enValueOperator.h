/**
 * enValueOperator
 * All possible value operator types
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/2/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef enValueOperator_DEF
#define enValueOperator_DEF

//-------------------------------------------------------------------------------------
// Enum definition
//-------------------------------------------------------------------------------------
typedef enum enValueOperator {

	enValueOperatorNone,

	// in, isIn
	enValueOperatorContains,

	// ==, equals, isEqualTo
	enValueOperatorEquals,

	// >, isGreaterThan
	enValueOperatorGreaterThan,

	// >=, isGreaterThanOrEqualTo
	enValueOperatorGreaterThanOrEqualTo,

	// <, isLessThan
	enValueOperatorLessThan,

	// <=, isLessThanOrEqualTo
	enValueOperatorLessThanOrEqualTo,

	// =~, ~=, matches
	enValueOperatorMatches,

	// <<~, ~>>, matchAll
	enValueOperatorMatchAll,

	// <~, ~>, matchOnce
	enValueOperatorMatchOnce,

	// isNotIn, isntIn
	enValueOperatorNotContains,

	// !=, isNotEqualTo, isntEqualTo, doesNotEqual, doesntEqual
	enValueOperatorNotEquals,

	// !~, doesNotMatch, doesntMatch
	enValueOperatorNotMatches,

	// isNotA, isNotAn, isntA, isntAn
	enValueOperatorNotRelated,

	// !==, isNot, isnt
	enValueOperatorNotSame,

	// isA, isAn
	enValueOperatorRelated,

	// ===, is
	enValueOperatorSame,

	// ->, <-, sendTo, fetchFrom
	enValueOperatorTo,

	// +
	enValueOperatorAdd,

	// -
	enValueOperatorSubtract,

	// **
	enValueOperatorPower,

	// *
	enValueOperatorMultiply,

	// /#
	enValueOperatorIntDivide,

	// /
	enValueOperatorDivide,

	// %
	enValueOperatorModulo,

	// &
	enValueOperatorBitwiseAnd,

	// |
	enValueOperatorBitwiseOr,

	// ^
	enValueOperatorBitwiseXor,

	// >>
	enValueOperatorShiftRight,

	// <<
	enValueOperatorShiftLeft

} enValueOperator;

#endif
