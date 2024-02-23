#include "\MM_Bullfrog\defines.hpp"
/*
Author: Daisy

Description: grabs hashmap of jetpacks and player backpack data, checks if the player's backpack 
is in the hashmap, and executes the recharge loop if so.

Params:
_unit	-	local player

Returns: 


Public: no
*/

if !(MM_Bullfrog_enabled) exitWith {
	RPTDEBUG(__FILE__,__LINE__,"INFO","Jetpack master switch is disabled."); 
};

// grab hashmap
private _hash = missionNamespace getVariable "MM_Bullfrog_jetHash";
private _pack = backpack player;

// check if player backpack is in hashmap & if not, set value of _valueArray to true
private _valueArray = _hash getOrDefault [_pack, true];
// exit script
if (_valueArray) exitWith {
	player setVariable ["MM_Bullfrog_isWearJet", false];
	RPTDEBUG(__FILE__,__LINE__,"INFO","Player is no longer wearing a jetpack.");
};

// store valueArray in player object
player setVariable ["MM_Bullfrog_jetValues", _valueArray];

// set jetpack verification var to true (used for rechargeLoop)
player setVariable ["MM_Bullfrog_isWearJet", true];

// start recharge sequence
player spawn MM_Bullfrog_fnc_rechargeLoop;



