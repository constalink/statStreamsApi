/**
 * enRegExpAtt
 * Regular expression attributes
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/25/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef enRegExpAtt_DEF
#define enRegExpAtt_DEF

//-------------------------------------------------------------------------------------
// Enum definition
//-------------------------------------------------------------------------------------
typedef enum enRegExpAtt {

	enRegExpAttNone,
	enRegExpAttNegated,
	enRegExpAttCapture,
	enRegExpAttNonCapture,
	enRegExpAttLookAhead,
	enRegExpAttNegLookAhead,

	// Look behind is currently not used or implemented
	enRegExpAttLookBehind,
	enRegExpAttNegLookBehind,

	enRegExpAttDigits,
	enRegExpAttNonDigits,
	enRegExpAttSpaces,
	enRegExpAttNonSpaces,
	enRegExpAttWords,
	enRegExpAttNonWords

} enRegExpAtt;

#endif
