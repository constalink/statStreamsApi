/**
 * enValueRefType
 * All possible value reference types
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef enValueRefType_DEF
#define enValueRefType_DEF

//-------------------------------------------------------------------------------------
// Enum definition
//-------------------------------------------------------------------------------------
typedef enum enValueRefType {

	enValueRefTypeString,
	enValueRefTypeBinary,
	enValueRefTypeInteger,
	enValueRefTypeFraction,
	enValueRefTypeBool,
	enValueRefTypeRegExp,
	enValueRefTypeRange,
	enValueRefTypeList,
	enValueRefTypeDict,
	enValueRefTypeEmpty,
	enValueRefTypeStream,
	enValueRefTypeEnum,
	enValueRefTypeFunction,
	enValueRefTypePromise

} enValueRefType;

#endif
