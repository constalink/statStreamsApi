/**
 * NonForcedType
 * Converts a forced data type or an optional data type to a non forced non-optional type
 *
 * This function does not modify the original data type but rather
 * it'll create a new non-optional version of a data type if required and return that.
 *
 * If the type is already non-optional and non forced, then the original type is returned
 * If the type can't be converted to non-optional... for example, if you
 * pass in the empty type, then the undefined type is returned
 *
 * IMPORTANT: Some types are always forced non-optionals or can't be changed to non-forced
 * without changing the meaning of the type. For these types, just the
 * forced data type is returned instead of undefined. Either way, a non-optional type
 * will be returned or if the type cannot be non-optional, the undefined type is returned
 *
 * @param type A pointer to the type to convert to non-forced non-optional
 * @return     A pointer to the non-optional non-forced version of the type
 *             or the undefined type if the type can't be non-optional
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/9/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef NonForcedType_Header_DEF
#define NonForcedType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* NonForcedType(typeType* type);

#endif
