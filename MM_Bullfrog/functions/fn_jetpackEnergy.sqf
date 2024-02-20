_mmPackEnergy = 100;
_mmMaxEnergy = 100;

while {alive player;} do {
	_mmPack = backpack player;
	_mmPackBool = (configFile >> "CfgVehicles" >> _mmPack player >> "isJetpack") call BIS_fnc_cfgGetDataBool;
	if (_mmPackBool) then {
		_mmPackMax = (configFile >> "cfgVehicles" >> _mmPack >> "maxCharge") call BIS_fnc_cfgGetData;
		_mmPackTime = (configFile >> "cfgVehicles" >> _mmPack >> "rechargeTime") call BIS_fnc_cfgGetData;
		_mmPackRate = (configFile >> "cfgVehicles" >> _mmPack >> "rechargeRate") call BIS_fnc_cfgGetData;
		_mmPackEnergy = _mmPackMax;
		if ((_mmPackMax > _mmPackEnergy) && (_mmPackEnergy - _mmCost != 0)) then {
			
		};
	};
};