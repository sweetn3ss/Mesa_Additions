/*
	Author: Max

	Description:
		Changes the compatible 82nd SOC uniform on the player to that of a different variant.
		Also changes the textures of that uniform based on the camo of the vest

	Parameter(s):
		0: OBJECT - (Required, default 'objNull') The player
		1: STRING - (Required, default "BASE") The identifier of the vest variant to swap to

	Returns:
		BOOLEAN (TODO: Actually return BOOLEAN for log purposes)

	Examples:
		[_player, ""BASE""] call personalizeArmor_fnc_uniformChange
		[_player, ""ROLLED""] call personalizeArmor_fnc_camoChange
*/

params [
	["_unit", objNull], 
	["_selectedUniformVariant", "BASE"]
];

// #################
// ### Constants ###
// #################
//
// These constants are related to the setup of the mod(s) and the naming scheme of items

private	_armorTextureRoot    = "82nd_Armor_New\data\armors";
private	_unitTexturePrefix   = "82nd";

// ###############################
// ### Compatibility Constants ###
// ###############################
//
// This array defines all vests that the script will operate on.
// This idiot-proofs the script so as not to delete items and try to replace them with those that don't exist
// AKA if a vest isn't specified in this list, NOTHING happens on runtime.
private _compatibleUniforms = [
	"82nd_BDU_Morph_BASE",
	"82nd_BDU_Morph_ROLLED",
	"82nd_BDU_Morph_Short"
];

// Vests are used to grab the right camo
private _compatibleVests = [
	"82nd_M52A_Rifleman_BLK",
	"82nd_M52A_Corpsman_BLK",
	"82nd_M52A_MG_BLK",
	"82nd_M52A_Grenadier_BLK",
	"82nd_M52A_Marksman_BLK",
	"82nd_M52A_Breacher_BLK",
	"82nd_M52A_TeamLead_BLK",
	"82nd_M52A_A_BLK",
	"82nd_M52A_B_BLK",
	"82nd_M52A_C_BLK",
	"82nd_M52A_Crew_BLK"
];

// ### Begin ###
private _currentVest = vest _unit;
private _currentUniform = uniform _unit;

private _uniformVariant = _selectedUniformVariant;

// ###############
// ### Uniform ###
// ###############
//
// The uniform texture is swapped (for compatible uniforms)
if !(_currentUniform == "") then {
	if (_compatibleUniforms find _currentUniform != -1) then {
		private _uniformTempArray = [_currentUniform, "_"] call BIS_fnc_splitString;
		private _uniformName  = format ["82nd_BDU_Morph_%1", _uniformVariant];
		private _allItems     = uniformItems _unit;
		
		removeUniform _unit;
		_unit addUniform _uniformName;
			
		// Add all items to the new vest
		{ _unit addItemToUniform _x } forEach _allItems;
		
		if !(_currentVest == "") then {
			// Change the uniform camo to match current vest camo
			private _vestTempArray = [_currentVest, "_"] call BIS_fnc_splitString;
			private _camoType      = _vestTempArray # 3; // BLK, DES, SNO, WDL
			
			// Short uses Rolled texture
			if (_uniformVariant == "Short") then {
				_uniformVariant = "ROLLED";
			};
			
			private _uniformTextureRoot = format ["%1\Uniforms", _armorTextureRoot];
			private _uniformTexture     = format ["82nd_BDU_All_%1_%2", _uniformVariant, _camoType];
			private _uniformTexturePath = format ["%1\%2.paa", _uniformTextureRoot, _uniformTexture];
			
			_unit setObjectTextureGlobal [0, _uniformTexturePath];
			_unit setObjectTextureGlobal [1, _uniformTexturePath];
		};
	};
};