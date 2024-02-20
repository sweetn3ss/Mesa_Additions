

//create hash
private _hash = createHashmap;

//get all subclasses into an array
private _classArray = 	(configFile >> 
						"cfgVehicles" >> 
						"OPTRE_S12_SOLA_Jetpack") call BIS_fnc_getCfgSubClasses;

//iterate over entire array, check if isJetpack, and if so, grab maxEnergy and add to hashMap
{
	private _bool = (configFile >> "CfgVehicles" >> _x >> "isJetpack") call BIS_fnc_cfgGetDataBool;
	uiSleep 0.01;
	if (_bool) then {
		
	};
} forEach _classArray;