/**
 * Sort
 * Sorts a list and returns the sorted list. A brand new sorted list is
 * returned and the original one is left unchanged.
 *
 * IMPORTANT: In order for a list to be sortable, it has to have the
 * sortCall property set to a valid sort function that implements the
 * typeSortListFunc function signature or the original list
 * will just be returned unchanged. The DataList function is a function
 * that creates typeList based values that have the sortCall property set to a
 * function that sorts values alphabetically, however, you can simply set your
 * own function for the sortCall property on generic lists.
 *
 * Here's an example of how to set the sortCall property on a generic list
 *
 * // Define the sort function. It should return 0 if the items are equal
 * // 1 if a is greater than b, and -1 if b is greater than a
 * int32_t SortNumeric(const void* a, const void* b) {
 *  	// Both a and b are pointers to the typeData pointer being sorted
 *  	// so we have to dereference both a and b like so
 *  	typeData* item1 = *(typeData**) a;
 *  	typeData* item2 = *(typeData**) b;
 *  	if (item1->data[0] == item2->data[0]) {
 *  		return 0;
 *  	}
 *  	if (item1->data[0] < item2->data[0]) {
 *  		return -1;
 *  	}
 *  	return 1;
 * }
 *
 * // Create the list and set the sortCall property to the sort function
 * typeList* myList = List(3, 3, String("\x03"), String("\x04"), String("\x02"));
 * myList->sortCall = SortNumeric;
 *
 * // Now we can call Sort on the list and it'll use the SortNumeric
 * // function to sort values in the list
 * typeList* sorted = Sort(myList);
 *
 * IMPORTANT: This function does not do a deep copy. This means that the new
 * list and original lists will share pointers to the elements they contain.
 *
 * This function expects a typeList based pointer as the list argument. The
 * function signature is written with a void* pointer so that any list thats
 * derived from the typeList typedef can simply be passed into this function
 * without a type cast. And even though the return value will be another
 * typeList pointer, it is also written with a void* pointer so that return
 * values are automatically type cast to the expected output type.
 *
 * You must take care to pass in a supported typeList based value and you must take
 * care to assign the return value to a typeList based value as well or you'll most
 * likely end up with buffer overflows or segmentation faults
 *
 * @param list A pointer to the list to sort
 * @return     A pointer to a sorted list
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Sort_Header_DEF
#define Sort_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void* Sort(void* list);

#endif
