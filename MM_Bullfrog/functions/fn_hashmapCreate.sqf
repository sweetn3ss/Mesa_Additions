
//create preHash
private _preHash = [];

//get all subclasses into an array
private _classArray = 	(configFile >> 
						"cfgVehicles" >> 
						"OPTRE_S12_SOLA_Jetpack") call BIS_fnc_getCfgSubClasses;

//iterate over entire array, check if isJetpack, and if so, grab maxEnergy and add to array
{
	private _bool = (configFile >> "CfgVehicles" >> _x >> "isJetpack") call BIS_fnc_getCfgDataBool;
	//uiSleep 0.01;
	if (_bool) then {
		private _chargeMax 	= (configFile >> "cfgVehicles" >> _x >> "maxCharge") 	call BIS_fnc_getCfgData;
		private _longType 	= (configFile >> "cfgVehicles" >> _x >> "longType") 	call BIS_fnc_getCfgData;
		private _shortType 	= (configFile >> "cfgVehicles" >> _x >> "shortType") 	call BIS_fnc_getCfgData;
		//uiSleep 0.01;
		_preHash append [_x, [_chargeMax,_longType,_shortType]];
	};
} forEach _classArray;

// create hashmap from array
private _hash = createHashMapFromArray _preHash;

// set var in missionNamespace
missionNamespace setVariable ["MM_jetHash", _hash];


