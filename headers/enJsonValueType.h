/**
 * enJsonValueType
 * All possible JSON value types
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/1/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef enJsonValueType_DEF
#define enJsonValueType_DEF

//-------------------------------------------------------------------------------------
// Enum definition
//-------------------------------------------------------------------------------------
typedef enum enJsonValueType {

	enJsonValueTypeDict,
	enJsonValueTypeList,
	enJsonValueTypeString,
	enJsonValueTypeInteger,
	enJsonValueTypeFraction,
	enJsonValueTypeBool,
	enJsonValueTypeNull

} enJsonValueType;

#endif
