/**
 * CanAssign
 * Whether or not a type can be assigned to another one
 *
 * Please excuse the table below with super long lines. You'll probably need to
 * make sure your code editor doesn't automatically wrap lines to see it properly
 *
 * Assignability is determined as follows:
 *  -> Can be assigned from the row to the column
 * <-  Can be assigned from the column to the row
 * <-> Can be assigned either way, from the column to the row or from the row to the column
 * With collection types, this chart assumes that the sub type(s) can be assigned in the corresponding direction
 * With function types, this chart assumes that the generics, arguments, properties, and return types can be assigned in the
 * corresponding direction and that event acceptances match
 *
 * Type			| string | string? | binary | binary? | int | int? | fraction | fraction? | bool | bool? | regExp | regExp? | range | range? | enum | enum? | enumOption | enumOption? | stream | stream? | list | list? | dict | dict? | struct | struct? | function | function? | empty | unknown | undefined | any | any?
 * string		| <->    |  ->     |        |         |     |      |          |           |      |       |        |         |       |        |      |       | <-         |             |        |         |      |       |      |       |        |         |          |           |       | <-      |           |  -> |  ->
 * string?		| <-     | <->     |        |         |     |      |          |           |      |       |        |         |       |        |      |       | <-         | <-          |        |         |      |       |      |       |        |         |          |           | <-    | <-      |           |     |  ->
 * binary		|        |         | <->    |  ->     |     |      |          |           |      |       |        |         |       |        |      |       |            |             |        |         |      |       |      |       |        |         |          |           |       | <-      |           |  -> |  ->
 * binary?		|        |         | <-     | <->     |     |      |          |           |      |       |        |         |       |        |      |       |            |             |        |         |      |       |      |       |        |         |          |           | <-    | <-      |           |     |  ->
 * int			|        |         |        |         | <-> |  ->  |          |           |      |       |        |         |       |        |      |       |            |             |        |         |      |       |      |       |        |         |          |           |       | <-      |           |  -> |  ->
 * int?			|        |         |        |         | <-  | <->  |          |           |      |       |        |         |       |        |      |       |            |             |        |         |      |       |      |       |        |         |          |           | <-    | <-      |           |     |  ->
 * fraction		|        |         |        |         |     |      | <->      |  ->       |      |       |        |         |       |        |      |       |            |             |        |         |      |       |      |       |        |         |          |           |       | <-      |           |  -> |  ->
 * fraction?	|        |         |        |         |     |      | <-       | <->       |      |       |        |         |       |        |      |       |            |             |        |         |      |       |      |       |        |         |          |           | <-    | <-      |           |     |  ->
 * bool			|        |         |        |         |     |      |          |           | <->  |  ->   |        |         |       |        |      |       |            |             |        |         |      |       |      |       |        |         |          |           |       | <-      |           |  -> |  ->
 * bool?		|        |         |        |         |     |      |          |           | <-   | <->   |        |         |       |        |      |       |            |             |        |         |      |       |      |       |        |         |          |           | <-    | <-      |           |     |  ->
 * regExp		|        |         |        |         |     |      |          |           |      |       | <->    |  ->     |       |        |      |       |            |             |        |         |      |       |      |       |        |         |          |           |       | <-      |           |  -> |  ->
 * regExp?		|        |         |        |         |     |      |          |           |      |       | <-     | <->     |       |        |      |       |            |             |        |         |      |       |      |       |        |         |          |           | <-    | <-      |           |     |  ->
 * range		|        |         |        |         |     |      |          |           |      |       |        |         | <->   |  ->    |      |       |            |             |        |         |      |       |      |       |        |         |          |           |       | <-      |           |  -> |  ->
 * range?		|        |         |        |         |     |      |          |           |      |       |        |         | <-    | <->    |      |       |            |             |        |         |      |       |      |       |        |         |          |           | <-    | <-      |           |     |  ->
 * enum			|        |         |        |         |     |      |          |           |      |       |        |         |       |        | <->  |  ->   |            |             |        |         |      |       |      |       |        |         |          |           |       | <-      |           |  -> |  ->
 * enum?		|        |         |        |         |     |      |          |           |      |       |        |         |       |        | <-   | <->   |            |             |        |         |      |       |      |       |        |         |          |           | <-    | <-      |           |     |  ->
 * enumOption	|  ->    |  ->     |        |         |     |      |          |           |      |       |        |         |       |        |      |       | <->        |  ->         |        |         |      |       |      |       |        |         |          |           |       | <-      |           |  -> |  ->
 * enumOption?	|        |  ->     |        |         |     |      |          |           |      |       |        |         |       |        |      |       | <-         | <->         |        |         |      |       |      |       |        |         |          |           | <-    | <-      |           |     |  ->
 * stream		|        |         |        |         |     |      |          |           |      |       |        |         |       |        |      |       |            |             | <->    |  ->     |      |       |      |       |        |         |          |           |       | <-      |           |  -> |  ->
 * stream?		|        |         |        |         |     |      |          |           |      |       |        |         |       |        |      |       |            |             | <-     | <->     |      |       |      |       |        |         |          |           | <-    | <-      |           |     |  ->
 * list			|        |         |        |         |     |      |          |           |      |       |        |         |       |        |      |       |            |             |        |         | <->  |  ->   |      |       |        |         |          |           |       | <-      |           |  -> |  ->
 * list?		|        |         |        |         |     |      |          |           |      |       |        |         |       |        |      |       |            |             |        |         | <-   | <->   |      |       |        |         |          |           | <-    | <-      |           |     |  ->
 * dict			|        |         |        |         |     |      |          |           |      |       |        |         |       |        |      |       |            |             |        |         |      |       | <->  |  ->   | <-     |         |          |           |       | <-      |           |  -> |  ->
 * dict?		|        |         |        |         |     |      |          |           |      |       |        |         |       |        |      |       |            |             |        |         |      |       | <-   | <->   | <-     | <-      |          |           | <-    | <-      |           |     |  ->
 * struct		|        |         |        |         |     |      |          |           |      |       |        |         |       |        |      |       |            |             |        |         |      |       |  ->  |  ->   | <->    |  ->     |          |           |       | <-      |           |  -> |  ->
 * struct?		|        |         |        |         |     |      |          |           |      |       |        |         |       |        |      |       |            |             |        |         |      |       |      |  ->   | <-     | <->     |          |           | <-    | <-      |           |     |  ->
 * function		|        |         |        |         |     |      |          |           |      |       |        |         |       |        |      |       |            |             |        |         |      |       |      |       |        |         | <->      |  ->       |       | <-      |           |  -> |  ->
 * function?	|        |         |        |         |     |      |          |           |      |       |        |         |       |        |      |       |            |             |        |         |      |       |      |       |        |         | <-       | <->       | <-    | <-      |           |     |  ->
 * empty		|        |  ->     |        |  ->     |     |  ->  |          |  ->       |      |  ->   |        |  ->     |       |  ->    |      |       |            |  ->         |        |         |      |  ->   |      |  ->   |        |  ->     |          |           | <->   | <-      |           |     |  ->
 * unknown		|  ->    |  ->     |  ->    |  ->     |  -> |  ->  |  ->      |  ->       |  ->  |  ->   |  ->    |  ->     |  ->   |  ->    |  ->  |  ->   |  ->        |  ->         |        |         |  ->  |  ->   |  ->  |  ->   |  ->    |  ->     |  ->      |  ->       |  ->   |         |           |  -> |  ->
 * undefined	|        |         |        |         |     |      |          |           |      |       |        |         |       |        |      |       |            |             |        |         |      |       |      |       |        |         |          |           |       |         |           |     |
 * any			| <-     |         | <-     |         | <-  |      | <-       |           | <-   |       | <-     |         | <-    |        | <-   |       | <-         |             |        |         | <-   |       | <-   |       | <-     |         | <-       |           |       | <-      |           | <-> |  ->
 * any?			| <-     | <-      | <-     | <-      | <-  | <-   | <-       | <-        | <-   | <-    | <-     | <-      | <-    | <-     | <-   | <-    | <-         | <-          |        |         | <-   | <-    | <-   | <-    | <-     | <-      | <-       | <-        | <-    | <-      |           | <-  | <->
 *
 * @param toType   A pointer to the type being assigned to
 * @param fromType A pointer to the type being assigned
 * @return         true if the fromType can be assigned to the to type or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/13/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CanAssign_Header_DEF
#define CanAssign_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool CanAssign(typeType* toType, typeType* fromType);

#endif
