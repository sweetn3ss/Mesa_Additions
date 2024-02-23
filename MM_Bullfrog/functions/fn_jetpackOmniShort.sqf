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
/*
private _velF = [0,16,20.5];
private _velB = [0,-16,20.5];
private _velR = [16,0,20.5];
private _velL = [-16,0,20.5];
*/
// f, b, l, r
private _velDict = [8,-8,-8,8];
private _upConst = 10;
private _velFinal = [0,0];

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