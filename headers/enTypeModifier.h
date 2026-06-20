/**
 * enTypeModifier
 * All possible type hint modifiers
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/5/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef enTypeModifier_DEF
#define enTypeModifier_DEF

//-------------------------------------------------------------------------------------
// Enum definition
//-------------------------------------------------------------------------------------
typedef enum enTypeModifier {

	// No modifier
	enTypeModifierNone,

	// The type hint is optional: ?
	enTypeModifierOptional,

	// The type hint is forced: !
	enTypeModifierForced

} enTypeModifier;

#endif
