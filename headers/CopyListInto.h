/**
 * CopyListInto
 * Copies a list into another list while overwriting any existing values in the
 * destination list. Copying stops when the destination list is full or when
 * the source list has been fully copied over, whichever happens first
 *
 * IMPORTANT: This function does not do a deep copy. What it does is simply link
 * the values from the original list into the new list. This means that the original
 * list and the new list share the same underlying pointers to the values they contain
 *
 * @param fromList A pointer to the typeList based list to copy values from
 * @param toList   A pointer to the typeList based list to copy values into
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/26/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CopyListInto_Header_DEF
#define CopyListInto_Header_DEF

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
void CopyListInto(void* fromList, void* toList);

#endif
