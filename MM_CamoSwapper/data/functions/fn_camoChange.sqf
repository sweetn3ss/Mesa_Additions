/*
	Author: Max, Mesa

	Description:
		Changes the compatible equipment on a player to be camouflaged in the manner chosen.
		The Vest and Helmet are swapped to different versioned objects (with items in the vest duplicated into the new vest)
		The Uniform and Backpack are the same objects, but have their texture changed globally.

	Parameter(s):
		0: OBJECT - (Required, default 'objNull') The player
		1: STRING - (Required, default "Urban") The identifier of the camouflage to change to

	Returns:
		BOOLEAN (TODO: Actually return BOOLEAN for log purposes)

	Examples:
		[_player, ""Woodland""] call changeCamo_fnc_camoChange
		[_player, ""Urban""] call changeCamo_fnc_camoChange
*/

params [
	["_unit", objNull], 
	["_selectedCamoType", "Urban"]
];

// ###############################
// ### Compatibility Constants ###
// ###############################
//
// These arrays define all items that the script will operate on.
// This idiot-proofs the script so as not to delete items and try to replace them with those that don't exist
// AKA if an item isn't specified in these lists, NOTHING happens on runtime.

// Only add BLK versions of the gun
private _compatibleRifles = [
	"82nd_MA5B_Experimental_BLK",
	"82nd_MA5C_Experimental_BLK",
	"82nd_MA5BGL_Experimental_BLK",
	"82nd_MA5CGL_Experimental_BLK",
	"82nd_BR55X_Rifleman_BLK",
	"82nd_BR55XHB_Rifleman_BLK",
	"82nd_M392X_Experimental_BLK",
	"82nd_M28A2_Experimental_BLK",
	"82nd_VK78_Rifleman_BLK"
];

// ### Begin ###
private _currentUniform  = uniform _unit;
private _currentHelmet   = headgear _unit;
private _currentVest     = vest _unit;
private _currentBackpack = backpack _unit;
private _currentFW = goggles _unit;
private _currentRifle = primaryWeapon _unit;
private _currentHMD = hmd _unit;

private _errorLog = [];

// Set the camo suffix
// This is not necessarily the string that is sent to the function
private _camoType = "BLK";
switch (_selectedCamoType) do {
	case "Urban":    { _camoType = "BLK" };
	case "Desert":   { _camoType = "DES" };
	case "Winter":   { _camoType = "SNO" };
	case "Woodland": { _camoType = "WDL" };
	default          { 
						_camoType = "BLK"; // Fail safe default
						
						//Error message when invalid _camoType (due to some fuckup by someone extending this later)
						hint "[ERROR] MM_CamoSwapper | Invalid Camo Type (fn_camoChange.sqf, ln 59)";
						diag_log "[ERROR] MM_CamoSwapper | Invalid Camo Type (fn_camoChange.sqf, ln 59)";
						
						//TODO: Return false for logging purposes
						//false;
					 };
};

// ###############
// ### Uniform ###
// ###############
//
// The uniform texture is swapped (for compatible uniforms)
if (_currentUniform != "") then {
	//if (_compatibleUniforms find _currentUniform != -1) then {
	private _uniformCamoTypes = (configFile >> "CfgWeapons" >> _currentUniform >> "camoTypes") call BIS_fnc_getCfgData;
	private _uniformTempArray = [_currentUniform, "_"] call BIS_fnc_splitString;
	
	// This is the last item
	private _uniformCamoRef = _uniformTempArray # ((count _uniformTempArray) - 1);
	if ((_uniformTempArray # 0) find UnitTexturePrefixes != -1 && _uniformCamoTypes find _camoType != -1) then {
		// Get the entire array of textures for the item
		private _uniformCamoTexture = getObjectTextures _unit;
		
		// Replace the value of the last item in array with the preferred camo
		// for loop replacing each texture
		for "_i" from 0 to ((count _uniformCamoTexture) -1) do {
			private _currentTexture = (_uniformCamoTexture select _i); // Grab the nth texture
			private _currentUniformTempArray = [_currentTexture, "_"] call BIS_fnc_splitString;
			if ((count _currentUniformTempArray) > 0) then {
				private _currentUniformTempArrayExtension = [(_currentUniformTempArray # ((count _currentUniformTempArray) -1)), "."] call BIS_fnc_splitString;
				
				// Set ABC.paa to XYZ.paa
				_currentUniformTempArrayExtension set [0, _camoType];
				
				// Move XYZ.paa back into the texture path
				_currentUniformTempArray set [(count _currentUniformTempArray) -1, (_currentUniformTempArrayExtension joinString ".")];
				
				// Recombines the original array, but with our replaced value
				private _uniformTexturePath = _currentUniformTempArray joinString "_";
				_unit setObjectTextureGlobal [_i, _uniformTexturePath];
			};
		};
		// log happy boy behavior
		_errorLog append 1;
	} else {
		// log sad boy behavior
		diag_log "[ERROR] MM_CamoSwapper | " +str _currentUniform+ " is not compatible with CamoSwapper. Check MM_CamoSwapper\config.cpp (fn_camoChange.sqf, ln 81)";
		_errorLog append 0;
	};
};
systemChat str "Uniforms Completed";
// ############
// ### Vest ###
// ############
//
// The vest is replaced, and copies of all items are added to the vest
if !(_currentVest == "") then {
	
	// Split the class name into its components
	private _vestTempArray = [_currentVest, "_"] call BIS_fnc_splitString;
	private _vestType      = _vestTempArray # 1; // M52A
	private _vestSubtype   = _vestTempArray # 2; // Rifleman, Corpsman, etc.
	
	// Reconstruct vest into default camo version for the check
	private _vestBLK = format ["%1_%2_%3_BLK", unitTexturePrefixes, _vestType, _vestSubtype];;
	
	if (compatibleVests find _vestBLK != -1) then {			
		if (_vestType == "M52A" || _vestType == "M52D") then {
			private _vestTypeName = format ["%1_%2_%3_%4", unitTexturePrefixes, _vestType, _vestSubtype, _camoType];
			
			// fetch items and magazines
			private _allItems     = vestItems _unit;
			private _vestMags = magazinesAmmoCargo vestContainer _unit; 
			
			// remove magazines from items' array
			{
				_allItems = _allItems - _x # 0;
			} forEach _vestMags; 

			// TAKE THOSE CLOTHES OFF
			removeVest _unit;
			_unit addVest _vestTypeName;
			
			// Add all items to the new vest
			{ _unit addItemToVest _x } forEach _allItems; 
			
			// add all magazines to the new vest
			{
				_unit addMagazine _x;
			} forEach _vestMags; 
		};
		_errorLog append 1;
	} else {
		diag_log "[ERROR] MM_CamoSwapper | " +str _currentVest+ " is not compatible with CamoSwapper. Check MM_CamoSwapper\config.cpp (fn_camoChange.sqf, ln 81)";
		_errorLog append 0;
	};
};
// Please ignore this shit
// It's for uh... debugging?
// Yeah. Debugging...
// private _playerVest = vest player;
// private _vestTempArray1 = [_playervest,"_"] call BIS_fnc_splitString;
// camoRef0 = _vestTempArray1 # 0;
// camoRef3 = _vestTempArray1 # 3;

// ################
// ### Backpack ###
// ################
//
// If the player has a compatible backpack, that backpack has its texture swapped.
if (_currentBackpack != "") then {	
	private _backpackCamoTypes = (configFile >> "CfgWeapons" >> _currentBackpack >> "camoTypes") call BIS_fnc_getCfgData;
	private _backpackTempArray = [_currentBackpack, "_"] call BIS_fnc_splitString;
	
	// This is the last item
	private _backpackCamoRef = _backpackTempArray # ((count _backpackTempArray) - 1);
	if ((_backpackTempArray # 0) find UnitTexturePrefixes != -1 && _backpackCamoTypes find _camoType != -1) then {
		// Get the entire array of textures for the item
		private _backpackCamoTexture = getObjectTextures _unit;
		
		// Replace the value of the last item in array with the preferred camo
		// for loop replacing each texture
		for "_i" from 0 to ((count _backpackCamoTexture) -1) do {
			private _currentTexture = (_backpackCamoTexture select _i); // Grab the nth texture
			private _currentBackpackTempArray = [_currentTexture, "_"] call BIS_fnc_splitString;
			if ((count _currentBackpackTempArray) > 0) then {
				private _currentBackpackTempArrayExtension = [(_currentBackpackTempArray # ((count _currentBackpackTempArray) -1)), "."] call BIS_fnc_splitString;
				
				// Set ABC.paa to XYZ.paa
				_currentBackpackTempArrayExtension set [0, _camoType];
				
				// Move XYZ.paa back into the texture path
				_currentBackpackTempArray set [(count _currentBackpackTempArray) -1, (_currentBackpackTempArrayExtension joinString ".")];
				
				// Recombines the original array, but with our replaced value
				private _backpackTexturePath = _currentBackpackTempArray joinString "_";
				_unit setObjectTextureGlobal [_i, _backpackTexturePath];
			};
		};
		_errorLog append 1;
	} else {
		diag_log "[ERROR] MM_CamoSwapper | " +str _currentBackpack+ " is not compatible with CamoSwapper. Check MM_CamoSwapper\config.cpp (fn_camoChange.sqf, ln 111)"
		_errorLog append 0;
	};
};
	
/*	if (compatibleBackpacks find _currentBackpack != -1) then {

		// "Which backpack is the user wearing?"
		private _backpackTempArray = [_currentBackpack, "_"] call BIS_fnc_splitString;
		private _backpackType      = _backpackTempArray # 1; // Ex: 'ANPRC', etc.
		private _backpackSubtype   = _backpackTempArray # 2; // Ex: '521', '515', etc.
		
		if (_backpackType == "ANPRC") then {
			if (anprcBagTypes find _backpackSubtype != -1) then {
				// UnitPrefix_BackpackDesignation_Subtype_Partoftexture_Camoname
				private _backpackTextureName = format ["%1_%2_%3_Pack_%4", unitTexturePrefixes, _backpackType, _backpackSubtype, _camoType];
				private _backpackTexturePath = format ["%1\%2\%3.paa", _backpackTextureRoot, _backpackType, _backpackTextureName];
				
				(backpackContainer _unit) setObjectTextureGlobal [0, "optre_unsc_units\army\data\soft_backpack_co.paa"];
				(backpackContainer _unit) setObjectTextureGlobal [1, _backpackTexturePath];
			};
		};
		if (_backpackType == "ILCS") then {
			if (ilcsBagTypes find _backpackSubtype != -1) then {
				// UnitPrefix_BackpackDesignation_Subtype_Partoftexture_Camoname
				private _backpackTextureName = format ["%1_%2_%3_%4", unitTexturePrefixes, _backpackType, _backpackSubtype, _camoType];
				private _backpackTexturePath = format ["%1\%2\%3.paa", _backpackTextureRoot, _backpackType, _backpackTextureName];
				
				(backpackContainer _unit) setObjectTextureGlobal [0, _backpackTexturePath];
			};
		};
	};
};*/
systemChat str camoType;
// ###############
// ###  Helmet ###
// ###############
//
// Helmets are swapped as items.
// This makes hud management easier and is compatible with the way visor opaqueness works.
// All 'duplicate' helmets of non-default camouflage are marked with 'scope = 1;' in their classes
if (_currentHelmet != "") then {
	private _checkedHelmet = (configFile >> "CfgWeapons" >> _currentHelmet >> "camoTypes") call BIS_fnc_getCfgData;
	private _helmetCamoTypes = _checkedHelmet; // May be able to remove this depending on how much arma has a fit about it
	private _helmetTempArray = [_currentHelmet, "_"] call BIS_fnc_splitString;
	if ((count _helmetTempArray) > 1) then {
		// This is the last item
		private _helmetCamoRef = _helmetTempArray # ((count _helmetTempArray) -1);
		// Helmets can have their camo be in the last or 2nd-to-last item in the array depending on if they are using a depolarized version
		private _helmetCamoRef_DP = _helmetTempArray # ((count _helmetTempArray) -2);
		if ((_helmetTempArray # 0) find UnitTexturePrefixes != -1 && _helmetCamoTypes find _camoType != -1) then {
			//Replace the value of the last or second-to-last item in array with the preferred camo
			if (_helmetCamoTypes find _helmetCamoRef_DP != -1) then {
				_helmetTempArray set [((count _helmetTempArray) - 2), _camoType];
			} else {
				_helmetTempArray set [((count _helmetTempArray) - 1), _camoType];
			};
			
			// Recombines the original array but with our replaced value
			private _newHelmet = _helmetTempArray joinString "_";
			systemChat str _newHelmet;
			removeHeadgear _unit;
			_unit addHeadgear _newHelmet;
		};
	};
};
systemChat str "Helmets Completed";

// ################
// ### Facewear ###
// ################
//
// Facewear items are swapped as items.
if (_currentFW != "") then {
	private _FWCamoTypes = (configFile >> "CfgGlasses" >> _currentFW >> "camoTypes") call BIS_fnc_getCfgData;
	private _FWTempArray = [_currentFW, "_"] call BIS_fnc_splitString;
	
	// This is the last item
	if ((_FWTempArray # 0) find UnitTexturePrefixes != -1 && _FWCamoTypes find _camoType != -1) then {
		if ((count _FWTempArray) > 0) then {
			_FWTempArray set [((count _FWTempArray) - 1), _camoType];
			
			// Recombines the original array but with our replaced value
			private _newFW = _FWTempArray joinString "_";
			systemChat str _newFW;
			removeGoggles _unit;
			_unit addGoggles _newFW;
		};
	};
};

// ################
// ### HMD Slot ###
// ################
//
// HMDs are swapped as items.
if (_currentHMD != "") then {
	private _HMDCamoTypes = (configFile >> "CfgWeapons" >> _currentHMD >> "camoTypes") call BIS_fnc_getCfgData;
	private _HMDTempArray = [_currentHMD, "_"] call BIS_fnc_splitString;
	
	// This is the last item
	if ((_HMDTempArray # 0) find UnitTexturePrefixes != -1 && _HMDCamoTypes find _camoType != -1) then {
		if ((count _HMDTempArray) > 0) then {
			_HMDTempArray set [((count _HMDTempArray) - 1), _camoType];
			
			// Recombines the original array but with our replaced value
			private _newHMD = _HMDTempArray joinString "_";
			systemChat str _newHMD;
			_unit removeWeapon _currentHMD;
			_unit addWeapon _newHMD;
		};
	};
};

// #############
// ### Rifle ###
// #############
//
// The rifle is replaced and all attachments are yoinked over

private _normalVariants = [
	"MA5B",
	"MA5C",
	"BR55X",
	"BR55XHB",
	"M392",
	"VK78"
];
private _normalSubTypes = [
	"Experimental",
	"Rifleman"
];
private _uglVariants = [
	"MA5BGL",
	"MA5CGL"
];
private _uglSubTypes = [
	"Experimental"
];
private _m28SubTypes = [
	"Experimental"
];

if !(_currentRifle == "") then {
	// Split classname into components
	private _rifleTempArray = [_currentRifle, "_"] call BIS_fnc_splitString;
	private _rifleType = _rifleTempArray # 1; //MA5B, MA5C, M392, etc.
	private _rifleSubType = _rifleTempArray # 2; //Experimental, Nokk, Mesa, etc.
	
	// Checks rifle for compatibility
	private _rifleBLK = format ["%1_%2_%3_BLK", unitTexturePrefixes, _rifleType, _rifleSubType];
	if (_compatibleRifles find _rifleBLK != -1) then {
		if (_normalVariants find _rifleType != -1) then {
			if (_rifleSubType == "Experimental" || _rifleSubType == "Rifleman") then { // DO NOT USE FIND HERE!!!!!!!
				private _rifleTypeName = format ["%1_%2_%3_%4", unitTexturePrefixes, _rifleType, _rifleSubType, _camoType];
				// Asks what attachments the gun has
				private _rifleAttachments = primaryWeaponItems _unit;
				// Asks what magazine is in the gun
				private _rifleMag = primaryWeaponMagazine _unit;
				// Asks how many bullets are in the primary magazine of the gun
				private _rifleMagCount = _unit ammo primaryWeapon _unit;
				// Asks what gun the user is actively using right now
				private _currentGun = currentWeapon _unit;
				/*
				systemChat str _currentRifle;
				systemChat str _rifleAttachments;
				systemChat str _rifleMag;
				systemChat str _rifleMagCount;
				systemChat str _rifleTypeName;
				systemChat str _currentGun;
				*/
				removeAllPrimaryWeaponItems _unit;
				_unit removeWeapon _currentRifle;
				_unit addWeapon _rifleTypeName;
			
				for [{_i = 0},{_i <= (count _rifleAttachments)},{_i = _i + 1}] do {
					_unit addPrimaryWeaponItem _rifleAttachments # _i;
				};
				for [{_i = 0},{_i <= (count _rifleMag)},{_i = _i + 1}] do {
					_unit addMagazine _rifleMag # _i;
					_unit addPrimaryWeaponItem _rifleMag # _i;
				};
				_unit setAmmo [primaryWeapon _unit, _rifleMagCount];
				if (_currentGun == _currentRifle) then {
					_unit selectWeapon _rifleTypeName;
				};
			};
		};
		if (_uglVariants find _rifleType != -1) then {
			if (_uglSubTypes find _rifleSubType != -1) then {
				private _rifleTypeName = format ["%1_%2_%3_%4", unitTexturePrefixes, _rifleType, _rifleSubType, _camoType];
				// Asks what attachments the gun has
				private _rifleAttachments = primaryWeaponItems _unit;
				// Asks what magazine is in the gun
				private _rifleMag = primaryWeaponMagazine _unit;
				// Asks how many bullets are in the primary magazine of the gun
				private _rifleMagCount = _unit ammo primaryWeapon _unit;
				private _rifleMagCount2 = _unit ammo "82nd_M301UGL";
				// Asks what gun the user is actively using right now
				private _currentGun = currentWeapon _unit;
				/*
				systemChat str _currentRifle;
				systemChat str _rifleAttachments;
				systemChat str _rifleMag;
				systemChat str _rifleMagCount;
				systemChat str _rifleMagCount2;
				systemChat str _rifleTypeName;
				systemChat str _currentGun;
				*/
				removeAllPrimaryWeaponItems _unit;
				_unit removeWeapon _currentRifle;
				_unit addWeapon _rifleTypeName;
			
				for [{_i = 0},{_i <= (count _rifleAttachments)},{_i = _i + 1}] do {
					_unit addPrimaryWeaponItem _rifleAttachments # _i;
				};
				for [{_i = 0},{_i <= (count _rifleMag)},{_i = _i + 1}] do {
					_unit addMagazine _rifleMag # _i;
					_unit addPrimaryWeaponItem _rifleMag # _i;
				};
				_unit setAmmo [primaryWeapon _unit, _rifleMagCount];
				_unit setAmmo ["82nd_M301UGL", _rifleMagCount2];
				if (_currentGun == _currentRifle) then {
					_unit selectWeapon _rifleTypeName;
				};
			};
		};
		if (_rifleType == "M28A2") then {
			if (_m28SubTypes find _rifleSubType != -1) then {
				private _rifleTypeName = format ["%1_%2_%3_%4", unitTexturePrefixes, _rifleType, _rifleSubType, _camoType];
				// Asks what attachments the gun has
				private _rifleAttachments = primaryWeaponItems _unit;
				// Asks what magazine is in the gun
				private _rifleMag = primaryWeaponMagazine _unit;
				// Asks how many bullets are in the primary and secondary magazine of the gun
				private _rifleMagCount = _unit ammo primaryWeapon _unit;
				private _rifleMagCount2 = _unit ammo "Secondary";
				// Asks what gun the user is actively using right now
				private _currentGun = currentWeapon _unit;
				/*
				systemChat str _currentRifle;
				systemChat str _rifleAttachments;
				systemChat str _rifleMag;
				systemChat str _rifleMagCount;
				systemChat str _rifleMagCount2;
				systemChat str _rifleTypeName;
				systemChat str _currentGun;
				*/
				removeAllPrimaryWeaponItems _unit;
				_unit removeWeapon _currentRifle;
				_unit addWeapon _rifleTypeName;
			
				for [{_i = 0},{_i <= (count _rifleAttachments)},{_i = _i + 1}] do {
					_unit addPrimaryWeaponItem _rifleAttachments # _i;
				};
				for [{_i = 0},{_i <= (count _rifleMag)},{_i = _i + 1}] do {
					_unit addMagazine _rifleMag # _i;
					_unit addPrimaryWeaponItem _rifleMag # _i;
				};
				_unit setAmmo [primaryWeapon _unit, _rifleMagCount];
				_unit setAmmo ["Secondary", _rifleMagCount2];
				if (_currentGun == _currentRifle) then {
					_unit selectWeapon _rifleTypeName;
				};
			};
		};
	};
};

{
	if (_x == 0) exitWith {hintSilent "MM_CamoSwapper | One or more errors have occured in execution of fn_camoChange. Please check your .rpt file for additional information."; return false;};
} forEach _errorLog;

return true;