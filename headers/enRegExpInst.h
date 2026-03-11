/**
 * enRegExpInst
 * Regular expression instruction types
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/20/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef enRegExpInst_DEF
#define enRegExpInst_DEF

//-------------------------------------------------------------------------------------
// Enum definition
//-------------------------------------------------------------------------------------
typedef enum enRegExpInst {

	enRegExpInstMatch,
	enRegExpInstSplit,
	enRegExpInstJump,
	enRegExpInstBeginCapture,
	enRegExpInstEndCapture,
	enRegExpInstBeginAssert,
	enRegExpInstEndAssert,
	enRegExpInstBeginNegAssert,
	enRegExpInstEndNegAssert,
	enRegExpInstFailNegAssert,
	enRegExpInstAccept

} enRegExpInst;

#endif
