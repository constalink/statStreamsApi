/**
 * typeList
 * List type
 *
 * This is the base list type and can contain any type of typeValue* pointer.
 * You can (and should) create specialized list type definitions that contain specific
 * types of typeValue* pointers.
 *
 * To create a specialized list typedef, define the list using a typedef like below except set the type for the
 * list members
 *
 * So, instead of this:
 * typedef struct typeSpecialList {
 * 		LISTMEMBERS;
 * 		void** list;
 * }
 *
 * Use this instead:
 * typedef struct typeSpecialList {
 * 		LISTMEMBERS;
 * 		typeSpecial** list;
 * }
 *
 * Lists have a special member called sortCall that may hold a pointer to a function
 * that is called when the values of the list need to be sorted via the Sort function
 *
 * IMPORTANT: You cannot add any additional members or you'll get memory errors
 *
 * Also, if your list needs to have a sortCall value set, you should create your list
 * using the "List(intmax_t length, intmax_t args, ...)" function, then set the sortCall
 * value on the return value like so:
 * typeSpecialList* specialList = List(2, 2, special1, special2);
 * specialList->sortCall = SpecialSort;
 *
 * It is not recommended to create a special constructor function like "SpecialList(intmax_t args, ...)"
 * Creating a special constructor function isn't recommended because you can simply call the
 * List(intmax_t length, intmax_t args, ...) function. The List function can take any type of typeValue
 * based argument and returns a void* pointer so it's easy to set the proper list type like so:
 * typeSpecialList* specialList = List(2, 2, special1, special2);
 *
 * If you do create a special constructor function, you'll need to make sure you setup everything
 * properly which is beyond the scope of this document... and proper setup procedure / algorithm
 * may change in the future.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeList_DEF
#define typeList_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeSortListFunc.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Macros
//-------------------------------------------------------------------------------------

// The dictionary members macro
#define LISTMEMBERS VALUEMEMBERS; \
					typeSortListFunc* sortCall; \
					intmax_t length

#define LIST 0x02

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeList {
	LISTMEMBERS;
	typeValue** list;

} typeList;

#endif
