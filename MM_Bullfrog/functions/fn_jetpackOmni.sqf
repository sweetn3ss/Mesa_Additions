_wornBag = backpack _unit;
_wornIsOmni = (configFile >> "CfgVehicles" >> _wornBag >> "IsOmni") call BIS_fnc_getCfgDataBool;
_jumpCost = (configFile >> "CfgVehicles" >> _wornBag >> "JumpCost") call BIS_fnc_getCfgData;

if ( _wornIsOmni isEqualTo true ) then {
    if (isNull objectParent player) then {
        if ( energy >= _LongJumpCost ) then {
			if (inputAction "MoveForward" > 0) then {
				player setVelocityModelSpace [0, 16, 20.5];
			} else {
				if (inputAction "MoveBack" > 0) then {
					player setVelocityModelSpace [0, -16, 20.5];
				} else {
					if (inputAction "TurnRight" > 0) then {
						player setVelocityModelSpace [16, 0, 20.5];
					} else {
						if (inputAction "TurnLeft" > 0) then {
							player setVelocityModelSpace [-16, 0, 20.5];
						} else {
							player setVelocityModelSpace [0, 0, 20.5];
						};
					};
				};
			};
            player allowdamage false;
            energy = energy - _jumpCost;
            _Sound = createSoundSource ["Project_Airborne_Jump_Sound", position player, [], 0];
            _Sound attachto [vehicle player];
            _Smoke1 = "#particlesource" createVehicleLocal [0,0,0];  
            _Smoke1 setParticleClass "Flare1";  
            _Smoke1 attachto [vehicle player,[0.225,-0.1,1.5]]; 
            _Smoke2 = "#particlesource" createVehicleLocal [0,0,0];  
            _Smoke2 setParticleClass "Flare1";  
            _Smoke2 attachto [vehicle player,[-0.225,-0.1,1.5]];
            _Sparks1 = "#particlesource" createVehicleLocal [0,0,0];  
            _Sparks1 setParticleClass "LaptopSparks";  
            _Sparks1 attachto [vehicle player,[0.225,-0.1,1.5]];
            _Sparks2 = "#particlesource" createVehicleLocal [0,0,0];  
            _Sparks2 setParticleClass "LaptopSparks";  
            _Sparks2 attachto [vehicle player,[-0.225,-0.1,1.5]];
            sleep .1;
            waitUntil { istouchingground player };
            deleteVehicle _Smoke1;
            deleteVehicle _Smoke2;
            deleteVehicle _Sparks1;
            deleteVehicle _Sparks2;
            deleteVehicle _Sound;
            player allowdamage true;
        };
    };
};