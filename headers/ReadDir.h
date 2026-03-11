/**
 * ReadDir
 * Reads a directory and returns a directory entry list
 * This function opens a directory, reads all files / folders in the directory
 * and returns a list value that contains all the directory entries
 *
 * Entries are not sorted but simply added to the list in the order in which
 * the file system read them. To sort them, call the Sort function on the list
 *
 * @param path The path to the folder to read
 * @return     A list pointer containing all the entry values in the directory
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	2/21/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReadDir_Header_DEF
#define ReadDir_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeDirEntryList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeDirEntryList* ReadDir(typeData* path);

#endif
