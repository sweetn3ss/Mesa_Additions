#include "\MM_Bullfrog\defines.hpp"
/*
Author: Outshadow, Daisy

Description:  

Params:
_unit       -       player unit 
_inputArray -       array of inputAction reads (f,b,l,r)

Returns: 
nothing

Public: no
*/
params ["_unit", "_inputArray"];

// f, b, l, r
private _velDict = [16,-16,-16,16];
private _upConst = 20.5;
private _velFinal = [0,0];

/*
setting variable implementation.

private _velH = MM_Bullfrog_horizontal_L;
private _velV = MM_Bullfrog_vertical_L; 
private _velDict = [_velH,(0-_velH),(0-_velH),_velH]

# _upConst REPLACE WITH _velV
*/

// can we fucky with array math to get diagonal velocity?
/*
theoretically, all we need to do is take our inputs and run them through a comparison tree, then
alter the velocity model.
first, we check which are > 0, then add the vectors together.
*/



// make sure da player aint in nuffin
if !(isNull objectParent _unit) exitWith {};

{
    private _element = _x;
    private _index = _forEachIndex;
    // if key was pressed
    if (_element > 0) then {
        // select element to add
        private _toAdd = _velDict # _index;
        // add vectors
        if (_index < 2) then {
            _velFinal set [2, ((_velFinal # 2)+_toAdd)];
        } else {
            _velFinal set [1, ((_velFinal # 1)+_toAdd)];
        };
    };
} forEach _inputArray; // this should return a vector that allows for diagonal jumps when diagonal keys are pressed. 

// finalize and apply vector to player
_velFinal append _upConst;
_unit setVelocityModelSpace _velFinal;

_unit spawn {
    _this allowdamage false;
    private _Sound = createSoundSource ["Project_Airborne_Jump_Sound", position _this, [], 0];
    _Sound attachto [vehicle _this];
    private _Smoke1 = "#particlesource" createVehicleLocal [0,0,0];  
    _Smoke1 setParticleClass "Flare1";  
    _Smoke1 attachto [vehicle _this,[0.225,-0.1,1.5]]; 
    private _Smoke2 = "#particlesource" createVehicleLocal [0,0,0];  
    _Smoke2 setParticleClass "Flare1";  
    _Smoke2 attachto [vehicle _this,[-0.225,-0.1,1.5]];
    private _Sparks1 = "#particlesource" createVehicleLocal [0,0,0];  
    _Sparks1 setParticleClass "LaptopSparks";  
    _Sparks1 attachto [vehicle _this,[0.225,-0.1,1.5]];
    private _Sparks2 = "#particlesource" createVehicleLocal [0,0,0];  
    _Sparks2 setParticleClass "LaptopSparks";  
    _Sparks2 attachto [vehicle _this,[-0.225,-0.1,1.5]];
    sleep 0.1;
    waitUntil { sleep 0.5; istouchingground _this };
    deleteVehicle _Smoke1;
    deleteVehicle _Smoke2;
    deleteVehicle _Sparks1;
    deleteVehicle _Sparks2;
    deleteVehicle _Sound;
    _this allowdamage true;
};

//_wornBag = backpack _unit;
//_wornIsOmni = (configFile >> "CfgVehicles" >> _wornBag >> "IsOmni") call BIS_fnc_getCfgDataBool;
//_jumpCost = (configFile >> "CfgVehicles" >> _wornBag >> "JumpCost") call BIS_fnc_getCfgData;


/*

Outshadow's original script in case i borked something

if (isNull objectParent _unit) then {
    if ( _currentE >= LJUMP_COST ) then {
        if (inputAction "MoveForward" > 0) then {
            _unit setVelocityModelSpace [0, 16, 20.5];
        } else {
            if (inputAction "MoveBack" > 0) then {
                _unit setVelocityModelSpace [0, -16, 20.5];
            } else {
                if (inputAction "TurnRight" > 0) then {
                    _unit setVelocityModelSpace [16, 0, 20.5];
                } else {
                    if (inputAction "TurnLeft" > 0) then {
                        _unit setVelocityModelSpace [-16, 0, 20.5];
                    } else {
                        _unit setVelocityModelSpace [0, 0, 20.5];
                    };
                };
            };
        };
        _unit allowdamage false;
        private _energy = _currentE - LJUMP_COST;
        _Sound = createSoundSource ["Project_Airborne_Jump_Sound", position _unit, [], 0];
        _Sound attachto [vehicle _unit];
        _Smoke1 = "#particlesource" createVehicleLocal [0,0,0];  
        _Smoke1 setParticleClass "Flare1";  
        _Smoke1 attachto [vehicle _unit,[0.225,-0.1,1.5]]; 
        _Smoke2 = "#particlesource" createVehicleLocal [0,0,0];  
        _Smoke2 setParticleClass "Flare1";  
        _Smoke2 attachto [vehicle _unit,[-0.225,-0.1,1.5]];
        _Sparks1 = "#particlesource" createVehicleLocal [0,0,0];  
        _Sparks1 setParticleClass "LaptopSparks";  
        _Sparks1 attachto [vehicle _unit,[0.225,-0.1,1.5]];
        _Sparks2 = "#particlesource" createVehicleLocal [0,0,0];  
        _Sparks2 setParticleClass "LaptopSparks";  
        _Sparks2 attachto [vehicle _unit,[-0.225,-0.1,1.5]];
        sleep 0.1;
        waitUntil { sleep 0.1; istouchingground _unit };
        deleteVehicle _Smoke1;
        deleteVehicle _Smoke2;
        deleteVehicle _Sparks1;
        deleteVehicle _Sparks2;
        deleteVehicle _Sound;
        _unit allowdamage true;
    };
};
*/