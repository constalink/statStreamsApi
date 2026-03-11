/**
 * typeSortListFunc
 * A sort list function type definition. If a typeList based list has the sortCall
 * property set, then that function should implement this signature
 *
 * Both a and b are written with void* pointers but they are expected to be
 * pointers to pointers to typeValue based structs (typeValue**)
 *
 * If you write a function that implements this signature, you'll need to
 * dereference your values like so:
 *
 * int32_t MySortFunc(const void* a, const void* b) {
 *  	typeValue* aVal = *(typeValue**) a;
 *  	typeValue* bVal = *(typeValue**) b;
 *  	// Additional code here
 * }
 *
 * Or, if you are expecting a different custom typeValue based type:
 *
 * int32_t MySortFunc(const void* a, const void* b) {
 *  	typeCustom* aVal = *(typeCustom**) a;
 *  	typeCustom* bVal = *(typeCustom**) b;
 *  	// Additional code here
 * }
 *
 * Your custom function should return:
 * -1 if a is less than b
 * 0 if a and b are equal
 * 1 if a is greater than b
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/8/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeSortListFunc_DEF
#define typeSortListFunc_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef int32_t typeSortListFunc(const void* a, const void* b);

#endif
