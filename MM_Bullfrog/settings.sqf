#include "\a3\ui_f\hpp\defineDIKCodes.inc"
// ####################################################################################################
// ##################################### CBA SETTINGS #################################################
// ####################################################################################################
[ // jetpack master switch
	"MM_Bullfrog_enabled", 
	"CHECKBOX", 
	["Enable Jetpacks", "Enables and disables jetpack functionality. Does not require mission restart."], 
	"Jumpack Framework", 
	true,
	1
] call CBA_fnc_addSetting;

[ // jetpack energy recharge time
	"MM_Bullfrog_time", 
	"SLIDER", 
	["Recharge Time", "The interval in seconds between energy deposits into the player's pool. Does not require mission restart."], 
	"Jumpack Framework", 
	[1, 5, 1, 0],
	1
] call CBA_fnc_addSetting;

[ // jetpack energy recharge amount
	"MM_Bullfrog_amnt", 
	"SLIDER", 
	["Recharge Amount", "The amount of energy deposited after the interval defined above. Does not require mission restart."], 
	"Jumpack Framework", 
	[2, 64, 2, 0],
	1
] call CBA_fnc_addSetting;

/*

Necessary?

[ // jetpack starting energy
	"MM_Bullfrog_startE", 
	"SLIDER", 
	["Starting Energy", "The amount of energy each jetpack will start with, without needing to charge. Requires mission restart."], 
	"Jumpack Framework", 
	[0, 100, 0, 0],
	1,
	{},
	true
] call CBA_fnc_addSetting;
*/

[ // short jump length
	"MM_Bullfrog_horizontal_S", 
	"SLIDER", 
	["Horizontal Velocity (Short)", "The horizontal velocity in meters per second imparted upon the player when they perform a short jump. Does not require mission restart."], 
	"Jumpack Framework", 
	[2, 128, 8, 0],
	1
] call CBA_fnc_addSetting;

[ // short jump height
	"MM_Bullfrog_vertical_S", 
	"SLIDER", 
	["Vertical Velocity (Short)", "The vertical velocity imparted upon the player when they perform a short jump. Does not require mission restart."], 
	"Jumpack Framework", 
	[2, 128, 10, 0],
	1
] call CBA_fnc_addSetting;

[ // long jump length
	"MM_Bullfrog_horizontal_L", 
	"SLIDER", 
	["Horizontal Velocity (Long)", "The horizontal velocity imparted upon the player when they perform a long jump. Does not require mission restart."], 
	"Jumpack Framework", 
	[4, 256, 16, 0],
	1
] call CBA_fnc_addSetting;

[ // long jump height
	"MM_Bullfrog_vertical_L", 
	"SLIDER", 
	["Vertical Velocity (Long)", "The vertical velocity imparted upon the player when they perform a long jump. Does not require mission restart."], 
	"Jumpack Framework", 
	[4, 256, 21, 0],
	1
] call CBA_fnc_addSetting;

// ####################################################################################################
// ##################################### CBA KEYBINDS #################################################
// ####################################################################################################
if !(isServer) then {
	[ // short jump keybind
		"MM_Bullfrog", 	// modName
		"MM_Bullfrog_shortJump", 	// varName
		["Short Jump", 	// pretty Name
		"tooltip"],		// tooltip
		{				// code executed on key down
			player call MM_Bullfrog_fnc_jumpS;
		},				
		{				// code executed on key up

		},
		[DIK_V,[false,false,false]] // default keybind [shift, ctrl, alt]
	] call CBA_fnc_addKeybind;

	[ // long jump keybind
		"MM_Bullfrog", 	// modName
		"MM_Bullfrog_longJump", 	// varName
		["Long Jump", 	// pretty Name
		"tooltip"],		// tooltip
		{				// code executed on key down
			player call MM_Bullfrog_fnc_jumpL;
		},				
		{				// code executed on key up

		},
		[DIK_V,[true,false,false]] // default keybind [shift, ctrl, alt]
	] call CBA_fnc_addKeybind;

	[ // pause recharge keybind
		"MM_Bullfrog", 	// modName
		"MM_Bullfrog_rPause", 	// varName
		["Pause/Unpause Jetpack Energy Regeneration", 	// pretty Name
		"tooltip"],		// tooltip
		{				// code executed on key down
			player call MM_Bullfrog_fnc_rechargePause;
		},				
		{				// code executed on key up

		},
		[DIK_P,[true,true,false]] // default keybind [shift, ctrl, alt]
	] call CBA_fnc_addKeybind;
};