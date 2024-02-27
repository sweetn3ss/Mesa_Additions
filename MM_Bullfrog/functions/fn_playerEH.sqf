// call packCheck whenever inventory closed
player addEventHandler ["InventoryClosed", {
	params ["_unit", "_container"];
	_unit call MM_Bullfrog_fnc_packCheck;
}];

// call packCheck whenever respawned
player addEventHandler ["Respawn", {
	params ["_unit", "_corpse"];
	_unit call MM_Bullfrog_fnc_playerVarsInit;
	_unit call MM_Bullfrog_fnc_packCheck;
}];

// if crows EW loaded,
if 
private _empEH = ["crowsEW_emp_eventFireEMP", func] call CBA_fnc_addEventHandler;