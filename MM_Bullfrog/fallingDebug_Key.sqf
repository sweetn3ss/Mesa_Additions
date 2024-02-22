PlzNoFallMommy = false;

[ // jetpack master switch
	"MM_Bullfrog_enabled", 
	"CHECKBOX", 
	["Enable Jetpacks", "Enables and disables jetpack functionality. Does not require mission restart."], 
	"Jumpack Framework", 
	true
] call CBA_fnc_addSetting;

[ // jetpack energy recharge time
	"MM_Bullfrog_time", 
	"SLIDER", 
	["Recharge Time", "The interval in seconds between energy deposits into the player's pool. Does not require mission restart."], 
	"Jumpack Framework", 
	[1, 5, 1, 0]
] call CBA_fnc_addSetting;

[ // jetpack energy recharge amount
	"MM_Bullfrog_amnt", 
	"CHECKBOX", 
	["Recharge Amount", "The amount of energy deposited after the interval defined above. Does not require mission restart."], 
	"Jumpack Framework", 
	[2, 20, 2, 0]
] call CBA_fnc_addSetting;