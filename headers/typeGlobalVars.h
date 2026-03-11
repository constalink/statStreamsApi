/**
 * typeGlobalVars
 * A structure of commonly used variables.. These are initialized the first time that
 * the GlobalVars function is called. The reason this typedef is called
 * typeGlobalVars is because once these commonly used values are initialized
 * they stay available forever until the program is terminated as they are
 * tracked on the Global memory stack.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/3/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeGlobalVars_DEF
#define typeGlobalVars_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeGlobalVars {
	VALUEMEMBERS;

	// ""
	typeData* empty;

	// " "
	typeData* space;

	// "\t"
	typeData* tab;

	// "\n"
	typeData* newLine;

	// ","
	typeData* comma;

	// ", "
	typeData* commaSep;

	// ",\n\t"
	typeData* commaLineSep;

	// "/"
	typeData* slash;

	// "."
	typeData* dot;

	// ".."
	typeData* doubleDot;

	// "../"
	typeData* upDir;

	// "$"
	typeData* dollar;

	// "="
	typeData* equal;

	// "\""
	typeData* doubleQuote;

	// "`"
	typeData* backTick;

	// "?"
	typeData* questionMark;

	// "!"
	typeData* exclamation;

	// "|"
	typeData* pipe;

	// " | "
	typeData* pipeSep;

	// "+"
	typeData* plus;

	// "-"
	typeData* dash;

	// "*"
	typeData* star;

	// "**"
	typeData* doubleStar;

	// "/#"
	typeData* slashNum;

	// "%"
	typeData* percent;

	// "&"
	typeData* amp;

	// "^"
	typeData* caret;

	// ">>"
	typeData* shiftRight;

	// "<<"
	typeData* shiftLeft;

	// "\0"
	typeData* null;

	// "null"
	typeData* nullStr;

	// " \t\n\r\f\v\0"
	typeData* whiteSpace;

	// "An error was encountered"
	typeData* errorEncountered;

	// "FAILED"
	typeData* FAILED;

	// "Completed successfully"
	typeData* completedSuccessfully;

	// "OK"
	typeData* OK;

	// "-------------------------------------------------------------------"
	typeData* dashes;

	// "0b"
	typeData* binaryPrefix;

	// "0o"
	typeData* octalPrefix;

	// "0d"
	typeData* decimalPrefix;

	// "0x"
	typeData* hexPrefix;

	// "true"
	typeData* trueStr;

	// "false"
	typeData* falseStr;

	// "unknown"
	typeData* unknownStr;

	// "block"
	typeData* blockStr;

	// "character"
	typeData* characterStr;

	// "folder"
	typeData* folderStr;

	// "namedPipe"
	typeData* namedPipeStr;

	// "symLink"
	typeData* symLinkStr;

	// "file"
	typeData* fileStr;

	// "socket"
	typeData* socketStr;

	// The base64 decoding table
	typeData* base64DecodingTable;

	// The base64 encoding table
	uint8_t base64EncodingTable[64];

	// The hex encoding table
	uint8_t hexEncodingTable[16];

} typeGlobalVars;

#endif
