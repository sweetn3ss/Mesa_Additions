_display = findDisplay 1234;
_sliderA = _display displayCtrl 100;
_sliderB = _display displayCtrl 101;


_type = (_this select 0);


switch true do {
	case (_type == "Start"):
	{
		//Select Veh
		maniaVeh = (_this select 1);
		
		//Checks to see if is Vehicle or AmmoBox
		_VehType = maniaVeh call BIS_fnc_objectType select 0;
		_VehType2 = maniaVeh call BIS_fnc_objectType select 1;
		if (((_VehType == "Vehicle") or (_VehType2 == "AmmoBox") or (_VehType2 == "Thing")) && (maniaVeh != maniaPel)) then {
		
		//Making Ghost
		_model = typeOf maniaVeh;
		maniaGhost = createSimpleObject [_model, position maniaPel, true];
		maniaGhost attachTo [maniaPel, [0, 0, 0]];
		
		//Setting Slider Prop
		playSound "FD_CP_Clear_F";
		createDialog "MagMania";
		sliderSetRange [100, MLMFbMin, MLMFbMax]; //Sider A FB
		sliderSetRange [101, MLMUdMin, MLMUdMax]; //Slider B UD
		sliderSetRange [102, 0, 270]; //Slider C Ro
		sliderSetSpeed [100, 0.1, 0.1]; //Sider A FB
		sliderSetSpeed [101, 0.1, 0.1]; //Slider B UD
		sliderSetSpeed [102, 90, 90, 90]; //Slider C Ro

		
		switch true do {
		
			//Bench Pod
			case (maniaVeh isKindOf "Land_Pod_Heli_Transport_04_bench_F"):	//Checks the type of pod. This one checks for the Bench Pod.
			{
				sliderSetPosition [100, -4.5];
				sliderSetPosition [101, -0.3];
				ExecVM 'MaglockM\MagMania\Update.sqf'
			};

			//Passanger Pod
			case (maniaVeh isKindOf "Land_Pod_Heli_Transport_04_covered_black_F"):
			{
				//sleep 1;
				sliderSetPosition [100, -5.5];
				sliderSetPosition [101, -0.0];
				ExecVM 'MaglockM\MagMania\Update.sqf'

			};
		
			//Med Pod
			case (maniaVeh isKindOf "Land_Pod_Heli_Transport_04_medevac_black_F"):
			{
				sliderSetPosition [100, -5.5];
				sliderSetPosition [101, -0.1];
				ExecVM 'MaglockM\MagMania\Update.sqf'
			};
		
			//Fule Pod
			case (maniaVeh isKindOf "Land_Pod_Heli_Transport_04_fuel_black_F"):
			{
				sliderSetPosition [100, -5.2];
				sliderSetPosition [101, -0.5];
				ExecVM 'MaglockM\MagMania\Update.sqf'
			};
		
			//Cargo Pod
			case (maniaVeh isKindOf "Land_Pod_Heli_Transport_04_box_black_F"):
			{
				sliderSetPosition [100, -5.4];
				sliderSetPosition [101, -0.3];
				ExecVM 'MaglockM\MagMania\Update.sqf'
			};
		
			//Repair Pod
			case (maniaVeh isKindOf "Land_Pod_Heli_Transport_04_repair_black_F"):
			{
				sliderSetPosition [100, -5.4];
				sliderSetPosition [101, -0.3];
				ExecVM 'MaglockM\MagMania\Update.sqf'
			};
		
			//Ammo Pod
			case (maniaVeh isKindOf "Land_Pod_Heli_Transport_04_ammo_black_F"):
			{
				sliderSetPosition [100, -5.4];
				sliderSetPosition [101, -0.3];
				ExecVM 'MaglockM\MagMania\Update.sqf'
			};
			

		};
		aPos = 0;
		bPos = 0;
		cPos = 0;
		
			
		}else{
			maniaVeh = nil;
			
			titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>Not Valid Object</t><br/>-------------------------------------------<br/>You must be aming at a Vehicle or Object.", "PLAIN DOWN", -1, true, true];
			playSound "FD_CP_Not_Clear_F";
		};
	};
	
	case (_type == "Finish"):
	{
		_aPos = sliderPosition 100;
		_bPos = sliderPosition 101;
		_cPos = sliderPosition 102;
		deleteVehicle maniaGhost;
		maniaVeh attachTo [maniaPel, [0, _aPos, _bPos]];
		maniaVeh setdir _cPos;
		
		_display closeDisplay 1;
		
		_MaglockMDet = maniaPel getVariable "MaglockMDet";
		
		if (isnil "_MaglockMDet") then {
		//Add Detach Action to Pel
			[
				maniaPel, 
				"Detach",
				"\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_unloadVehicle_ca.paa",
				"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa",
				"currentPilot _Target == player",
				"currentPilot _Target == player",
				{},
				{},
				{
					_objArray = [];
					_times = 0;
					{
						detach _x;
						_x allowDamage false; 
						
						_target disableCollisionWith _x;
						
						_objArray set [_times, _x];
						_times = _times + 1;
					
					} forEach attachedObjects _target;
					
					titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CARGO DETACHED</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
					playSound "FD_Finish_F";
					[_target, _actionId] remoteExec ["BIS_fnc_holdActionRemove", 0, true];
					_target setVariable ["MaglockMDet", nil, true];
					sleep 2;
					
					
					{
						_x allowDamage true;
						
					}forEach _objArray;
						
					
				},
				{},
				[],
				1,
				nil,
				false,
				false
			] remoteExec ["BIS_fnc_holdActionAdd", 0, true];
			
			maniaPel setVariable ["MaglockMDet", true, true];
		};
		
		//maniaGhost = nil;
		maniaVeh = nil;
		maniaPel = nil;
		aPos = nil;
		bPos = nil;
		cPos = nil;
		
		titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLOCK SUCCESSFUL!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
		playSound "FD_Finish_F";
		
	};
	
	case (_type == "Prev"):
	{
		_display closeDisplay 1;
		[player,
		"Re Open Display",
		"\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa",
		"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa",
		"true", "true", {}, {}, 
		{
			createDialog "MagMania";
			
			_display = findDisplay 1234;
			_sliderA = _display displayCtrl 100;
			_sliderB = _display displayCtrl 101;
			_sliderC = _display displayCtrl 102;
			sliderSetRange [100, MLMFbMin, MLMFbMax]; //Sider A FB
			sliderSetRange [101, MLMUdMin, MLMUdMax]; //Slider B UD
			sliderSetRange [102, 0, 270]; //Slider C Ro
			sliderSetSpeed [100, 0.1, 0.1]; //Sider A FB
			sliderSetSpeed [101, 0.1, 0.1]; //Slider B UD
			sliderSetSpeed [102, 90, 90, 90]; //Slider C Ro
			
			_sliderA sliderSetPosition aPos;
			_sliderB sliderSetPosition bPos;
			_sliderC sliderSetPosition cPos;
			
		},
		{},
		[], 1, nil, true, false]
		call BIS_fnc_holdActionAdd;
		


	};
	
	case (_type == "Quit"):
	{
	
		if ((_this select 1) == 2) then {
			deleteVehicle maniaGhost;
			//maniaGhost = nil;
			maniaVeh = nil;
			maniaPel = nil;
			aPos = nil;
			bPos = nil;
			cPos = nil;
			
			titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLOCK MANIA ABORTED</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
			playSound "FD_CP_Not_Clear_F";
		};
		if ((_this select 1) == 3) then {_display closeDisplay 2;};
		
	};
	
	case (_type == "AddPel"):
	{
		_pel = (_this select 1);
		_VehType2 = _pel call BIS_fnc_objectType select 1;
		
		
		//Checks to see if Vehicle is Pelican
		
		_MaglockM = _pel getVariable "MaglockM";
		if (((typeOf _pel) in parseSimpleArray MLMPelicanList) && ((!isnull _pel)) && ((isnil "_MaglockM") && (_pel isKindOf "air"))) then {
	
			if (MLMPilotReq == true) then {
				[_pel, "Maglock Mania",
				"\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa",
				"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa",
				"currentPilot _Target == player", "currentPilot _Target == player",
				{},{},
				{
					//Select Pel
					maniaPel = vehicle player;
					
					//Pritty Text and Sound
					titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>AIM AT VEHICLE/OBJECT</t><br/>-------------------------------------------<br/>Aim at a Vehicle/Object then hold down ACTION KEY", "PLAIN DOWN", -1, true, true];
					playSound "FD_CP_Clear_F";
					
					
					//Add Vehicle Action
					[player,
					"Aim at Vehicle",
					"\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa",
					"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa",
					"true", "true", {}, {}, 
					{
						["Start", cursorObject] execVM "MaglockM\MagMania\SetStart.sqf";

					},
					{
						[ _target,_actionId] call BIS_fnc_holdActionRemove;
						titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLOCK MANIA ABORTED</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
						playSound "FD_CP_Not_Clear_F";
					},
					[], 1, nil, true, false]
					call BIS_fnc_holdActionAdd
				},
				{}, [], 1, nil, false ,false] remoteExec ["BIS_fnc_holdActionAdd", 0, true];
				
			} else {
				[_pel, "Maglock Mania",
				"\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa",
				"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa",
				"true", "true",
				{},{},
				{
					//Select Pel
					maniaPel = _target;
					
					//Pritty Text and Sound
					titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>AIM AT VEHICLE/OBJECT</t><br/>-------------------------------------------<br/>Aim at a Vehicle/Object then hold down ACTION KEY", "PLAIN DOWN", -1, true, true];
					playSound "FD_CP_Clear_F";
					
					
					//Add Vehicle Action
					[player,
					"Aim at Vehicle",
					"\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa",
					"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa",
					"true", "true", {}, {}, 
					{
						["Start", cursorObject] execVM "MaglockM\MagMania\SetStart.sqf";

					},
					{
						[ _target,_actionId] call BIS_fnc_holdActionRemove;
						titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLOCK MANIA ABORTED</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
						playSound "FD_CP_Not_Clear_F";
					},
					[], 1, nil, true, false]
					call BIS_fnc_holdActionAdd
				},
				{}, [], 1, nil, false ,false] remoteExec ["BIS_fnc_holdActionAdd", 0, true];
				
			};
			
			_pel setVariable ["MaglockM", true, true]; 
			titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLOCK MAINA ADDED!</t><br/>-------------------------------------------<br/>Get into Pelican Piot seat to use.", "PLAIN DOWN", -1, true, true];
			playSound "FD_Finish_F";
			
		} else {
			titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>NO PELICAN</t><br/>-------------------------------------------<br/>You must be aming at a Pelican.", "PLAIN DOWN", -1, true, true];
			playSound "FD_CP_Not_Clear_F";
		};
	};
	
};