//By: Cardbordboxo
//For use in the 82nd Special Operations Company.

//Define arguments.
//[_input, _pelican, _transport, _InterID] execVM "Loadbench.sqf";

_input = _this select 0;	//A number that sets the pod type and if a new one needs to be spawned in.	Range: (0-7)
_pelican = _this select 1;	//The Object name of the Pelican Pod will be attached to.
_transport =_this select 2;	//The Objeat name of the Pod if it is a pre exsting Pod.
_InterID = [0, 0];			//The Action IDs of the Pod if it is a pre exsting Pod.
_loaded = false;			//Sets to False and will only be set to True if one of the attach object scripts runs. Used for last if statment.
_veh = "";					//Will be the Object name for the Pod once it is crated.

//Checks to see if _pelican is an air vehicle.
if ((((typeOf _Pelican) in MLMPelicanList) && (!isnull _Pelican)) && (_Pelican isKindOf "air")) then {



	//Selects the pod to spawn and adds the invtory/ace cargo items.
	switch true do {

		//Bench Pod
		case (_input isEqualTo 0):	//Checks the _input for each number. This one checks for 0.
		{
			_veh = "Land_Pod_Heli_Transport_04_bench_black_F" createVehicle [0,0,0];	//Creats the Pod type requested.

		};

		//Transport Pod
		case (_input isEqualTo 1):
		{
			_veh = "Land_Pod_Heli_Transport_04_covered_black_F" createVehicle [0,0,0];
			
			
		
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;	//Adds the Ace cargo items such as spare wheels and tracks.
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
		};

		//Med Pod
		case (_input isEqualTo 2):
		{
			_veh = "Land_Pod_Heli_Transport_04_medevac_black_F" createVehicle [0,0,0];
		
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
		
			clearItemCargoGlobal _veh;
		
			//Addes custom items. Use "getItemCargo" to get current items in cargo.
			
			//Item names of the items that will be spawned in the invtory.
			//_ItemsCargo =["ACE_elasticBandage","ACE_packingBandage","adv_aceCPR_AED","ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_500","ACE_morphine","ACE_surgicalKit","ACE_personalAidKit","ACE_epinephrine","OPTRE_Biofoam","ACE_splint","OPTRE_Medigel","ACE_tourniquet","ACE_bodyBag","ACE_CableTie"];
		
			//Item number of the items that will be spawned in the invtory. Number order corresponds with Item order above.
			//_itemsCargoNum = [100,100,2,20,20,25,25,2,2,50,10,25,10,25,5,10];
		
			//Addes the items going down the list using there corresponding numbers.
			_countup = 0;
			while {count parseSimpleArray MLMMedPod + 1 > _countup} do {
			
				_veh addItemCargoGlobal [parseSimpleArray MLMMedPod select _countup, parseSimpleArray MLMMedPodNum select _countup];
				_countup = _countup + 1;
			
			};
		
		};
		
	
		//Used for re attaching when pod does not need to be spawned.
		case (_input isEqualTo 3):
		{
			_veh = _transport;		//Sets _veh to be the already spawned Pod.
			_InterID =_this select 3;	//Sets the ID for the Attach/Delete action options so they can be deleted later.
		};
	
		//Fule Pod
		case (_input isEqualTo 4):
		{
			_veh = "Land_Pod_Heli_Transport_04_fuel_black_F" createVehicle [0,0,0];
		
		};
	
		//Repair Pod
		case (_input isEqualTo 5):
		{
			_veh = "Land_Pod_Heli_Transport_04_repair_black_F" createVehicle [0,0,0];
		
			["ACE_Track", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Track", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Track", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Track", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
		};
	
		//Cargo Pod
		case (_input isEqualTo 6):
		{
			_veh = "Land_Pod_Heli_Transport_04_box_black_F" createVehicle [0,0,0];
			
			//Removes staring invtory items.
			clearMagazineCargoGlobal _veh;
			clearBackpackCargoGlobal _veh;
			clearItemCargoGlobal _veh;
			clearWeaponCargoGlobal _veh;
		
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Track", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Track", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Track", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Track", _veh] call ace_cargo_fnc_loadItem;
		
			//Addes custom items. Use "getItemCargo" to get current items in cargo.
			
			//Item names of the items that will be spawned in the invtory.
			/*
			_ItemsCargo = ["adv_aceCPR_AED","ACE_elasticBandage","ACE_packingBandage","OPTRE_Biofoam",
			               "ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_500","ACE_CableTie","ACE_epinephrine",
						   "ACE_MapTools","ACE_Clacker","ItemcTabHCam","MineDetector","ACE_morphine",
						   "OPTRE_Medigel","ACE_splint","ACE_tourniquet","ACE_wirecutter","ACE_bodyBag",
						   "ACE_DefusalKit","ACE_EntrenchingTool","ACE_IR_Strobe_Item","ACE_Flashlight_XL50"];
			*/
			//Item number of the items that will be spawned in the invtory. Number order corresponds with Item order above.
			//_itemsCargoNum = [3,20,100,20,50,50,50,25,50,10,3,10,3,50,20,75,50,3,5,3,5,10,10];
		
			//Addes the items going down the list using there corresponding numbers.
			_countup = 0;
			while {count parseSimpleArray MLMSupplyPod + 1 > _countup} do {
			
				_veh addItemCargoGlobal [parseSimpleArray MLMSupplyPod select _countup, parseSimpleArray MLMSupplyPodNum select _countup];
				_countup = _countup + 1;
			
			};
			
			//Addes custom magazine. Use "getMagazineCargo" to get current magzines in cargo.
			
			//Magazines names of the Magazines that will be spawned in the invtory.
			/*
			_ItemsCargo = ["OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_60Rnd_5x23mm_Mag_tracer",
			               "OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag",
						   "OPTRE_100Rnd_95x40_Box","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag_Tracer",
						   "30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer",
						   "OPTRE_60Rnd_5x23mm_Mag","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HE",
						   "OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_SACLOS","OPTRE_8Rnd_127x40_Mag",
						   "OPTRE_8Rnd_127x40_Mag_Tracer","SmokeShell","SmokeShellRed","SmokeShellPurple",
						   "SmokeShellBlue","SmokeShellGreen","OPTRE_M9_Frag","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell"];
			*/
			//Magazine number of the Magazines that will be spawned in the invtory. Number order corresponds with Magazines order above.
			//_itemsCargoNum = [50,30,30,50,30,50,30,30,30,30,30,50,9,9,9,9,20,10,10,10,10,10,10,20,30,10];
		
			//Addes the Magazines going down the list using there corresponding numbers.
			_countup = 0;
			while {count parseSimpleArray MLMSupplyPodMags + 1 > _countup} do {
			
				_veh addMagazineCargoGlobal [parseSimpleArray MLMSupplyPodMags select _countup, parseSimpleArray MLMSupplyPodMagsNum select _countup];
				_countup = _countup + 1;
			
			};
		
		};
	
		//Ammo Pod
		case (_input isEqualTo 7):
		{
			_veh = "Land_Pod_Heli_Transport_04_ammo_black_F" createVehicle [0,0,0];
		
			["ACE_Track", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Track", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
			["ACE_Wheel", _veh] call ace_cargo_fnc_loadItem;
		
		};
	
	};
	
	if (_input < 3) then {
		[_veh, ["GetOut", {	//Makes player not take damage for 2 sec after getting out of Pod so no fall damage is done.
			_this spawn {
				params ["_vehicle", "_role", "_unit", "_turret"];
				_unit allowdamage false;
				sleep 2;
				_unit allowdamage true;
			};
		}]] remoteExec ["addEventHandler", 0, true];
	};
	
	[_veh, true, [0, 5, 0]] call ace_dragging_fnc_setCarryable;
	
	//Sets where on the Pelican to attach the Pod.
	switch true do {

		//Bench Pod
		case (_veh isKindOf "Land_Pod_Heli_Transport_04_bench_F"):	//Checks the type of pod. This one checks for the Bench Pod.
		{
			_veh attachTo [_pelican,[0,-4.5,-0.3]];  //Attaches pod to the Pelican with an offset for each Pod type.
			_loaded = true;  						 //Sets the _loaded to true for last if statment.
		};

		//Passanger Pod
		case (_veh isKindOf "Land_Pod_Heli_Transport_04_covered_black_F"):
		{
			_veh attachTo [_pelican,[0,-5.5,0.0]];  
			_loaded = true;  
		};
	
		//Med Pod
		case (_veh isKindOf "Land_Pod_Heli_Transport_04_medevac_black_F"):
		{
			_veh attachTo [_pelican,[0,-5.5,-0.1]];  
			_loaded = true; 
		};
	
		//Fule Pod
		case (_veh isKindOf "Land_Pod_Heli_Transport_04_fuel_black_F"):
		{
			_veh attachTo [_pelican,[0,-5.2,-0.5]];  
			_loaded = true; 
		};
	
		//Cargo Pod
		case (_veh isKindOf "Land_Pod_Heli_Transport_04_box_black_F"):
		{
			_veh attachTo [_pelican,[0,-5.4,-0.3]];  
			_loaded = true; 
		};
	
		//Repair Pod
		case (_veh isKindOf "Land_Pod_Heli_Transport_04_repair_black_F"):
		{
			_veh attachTo [_pelican,[0,-5.4,-0.3]];  
			_loaded = true; 
		};
	
		//Ammo Pod
		case (_veh isKindOf "Land_Pod_Heli_Transport_04_ammo_black_F"):
		{
			_veh attachTo [_pelican,[0,-5.4,-0.3]];  
			_loaded = true; 
		};
	};
	
	//Adds Detach Action option to Pod.
	_MaglockMDet = _pelican getVariable "MaglockMDet";
	
	if (isnil "_MaglockMDet") then {
		[_pelican,
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
			_target setVariable ["MaglockMDet", nil, true];
			
			sleep 2;
			
			{
				_x allowDamage true;
				
			}forEach _objArray;

		},
		{}, [], 1, nil, true, false] remoteExec ["BIS_fnc_holdActionAdd", 0, true];
		
		_pelican setVariable ["MaglockMDet", true, true];
	};

//Inform player they are not looking at a Pelican.
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>NO PELICAN</t><br/>-------------------------------------------<br/>You must be aming at a Pelican.", "PLAIN DOWN", -1, true, true];
	playSound "FD_CP_Not_Clear_F";

};


//Makes sure Pod has been loaded.
if (_loaded) then 
{
	//Don't know what this all does but it was in the script used for the maglock included with OPTRE so it must be important.

	//Removed this line becuse it just addes the "Releace maglock" option but does not work as the Pods are not listed in the Releace maglock script.
	//_pelican setVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLOCK SUCCESSFUL!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
	_pelican addEventHandler ["Killed",
	{
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		{
			if !(_x isKindof "OPTRE_Static_M247H_Shielded_Tripod") then {detach _x;};
		} forEach attachedObjects _unit;
	}];
};

