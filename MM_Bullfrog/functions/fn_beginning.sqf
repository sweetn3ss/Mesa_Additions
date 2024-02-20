/*
Author: Daisy

Description: 

Params:


Returns: 


Public: yes
*/

// energy is stored in player obj


// testing var definition
_mmPackEnergy = 100;
_mmMaxEnergy = 100; 

// moved ur check and data validation outside of the while loop
private _mmPack = backpack player;
_mmPackBool = (configFile >> "CfgVehicles" >> _mmPack player >> "isJetpack") call BIS_fnc_cfgGetDataBool;

if !(_mmPackBool) exitWith {};

private _mmPackMax = (configFile >> "cfgVehicles" >> _mmPack >> "maxCharge") call BIS_fnc_cfgGetData;
private _mmPackTime = (configFile >> "cfgVehicles" >> _mmPack >> "rechargeTime") call BIS_fnc_cfgGetData;
private _mmPackRate = (configFile >> "cfgVehicles" >> _mmPack >> "rechargeRate") call BIS_fnc_cfgGetData;
_mmPackEnergy = _mmPackMax;
while {alive player;} do {
    
};

