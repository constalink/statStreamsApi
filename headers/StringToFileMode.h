/**
 * StringToFileMode
 * Converts a string to a file mode
 * This function takes a string representation of a file mode and returns
 * the corresponding enum option that's suitable to pass into functions
 * that require an enum option instead of a file mode string
 *
 * @param mode The file mode as a string
 * @return     The file mode equivalent enum option
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/9/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StringToFileMode_Header_DEF
#define StringToFileMode_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enOpenFileMode.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
enOpenFileMode StringToFileMode(typeData* mode);

#endif
