/*
Author: Daisy

Description: 

Params:


Returns: 


Public: no
*/
// grab hashmap and player backpack data, check if player backpack is in hashmap, and execute script if so

// grab hashmap
private _hash = missionNamespace getVariable "MM_Bullfrog_hashmap";
private _pack = backpack player;

// check if player backpack is in hashmap & if not, set value of _valueArray to true
private _valueArray = _hash getOrDefault [_pack, true];
// exit script
if (_valueArray) exitWith {

};

// store valueArray in player object
player setVariable ["MM_Bullfrog_jetpackValues", _valueArray];

player execVM "\MM_Bullfrog\jetpackLoop.sqf";


missionNamespace 
