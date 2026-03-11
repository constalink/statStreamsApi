/**
 * typeValue
 * A memory managed value
 *
 * This is the basis for all values and includes built in memory management using the various
 * struct properties. Here is a detailed explanation of each of these struct properties
 *
 * -- memStack --
 * The memStack property should be left alone as it's automatically set by the Alloc function
 * This property holds a pointer to the memory stack that the value is currently being managed on
 *
 * -- prevValue --
 * The prevValue property should be left alone. It is automatically set by the TrackValue function
 * It holds a pointer to the previous value being managed on the current memory stack
 *
 * -- nextValue --
 * The nextValue property should be left alone. It is automatically set by the TrackValue function
 * It holds a pointer to the next value being managed on the current memory stack
 *
 * -- FREEFUNCTION --
 * If this flag is set, then it signifies that the value has a function that must be called when freeing
 * the value. The free function must be set as the first property after value members if this is the case
 *
 * -- ptrCount --
 * ptrCount is the number of non-managed non-allocated memory pointers defined on the struct for a given value.
 * typeValue based structs that have non typeValue pointers that are not memory allocated like
 * function pointers or other pointers that won't go away and shouldn't be freed by the memory manager should
 * have the ptrCount set to the number of these pointers defined on the struct. This value is not automatically
 * set. When you create a new value, you'll need to set this number accordingly. If it's not correct, you'll
 * get memory errors.
 *
 * -- memCount --
 * memCount is the number of non-managed allocated memory pointers defined on the struct for a given value.
 * typeValue based structs that have non typeValue memory allocations like strings, lists, pointers, etc
 * should have the memCount set to the number of these pointers defined on the struct. This value is not
 * automatically set. When you create a new value, you'll need to set this number accordingly. If it's
 * not correct, you'll get memory errors.
 *
 * -- childCount --
 * childCount is the number of managed typeValue based child pointers defined on the struct for a given value.
 * typeValue based structs that have children typeValue based values should have the childCount set to the
 * number of these pointers defined on the struct. This value is not automatically set. When you create a
 * new value, you'll need to set this number accordingly. If it's not correct, you'll get memory errors
 *
 * -- Member order is important --
 * IMPORTANT: The order of struct members is important. When you define custom typeValue based structs,
 * you must first call the VALUEMEMBERS macro which adds all the memory management and common members.
 *
 * Next, if the FREEFUNCTION flag is set, then you must add a pointer to the free function. This is a function
 * that takes a single parameter... the value itself. This function will be called when the value is freed
 *
 * Next, you must add any non-memory managed pointers like function calls or other pointers that won't go away
 * and that don't need to be freed by the memory manager. Also, you must set the value of ptrCount to the number
 * of these values that are defined on the typeValue based struct. The ptrCount value must match the number of
 * these members that are defined on the struct. This tells the memory manager where to start and stop when
 * freeing malloc'd memory. If ptrCount isn't set correctly, you'll get memory errors
 *
 * Next, you must add any custom non primitive members that will be managed using the memory manager.
 * Also, you must set the value of memCount to the number of these values that are defined on the typeValue
 * based struct. These values include things like malloc'd strings and other non typeValue* values like arrays.
 * The memCount value must match the number of these members that you have. This tells the memory manager where to
 * start and stop when freeing malloc'd memory. If memCount isn't set correctly, you'll get memory errors
 *
 * Next, you must add any typeValue* members and you must set the childCount value accordingly when creating new
 * values. If the childCount value isn't set properly, you'll get memory errors. The childCount value
 * tells the memory manager where to start and stop when counting and elevating children typeValue* objects
 *
 * Next, you can add any primitive and non-managed members like longs, booleans, doubles, etc...
 * NOTE: Lists and dictionaries have special rules... See the List.h and Dict.h files in the Collections package
 * for more information on how to create your list and dictionary structs
 *
 * -- flags --
 * flags is a single byte value that contains bits that should be set on a per value basis
 * Set flag bits as follows
 *
 * Here is a list of known flags
 *        MEMCOUNTED - Memory counted? |
 *                       LIST - List? ||
 *                DICT - Dictionary? |||
 *    FREEFUNCTION - free function? ||||
 *                              00000000
 * (these may change so never depend on the values, depend instead on the macro definitions... see below)
 *
 * You can set flags by bitwise or-ing values like so:
 * This says that the typeValue* is a list and has the 4th bit set as well
 * myValue->flags = 0x02 | 0x08; // But don't do it this way
 *
 * There should be a macro definition for each flag so so you can use the definitions instead of
 * hard coding the flag values like so:
 * myValue->flags = LIST | FLAG; // This is the correct way
 *
 * Each flag should be defined in a macro like so:
 * #define LIST 0x02
 * #define FLAG 0x08
 *
 * The 8 flags are:
 * 0x01        | - Currently defined as MEMCOUNTED (below)
 * 0x02       || - Currently defined as LIST (Defined in the collections/typeList.h file)
 * 0x04      ||| - Currently defined as DICT (Defined in the collections/typeDict.h file)
 * 0x08     |||| - Currently defined as FREEFUNCTION (Defined in the typeFreeFunc.h file)
 * 0x10    |||||
 * 0x20   ||||||
 * 0x40  |||||||
 * 0x80 ||||||||
 *      00000000
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/19/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeValue_DEF
#define typeValue_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t uint8_t uint16_t uint32_t uint64_t
#include <stdint.h>
// For _Atomic
#include <stdatomic.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeMemStack.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Macros
//-------------------------------------------------------------------------------------

// This is a list of value members. This can be added directly to any value struct to
// "inherit" all the necessary properties.
#define VALUEMEMBERS	struct typeMemStack* memStack; \
						struct typeValue* prevValue; \
						struct typeValue* nextValue; \
						_Atomic intmax_t refCount; \
						uint8_t ptrCount; \
						uint8_t memCount; \
						uint8_t childCount; \
						_Atomic uint8_t flags

#define MEMCOUNTED 0x01

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeValue {
	VALUEMEMBERS;

} typeValue;

#endif
