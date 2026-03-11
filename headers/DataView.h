/**
 * DataView
 * Creates a typeDataView value. A typeDataView value contains
 * zero or more typeData chunks. The length of the data view will
 * be the sum of all typeData lengths in the view.
 *
 * This function allocates a new typeDataView value using the
 * passed in arguments and tracks it on the current memory stack.
 *
 * @param chunks A list of typeData values in the view
 * @return       A pointer to a brand new typeDataView value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/4/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DataView_Header_DEF
#define DataView_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeDataList.h"
#include "typeDataView.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeDataView* DataView(typeDataList* chunks);

#endif
