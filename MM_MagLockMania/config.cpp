#include "BIS_AddonInfo.hpp"
#include "mod.cpp"
#include "\a3\ui_f\hpp\defineDIKCodes.inc"
#include "MagMania\MagMania.hpp"

class CfgPatches 
{
	class MaglockM
	{
		units[] = {};
		weapons[] = {}; 
		requiredAddons[] = {};	
		author[]= {"cardboardboxo"}; 

		
	};
};


class CfgFunctions
{
	class MaglockM
	{
		class main
		{
			class Init
			{
				file = "\MaglockM\MaglockM_init.sqf";
				postInit = 1;
			};
		};	
	};

	class Keys
	{
		class KeyInt
		{
			class MaglockMPostInit
			{
				file = "\MaglockM\MaglockM_key.sqf";
				postInit = 1;
			};
		};	
	};
};
