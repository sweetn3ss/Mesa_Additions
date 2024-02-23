#include "\MM_Bullfrog\defines.hpp"
/*
Author: Daisy

Description:  	alters energy pool by the amount and method given

Params:
_unit		-	player unit called on
_amount		- 	amount to alter pool by 	<NUMBER>	
	OPTIONAL: 
_method		-	method of altering  		<NUMBER> 	
			+	[0 = add (default), 1 = subtract, 
				2 = multiply, 3 = divide]


Returns: 

Public: no
*/

params ["_unit","_amount","_method"];

private _currentE = _unit getVariable "MM_Bullfrog_energy";

switch (_method) do {
	case 0 : 	{_unit setVariable ["MM_Bullfrog_energy", (_currentE + _amount)];};
	case 1 : 	{_unit setVariable ["MM_Bullfrog_energy", (_currentE - _amount)];};
	case 2 : 	{_unit setVariable ["MM_Bullfrog_energy", (_currentE * _amount)];};
	case 3 : 	{_unit setVariable ["MM_Bullfrog_energy", (_currentE / _amount)];};
	default		{
					_unit setVariable ["MM_Bullfrog_energy", (_currentE + _amount)];
					RPTDEBUG(__FILE__,__LINE__,"INFO","Method not specified. Adding amount to energy pool.");
				};
};