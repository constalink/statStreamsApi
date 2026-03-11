/**
 * enValueType
 * Value types. Whether or not a value is required, optional, or unknown
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef enValueType_DEF
#define enValueType_DEF

//-------------------------------------------------------------------------------------
// Enum definition
//-------------------------------------------------------------------------------------
typedef enum enValueType {

	enValueTypeUnknown,
	enValueTypeOptional,
	enValueTypeRequired

} enValueType;

#endif
