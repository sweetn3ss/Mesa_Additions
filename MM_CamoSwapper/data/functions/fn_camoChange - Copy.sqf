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
private	_armorTextureRoot    = "82nd_Armor_New\data\armors";
private	_backpackTextureRoot = "82nd_Radio_Packs\data";
private	_unitTexturePrefix   = "82nd";

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

// ONLY add the BLK camo of each variant
private _compatibleVests = [
	"82nd_M52A_Rifleman_BLK",
	"82nd_M52A_Corpsman_BLK",
	"82nd_M52A_MG_BLK",
	"82nd_M52A_Grenadier_BLK",
	"82nd_M52A_Marksman_BLK",
	"82nd_M52A_Breacher_BLK",
	"82nd_M52A_TeamLead_BLK",
	"82nd_M52A_TyrRifleman_BLK",
	"82nd_M52A_TyrCorpsman_BLK",
	"82nd_M52A_TyrMG_BLK",
	"82nd_M52A_TyrGrenadier_BLK",
	"82nd_M52A_TyrMarksman_BLK",
	"82nd_M52A_TyrBreacher_BLK",
	"82nd_M52A_TyrTeamLead_BLK",
	"82nd_M52A_SlpRifleman_BLK",
	"82nd_M52A_SlpCorpsman_BLK",
	"82nd_M52A_SlpMG_BLK",
	"82nd_M52A_SlpGrenadier_BLK",
	"82nd_M52A_SlpMarksman_BLK",
	"82nd_M52A_SlpBreacher_BLK",
	"82nd_M52A_SlpTeamLead_BLK",
	"82nd_M52A_AirAssault_BLK",
	"82nd_M52A_AirMedic_BLK",
	"82nd_M52A_AirMG_BLK",
	"82nd_M52A_AirGrenadier_BLK",
	"82nd_M52A_AirMarksman_BLK",
	"82nd_M52A_AirBreacher_BLK",
	"82nd_M52A_AirTeamLead_BLK",
	"82nd_M52A_A_BLK",
	"82nd_M52A_B_BLK",
	"82nd_M52A_C_BLK",
	"82nd_M52A_Crew_BLK",
	"82nd_M52A_Aviation_BLK",
	"82nd_M52A_PJ_BLK",
	"82nd_M52D_Khaos_BLK",
	"82nd_M52A_Saint_BLK",
	"82nd_M52D_Stealth_BLK",
	"82nd_M52A_Moose_BLK",
	"82nd_M52A_Blue_BLK",
	"82nd_M52A_SlackJaw_BLK",
	"82nd_M52A_Max_BLK",
	"82nd_M52D_Mesa_BLK",
	"82nd_M52D_MesaMed_BLK",
	"82nd_M52A_Chan_BLK",
	"82nd_M52A_Ramen_BLK",
	"82nd_M52A_Boss_BLK",
	"82nd_M52A_Marcus_BLK",
	"82nd_M52A_Artemis_BLK",
	"82nd_M52A_Foxtrot_BLK",
	"82nd_M52A_Silencer_BLK",
	"82nd_M52A_McReynolds_BLK",
	"82nd_M52A_Echo_BLK",
	"82nd_M52A_Zombie_BLK",
	"82nd_M52A_Pepe_BLK",
	"82nd_M52A_Barghast_BLK",
	"82nd_M52A_Winter_BLK",
	"82nd_M52A_Gryffin_BLK",
	"82nd_M52A_Clix_BLK",
	"82nd_M52A_Jester_BLK",
	"82nd_M52D_BJ_BLK",
	"82nd_M52D_Hefty_BLK",
	"82nd_M52A_Neifer_BLK",
	"82nd_M52D_Boss_BLK"
];

private _compatibleBackpacks = [
	"82nd_ANPRC_521_BLK",
	"82nd_ANPRC_521C_BLK",
	"82nd_ANPRC_521M_BLK",
	"82nd_ILCS_Rifleman_BLK",
	"82nd_ILCS_Corpsman_BLK",
	"82nd_ILCS_PJ_BLK",
	"82nd_ILCS_Heavy_BLK",
	// start custom backpacks
	"82nd_ANPRC_Max_BLK",
	"82nd_ILCS_Saint_BLK",
	"82nd_ANPRC_Saint_BLK",
	"82nd_ANPRC_Blue_BLK"
];

// Only add the BLK versions of helmets
// Only add the depolarized versions of polarizable helmets
private _compatibleHelmets = [
	// default helmets, in order of "max put them this way" -mesa, in an attempt to explain the sorting system in place
	"82nd_CH252_Rifleman_BLK",
	"82nd_CH252_Mandible_BLK",
	"82nd_CH252_Visor_BLK_dp",
	"82nd_CH252A_Airborne_BLK_dp",
	"82nd_CH252A_Corpsman_BLK_dp",
	"82nd_ECH252_Rifleman_BLK_dp",
	"82nd_ECH252_Corpsman_BLK_dp",
	"82nd_VX19_Pilot_BLK_dp",
	"82nd_VX19_MED_BLK_dp",
	"82nd_VX16_Crew_BLK_dp",
	"82nd_VX16_PJ_BLK_dp",
	"82nd_CH252D_Stealth_BLK_dp",
	"82nd_PatrolCap_Base_BLK",
	"82nd_PatrolCap_Med_BLK",
	// end standard items, begin ECH252 customs
	"82nd_ECH252_Saint_BLK_dp",
	"82nd_ECH252_Artemis_BLK_dp",
	"82nd_ECH252_Ramen_BLK_dp",
	"82nd_ECH252_Zombie_BLK_dp",
	"82nd_ECH252_Daisy_BLK_dp",
	"82nd_ECH252_Snopsy_BLK_dp",
	"82nd_ECH252_Max_BLK_dp",
	"82nd_ECH252_Blue_BLK_dp",
	"82nd_ECH252_Obsidian_BLK_dp",
	"82nd_ECH252_Bee_BLK_dp",
	"82nd_ECH252_Barghast_BLK_dp",
	"82nd_ECH252_Moose_BLK_dp",
	"82nd_ECH252_OBannon_BLK_dp",
	"82nd_ECH252_Samuel_BLK_dp",
	"82nd_ECH252_Chask_BLK_dp",
	"82nd_ECH252_Pepe_BLK_dp",
	"82nd_ECH252_Mustard_BLK_dp",
	"82nd_ECH252_Eagle_BLK_dp",
	"82nd_ECH252_Andi_BLK_dp",
	"82nd_ECH252_Vytiz_BLK_dp",
	"82nd_ECH252_Jolly_BLK_dp",
	"82nd_ECH252_Dragon_BLK_dp",
	"82nd_ECH252_McReynolds_BLK_dp",
	"82nd_ECH252_Kaybee_BLK_dp",
	"82nd_ECH252_Clix_BLK_dp",
	"82nd_ECH252_Avoim_BLK_dp",
	"82nd_ECH252_Zombie_BLK_dp",
	"82nd_ECH252_Racoon_BLK_dp",
	"82nd_ECH252_Winter_BLK_dp",
	// end ECH customs, begin VX-19 customs
	"82nd_VX19_Silencer_BLK_dp",
	"82nd_VX19_Mesa_BLK_dp",
	"82nd_VX19_Jester_BLK_dp",
	"82nd_VX19_Carriac_BLK_dp",
	"82nd_VX19_Nova_BLK_dp",
	"82nd_VX19_Chan_BLK_dp",
	// end VX-19 customs, begin CH252 customs
	"82nd_CH252_SlackJaw_BLK",
	"82nd_CH252_Walsh_BLK",
	"82nd_CH252_Taliats_BLK",
	"82nd_CH252_Jack_BLK_dp",
	"82nd_CH252_Adwo_BLK",
	"82nd_CH252_Echo_BLK",
	// end CH252 customs, begin CH252A customs
	"82nd_CH252A_Foxtrot_BLK_dp",
	"82nd_CH252A_Blevk_BLK_dp",
	"82nd_CH252A_Cardboard_BLK_dp",
	"82nd_CH252A_Squale_BLK_dp",
	"82nd_CH252A_Cerauno_BLK_dp",
	"82nd_CH252A_9029_BLK_dp",
	"82nd_CH252A_Kats_BLK_dp",
	"82nd_CH252A_Trev_BLK_dp",
	"82nd_CH252A_Stormer_BLK_dp",
	"82nd_CH252A_Drmcfizz_BLK_dp",
	"82nd_CH252A_CrashTest_BLK_dp",
	"82nd_CH252A_Davis_BLK_dp",
	"82nd_CH252A_Blue_BLK_dp",
	// end CH252A customs, begin CH252D customs
	"82nd_CH252D_Khaos_BLK_dp",
	"82nd_CH252D_Hefty_BLK_dp",
	"82nd_CH252D_BJ_BLK_dp",
	"82nd_CH252D_Boss_BLK_dp",
	// end CH252D customs, begin S1ONIR customs
	"82nd_S1ONIR_Mesa_BLK_dp",
	"82nd_S1ONIR_MesaMed_BLK_dp",
	// end S1ONIR customs, begin VX-16 customs
	"82nd_VX16_Dzime_BLK_dp"
];

private _compatibleFW =
[
	"82nd_Bala_G_BLK",
	"82nd_Bala_BeastNoG_BLK",
	"82nd_Bala_BeastG_BLK",
	"82nd_Bala_NoG_BLK",
	"82nd_Scarf_SmartDown_BLK",
	"82nd_Scarf_SmartUp_BLK"
];

private _compatibleHMD = 
[
	"82nd_CatHMD_Base_BLK",
	"82nd_ScarfHMD_SmartDown_BLK",
	"82nd_ScarfHMD_SmartUp_BLK"
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
	private _vestBLK = format ["%1_%2_%3_BLK", _unitTexturePrefix, _vestType, _vestSubtype];;
	
	if (_compatibleVests find _vestBLK != -1) then {			
		if (_vestType == "M52A" || _vestType == "M52D") then {
			private _vestTypeName = format ["%1_%2_%3_%4", _unitTexturePrefix, _vestType, _vestSubtype, _camoType];
			
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

private _anprcBagTypes = [
	"521",
	"521C",
	"521M",
	"Max",
	"Saint",
	"Blue"
];

private _ilcsBagTypes = [
	"Rifleman",
	"Corpsman",
	"PJ",
	"Heavy",
	"Saint"
];

if !(_currentBackpack == "") then {	
	if (_compatibleBackpacks find _currentBackpack != -1) then {

		// "Which backpack is the user wearing?"
		private _backpackTempArray = [_currentBackpack, "_"] call BIS_fnc_splitString;
		private _backpackType      = _backpackTempArray # 1; // Ex: 'ANPRC', etc.
		private _backpackSubtype   = _backpackTempArray # 2; // Ex: '521', '515', etc.
		
		if (_backpackType == "ANPRC") then {
			if (_anprcBagTypes find _backpackSubtype != -1) then {
				// UnitPrefix_BackpackDesignation_Subtype_Partoftexture_Camoname
				private _backpackTextureName = format ["%1_%2_%3_Pack_%4", _unitTexturePrefix, _backpackType, _backpackSubtype, _camoType];
				private _backpackTexturePath = format ["%1\%2\%3.paa", _backpackTextureRoot, _backpackType, _backpackTextureName];
				
				(backpackContainer _unit) setObjectTextureGlobal [0, "optre_unsc_units\army\data\soft_backpack_co.paa"];
				(backpackContainer _unit) setObjectTextureGlobal [1, _backpackTexturePath];
			};
		};
		if (_backpackType == "ILCS") then {
			if (_ilcsBagTypes find _backpackSubtype != -1) then {
				// UnitPrefix_BackpackDesignation_Subtype_Partoftexture_Camoname
				private _backpackTextureName = format ["%1_%2_%3_%4", _unitTexturePrefix, _backpackType, _backpackSubtype, _camoType];
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
	private _helmetTempArray = [_currentHelmet, "_"] call BIS_fnc_splitString;
	private _helmetType      = _helmetTempArray # 1; // Ex: 'ECH252', 'CH252', etc.
	private _helmetSubtype   = _helmetTempArray # 2; // Ex: 'Rifleman', 'Corpsman', etc.
	
	// Reformat helmet as the base version for compatibility check
	private _helmetBLK = format ["%1_%2_%3_BLK", _unitTexturePrefix, _helmetType, _helmetSubtype];
	
	if ((_compatibleHelmets find _helmetBLK != -1) || (_compatibleHelmets find (format ["%1_dp", _helmetBLK]) != -1)) then {
		// Ex: 82nd_HelmetType_Role_Camo
		private _newHelmet = format ["%1_%2_%3_%4", _unitTexturePrefix, _helmetType, _helmetSubtype, _camoType];

		removeHeadgear _unit;
		_unit addHeadgear _newHelmet;
	};
};

// ###############
// ## Facewear ##
// ###############
//
// Facewear items are swapped as items.
if !(_currentFW == "") then {
	
	private _fwTempArray = [_currentFW, "_"] call BIS_fnc_splitString;
	private _fwType = _fwTempArray # 1;
	private _fwSubType = _fwTempArray # 2;
		
	private _fwBLK = format ["%1_%2_%3_BLK", _unitTexturePrefix, _fwType, _fwSubType];
	if (_compatibleFW find _fwBLK != -1) then {
	
		if (_fwType == "Bala") then {
			if (_fwSubType == "G" || _fwSubType == "NoG" || _fwSubType == "BeastG" || _fwSubType == "BeastNoG") then {
				private _fwTypeName = format ["%1_%2_%3_%4", _unitTexturePrefix, _fwType, _fwSubType, _camoType];
				removeGoggles _unit;
				_unit addGoggles _fwTypeName;
			};
		};
		if (_fwType == "Scarf") then {
			if (_fwSubType == "SmartDown" || _fwSubType == "SmartUp") then {
				private _fwTypeName = format ["%1_%2_%3_%4", _unitTexturePrefix, _fwType, _fwSubType, _camoType];
				removeGoggles _unit;
				_unit addGoggles _fwTypeName;
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
	
	private _hmdTempArray = [_currentHMD, "_"] call BIS_fnc_splitString;
	private _hmdType = _hmdTempArray # 1;
	private _hmdSubType = _hmdTempArray # 2;
		
	private _hmdBLK = format ["%1_%2_%3_BLK", _unitTexturePrefix, _hmdType, _hmdSubType];
	if (_compatibleHMD find _hmdBLK != -1) then {
	
		if (_hmdType == "CatHMD") then {
			if (_hmdSubType == "Base") then {
				private _hmdTypeName = format ["%1_%2_%3_%4", _unitTexturePrefix, _hmdType, _hmdSubType, _camoType];
				_unit removeWeapon _currentHMD;
				_unit addWeapon _hmdTypeName;
			};
		};
		if (_hmdType == "ScarfHMD") then {
			if (_hmdSubType == "SmartDown" || _hmdSubType == "SmartUp") then {
				private _hmdTypeName = format ["%1_%2_%3_%4", _unitTexturePrefix, _hmdType, _hmdSubType, _camoType];
				_unit removeWeapon _currentHMD;
				_unit addWeapon _hmdTypeName;
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
	private _rifleBLK = format ["%1_%2_%3_BLK", _unitTexturePrefix, _rifleType, _rifleSubType];
	if (_compatibleRifles find _rifleBLK != -1) then {
		if (_normalVariants find _rifleType != -1) then {
			if (_rifleSubType == "Experimental" || _rifleSubType == "Rifleman") then { // DO NOT USE FIND HERE!!!!!!!
				private _rifleTypeName = format ["%1_%2_%3_%4", _unitTexturePrefix, _rifleType, _rifleSubType, _camoType];
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
				private _rifleTypeName = format ["%1_%2_%3_%4", _unitTexturePrefix, _rifleType, _rifleSubType, _camoType];
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
				private _rifleTypeName = format ["%1_%2_%3_%4", _unitTexturePrefix, _rifleType, _rifleSubType, _camoType];
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