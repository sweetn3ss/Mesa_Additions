#include "\MM_Bullfrog\defines.hpp"
/*
Author: Daisy

Description:  	starts the short jump sequence and draws from energy pool.

Params:
_unit		-	player unit called on

Returns: 

Public: no
*/
params ["_unit"];

// get all current inputActions
private _inputArray = [inputAction "MoveForward",inputAction "MoveBack",inputAction "TurnRight",inputAction "TurnLeft"];

// check if emp'd

// define vars
private _cost = SJUMP_COST;
private _currentE = _unit getVariable "MM_Bullfrog_energy";
// immediately exit if energy cannot support jump
if (_cost > _currentE) exitWith {};

private _jumpType = (_unit getVariable "MM_Bullfrog_jetValues") # 2;

// check for omni or vector and call the appropriate function
switch (_jumpType) do {
	case "omni":	{[_unit, _inputArray] call MM_Bullfrog_fnc_jetpackOmniShort;};
	case "vector":	{_unit call MM_Bullfrog_fnc_jetpackVectorShort;};
	default			{
						RPTDEBUG(__FILE__,__LINE__,"ERROR",("Invalid jumpType. Given value: "+ str _jumpType));
					};
};

// alter energy
[_unit, _cost, 0] call MM_Bullfrog_fnc_alterEnergy;

