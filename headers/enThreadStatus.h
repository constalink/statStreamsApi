/**
 * enThreadStatus
 * All possible states or statuses that a thread can be in
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/2/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef enThreadStatus_DEF
#define enThreadStatus_DEF

//-------------------------------------------------------------------------------------
// Enum definition
//-------------------------------------------------------------------------------------
typedef enum enThreadStatus {

	enThreadStatusNone,
	enThreadStatusStarted,
	enThreadStatusJoined

} enThreadStatus;

#endif
