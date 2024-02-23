#include "\MM_Bullfrog\defines.hpp"
/*
Author: Daisy

Description:  recharges the energy on the player by the defined values in defines.hpp.

Params:
_unit	-	player unit called on

Returns: 

Public: no
*/
params ["_unit"];

// define static vars
private _maxE = (_unit getVariable "MM_Bullfrog_jetValues") # 0;
private _delay = MM_Bullfrog_time;
private _amount = MM_Bullfrog_amnt;

// loops as long as unit is alive AND master switch enabled AND unit is wearing jetpack
while {alive _unit && MM_Bullfrog_enabled && (_unit getVariable "MM_Bullfrog_isWearJet")} do {
	// wait recharge time
	sleep _delay;
	// if not paused, then
	if !(_unit getVariable "MM_Bullfrog_rPaused") then {
		// call to alter energy
		[_unit, _amount, 0] call MM_Bullfrog_fnc_alterEnergy;
	};
};

_unit setVariable ["MM_Bullfrog_energy", 0];