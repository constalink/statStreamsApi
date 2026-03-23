/**
 * MakeDir
 * Creates a directory at a given path
 *
 * IMPORTANT: The directory path is not normalized or checked for errors.
 * You may want to call NormalizePath on the dirPath argument before passing
 * it into this function
 *
 * This function will not recursively create folders that don't exist similar
 * to the linux `mkdir -p` command. The parent folder must already exist
 * before calling this function or it'll fail. Also, if the folder already
 * exists, then the function will simply return true
 *
 * Also, if creation of the directory fails, there is no error that is returned
 * but if you #include <errno.h>, then errno will contain an error code.
 * See the <errno.h> header file for a list of possible error codes.
 *
 * In Linux and MacOS, the folder will be created with 750 permissions. That's
 * Full access for the owner, read and execute for the group, and no permissions
 * for others. If you need it to have different permissions, you can use the
 * Chmod function
 *
 * @param dirPath A pointer to the directory path to create
 * @return        true if the directory was created successfully or if it already exists
 *                false if the directory could not be created for any reason.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/22/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MakeDir_Header_DEF
#define MakeDir_Header_DEF

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

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool MakeDir(typeData* dirPath);

#endif
