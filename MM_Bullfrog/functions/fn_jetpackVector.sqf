params ["_unit"];

/*
setting variable implementation.

private _velH = MM_Bullfrog_horizontal_L;
private _velV = MM_Bullfrog_vertical_L; 

_unit setVelocityModelSpace [0, _velH, _velV];
*/

// shoot player forwards
_unit setVelocityModelSpace [0, 16, 20.5];

// play sounds and visuals
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