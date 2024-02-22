// ####################################################################################################
// ###################################### PLAYER VARS #################################################
// ####################################################################################################

// set energy var
player setVariable ["MM_Bullfrog_energy", 0];

// set jetpack verification var to false
player setVariable ["MM_isWearJet", false];


// ####################################################################################################
// ################################## PLAYER EVENT HANDLERS ###########################################
// ####################################################################################################

// call packCheck whenever inventory closed
player addEventHandler ["InventoryClosed", {
	params ["_unit", "_container"];
	_unit call MM_Bullfrog_fnc_packCheck;
}];

// call packCheck whenever respawned
player addEventHandler ["Respawn", {
	params ["_unit", "_corpse"];
	_unit call MM_Bullfrog_fnc_packCheck;
}];