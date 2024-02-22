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
private _maxE = (_unit getVariable "MM_jetValues") # 0;

// loops as long as unit is alive AND master switch enabled AND unit is wearing jetpack
while {alive _unit && MM_Bullfrog_enabled && (_unit getVariable "MM_isWearJet")} do {
	// wait recharge time
	sleep MM_Bullfrog_time;
	// get current energy
	private _currentE = _unit getVariable "MM_Bullfrog_energy";
	// add amount
	_currentE = _currentE + MM_Bullfrog_amnt;
	// check if value is ok (therapy time)
	switch (_currentE) do {
		// if new > max then new = max (i am the shadow government)
		case (_currentE > _maxE): 	{_currentE = _maxE;}; 
		// nothing to change
		default						{};	
	};
	// set energy var 
	_unit setVariable ["MM_Bullfrog_energy", _currentE];
};

_unit setVariable ["MM_Bullfrog_energy", 0];