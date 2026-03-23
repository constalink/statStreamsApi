/**
 * Chmod
 * Changes permissions for a file or folder
 *
 * If the change is successful, then true is returned otherwise
 * false is returned.
 *
 * @param path             A pointer to the path to change permissions for
 * @param ownerPermission  The permission for the owner of the file/folder
 * @param groupPermission  The permission for the group of the file/folder
 * @param othersPermission The permission for all others
 * @return                 true if the operation was successful or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/22/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Chmod_Header_DEF
#define Chmod_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enFilePermission.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool Chmod(
	typeData* path,
	enFilePermission ownerPermission,
	enFilePermission groupPermission,
	enFilePermission othersPermission
);

#endif
