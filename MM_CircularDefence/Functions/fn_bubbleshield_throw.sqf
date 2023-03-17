params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];


[
    {
        params ["_projectile"];
	private _posChance = 99 - (lemowprob);
	private _lmaoChance = selectRandomWeighted [2,1,1,lemowprob,0,_posChance];
	private _timer = 0 + bubbleClock;
	
	if (_lmaoChance == 0) then {
        private _bubble = createVehicle ["MM_Bubble_Shield", (getPosATL _projectile), [], 0, "CAN_COLLIDE"];
        deleteVehicle _projectile;
			[
				{
					params ["_bubble"];

					deleteVehicle _bubble;
				},
				[_bubble],
				_timer
			] call CBA_fnc_waitAndExecute;
	};
	if (_lmaoChance == 1) then {
		private _bubble = createVehicle ["MM_Bubble_Shield", (getPosATL _projectile), [], 0, "CAN_COLLIDE"];
		private _bubblePos = getposATL _bubble;
        deleteVehicle _projectile;

			[
				{
					params ["_bubble"];
					params ["_bubblePos"];

					deleteVehicle _bubble;
					private _lmao = "APERSMineDispenser_Mine_Ammo" createVehicle position _bubblePos;
					
					_lmao spawn
					{
						uiSleep 0.1;
						_this setDamage 1;
					};
				},
				[_bubble],
				_timer
			] call CBA_fnc_waitAndExecute;
		};
	if (_lmaoChance == 2) then {
		private _bubble = createVehicle ["MM_Bubble_Shield", (getPosATL _projectile), [], 0, "CAN_COLLIDE"];
		private _bubblePos = getposATL _bubble;
        deleteVehicle _projectile;

			[
				{
					params ["_bubble"];
					params ["_bubblePos"];

					deleteVehicle _bubble;
					private _lmao = "DemoCharge_Remote_Ammo_Scripted" createVehicle position _bubblePos;
					
					_lmao spawn
					{
						uiSleep 0.1;
						_this setDamage 1;
					};
				},
				[_bubble],
				5
			] call CBA_fnc_waitAndExecute;
		};
	},
    [_projectile],
	5
] call CBA_fnc_waitAndExecute;