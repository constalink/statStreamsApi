/**
 * enFilePermission
 * A list of chmod permissions
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/22/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef enFilePermission_DEF
#define enFilePermission_DEF

//-------------------------------------------------------------------------------------
// Enum definition
//-------------------------------------------------------------------------------------
typedef enum enFilePermission {

	// No access to the directory
	// This is the same as chmod 0
	enFilePermissionNoAccess,

	// Execute only access to the directory
	// This is the same as chmod 1
	enFilePermissionExecuteOnly,

	// Write only access to the directory
	// This is the same as chmod 2
	enFilePermissionWriteOnly,

	// Write and execute access to the directory
	// This is the same as chmod 3
	enFilePermissionWriteExecute,

	// Read only access to the directory
	// This is the same as chmod 4
	enFilePermissionReadOnly,

	// Read and execute access to the directory
	// This is the same as chmod 5
	enFilePermissionReadExecute,

	// Read and write access to the directory
	// This is the same as chmod 6
	enFilePermissionReadWrite,

	// Read, write, and execute access to the directory
	// This is the same as chmod 7
	enFilePermissionFull

} enFilePermission;

#endif
