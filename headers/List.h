/**
 * List
 * Creates a list of typeValue based values
 *
 * This function allocates a new typeList value using the passed in arguments
 * and tracks it on the current memory stack
 *
 * This function takes a variable number of arguments. The first argument is the
 * number of typeValue* values that the list contains. The 2nd argument is the number
 * of typeValue pointers you'd like to pass into the function, and every argument after
 * that should be a pointer to a typeValue based value that you'd like to store in the list.
 *
 * Here is an example of how to call this function
 *
 * // Creates a list of 2 values. One of the most basic typeValue based
 * // values is typeData. So we'll use typeData values in our example
 * typeList* myList = List(2, 2, String("Hello"), String("World"));
 *
 * You can create a partially initialized list by passing in less arguments than the length
 *
 * // Creates a list of 4 typeData values with the first two initialized
 * typeList* myList = List(4, 2, String("Hello"), String("World"));
 *
 * In the example above, the last 2 values are uninitialized and may contain
 * released memory. You'll need to either set the last 2 values to NULL or
 * set typeValue based values into them using the SetIndexInPlace function.
 *
 * WARNING: Don't set the values directly... don't do this:
 * myList->[2] = String("Nice");
 * myList->[3] = String("Day");
 *
 * Instead, do this:
 * SetIndexInPlace(myList, String("Nice"), 2);
 * SetIndexInPlace(myList, String("Day"), 2);
 *
 * The reason that you can't set the values directly is because it'll mess up
 * memory management and reference counting. The SetIndexInPlace function handles
 * all the memory management and reference counting for you.
 *
 * Here is another example of a list that contains a list. The typeList typedef
 * is also based off of the typeValue typedef so you can have lists inside lists like so
 *
 * typeList* multiLevelList = List(2, 2,
 * 		List(2, 2, String("Hello"), String("World")),
 * 		List(4, 4, String("Have"), String("A"), String("Nice"), String("Day"))
 * );
 *
 * @param length The final length of the list
 * @param args   The number of typeValue based arguments that are passed into the function
 * @param ...    Zero or more typeValue based pointers to store in the list.
 *               The number of arguments should match the args parameter
 * @return       A pointer to the new typeList value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef List_Header_DEF
#define List_Header_DEF

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
// Header definition
//-------------------------------------------------------------------------------------
void* List(intmax_t length, intmax_t args, ...);

#endif
