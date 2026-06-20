/**
 * typeDocumentedType
 * A documented data type
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/19/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeDocumentedType_DEF
#define typeDocumentedType_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeData.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeDocumentedType {
	VALUEMEMBERS;
	struct typeType* type;
	typeData* doc;

} typeDocumentedType;

#endif
