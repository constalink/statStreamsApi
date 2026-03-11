/**
 * enRegExpElem
 * Regular expression element types
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/24/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef enRegExpElem_DEF
#define enRegExpElem_DEF

//-------------------------------------------------------------------------------------
// Enum definition
//-------------------------------------------------------------------------------------
typedef enum enRegExpElem {

	enRegExpElemBackRef,
	enRegExpElemCharSet,
	enRegExpElemCharSetEscape,
	enRegExpElemCharSetRange,
	enRegExpElemCharSetSequence,
	enRegExpElemSpecials,
	enRegExpElemDot,
	enRegExpElemEscape,
	enRegExpElemGroup,
	enRegExpElemPath,
	enRegExpElemSequence,
	enRegExpElemUnicodeEscape,
	enRegExpElemWordBoundary,
	enRegExpElemAnchor,
	enRegExpElemHexEscape

} enRegExpElem;

#endif
