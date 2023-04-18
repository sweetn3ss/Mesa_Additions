class CfgPatches
{
	class MM_Bullfrog
	{
		name="Mesa's Bullfrogs";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
		authors[]=
        {
            "Mesa",
            "Outshadow",
            "Silencer"
        };
    };
};
class Extended_PostInit_EventHandlers
{
	class fallingHandlerKey
	{
		init = "call compile preprocessFileLineNumbers 'fallingDebug_Key.sqf'";
	};
};
class cfgFunctions
{
	class Project_Airborne_FunctonLibrary_1
	{
		class MM_Bullfrog {
			file = "MM_Bullfrog\functions";
			class customWoundHandler;
            class jetpackEnergy;
            class jetpackOmni;
            class jetpackOmniShort;
            class jetpackVector;
            class jetpackVectorShort;
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
class CfgVehicles
{
	class MM_Bullfrog_Jump_Sound
	{
		sound="Project_Airborne_Jump_SoundSFX";
	};
};
#include "ACE_Medical_Injuries.hpp"