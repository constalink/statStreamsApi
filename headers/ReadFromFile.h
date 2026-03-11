/**
 * ReadFromFile
 * Reads the entire contents from a file handle and returns it
 *
 * This function takes a file handle and seeks to the end of the file
 * to determine how large it is. Then it seeks back to the start of the file
 * and reads the entire contents of the file handle into a typeData pointer.
 * It then returns a result pointer which will either contain the content of the
 * file or an error message that tells why the file could not be read.
 *
 * IMPORTANT: Be careful not to pass in a file handle to a a file that won't fit
 * in memory or a file handle that is a never ending stream
 *
 * @param fileHandle The open file handle to read from
 * @return           A result pointer that contains either the file contents or an error message
 *
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/17/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReadFromFile_Header_DEF
#define ReadFromFile_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeReadFileResult.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeReadFileResult* ReadFromFile(FILE* fileHandle);

#endif
