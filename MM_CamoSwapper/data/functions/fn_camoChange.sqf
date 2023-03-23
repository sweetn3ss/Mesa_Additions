/*
	Author: Max

	Description:
		Changes the compatible 82nd SOC equipment on a player to be camouflaged in the manner chosen.
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

// #################
// ### Constants ###
// #################
//
// These constants are related to the setup of the mod(s) and the naming scheme of items
private	_armorTextureRoot    = "82nd_Armor\data\armors";
private	_backpackTextureRoot = "82nd_Radio_Packs\data";
private	unitTexturePrefixes   = "82nd";

// ###############################
// ### Compatibility Constants ###
// ###############################
//
// These arrays define all items that the script will operate on.
// This idiot-proofs the script so as not to delete items and try to replace them with those that don't exist
// AKA if an item isn't specified in these lists, NOTHING happens on runtime.

private _compatibleUniforms = [
	"82nd_BDU_Morph_BASE",
	"82nd_BDU_Morph_ROLLED",
	"82nd_BDU_Morph_Short"
];

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
						hint "ERROR: Incorrect 82nd SOC Camo";
						
						//TODO: Return false for logging purposes
						//false;
					 };
};

// ###############
// ### Uniform ###
// ###############
//
// The uniform texture is swapped (for compatible uniforms)
if !(_currentUniform == "") then {
	if (_compatibleUniforms find _currentUniform != -1) then {
		private _uniformTempArray = [_currentUniform, "_"] call BIS_fnc_splitString;
		private _uniformVariant   = _uniformTempArray # 3; // BASE, ROLLED
		
		// Short uses Rolled texture
		if (_uniformVariant == "Short") then {
			_uniformVariant = "ROLLED";
		};
		
		private _uniformTexture     = format ["82nd_BDU_All_%1_%2", _uniformVariant, _camoType];
		private _uniformTexturePath = format ["%1\Uniforms\%2.paa", _armorTextureRoot, _uniformTexture];
		
		_unit setObjectTextureGlobal [0, _uniformTexturePath];
		_unit setObjectTextureGlobal [1, _uniformTexturePath];
	};
};

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
			
			private _allItems     = vestItems _unit;
			
			// TODO: use these for proper magazine insertion!
			//private _allMagTypes  = magazinesDetailVest _unit; // https://community.bistudio.com/wiki/magazinesDetailVest
			//private _allMags      = vestMagazines _unit;
			//private _allTypeMags  = magazinesAmmoCargo vestContainer _unit;
		
			removeVest _unit;
			_unit addVest _vestTypeName;
			
			// Add all items to the new vest
			{ _unit addItemToVest _x } forEach _allItems;
			
			// Adding all items like this means that all magazines are automatically filled.
			// To fix this, remove all magazines based on the magazine list
			// Then add all of them with the addMagazine command, specifying round count
			
			// TODO: Fix magazine ammo count
			
			// Remove all Magazines
			// removeMagazine
			// removeMagazines
			//{ (vestContainer _unit) removeMagazines _x } forEach _allMagTypes;
			
			// Add in each magazine with correct ammo count
			// TODO maybe use https://community.bistudio.com/wiki/addMagazineCargoGlobal or https://community.bistudio.com/wiki/addMagazineGlobal ?
			
			/*
			private _magType = "";
			private _magRounds = 5;
			
			{ 
				_magType = _x # 0;
				_magRounds = _x # 1;
				//(vestContainer _unit) addMagazine _x; 
				(vestContainer _unit) addMagazine [_magType, _magRounds];
			} forEach _allTypeMags;*/
			
			/*
			// https://community.bistudio.com/wiki/magazinesAmmoCargo
			{ 
				_magType   = _x;
				_magRounds = _x;
				
				(vestContainer _unit) addMagazine [_magType, _magRounds]; 
			
			} forEach _allMags;*/
			
			// ### Debug Garbage ###
			//_textures = _allTypeMags # 0;
			//_texture1 = _textures # 1;
			//_texture1string = format ["the item is: %1", _texture1];
			//hint _texture1string;
		};
	};
};
// Please ignore this shit
// It's for uh... debugging?
// Yeah. Debugging...
private _playerVest = vest player;
private _vestTempArray1 = [_playervest,"_"] call BIS_fnc_splitString;
camoRef0 = _vestTempArray1 # 0;
camoRef3 = _vestTempArray1 # 3;

// ################
// ### Backpack ###
// ################
//
// If the player has a compatible backpack, that backpack has its texture swapped.

if !(_currentBackpack == "") then {	
	if (compatibleBackpacks find _currentBackpack != -1) then {

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
};

// ###############
// ###  Helmet ###
// ###############
//
// Helmets are swapped as items.
// This makes hud management easier and is compatible with the way visor opaqueness works.
// All 'duplicate' helmets of non-default camouflage are marked with 'scope = 1;' in their classes
if !(_currentHelmet == "") then {
	// Split and reconstruct the class of the helmet
	private _checkedHelmet = (configFile >> "CfgWeapons" >> _currentHelmet >>"isCamoCompatible") call BIS_fnc_getCfgDataBool;
	if (_checkedHelmet isEqualTo true) then {
		private _helmetTempArray = [_currentHelmet, "_"] call BIS_fnc_splitString;
		private _helmetPrefix = _helmetTempArray # 0;
		private _helmetType      = _helmetTempArray # 1; // Ex: 'ECH252', 'CH252', etc.
		private _helmetSubtype   = _helmetTempArray # 2; // Ex: 'Rifleman', 'Corpsman', etc.
		
		if (_helmetPrefix find unitTexturePrefixes != -1) then {
			// Reformat helmet as the base version for compatibility check
			private _helmetBLK = format ["%1_%2_%3_BLK", _helmetPrefix, _helmetType, _helmetSubtype];
			
			if ((compatibleHelmets find _helmetBLK != -1) || (compatibleHelmets find (format ["%1_dp", _helmetBLK]) != -1)) then {
				// Ex: 82nd_HelmetType_Role_Camo
				private _newHelmet = format ["%1_%2_%3_%4", _helmetPrefix, _helmetType, _helmetSubtype, _camoType];

				removeHeadgear _unit;
				_unit addHeadgear _newHelmet;
			};
		};
	};
};

// ###############
// ## Facewear ##
// ###############
//
// Facewear items are swapped as items.
if !(_currentFW == "") then {
	private _checkedFW = (configFile >> "CfgGlasses" >> _currentFW >>"isCamoCompatible") call BIS_fnc_getCfgDataBool;
	if (_checkedFW isEqualTo true) then {
		private _fwTempArray = [_currentFW, "_"] call BIS_fnc_splitString;
		private _fwType = _fwTempArray # 1;
		private _fwSubType = _fwTempArray # 2;
			
		private _fwBLK = format ["%1_%2_%3_BLK", unitTexturePrefixes, _fwType, _fwSubType];
		if (compatibleFW find _fwBLK != -1) then {
		
			if (_fwType == "Bala") then {
				if (_fwSubType == "G" || _fwSubType == "NoG" || _fwSubType == "BeastG" || _fwSubType == "BeastNoG") then {
					private _fwTypeName = format ["%1_%2_%3_%4", unitTexturePrefixes, _fwType, _fwSubType, _camoType];
					removeGoggles _unit;
					_unit addGoggles _fwTypeName;
				};
			};
			if (_fwType == "Scarf") then {
				if (_fwSubType == "SmartDown" || _fwSubType == "SmartUp") then {
					private _fwTypeName = format ["%1_%2_%3_%4", unitTexturePrefixes, _fwType, _fwSubType, _camoType];
					removeGoggles _unit;
					_unit addGoggles _fwTypeName;
				};
			};
		};
	};
};

// ###############
// ## HMD Slot ##
// ###############
//
// HMDs are swapped as items.
if !(_currentHMD == "") then {
	private _checkedHMD = (configFile >> "CfgGlasses" >> _currentHMD >>"isCamoCompatible") call BIS_fnc_getCfgDataBool;
	if (_checkedHMD isEqualTo true) then {
	
		private _hmdTempArray = [_currentHMD, "_"] call BIS_fnc_splitString;
		private _hmdType = _hmdTempArray # 1;
		private _hmdSubType = _hmdTempArray # 2;
			
		private _hmdBLK = format ["%1_%2_%3_BLK", unitTexturePrefixes, _hmdType, _hmdSubType];
		if (compatibleHMDs find _hmdBLK != -1) then {
		
			if (_hmdType == "CatHMD") then {
				if (_hmdSubType == "Base") then {
					private _hmdTypeName = format ["%1_%2_%3_%4", unitTexturePrefixes, _hmdType, _hmdSubType, _camoType];
					_unit removeWeapon _currentHMD;
					_unit addWeapon _hmdTypeName;
				};
			};
			if (_hmdType == "ScarfHMD") then {
				if (_hmdSubType == "SmartDown" || _hmdSubType == "SmartUp") then {
					private _hmdTypeName = format ["%1_%2_%3_%4", unitTexturePrefixes, _hmdType, _hmdSubType, _camoType];
					_unit removeWeapon _currentHMD;
					_unit addWeapon _hmdTypeName;
				};
			};
		};
	};
};

// ############
// ### Rifle ###
// ############
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