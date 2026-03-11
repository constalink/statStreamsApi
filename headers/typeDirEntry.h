/**
 * typeDirEntry
 * A file system directory entry object. This struct tells information about
 * a file or folder including the file type and size of the file / folder
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	2/21/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeDirEntry_DEF
#define typeDirEntry_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>
// For ino_t
#include <sys/types.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enFileType.h"

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeDirEntry {
	VALUEMEMBERS;

	typeData* name;
	enFileType fileType;
	ino_t inode;
	intmax_t fileSize;

} typeDirEntry;

#endif
