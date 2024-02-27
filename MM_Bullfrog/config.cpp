class CfgPatches
{
	class MM_Bullfrog
	{
		name="Mesa's Bullfrogs";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"cba_main"
		};
		authors[]=
        {
            "Mesa",
            "Outshadow",
            "Silencer",
			"Daisy"
        };
    };
};
class Extended_PostInit_EventHandlers
{
	class fallingHandlerKey
	{
		init = "call compile preprocessFileLineNumbers 'fallingDebug_Key.sqf'";
	};
	class settings {
		init = "call compile preprocessFileLineNumbers 'settings.sqf'";
	};
};
class cfgFunctions
{
	class MM_Bullfrog // change irrelevent classes
	{
		tag = "MM_Bullfrog";
		class Functions {
			file = "MM_Bullfrog\functions";
			class alterEnergy;
			class customWoundHandler;
			class hashmapCreate {
				preInit=1;
			};
            class jetpackOmni;
            class jetpackOmniShort;
            class jetpackVector;
            class jetpackVectorShort;
			class jumpL;
			class jumpS;
			class packCheck;
			class playerEH {
				postInit = 1;
			};
			class playerVarsInit {
				postInit = 1;
			}
			class rechargeLoop;
			class rechargeToggle;
		};
	};
	class Keys {
		class KeyInt {
			class fallingPostInit {
				file = "MM_Bullfrog\fallingDebug_Key.sqf";
				postInit=1;
			};
		};
	};
};
class CfgSFX
{
	class MM_Bullfrog_Jump_SoundSFX
	{
		sound0[]={"82nd_JetpackFuncs\sounds\SLACKJAWBESTSOUNDENGINEER.wav", 250, 1, 25, 1, 0, 0, 4};
		sounds[]={sound0};
		empty[]={"", 0, 0, 0, 0, 0, 0, 0};
	};
};
class CfgVehicles {
	#include "CfgVehicles.hpp"
};

#include "ACE_Medical_Injuries.hpp"
//#include "RscTitles.hpp"