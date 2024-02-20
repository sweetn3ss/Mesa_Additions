//get camo types from config

//null checks
if (MM_CC_unitClassPrefix != "") then {
	if (isClass (configFile >> "CfgWeapons" >> MM_CC_unitClassPrefix)) then {
	
	//get subtypes of camo_select class
	MM_CC_unitCamoArray = (configFile >> "CfgWeapons" >> MM_CC_unitClassPrefix >> "Camo_Select") call BIS_fnc_getCfgSubClasses;

	// generate switch construct with cases for each camotype
	// maybe grab 

	
	/*
	(
	0: TypeOf class <STRING>
	1: Type of action (0 action, 1 selfaction) <NUMBER>
	2: Parent Path of new action <ARRAY>
	3: Action <ARRAY>
	4: Use inheritance (Default false) <BOOL>
	) call ace_interact_menu_fnc_addActionToClass;
	*/

	// error for class nonexistance in config
	} else {diag_log "fuck you"};
// error for class not specified
} else {diag_log "unit class prefix not specified"};