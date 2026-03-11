/**
 * enOpenFileMode
 * All possible open file modes
 *
 * IMPORTANT: If these are updated, you'll need to update the StringToFileMode file to match
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef enOpenFileMode_DEF
#define enOpenFileMode_DEF

//-------------------------------------------------------------------------------------
// Enum definition
//-------------------------------------------------------------------------------------
typedef enum enOpenFileMode {

	// Non-Binary modes

	// Open the file for reading (r)
	// If the file doesn't exist - error
	// If the file does exist, it is opened and the pointer is placed at the beginning of the file
	// On success you read from the file, but you can't write to it
	enOpenFileModeRead,
	// Open the file for writing (w)
	// If the file doesn't exist, it is created and the pointer is placed at the beginning of the file
	// If the file does exist, it is erased and the pointer is placed at the beginning of the file
	// On success you can write to the file, but you can't read from it
	enOpenFileModeWrite,
	// Open the file for appending (a)
	// If the file doesn't exist, it is created and the pointer is placed at the beginning of the file
	// If the file does exist, it is opened and the pointer is placed at the end of the file
	// On success, you can write to the file, but you can't read from it
	enOpenFileModeAppend,
	// Open the file for reading and writing in read mode (r+)
	// If the file doesn't exist - error
	// If the file does exist, it is opened and the pointer is placed at the beginning of the file
	// On success, you can read and write
	enOpenFileModeReadWrite,
	// Open the file for reading and writing in write mode (w+)
	// If the file doesn't exist, it is created and the pointer is placed at the beginning of the file
	// If the file does exist, it is erased and the pointer is placed at the beginning of the file
	// On success, you can read and write
	enOpenFileModeEraseReadWrite,
	// Open the file for reading and writing in append mode (a+)
	// If the file doesn't exist, it is created and the pointer is placed at the beginning of the file
	// if the file does exist, it is opened and the pointer is placed at the end of the file
	// On success, you can read and write
	enOpenFileModeAppendReadWrite,

	// Binary modes

	// Open the file for reading in binary mode(rb)
	// If the file doesn't exist - error
	// If the file does exist, it is opened and the pointer is placed at the beginning of the file
	// On success you read from the file, but you can't write to it
	enOpenFileModeReadBinary,
	// Open the file for writing in binary mode (wb)
	// If the file doesn't exist, it is created and the pointer is placed at the beginning of the file
	// If the file does exist, it is erased and the pointer is placed at the beginning of the file
	// On success you can write to the file, but you can't read from it
	enOpenFileModeWriteBinary,
	// Open the file for appending in binary mode (ab)
	// If the file doesn't exist, it is created and the pointer is placed at the beginning of the file
	// If the file does exist, it is opened and the pointer is placed at the end of the file
	// On success, you can write to the file, but you can't read from it
	enOpenFileModeAppendBinary,
	// Open the file for reading and writing in binary read mode (rb+)
	// If the file doesn't exist - error
	// If the file does exist, it is opened and the pointer is placed at the beginning of the file
	// On success, you can read and write
	enOpenFileModeReadWriteBinary,
	// Open the file for reading and writing in binary write mode (wb+)
	// If the file doesn't exist, it is created and the pointer is placed at the beginning of the file
	// If the file does exist, it is erased and the pointer is placed at the beginning of the file
	// On success, you can read and write
	enOpenFileModeEraseReadWriteBinary,
	// Open the file for reading and writing in binary append mode (ab+)
	// If the file doesn't exist, it is created and the pointer is placed at the beginning of the file
	// if the file does exist, it is opened and the pointer is placed at the end of the file
	// On success, you can read and write
	enOpenFileModeAppendReadWriteBinary

} enOpenFileMode;

#endif
