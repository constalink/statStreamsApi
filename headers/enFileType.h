/**
 * enFileType
 * All possible file types
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	2/21/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef enFileType_DEF
#define enFileType_DEF

//-------------------------------------------------------------------------------------
// Enum definition
//-------------------------------------------------------------------------------------
typedef enum enFileType {

	enFileTypeUnknown,
	enFileTypeBlock,
	enFileTypeCharacter,
	enFileTypeFolder,
	enFileTypeNamedPipe,
	enFileTypeSymLink,
	enFileTypeFile,
	enFileTypeSocket

} enFileType;

#endif
