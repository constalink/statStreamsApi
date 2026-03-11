/**
 * enType
 * Possible types
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef enType_DEF
#define enType_DEF

//-------------------------------------------------------------------------------------
// Enum definition
//-------------------------------------------------------------------------------------
typedef enum enType {

	enTypeString,
	enTypeBinary,
	enTypeInt,
	enTypeFraction,
	enTypeBool,
	enTypeRegExp,
	enTypeRange,
	enTypeEnum,
	enTypeEnumOption,
	enTypeList,
	enTypeDict,
	enTypeStruct,
	enTypeEmpty,
	enTypeUnknown,
	enTypeUndefined,
	enTypeAny,
	enTypeAlias,
	enTypeUnion,
	enTypeGeneric,
	enTypeFunction,
	enTypeStream

} enType;

#endif
