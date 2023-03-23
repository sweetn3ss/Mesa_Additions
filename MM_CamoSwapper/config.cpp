#include "data\functions\basicdefines_A3.hpp"
class DefaultEventhandlers;

class CfgPatches
{
	class 82nd_Armor_New
	{
		author="Mesa";
		name="82nd Armor";
		units[]={};
		weapons[]={};
		magazine[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_FC_Core",
			"OPTRE_UNSC_Units",
			"V_FZ_Core",
			"OPTRE_UNSC_Units_Army",
			"OPCOS_Uniforms_Army",
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F"
		};
	};
};

class CfgWeapons
{
	#include "data\functions\LooseDepends.hpp"
	class 82nd_CH252D_Helmet_Base: OPTRE_UNSC_CH252D_Helmet
	{
		scope=0;
		author="Mesa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.60000002;
		displayName="-";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\V_CH252D_DEF_CO",
			"82nd_Armor_New\data\armors\Helmets\V_CH252D_DEF_V_CO"
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\Helmets\V_CH252D.rvmat",
			"82nd_Armor_New\data\armors\Helmets\V_CH252D_V.rvmat"
		};
		CBRN_protection="1 + 2";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\Helmets\V_CH252D_DEF_CO",
				"82nd_Armor_New\data\armors\Helmets\V_CH252D_DEF_V_CO"
			};
			hiddenSelectionsMaterials[]=
			{
				"82nd_Armor_New\data\armors\Helmets\V_CH252D.rvmat",
				"82nd_Armor_New\data\armors\Helmets\V_CH252D_V.rvmat"
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=25;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=25;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=20;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
		allowedFacewear[]={};
	};
	class 82nd_CH252D_Helmet_Base_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		scope=0;
		author="Mesa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.1;
		displayName="-";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\V_CH252D_DEF_CO",
			"82nd_Armor_New\data\armors\Helmets\V_CH252D_CLR_V_CA"
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\Helmets\V_CH252D.rvmat",
			""
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\Helmets\V_CH252D_DEF_CO",
				"82nd_Armor_New\data\armors\Helmets\V_CH252D_CLR_V_CA"
			};
			hiddenSelectionsMaterials[]=
			{
				"82nd_Armor_New\data\armors\Helmets\V_CH252D.rvmat",
				""
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=25;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=25;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=20;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
		allowedFacewear[]={};
	};
	class 82nd_ECH252_Helmet_Base: 82nd_CH252D_Helmet_Base
	{
		scope=0;
		author="Mesa";
		displayName="-";
		model="\OPTRE_UNSC_Units\Army\helmet_p";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
			"OPTRE_UNSC_Units\Army\data\helmet_visor.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="OPTRE_UNSC_Units\Army\helmet_p";
			picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"",
				""
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
				"OPTRE_UNSC_Units\Army\data\helmet_visor.rvmat"
			};
		};
	};
	class 82nd_ECH252_Helmet_Base_dp: 82nd_CH252D_Helmet_Base_dp
	{
		scope=1;
		author="Mesa";
		displayName="-";
		model="\OPTRE_UNSC_Units\Army\helmet";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"",
				""
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
				""
			};
		};
	};
	class 82nd_CH252_Visor_Base: 82nd_ECH252_Helmet_Base
	{
		scope=1;
		scopeArsenal=1;
		author="Mesa";
		displayName="-";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model="\OPTRE_UNSC_Units\Army\helmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Neck",
			"H_UNSCVacLower",
			//"H_UNSCVacVisor",
			"H_VacCollar",
			"H_Ghille"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\helmet_co.paa",
			"82nd_Customs\data\Jack\82nd_ECH252_Visor_Jack",
			""
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\helmet.p3d";
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Neck",
				"H_UNSCVacLower",
				//"H_UNSCVacVisor",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet_co.paa",
				"82nd_Customs\data\Jack\82nd_ECH252_Visor_Jack",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
			};
		};
	};
	class 82nd_CH252_Visor_Base_dp: 82nd_ECH252_Helmet_Base_dp
	{
		scope=1;
		scopeArsenal=1;
		author="Mesa";
		displayName="-";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model="\OPTRE_UNSC_Units\Army\helmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Neck",
			"H_UNSCVacLower",
			"H_UNSCVacVisor",
			"H_VacCollar",
			"H_Ghille"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\helmet_co.paa",
			"82nd_Customs\data\Jack\82nd_ECH252_Visor_Jack",
			""
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\helmet.p3d";
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Neck",
				"H_UNSCVacLower",
				"H_UNSCVacVisor",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet_co.paa",
				"82nd_Customs\data\Jack\82nd_ECH252_Visor_Jack",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
			};
		};
	};
	class 82nd_CH252_Mandible_Base: OPTRE_UNSC_CH252_Helmet_Base
	{
		scope=1;
		scopeArsenal=1;
		author="Silencer";
		displayName="-";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model="\OPTRE_UNSC_Units\Army\helmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Neck",
			"H_UNSCVacVisor",
			"H_VacCollar",
			"H_Ghille"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\helmet_co.paa",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\helmet.p3d";
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Neck",
				"H_UNSCVacVisor",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet_co.paa",
				"",
				""
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=25;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=25;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=20;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};
	class 82nd_ECH252_UnVac_Base: 82nd_ECH252_Helmet_Base
	{
		scope=0;
		scopeArsenal=0;
		author="Mesa";
		displayName="[82ndDEV] CH252 TEST";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model="\OPTRE_UNSC_Units\Army\helmet_p";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Neck",
			//"H_UNSCVacLower",
			//"H_UNSCVacVisor",
			"H_VacCollar",
			"H_Ghille"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\helmet_co.paa",
			"82nd_Customs\data\Jack\82nd_ECH252_Visor_Jack",
			""
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\helmet_p";
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Neck",
				//"H_UNSCVacLower",
				//"H_UNSCVacVisor",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet_co.paa",
				"82nd_Customs\data\Jack\82nd_ECH252_Visor_Jack",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
			};
		};
	};
	class 82nd_ECH252_UnVac_Base_dp: 82nd_ECH252_Helmet_Base_dp
	{
		scope=0;
		scopeArsenal=0;
		author="Mesa";
		displayName="[82ndDEV] CH252 TEST";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model="\OPTRE_UNSC_Units\Army\helmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Neck",
			//"H_UNSCVacLower",
			//"H_UNSCVacVisor",
			"H_VacCollar",
			"H_Ghille"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\helmet_co.paa",
			"82nd_Customs\data\Jack\82nd_ECH252_Visor_Jack",
			""
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\helmet.p3d";
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Neck",
				//"H_UNSCVacLower",
				//"H_UNSCVacVisor",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet_co.paa",
				"82nd_Customs\data\Jack\82nd_ECH252_Visor_Jack",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
			};
		};
	};
	class 82nd_M52A_Armor_Base: OPTRE_UNSC_M52A_Armor_Base
	{
		dlc="82nd Special Operations AuxMod";
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Mesa";
		displayName="-";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply160";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Base",
				"A_ChestArmor",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=40;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=40;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=40;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=40;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=40;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=40;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=40;
					passThrough=0.1;
				};
			};
		};
	};
	class 82nd_M52A_Corpsman_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] M52A Corpsman";
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_VestArmor_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_Leg_BLK.paa"
		};
	};
	class 82nd_M52A_Corpsman_SNO: 82nd_M52A_Corpsman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Corpsman (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_VestArmor_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_Leg_SNO.paa"
		};
	};
	class 82nd_M52A_Corpsman_DES: 82nd_M52A_Corpsman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Corpsman (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_VestArmor_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_Leg_DES.paa"
		};
	};
	class 82nd_M52A_Corpsman_WDL: 82nd_M52A_Corpsman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Corpsman (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_VestArmor_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_Leg_WDL.paa"
		};
	};
	class 82nd_M52A_MG_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A MG";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AP_Canteen",
				"AP_GL",
				//"AP_Knife",
				"AP_AR",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			"AP_AR",
			"AP_BR",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_BLK"
		};
	};
	class 82nd_M52A_MG_DES: 82nd_M52A_MG_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A MG (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_DES"
		};
	};
	class 82nd_M52A_MG_SNO: 82nd_M52A_MG_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A MG (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_SNO"
		};
	};
	class 82nd_M52A_MG_WDL: 82nd_M52A_MG_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A MG (Woodland)";
	hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_WDL"
		};
	};
	class 82nd_M52A_Grenadier_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Grenadier";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_Canteen",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_BR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_BLK"
		};
	};
	class 82nd_M52A_Grenadier_DES: 82nd_M52A_Grenadier_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Grenadier (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_DES"
		};
	};
	class 82nd_M52A_Grenadier_SNO: 82nd_M52A_Grenadier_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Grenadier (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_SNO"
		};
	};
	class 82nd_M52A_Grenadier_WDL: 82nd_M52A_Grenadier_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Grenadier (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_WDL"
		};
	};
	class 82nd_M52A_Marksman_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Marksman";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesMarLeft",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_SG",
				"AP_SMG",
				"AP_Thigh",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesMarLeft",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_BR",
			"AP_Pack",
			"AP_Pistol",
			"AP_SG",
			"AP_SMG",
			"AP_Thigh",
			"AP_Frag",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_BLK",
			""
		};
	};
	class 82nd_M52A_Marksman_DES: 82nd_M52A_Marksman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Marksman (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_DES",
			""
		};
	};
	class 82nd_M52A_Marksman_SNO: 82nd_M52A_Marksman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Marksman (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_SNO",
			""
		};
	};
	class 82nd_M52A_Marksman_WDL: 82nd_M52A_Marksman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Marksman (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_WDL",
			""
		};
	};
	class 82nd_M52A_Breacher_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Breacher";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_Canteen",
			"AP_GL",
			"AP_MGThigh",
			"AP_AR",
			"AP_BR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_BLK"
		};
	};
	class 82nd_M52A_Breacher_DES: 82nd_M52A_Breacher_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Breacher (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_DES"
		};
	};
	class 82nd_M52A_Breacher_SNO: 82nd_M52A_Breacher_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Breacher (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_SNO"
		};
	};
	class 82nd_M52A_Breacher_WDL: 82nd_M52A_Breacher_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Breacher (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_WDL"
		};
	};
	class 82nd_M52A_TeamLead_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Team Lead";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_Canteen",
			"AP_GL",
			"AP_MGThigh",
			"AP_BR",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_BLK"
		};
	};
	class 82nd_M52A_TeamLead_DES: 82nd_M52A_TeamLead_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Team Lead (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_DES"
		};
	};
	class 82nd_M52A_TeamLead_SNO: 82nd_M52A_TeamLead_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Team Lead (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_SNO"
		};
	};
	class 82nd_M52A_TeamLead_WDL: 82nd_M52A_TeamLead_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Team Lead (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_WDL"
		};
	};
	class 82nd_M52A_A_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (A)";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo", 
				"camo2", 
				"camo3", 
				"camo4", 
				"camo5",
				//"A_Base",
				"A_Ghillie", 
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				//"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				//"AS_SmallRight", 
				//"AP_Canteen", 
				"AP_GL", 
				//"AP_Knife", 
				"AP_MGThigh", 
				//"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
				"camo", 
				"camo2", 
				"camo3", 
				"camo4", 
				"camo5",
				//"A_Base",
				"A_Ghillie", 
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				//"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				//"AS_SmallRight", 
				//"AP_Canteen", 
				"AP_GL", 
				//"AP_Knife", 
				"AP_MGThigh", 
				//"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper",
				"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_BLK"
		};
	};
	class 82nd_M52A_A_DES: 82nd_M52A_A_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (A)(Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_DES"
		};
	};
	class 82nd_M52A_A_SNO: 82nd_M52A_A_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (A)(Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_SNO"
		};
	};
	class 82nd_M52A_A_WDL: 82nd_M52A_A_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (A)(Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_WDL"
		};
	};
	class 82nd_M52A_B_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (B)";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo", 
				"camo2", 
				"camo3", 
				"camo4", 
				"camo5",
				//"A_Base",
				"A_Ghillie", 
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				//"A_KneesMarLeft", 
				//"A_KneesMarRight", 
				"A_ODST", 
				"A_ShinArmorLeft", 
				"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				//"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				//"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				//"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				//"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
				"camo", 
				"camo2", 
				"camo3", 
				"camo4", 
				"camo5",
				//"A_Base",
				"A_Ghillie", 
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				//"A_KneesMarLeft", 
				//"A_KneesMarRight", 
				"A_ODST", 
				"A_ShinArmorLeft", 
				"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				//"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				//"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				//"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				//"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper",
				"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_BLK"
		};
	};
	class 82nd_M52A_B_DES: 82nd_M52A_B_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (B)(Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_DES"
		};
	};
	class 82nd_M52A_B_SNO: 82nd_M52A_B_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (B)(Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_SNO"
		};
	};
	class 82nd_M52A_B_WDL: 82nd_M52A_B_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (B)(Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_WDL"
		};
	};
	class 82nd_M52A_C_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (C)";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo", 
				"camo2", 
				"camo3",
				"camo4", 
				"camo5",
				//"A_Base",
				"A_Ghillie", 
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				//"A_KneesMarLeft", 
				//"A_KneesMarRight", 
				"A_ODST", 
				"A_ShinArmorLeft", 
				"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				//"AS_LargeRight", 
				//"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				//"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				//"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
				"camo", 
				"camo2", 
				"camo3",
				"camo4", 
				"camo5",
				//"A_Base",
				"A_Ghillie", 
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				//"A_KneesMarLeft", 
				//"A_KneesMarRight", 
				"A_ODST", 
				"A_ShinArmorLeft", 
				"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				//"AS_LargeRight", 
				//"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				//"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				//"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper",
				"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_BLK"
		};
	};
	class 82nd_M52A_C_DES: 82nd_M52A_C_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (C)(Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_DES"
		};
	};
	class 82nd_M52A_C_SNO: 82nd_M52A_C_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (C)(Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_SNO"
		};
	};
	class 82nd_M52A_C_WDL: 82nd_M52A_C_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (C)(Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_WDL"
		};
	};
	class 82nd_M52A_Crew_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Crew";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_ODST",
			"A_TacPad",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_BR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_BLK"
		};
	};
	class 82nd_M52A_Crew_DES: 82nd_M52A_Crew_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Crew (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_DES"
		};
	};
	class 82nd_M52A_Crew_SNO: 82nd_M52A_Crew_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Crew (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_SNO"
		};
	};
	class 82nd_M52A_Crew_WDL: 82nd_M52A_Crew_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Crew (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_WDL"
		};
	};
	class 82nd_CH252D_Helmet: 82nd_CH252D_Helmet_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] CH252D (ODST)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\ODST\generic\82nd_CH252D_Helmet_BLK.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_SLV_V_CO"
		};
		isCamoCompatible=1;
	};
	class 82nd_CH252D_Helmet_dp: 82nd_CH252D_Helmet_Base_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252D (ODST DP)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\ODST\generic\82nd_CH252D_Helmet_BLK.paa",
			"82nd_Armor_New\data\armors\ODST\CH252D_DP_CO.paa"
		};
	};
	class 82nd_CH252D_Helmet_SR: 82nd_CH252D_Helmet_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] CH252D Senior (ODST)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\ODST\generic\82nd_CH252D_Helmet_SR.paa",
			"82nd_Armor_New\data\armors\ODST\generic\ODST_Helmet_Visor_black_co.paa"
		};
	};
	class 82nd_CH252D_Helmet_SR_dp: 82nd_CH252D_Helmet_Base_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252D Senior (ODST DP)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\ODST\generic\82nd_CH252D_Helmet_SR.paa",
			"82nd_Armor_New\data\armors\ODST\CH252D_DP_CO.paa"
		};
	};
	class 82nd_M52D_Vest_SR: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] M52D Senior (Rifleman)";
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			modelSides[]={6};
			containerClass="Supply300";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_BR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\ODST\generic\82nd_M52_Rifleman_VestUnder_BLK.paa",
			"82nd_Armor_New\data\armors\ODST\generic\82nd_M52_Rifleman_VestArmor_BLK.paa",
			"82nd_Armor_New\data\armors\ODST\generic\82nd_M52_Rifleman_Leg_ODST.paa",
			"",
			"82nd_Armor_New\data\armors\ODST\generic\82nd_M52_ODST_Vest_SR.paa"
		};
	};
	class 82nd_M52D_Rifleman: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] M52D (Rifleman)";
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			modelSides[]={6};
			containerClass="Supply300";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_BR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\ODST\generic\82nd_M52_Rifleman_VestUnder_BLK.paa",
			"82nd_Armor_New\data\armors\ODST\generic\82nd_M52_Rifleman_VestArmor_BLK.paa",
			"82nd_Armor_New\data\armors\ODST\generic\82nd_M52_Rifleman_Leg_ODST.paa",
			"",
			"82nd_Armor_New\data\armors\ODST\generic\82nd_M52_ODST_Vest_BLK.paa"
		};
	};
	class 82nd_CH252D_Helmet_TRN: 82nd_CH252D_Helmet_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] CH252D Training (ODST)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\ODST\generic\82nd_CH252D_Helmet_TRN.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
		};
	};
	class 82nd_CH252D_Helmet_TRN_dp: 82nd_CH252D_Helmet_Base_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252D Training (ODST DP)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\ODST\generic\82nd_CH252D_Helmet_TRN.paa",
			"82nd_Armor_New\data\armors\ODST\CH252D_DP_CO.paa"
		};
	};
	class 82nd_M52D_Rifleman_TRN: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] M52D Training (Rifleman)";
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			modelSides[]={6};
			containerClass="Supply300";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_BR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\ODST\generic\82nd_M52_Rifleman_VestUnder_BLK.paa",
			"82nd_Armor_New\data\armors\ODST\generic\82nd_M52_Rifleman_VestArmor_BLK.paa",
			"82nd_Armor_New\data\armors\ODST\generic\82nd_M52_Rifleman_Leg_BLK.paa",
			"",
			"82nd_Armor_New\data\armors\ODST\generic\82nd_M52_ODST_Vest_TRN.paa"
		};
	};
	class 82nd_M52A_Rifleman_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] M52A";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo", 
				"camo2", 
				"camo3", 
				"camo4", 
				"camo5",
				//"A_Base",
				"A_Ghillie", 
				//"A_ChestArmor", 
				"A_KneesLeft", 
				"A_KneesRight", 
				//"A_KneesMarLeft", 
				//"A_KneesMarRight", 
				"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				//"AS_LargeRight", 
				//"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				//"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				//"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				//"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
				"camo", 
				"camo2", 
				"camo3", 
				"camo4", 
				"camo5",
				//"A_Base",
				"A_Ghillie", 
				//"A_ChestArmor", 
				"A_KneesLeft", 
				"A_KneesRight", 
				//"A_KneesMarLeft", 
				//"A_KneesMarRight", 
				"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				//"AS_LargeRight", 
				//"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				//"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				//"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				//"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper",
				"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_BLK.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_BLK.paa"
		};
	};
	class 82nd_M52A_Rifleman_DES: 82nd_M52A_Rifleman_BLK
	{
		scope=1;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_DES.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_DES.paa"
		};
	};
	class 82nd_M52A_Rifleman_SNO: 82nd_M52A_Rifleman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (Winter)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_SNO.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_SNO.paa"
		};
	};
	class 82nd_M52A_Rifleman_WDL: 82nd_M52A_Rifleman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_WDL.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_WDL.paa"
		};
	};
	class 82nd_M52A_Aviation_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Aviation";
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo", 
				"camo2", 
				"camo3", 
				"camo4", 
				"camo5",
				//"A_Base",
				"A_Ghillie", 
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				"A_ThighArmorLeft", 
				"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				//"AP_Pack", 
				//"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				//"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				//"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				//"AS_ODSTLeft",
				//"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				//"AP_AR",
				"AP_BR",
				//"AP_Pack",
				//"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				"AP_Frag",
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_BLK",
			"",
			"82nd_Armor_New\data\armors\M52A\82nd_M52D_Aviation_BLK.paa"
		};
	};
	class 82nd_M52A_Aviation_DES: 82nd_M52A_Aviation_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Aviation (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_DES",
			"",
			"82nd_Armor_New\data\armors\M52A\82nd_M52D_Aviation_DES.paa"
		};
	};
	class 82nd_M52A_Aviation_SNO: 82nd_M52A_Aviation_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Aviation (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_SNO",
			"",
			"82nd_Armor_New\data\armors\M52A\82nd_M52D_Aviation_SNO.paa"
		};
	};
	class 82nd_M52A_Aviation_WDL: 82nd_M52A_Aviation_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A Aviation (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_WDL",
			"",
			"82nd_Armor_New\data\armors\M52A\82nd_M52D_Aviation_WDL.paa"
		};
	};
	class 82nd_M52A_PJ_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A PJ";
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				//"AS_ODSTLeft",
				//"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				//"AP_Knife",
				//"AP_MGThigh",
				//"AP_AR",
				"AP_BR",
				//"AP_Pack",
				//"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				"AP_Frag",
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				//"AS_ODSTLeft",
				//"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				//"AP_Knife",
				//"AP_MGThigh",
				//"AP_AR",
				"AP_BR",
				//"AP_Pack",
				//"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				"AP_Frag",
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_VestArmor_BLK",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_Leg_BLK.paa",
			"",
			"82nd_Armor_New\data\armors\M52A\82nd_M52D_PJ_BLK.paa"
		};
	};
	class 82nd_M52A_PJ_DES: 82nd_M52A_PJ_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A PJ (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_VestArmor_DES",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_Leg_DES",
			"",
			"82nd_Armor_New\data\armors\M52A\82nd_M52D_PJ_DES.paa"
		};
	};
	class 82nd_M52A_PJ_SNO: 82nd_M52A_PJ_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A PJ (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_VestArmor_SNO",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_Leg_SNO",
			"",
			"82nd_Armor_New\data\armors\M52A\82nd_M52D_PJ_SNO.paa"
		};
	};
	class 82nd_M52A_PJ_WDL: 82nd_M52A_PJ_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52A PJ (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_VestArmor_WDL",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Corpsman_Leg_WDL",
			"",
			"82nd_Armor_New\data\armors\M52A\82nd_M52D_PJ_WDL.paa"
		};
	};
	class 82nd_M52A_Rifleman_INST: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] M52A Instructor";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_ODST",
			"A_TacPad",
			"AS_BaseLeft",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_BR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_INST.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_BLK.paa"
		};
	};
	class 82nd_BDU_Morph_BASE: OPTRE_UNSC_Army_Uniform_OLI
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa + Max";
		displayName="[MM] Smart BDU";
		class ItemInfo: UniformItem
		{
			containerClass="Supply200";
			mass=40;
			uniformClass="82nd_BDU_Morph_UNI";
		};
	};
	class 82nd_BDU_Morph_ROLLED: OPTRE_UNSC_Army_Uniform_OLI
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa + Max";
		displayName="[MM] Smart BDU (Rolled)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply200";
			mass=40;
			uniformClass="82nd_BDUR_Morph_UNI";
		};
	};
	class 82nd_BDU_Morph_Short: OPTRE_UNSC_Army_Uniform_OLI
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Smart BDU (Short)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply200";
			mass=40;
			uniformClass="82nd_BDUS_Morph_UNI";
		};
	};
	class 82nd_CH252_Rifleman_BLK: OPTRE_UNSC_CH252_Helmet_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Wraith + Mesa";
		displayName="[MM] CH252 Marine";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\helmets\82nd_CH252_Rifleman_BLK.paa"
		};
	};
	class 82nd_CH252_Rifleman_DES: 82nd_CH252_Rifleman_BLK
	{
		scope=1;
		scopeArsenal=1;
		author="Wraith + Mesa";
		displayName="[MM] CH252 Marine (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\helmets\82nd_CH252_Rifleman_DES.paa"
		};
	};
	class 82nd_CH252_Rifleman_SNO: 82nd_CH252_Rifleman_BLK
	{
		scope=1;
		scopeArsenal=1;
		author="Wraith + Mesa";
		displayName="[MM] CH252 Marine (Winter)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\helmets\82nd_CH252_Rifleman_SNO.paa"
		};
	};
	class 82nd_CH252_Rifleman_WDL: 82nd_CH252_Rifleman_BLK
	{
		scope=1;
		scopeArsenal=1;
		author="Wraith + Mesa";
		displayName="[MM] CH252 Marine (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\helmets\82nd_CH252_Rifleman_WDL.paa"
		};
	};
	class 82nd_CH252_Mandible_BLK: 82nd_CH252_Mandible_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] CH252 Marine with Mandible";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\helmets\82nd_CH252_Rifleman_BLK.paa"
		};
	};
	class 82nd_CH252_Mandible_DES: 82nd_CH252_Mandible_BLK
	{
		scope=1;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252 Marine with Mandible (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\helmets\82nd_CH252_Rifleman_DES.paa"
		};
	};
	class 82nd_CH252_Mandible_SNO: 82nd_CH252_Mandible_BLK
	{
		scope=1;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252 Marine with Mandible (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\helmets\82nd_CH252_Rifleman_SNO.paa"
		};
	};
	class 82nd_CH252_Mandible_WDL: 82nd_CH252_Mandible_BLK
	{
		scope=1;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252 Marine with Mandible (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\helmets\82nd_CH252_Rifleman_WDL.paa"
		};
	};
	class 82nd_CH252_Visor_BLK: 82nd_CH252_Visor_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] CH252 Marine with Visor";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_BLK.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Visor_ca.paa" 
		};
	};
	class 82nd_CH252_Visor_BLK_dp: 82nd_CH252_Visor_Base_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252 Marine with Visor";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_BLK.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Visor_ca.paa" 
		};
	};
	class 82nd_CH252_Visor_DES: 82nd_CH252_Visor_BLK
	{
		scope=1;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252 Marine with Visor (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_DES.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Visor_ca.paa"
		};
	};
	class 82nd_CH252_Visor_DES_dp: 82nd_CH252_Visor_BLK_dp
	{
		scope=1;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252 Marine with Visor (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_DES.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Visor_ca.paa"
		};
	};
	class 82nd_CH252_Visor_SNO: 82nd_CH252_Visor_BLK
	{
		scope=1;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252 Marine with Visor (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_SNO.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Visor_ca.paa"
		};
	};
	class 82nd_CH252_Visor_SNO_dp: 82nd_CH252_Visor_BLK_dp
	{
		scope=1;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252 Marine with Visor (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_SNO.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Visor_ca.paa"
		};
	};
	class 82nd_CH252_Visor_WDL: 82nd_CH252_Visor_BLK
	{
		scope=1;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252 Marine with Visor (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_WDL.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Visor_ca.paa"
		};
	};
	class 82nd_CH252_Visor_WDL_dp: 82nd_CH252_Visor_BLK_dp
	{
		scope=1;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252 Marine with Visor (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_WDL.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Visor_ca.paa"
		};
	};
	class 82nd_CH252A_Airborne_BLK: 82nd_CH252A_Helmet_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] CH252A (Airborne)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Rifleman_BLK.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_Silver.paa"
		};
	};
	class 82nd_CH252A_Airborne_BLK_dp: 82nd_CH252A_Helmet_Base_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252A (Airborne Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Rifleman_BLK.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_ca.paa"
		};
	};
	class 82nd_CH252A_Airborne_DES: 82nd_CH252A_Airborne_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252A Desert (Airborne)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Rifleman_DES.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_Silver.paa"
		};
	};
	class 82nd_CH252A_Airborne_DES_dp: 82nd_CH252A_Airborne_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252A Desert (Airborne Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Rifleman_DES.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_ca.paa"
		};
	};
	class 82nd_CH252A_Airborne_SNO: 82nd_CH252A_Airborne_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252A Winter (Airborne)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Rifleman_SNO.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_Silver.paa"
		};
	};
	class 82nd_CH252A_Airborne_SNO_dp: 82nd_CH252A_Airborne_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252A Winter (Airborne Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Rifleman_SNO.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_ca.paa"
		};
	};
	class 82nd_CH252A_Airborne_WDL: 82nd_CH252A_Airborne_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252A Woodland (Airborne)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Rifleman_WDL.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_Silver.paa"
		};
	};
	class 82nd_CH252A_Airborne_WDL_dp: 82nd_CH252A_Airborne_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252A Woodland (Airborne Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Rifleman_WDL.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_ca.paa"
		};
	};
	class 82nd_CH252A_Corpsman_BLK: 82nd_CH252A_Helmet_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Saint & Max";
		displayName="[MM] CH252A Corpsman";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Corpsman_BLK.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_Silver.paa"
		};
	};
	class 82nd_CH252A_Corpsman_BLK_dp: 82nd_CH252A_Helmet_Base_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Saint & Max";
		displayName="[MM] CH252A Corpsman (Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Corpsman_BLK.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_Silver.paa"
		};
	};
	class 82nd_CH252A_Corpsman_DES: 82nd_CH252A_Corpsman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Saint & Max";
		displayName="[MM] CH252A Corpsman (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Corpsman_DES.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_Silver.paa"
		};
	};
	class 82nd_CH252A_Corpsman_DES_dp: 82nd_CH252A_Corpsman_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Saint & Max";
		displayName="[MM] CH252A Corpsman (Desert Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Corpsman_DES.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_Silver.paa"
		};
	};
	class 82nd_CH252A_Corpsman_SNO: 82nd_CH252A_Corpsman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Saint & Max";
		displayName="[MM] CH252A Corpsman (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Corpsman_SNO.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_Silver.paa"
		};
	};
	class 82nd_CH252A_Corpsman_SNO_dp: 82nd_CH252A_Corpsman_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Saint & Max";
		displayName="[MM] CH252A Corpsman (Snow Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Corpsman_SNO.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_Silver.paa"
		};
	};
	class 82nd_CH252A_Corpsman_WDL: 82nd_CH252A_Corpsman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Saint & Max";
		displayName="[MM] CH252A Corpsman (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Corpsman_WDL.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_Silver.paa"
		};
	};
	class 82nd_CH252A_Corpsman_WDL_dp: 82nd_CH252A_Corpsman_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Saint & Max";
		displayName="[MM] CH252A Corpsman (Woodland Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252A_Corpsman_WDL.paa",
			"82nd_Armor_New\data\armors\Helmets2\82nd_CH252A_Visor_Silver.paa"
		};
	};
	class 82nd_ECH252_Rifleman_BLK: 82nd_ECH252_Helmet_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa + Nitsu";
		displayName="[MM] ECH252";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_BLK.paa",
			"82nd_Armor_New\data\armors\helmets\82nd_ECH252_Visor_Silver"
		};
	};
	class 82nd_ECH252_Rifleman_BLK_dp: 82nd_ECH252_Helmet_Base_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa + Nitsu";
		displayName="[MM] ECH252 (Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_BLK.paa",
			"optre_unsc_units\army\data\helmet_visor_ca"
		};
	};
	class 82nd_ECH252_Rifleman_DES: 82nd_ECH252_Rifleman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa + Nitsu";
		displayName="[MM] ECH252 (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_DES.paa",
			"82nd_Armor_New\data\armors\helmets\82nd_ECH252_Visor_Silver"
		};
	};
	class 82nd_ECH252_Rifleman_DES_dp: 82nd_ECH252_Rifleman_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa + Nitsu";
		displayName="[MM] ECH252 (Desert Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca"
		};
	};
	class 82nd_ECH252_Rifleman_SNO: 82nd_ECH252_Rifleman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa + Nitsu";
		displayName="[MM] ECH252 (Winter)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_SNO.paa",
			"82nd_Armor_New\data\armors\helmets\82nd_ECH252_Visor_Silver"
		};
	};
	class 82nd_ECH252_Rifleman_SNO_dp: 82nd_ECH252_Rifleman_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa + Nitsu";
		displayName="[MM] ECH252 (Winter Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_SNO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca"
		};
	};
	class 82nd_ECH252_Rifleman_WDL: 82nd_ECH252_Rifleman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa + Nitsu";
		displayName="[MM] ECH252 (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_WDL.paa",
			"82nd_Armor_New\data\armors\helmets\82nd_ECH252_Visor_Silver"
		};
	};
	class 82nd_ECH252_Rifleman_WDL_dp: 82nd_ECH252_Rifleman_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa + Nitsu";
		displayName="[MM] ECH252 (Woodland Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_CH252_Rifleman_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca"
		};
	};
	class 82nd_ECH252_Corpsman_BLK: 82nd_ECH252_Helmet_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] ECH252 Corpsman";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Corpsman_BLK.paa",
			"82nd_Armor_New\data\armors\helmets\82nd_ECH252_Visor_Silver"
		};
	};
	class 82nd_ECH252_Corpsman_BLK_dp: 82nd_ECH252_Helmet_Base_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] ECH252 Corpsman (Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Corpsman_BLK.paa",
			"optre_unsc_units\army\data\helmet_visor_ca"
		};
	};
	class 82nd_ECH252_Corpsman_DES: 82nd_ECH252_Corpsman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] ECH252 Corpsman (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Corpsman_DES.paa",
			"82nd_Armor_New\data\armors\helmets\82nd_ECH252_Visor_Silver"
		};
	};
	class 82nd_ECH252_Corpsman_DES_dp: 82nd_ECH252_Corpsman_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] ECH252 Corpsman (Desert)(Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Corpsman_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca"
		};
	};
	class 82nd_ECH252_Corpsman_SNO: 82nd_ECH252_Corpsman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] ECH252 Corpsman (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Corpsman_SNO.paa",
			"82nd_Armor_New\data\armors\helmets\82nd_ECH252_Visor_Silver"
		};
	};
	class 82nd_ECH252_Corpsman_SNO_dp: 82nd_ECH252_Corpsman_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] ECH252 Corpsman (Snow)(Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Corpsman_SNO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca"
		};
	};
	class 82nd_ECH252_Corpsman_WDL: 82nd_ECH252_Corpsman_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] ECH252 Corpsman (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Corpsman_WDL.paa",
			"82nd_Armor_New\data\armors\helmets\82nd_ECH252_Visor_Silver"
		};
	};
	class 82nd_ECH252_Corpsman_WDL_dp: 82nd_ECH252_Corpsman_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] ECH252 Corpsman (Woodland)(Depolarized)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_ECH252_Corpsman_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca"
		};
	};
	class 82nd_VX19_Pilot_BLK: 82nd_VX19_Pilot_BASE
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] VX-19";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_BASE_BLK.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Base_Visor.paa"
		};
	};
	class 82nd_VX19_Pilot_BLK_dp: 82nd_VX19_Pilot_BASE_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_BASE_BLK.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Base_Visor.paa"
		};
	};
	class 82nd_VX19_Pilot_DES: 82nd_VX19_Pilot_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19 (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_BASE_DES.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Base_Visor.paa"
		};
	};
	class 82nd_VX19_Pilot_DES_dp: 82nd_VX19_Pilot_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19 (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_BASE_DES.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Base_Visor.paa"
		};
	};
	class 82nd_VX19_Pilot_SNO: 82nd_VX19_Pilot_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19 (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_BASE_SNO.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Base_Visor.paa"
		};
	};
	class 82nd_VX19_Pilot_SNO_dp: 82nd_VX19_Pilot_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19 (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_BASE_SNO.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Base_Visor.paa"
		};
	};
	class 82nd_VX19_Pilot_WDL: 82nd_VX19_Pilot_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19 (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_BASE_WDL.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Base_Visor.paa"
		};
	};
	class 82nd_VX19_Pilot_WDL_dp: 82nd_VX19_Pilot_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19 (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_BASE_WDL.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Base_Visor.paa"
		};
	};
	class 82nd_VX19_MED_BLK: 82nd_VX19_Pilot_BASE
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] VX-19 PJ";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_MED_BLK.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Visor_MED.paa"
		};
	};
	class 82nd_VX19_MED_BLK_dp: 82nd_VX19_Pilot_BASE_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19 PJ";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_MED_BLK.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Visor_MED.paa"
		};
	};
	class 82nd_VX19_MED_DES: 82nd_VX19_MED_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19 PJ (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_MED_DES.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Visor_MED.paa"
		};
	};
	class 82nd_VX19_MED_DES_dp: 82nd_VX19_MED_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19 PJ (Desert)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_MED_DES.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Visor_MED.paa"
		};
	};
	class 82nd_VX19_MED_SNO: 82nd_VX19_MED_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19 PJ (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_MED_SNO.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Visor_MED.paa"
		};
	};
	class 82nd_VX19_MED_SNO_dp: 82nd_VX19_MED_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19 PJ (Snow)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_MED_SNO.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Visor_MED.paa"
		};
	};
	class 82nd_VX19_MED_WDL: 82nd_VX19_MED_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19 PJ (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_MED_WDL.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Visor_MED.paa"
		};
	};
	class 82nd_VX19_MED_WDL_dp: 82nd_VX19_MED_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] VX-19 PJ (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_MED_WDL.paa",
			"82nd_Armor_New\data\armors\Helmets\82nd_VX19_Visor_MED.paa"
		};
	};
	class 82nd_ShemaghNVG_Red: OPTRE_NVG
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Red)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghred_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghred_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_RedUp: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Red Up)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghred_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghred_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_Cyan: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Cyan)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghcyan_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghcyan_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_CyanUp: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Cyan Up)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghcyan_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghcyan_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_Gold: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Gold NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghgold_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghgold_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_GoldUp: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Gold Up)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghgold_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghgold_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_Green: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Green)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghgreen_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghgreen_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_GreenUp: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Green Up)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghgreen_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghgreen_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_Pink: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Pink)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghpink_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghpink_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_PinkUp: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Pink Up)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghpink_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghpink_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_Purple: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Purple)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghpurple_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghpurple_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_PurpleUp: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Purple Up)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghpurple_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghpurple_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_Tardis: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Tardis)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghtardis_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghtardis_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_TardisUp: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Tardis Up)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghtardis_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghtardis_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_White: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (White)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghwhite_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghwhite_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_WhiteUp: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (White Up)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghwhite_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghwhite_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_Black: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Black)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghblack_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghblack_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_ShemaghNVG_BlackUp: 82nd_ShemaghNVG_Red
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Shemagh (Black Up)(NVG)";
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghblack_up.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\shemaghblack_up.paa"
			};
			mass=2;
		};
	};
	class 82nd_Cat_BLK: OPTRE_NVG
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Cat Ears";
		model="82nd_Armor_New\data\armors\fw\cat_ears.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_cat_BLK.paa",
			"82nd_Armor_New\data\armors\fw\cat_ears_speakers.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\cat_ears.rvmat",
			"82nd_Armor_New\data\armors\fw\cat_ears_speakers.rvmat"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="82nd_Armor_New\data\armors\fw\cat_ears.p3d";
			modelOff="82nd_Armor_New\data\armors\fw\cat_ears.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\82nd_cat_BLK.paa",
				"82nd_Armor_New\data\armors\fw\cat_ears_speakers.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"82nd_Armor_New\data\armors\fw\cat_ears.rvmat",
				"82nd_Armor_New\data\armors\fw\cat_ears_speakers.rvmat"
			};
			mass=1;
		};
	};
	class 82nd_Cat_Nova: OPTRE_NVG
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Nova Cat Ears";
		model="82nd_Armor_New\data\armors\fw\cat_ears.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Nova\82nd_cat_nova.paa",
			"82nd_Customs\data\Nova\82nd_cat_nova.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\cat_ears.rvmat",
			"82nd_Customs\data\Nova\cat_ears_speakers_nova.rvmat"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="82nd_Armor_New\data\armors\fw\cat_ears.p3d";
			modelOff="82nd_Armor_New\data\armors\fw\cat_ears.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Nova\82nd_cat_nova.paa",
				"82nd_Customs\data\Nova\82nd_cat_nova.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"82nd_Armor_New\data\armors\fw\cat_ears.rvmat",
				"82nd_Customs\data\Nova\cat_ears_speakers_nova.rvmat"
			};
			mass=1;
		};
	};
	class 82nd_ScarfHMD_SmartDown_BLK: OPTRE_NVG
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] SmartScarf™ (NVG)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_BLK.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_BLK.paa"
			};
			mass=2;
		};
	};
	class 82nd_ScarfHMD_SmartUp_BLK: OPTRE_NVG
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] SmartScarf™ (Up + NVG)";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_BLK.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_BLK.paa"
			};
			mass=2;
		};
	};
	class 82nd_ScarfHMD_SmartDown_DES: OPTRE_NVG
	{
		scope=2;
		scopeArsenal=1;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] SmartScarf™ (NVG)";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_DES.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_DES.paa"
			};
			mass=2;
		};
	};
	class 82nd_ScarfHMD_SmartUp_DES: OPTRE_NVG
	{
		scope=2;
		scopeArsenal=1;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] SmartScarf™ (Up + NVG)";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_DES.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_DES.paa"
			};
			mass=2;
		};
	};
	class 82nd_ScarfHMD_SmartDown_SNO: OPTRE_NVG
	{
		scope=2;
		scopeArsenal=1;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] SmartScarf™ (NVG)";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_SNO.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_SNO.paa"
			};
			mass=2;
		};
	};
	class 82nd_ScarfHMD_SmartUp_SNO: OPTRE_NVG
	{
		scope=2;
		scopeArsenal=1;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] SmartScarf™ (Up + NVG)";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_SNO.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_SNO.paa"
			};
			mass=2;
		};
	};
	class 82nd_ScarfHMD_SmartDown_WDL: OPTRE_NVG
	{
		scope=2;
		scopeArsenal=1;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] SmartScarf™ (NVG)";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_WDL.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_WDL.paa"
			};
			mass=2;
		};
	};
	class 82nd_ScarfHMD_SmartUp_WDL: OPTRE_NVG
	{
		scope=2;
		scopeArsenal=1;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] SmartScarf™ (Up + NVG)";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_WDL.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			modelOff="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_WDL.paa"
			};
			mass=2;
		};
	};
	class 82nd_S1ONIR_Helm_BLK: OPTRE_UNSC_Recon_Helmet
	{
		author="Mesa";
		displayName="[MM] S1/ONI/R";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\ONI\82nd_S1ONIR_Helm_BLK",
			"82nd_Armor_New\data\armors\ONI\82nd_S1ONIR_Visor_BLK"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\ONI\82nd_S1ONIR_Helm_BLK",
				"82nd_Armor_New\data\armors\ONI\82nd_S1ONIR_Visor_BLK"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_Helm_BLK_dp: OPTRE_UNSC_Recon_Helmet_dp
	{
		author="Mesa";
		displayName="[MM] S1/ONI/R (dp)";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
		picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\ONI\82nd_S1ONIR_Helm_BLK",
			"V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Armor_New\data\armors\ONI\82nd_S1ONIR_Helm_BLK",
				"V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				""
			};
		};
	};
	class 82nd_S1ONIR_Mesa_BLK: 82nd_S1ONIR_Helm_BLK
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_BLK",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_BLK",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_Mesa_BLK_dp: 82nd_S1ONIR_Helm_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (dp)";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_BLK",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_BLK",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_Mesa_DES: 82nd_S1ONIR_Mesa_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Desert)";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_DES",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_DES",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_Mesa_DES_dp: 82nd_S1ONIR_Mesa_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Desert Depolarized)";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_DES",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_DES",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_Mesa_SNO: 82nd_S1ONIR_Mesa_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Snow)";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_SNO",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_SNO",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_Mesa_SNO_dp: 82nd_S1ONIR_Mesa_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Snow Depolarized)";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_SNO",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_SNO",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_Mesa_WDL: 82nd_S1ONIR_Mesa_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Woodland)";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_WDL",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_WDL",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_Mesa_WDL_dp: 82nd_S1ONIR_Mesa_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Woodland Depolarized)";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_WDL",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Mesa_WDL",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_MesaMed_BLK: 82nd_S1ONIR_Helm_BLK
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Medic)";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_BLK",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_BLK",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_MesaMed_BLK_dp: 82nd_S1ONIR_Helm_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Medic) (dp)";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_BLK",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_BLK",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_MesaMed_DES: 82nd_S1ONIR_MesaMed_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Medic) (Desert)";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_DES",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_DES",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_MesaMed_DES_dp: 82nd_S1ONIR_MesaMed_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Medic) (Desert Depolarized)";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_DES",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_DES",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_MesaMed_SNO: 82nd_S1ONIR_MesaMed_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Medic) (Snow)";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_SNO",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_SNO",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_MesaMed_SNO_dp: 82nd_S1ONIR_MesaMed_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Medic) (Snow Depolarized)";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_SNO",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_SNO",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_MesaMed_WDL: 82nd_S1ONIR_MesaMed_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Medic) (Woodland)";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_WDL",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_WDL",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_Mesa"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_S1ONIR_MesaMed_WDL_dp: 82nd_S1ONIR_MesaMed_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[82ndTEAM] S1/ONI/R Mesa (Medic) (Woodland Depolarized)";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
		picture="82nd_Customs\data\icons\custom_sex_01.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_WDL",
			"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"82nd_Customs\data\Mesa\82nd_S1ONIR_MesaMed_WDL",
				"82nd_Customs\data\Mesa\82nd_S1ONIR_Visor_MesaDP"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"
			};
		};
	};
	class 82nd_M52D_Stealth_BLK: 82nd_M52A_Armor_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] M52D (Stealth)";
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			modelSides[]={6};
			containerClass="Supply300";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_BR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_BLK.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_BLK.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_BLK.paa",
			"",
			"82nd_Armor_New\data\armors\temp\82nd_M52D_Rifleman_BLK.paa"
		};
	};
	class 82nd_M52D_Stealth_DES: 82nd_M52D_Stealth_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52D (Stealth DES)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_DES.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_DES.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_DES.paa",
			"",
			"82nd_Armor_New\data\armors\temp\82nd_M52D_Rifleman_DES.paa"
		};
	};
	class 82nd_M52D_Stealth_SNO: 82nd_M52D_Stealth_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52D (Stealth SNO)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_SNO.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_SNO.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_SNO.paa",
			"",
			"82nd_Armor_New\data\armors\temp\82nd_M52D_Rifleman_SNO.paa"
		};
	};
	class 82nd_M52D_Stealth_WDL: 82nd_M52D_Stealth_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] M52D (Stealth WDL)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestUnder_WDL.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_VestArmor_WDL.paa",
			"82nd_Armor_New\data\armors\M52A\82nd_M52A_Rifleman_Leg_WDL.paa",
			"",
			"82nd_Armor_New\data\armors\temp\82nd_M52D_Rifleman_WDL.paa"
		};
	};
	class 82nd_CH252D_Stealth_BLK: 82nd_CH252D_Helmet_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] CH252D (Stealth)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\temp\82nd_CH252D_Blank_BLK.paa",
			"82nd_Armor_New\data\armors\ODST\generic\ODST_Helmet_Visor_black_co"
		};
	};
	class 82nd_CH252D_Stealth_BLK_dp: 82nd_CH252D_Helmet_Base_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252D (Stealth DP)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\temp\82nd_CH252D_Blank_BLK.paa",
			"82nd_Armor_New\data\armors\ODST\CH252D_DP_CO.paa"
		};
	};
	class 82nd_CH252D_Stealth_DES: 82nd_CH252D_Stealth_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252D (Stealth DES)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\temp\82nd_CH252D_Blank_DES.paa",
			"82nd_Armor_New\data\armors\ODST\generic\ODST_Helmet_Visor_black_co"
		};
	};
	class 82nd_CH252D_Stealth_DES_dp: 82nd_CH252D_Stealth_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252D (Stealth DES DP)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\temp\82nd_CH252D_Blank_DES.paa",
			"82nd_Armor_New\data\armors\ODST\CH252D_DP_CO.paa"
		};
	};
	class 82nd_CH252D_Stealth_SNO: 82nd_CH252D_Stealth_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252D (Stealth SNO)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\temp\82nd_CH252D_Blank_SNO.paa",
			"82nd_Armor_New\data\armors\ODST\generic\ODST_Helmet_Visor_black_co"
		};
	};
	class 82nd_CH252D_Stealth_SNO_dp: 82nd_CH252D_Stealth_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252D (Stealth SNO DP)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\temp\82nd_CH252D_Blank_SNO.paa",
			"82nd_Armor_New\data\armors\ODST\CH252D_DP_CO.paa"
		};
	};
	class 82nd_CH252D_Stealth_WDL: 82nd_CH252D_Stealth_BLK
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252D (Stealth WDL)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\temp\82nd_CH252D_Blank_WDL.paa",
			"82nd_Armor_New\data\armors\ODST\generic\ODST_Helmet_Visor_black_co"
		};
	};
	class 82nd_CH252D_Stealth_WDL_dp: 82nd_CH252D_Stealth_BLK_dp
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] CH252D (Stealth WDL DP)";
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\temp\82nd_CH252D_Blank_WDL.paa",
			"82nd_Armor_New\data\armors\ODST\CH252D_DP_CO.paa"
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class camoWL
	{
		init = "call compile preprocessFileLineNumbers 'camoWL_Key.sqf'";
	};
};
class CfgFunctions
{
	class personalizeArmor
	{
		class functions
		{
			file="82nd_Armor_New\data\functions";
			class camoChange
			{
			};
			class vestChange
			{
			};
			class uniformChange
			{
			};
		};
	};
	class Keys
	{
		class KeyInt
		{
			class camoWL
			{
				file="\82nd_Armor_New\camoWL_Key.sqf";
				postInit=1;
			};
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class Personalization
			{
                displayName="Personalization";
                condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                statement="";
                icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_blank.paa";
                class Camo_Select
				{
                    displayName="Change Camouflage";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "\82nd_Armor_New\data\ui\82nd_ui_camo_menu.paa";
                    class Urban
                    {
                        displayName="Urban";
                        condition="true";
                        statement="[player, ""Urban""] call personalizeArmor_fnc_camoChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_camo_BLK.paa";
                    };
                    class Desert
                    {
                        displayName="Desert";
                        condition="true";
                        statement="[_player, ""Desert""] call personalizeArmor_fnc_camoChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_camo_DES.paa";
                    };
                    class Winter
                    {
                        displayName="Winter";
                        condition="true";
                        statement="[_player, ""Winter""] call personalizeArmor_fnc_camoChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_camo_SNO.paa";
                    };
                    class Woodland
                    {
                        displayName="Woodland";
                        condition="true";
                        statement="[_player, ""Woodland""] call personalizeArmor_fnc_camoChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_camo_WDL.paa";
                    };
                };
				class Vest_Select_Air
                {
                    displayName="Change Vests (Air)";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airassault.paa";
                    class AirRifleman
                    {
                        displayName="Air Assault";
                        condition="true";
                        statement="[player, ""AirAssault""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airassault.paa";
                    };
                    class AirCorpsman
                    {
                        displayName="Corpsman";
                        condition="true";
                        statement="[player, ""AirMedic""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airmed.paa";
                    };
                    class AirMG
                    {
                        displayName="Autorifleman";
                        condition="true";
                        statement="[player, ""AirMG""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airauto.paa";
                    };
                    class AirGrenadier
                    {
                        displayName="Grenadier";
                        condition="true";
                        statement="[player, ""AirGrenadier""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airgren.paa";
                    };
                    class AirMarksman
                    {
                        displayName="Marksman";
                        condition="true";
                        statement="[player, ""AirMarksman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airmark.paa";
                    };
                    class AirBreacher
                    {
                        displayName="Breacher";
                        condition="true";
                        statement="[player, ""AirBreacher""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airbrch.paa";
                    };
                    class AirTeamLead
                    {
						displayName="Team Lead";
						condition="true";
						statement="[player, ""AirTeamLead""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airlead.paa";
					};
                };
				class Vest_Select_Tyr
                {
                    displayName="Change Vests (Tyr)";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_blank.paa";
                    class TyrRifleman
                    {
                        displayName="Rifleman";
                        condition="true";
                        statement="[player, ""TyrRifleman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_blank.paa";
                    };
                    class TyrCorpsman
                    {
                        displayName="Corpsman";
                        condition="true";
                        statement="[player, ""TyrCorpsman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_corpsman.paa";
                    };
                    class TyrMG
                    {
                        displayName="Autorifleman";
                        condition="true";
                        statement="[player, ""TyrMG""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_autorifleman.paa";
                    };
                    class TyrGrenadier
                    {
                        displayName="Grenadier";
                        condition="true";
                        statement="[player, ""TyrGrenadier""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_grenadier.paa";
                    };
                    class TyrMarksman
                    {
                        displayName="Marksman";
                        condition="true";
                        statement="[player, ""TyrMarksman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_marksman.paa";
                    };
                    class TyrBreacher
                    {
                        displayName="Breacher";
                        condition="true";
                        statement="[player, ""TyrBreacher""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_breacher.paa";
                    };
                    class TyrTeamLead
                    {
						displayName="Team Lead";
						condition="true";
						statement="[player, ""TyrTeamLead""] call personalizeArmor_fnc_vestChange;";
						icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_teamlead.paa";
					};
                };
				class Vest_Select_Slp
                {
                    displayName="Change Vests (Sleipnir)";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_blank.paa";
                    class SlpRifleman
                    {
                        displayName="Rifleman";
                        condition="true";
                        statement="[player, ""SlpRifleman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_blank.paa";
                    };
                    class SlpCorpsman
                    {
                        displayName="Corpsman";
                        condition="true";
                        statement="[player, ""SlpCorpsman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_corpsman.paa";
                    };
                    class SlpMG
                    {
                        displayName="Autorifleman";
                        condition="true";
                        statement="[player, ""SlpMG""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_autorifleman.paa";
                    };
                    class SlpGrenadier
                    {
                        displayName="Grenadier";
                        condition="true";
                        statement="[player, ""SlpGrenadier""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_grenadier.paa";
                    };
                    class SlpMarksman
                    {
                        displayName="Marksman";
                        condition="true";
                        statement="[player, ""SlpMarksman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_marksman.paa";
                    };
                    class SlpBreacher
                    {
                        displayName="Breacher";
                        condition="true";
                        statement="[player, ""SlpBreacher""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_breacher.paa";
                    };
                    class SlpTeamLead
                    {
						displayName="Team Lead";
						condition="true";
						statement="[player, ""SlpTeamLead""] call personalizeArmor_fnc_vestChange;";
						icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_teamlead.paa";
					};
                };
				class Vest_Select_Aux
				{
					displayName="Change Vests (Branches)";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_crew.paa";
					class Crew
					{
						displayName="Crew";
						condition="true";
						statement="[player, ""Crew""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_crew.paa";
					};
					class Aviation
					{
						displayName="Aviation";
						condition="true";
						statement="[player, ""Aviation""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_aviation.paa";
					};
					class PJ
					{
						displayName="Aviaiton PJ";
						condition="true";
						statement="[player, ""PJ""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_aviation2.paa";
					};
				};
				class Uniform_Select
				{
                    displayName="Change Uniform";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "\82nd_Armor_New\data\ui\82nd_ui_bdu_base.paa";
                    class Base
                    {
                        displayName="Default";
                        condition="true";
                        statement="[player, ""Base""] call personalizeArmor_fnc_uniformChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_bdu_base.paa";
                    };
                    class Rolled
                    {
                        displayName="Rolled Sleeves";
                        condition="true";
                        statement="[_player, ""Rolled""] call personalizeArmor_fnc_uniformChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_bdu_rolled.paa";
					};
					class Short
					{
						displayName="Short Sleeves";
						condition="true";
						statement="[_player, ""Short""] call personalizeArmor_fnc_uniformChange;";
						icon = "\82nd_Armor_New\data\ui\82nd_ui_bdu_short.paa";
                    };
                };
			};
			class enableCamo
			{
				displayName="Prime Cloak";
				condition="(vest player) in [""82nd_M52D_Stealth_BLK""]";
				statement="[_this select 0] spawn cloakShit_fnc_giveCloak";
				class disableCamo
				{
					displayName="Discharge Cloak";
					condition="(vest player) in [""82nd_M52D_Stealth_BLK""]";
					statement="[_this select 0] spawn cloakShit_fnc_removeCloak";
				};
			};
		};
	};
	class B_officer_F;
	class 82nd_BDU_Morph_UNI: B_officer_F
	{
		faction="C82nd_Viking";
		side=1;
		displayName="82nd Lad";
		model="\OPTRE_UNSC_Units\Army\uniform.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan",
			"A_BaseLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Uniforms\82nd_BDU_All_Base_BLK.paa",
			"82nd_Armor_New\data\armors\Uniforms\82nd_BDU_All_Base_BLK.paa"
		};
		uniformclass="82nd_BDU_Morph_BASE";
		weapons[]=
		{
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"Put",
			"Throw"
		};
		items[]=
		{
			""
		};
		respawnItems[]=
		{
			""
		};
		linkedItems[]=
		{
			""
		};
		respawnLinkedItems[]=
		{
			""
		};
		backpack="";
	};
	class 82nd_BDUR_Morph_UNI: B_officer_F
	{
		faction="C82nd_Viking";
		side=1;
		displayName="82nd Lad";
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan",
			"A_BaseLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Uniforms\82nd_BDU_All_Rolled_BLK.paa",
			"82nd_Armor_New\data\armors\Uniforms\82nd_BDU_All_Rolled_BLK.paa"
		};
		uniformclass="82nd_BDU_Morph_ROLLED";
		weapons[]=
		{
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"Put",
			"Throw"
		};
		items[]=
		{
			""
		};
		respawnItems[]=
		{
			""
		};
		linkedItems[]=
		{
			""
		};
		respawnLinkedItems[]=
		{
			""
		};
		backpack="";
	};
	class 82nd_BDUS_Morph_UNI: B_officer_F
	{
		faction="C82nd_Viking";
		side=1;
		displayName="82nd Lad";
		model="\OPTRE_UNSC_Units\Army\uniform_short";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan",
			"A_BaseLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Uniforms\82nd_BDU_All_Rolled_BLK.paa",
			"82nd_Armor_New\data\armors\Uniforms\82nd_BDU_All_Rolled_BLK.paa"
		};
		uniformclass="82nd_BDU_Morph_Short";
		weapons[]=
		{
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"Put",
			"Throw"
		};
		items[]=
		{
			""
		};
		respawnItems[]=
		{
			""
		};
		linkedItems[]=
		{
			""
		};
		respawnLinkedItems[]=
		{
			""
		};
		backpack="";
	};
};
class CfgGlasses
{
	class OPTRE_HUD_Glasses;
	class 82nd_Shemagh_Purple: OPTRE_HUD_Glasses
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] Shemagh (Purple)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghpurple_up.paa"
		};
	};
	class 82nd_Shemagh_Purple_Up: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] Shemagh (Purple Up)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghpurple_up.paa"
		};
	};
	class 82nd_Shemagh_Red_Up: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] Shemagh (Red Up)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghred_up.paa"
		};
	};
	class 82nd_Shemagh_Red: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] Shemagh (Red)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghred_up.paa"
		};
	};
	class 82nd_Shemagh_Cyan: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] Shemagh (Cyan)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghcyan_up.paa"
		};
	};
	class 82nd_Shemagh_Cyan_Up: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] Shemagh (Cyan Up)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghcyan_up.paa"
		};
	};
	class 82nd_Shemagh_Gold: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] Shemagh (Gold)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghgold_up.paa"
		};
	};
	class 82nd_Shemagh_Gold_Up: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] Shemagh (Gold Up)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghgold_up.paa"
		};
	};
	class 82nd_Shemagh_Pink: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] Shemagh (Pink)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghpink_up.paa"
		};
	};
	class 82nd_Shemagh_Pink_Up: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] Shemagh (Pink Up)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghpink_up.paa"
		};
	};
	class 82nd_Shemagh_Tardis: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] Shemagh (Tardis)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghtardis_up.paa"
		};
	};
	class 82nd_Shemagh_Tardis_Up: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] Shemagh (Tardis Up)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghtardis_up.paa"
		};
	};
	class 82nd_Shemagh_Green: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] Shemagh (Green)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghgreen_up.paa"
		};
	};
	class 82nd_Shemagh_Green_Up: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] Shemagh (Green Up)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghgreen_up.paa"
		};
	};
	class 82nd_Shemagh_White: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] Shemagh (White)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghwhite_up.paa"
		};
	};
	class 82nd_Shemagh_White_Up: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] Shemagh (White Up)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghwhite_up.paa"
		};
	};
	class 82nd_Shemagh_Black: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] Shemagh (Black)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghblack_up.paa"
		};
	};
	class 82nd_Shemagh_Black_Up: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] Shemagh (Black Up)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\shemaghblack_up.paa"
		};
	};
	class 82nd_Shawggles: 82nd_Shemagh_Purple
	{
		scope=2;
		displayName="[MM] Shawggles";
		model="\A3\characters_f_beta\heads\glasses\g_shades_green";
		picture="\A3\Characters_F\data\ui\icon_g_shades_green_CA.paa";
		optreHUDStyle="Glasses";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\Shaw\shawggles.paa"
		};
	};
	class 82nd_Shemagh_OD: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] Shemagh (OD)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"LM_OPCAN3.0\BLU\UNSC\G\Shemagh_CO.paa"
		};
	};
	class 82nd_Shemagh_OD_Up: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] Shemagh (OD Up)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"LM_OPCAN3.0\BLU\UNSC\G\Shemagh_CO.paa"
		};
	};
	class 82nd_Shemagh_Tan: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] Shemagh (Tan)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"LM_OPCAN3.0\BLU\UNSC\G\Shemagh_COD.paa"
		};
	};
	class 82nd_Shemagh_Tan_Up: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] Shemagh (Tan Up)(HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"LM_OPCAN3.0\BLU\UNSC\G\Shemagh_COD.paa"
		};
	};
	class Crayon: OPTRE_HUD_Glasses
	{
		author="Moose and Indie";
		displayName="Crayon";
		scope=0;
		scopeArsenal=1;
		mass=4;
		model="\82nd_Armor_New\data\armors\fw\Crayon.p3d";
		descriptionShort="Edible snack MRE.";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Crayon_texture.paa"
		};
	};
	class 82nd_Crayon_Lime: Crayon
	{
		scope=2;
		scopeArsenal=2;
		displayName="[MM] MRE Lime";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Crayon_LIME.paa"
		};
	};
	class 82nd_Crayon_Grape: Crayon
	{
		scope=2;
		scopeArsenal=2;
		displayName="[MM] MRE Grape";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Crayon_PRP.paa"
		};
	};
	class 82nd_Crayon_Cherry: Crayon
	{
		scope=2;
		scopeArsenal=2;
		displayName="[MM] MRE Cherry";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Crayon_RED.paa"
		};
	};
	class 82nd_Crayon_Orange: Crayon
	{
		scope=2;
		scopeArsenal=2;
		displayName="[MM] MRE Orange";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Crayon_ORNG.paa"
		};
	};
	class 82nd_Crayon_Blue: Crayon
	{
		scope=2;
		scopeArsenal=2;
		displayName="[MM] MRE Blueberry";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Crayon_BLU.paa"
		};
	};
	class 82nd_Scarf_SmartDown_BLK: OPTRE_HUD_Glasses
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] SmartScarf™ (HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_BLK.paa"
		};
	};
	class 82nd_Scarf_SmartUp_BLK: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] SmartScarf™ (Up + HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_BLK.paa"
		};
	};
	class 82nd_Scarf_SmartDown_DES: OPTRE_HUD_Glasses
	{
		scope=2;
		scopeArsenal=1;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] SmartScarf™ (HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_DES.paa"
		};
	};
	class 82nd_Scarf_SmartUp_DES: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] SmartScarf™ (Up + HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_DES.paa"
		};
	};
	class 82nd_Scarf_SmartDown_SNO: OPTRE_HUD_Glasses
	{
		scope=2;
		scopeArsenal=1;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] SmartScarf™ (HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_SNO.paa"
		};
	};
	class 82nd_Scarf_SmartUp_SNO: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] SmartScarf™ (Up + HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_SNO.paa"
		};
	};
	class 82nd_Scarf_SmartDown_WDL: OPTRE_HUD_Glasses
	{
		scope=2;
		scopeArsenal=1;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh.p3d";
		displayName="[MM] SmartScarf™ (HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_WDL.paa"
		};
	};
	class 82nd_Scarf_SmartUp_WDL: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		model="LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";
		displayName="[MM] SmartScarf™ (Up + HUD)";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\82nd_Scarf_Smart_WDL.paa"
		};
	};
	class 82nd_Bala_BeastNoG_BLK: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Balaclava (Beast)";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Beast_BLK",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_BeastNoG_DES: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] Balaclava (Beast)";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Beast_DES",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_BeastNoG_SNO: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] Balaclava (Beast)";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Beast_SNO",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_BeastNoG_WDL: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] Balaclava (Beast)";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Beast_WDL",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_BeastG_BLK: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Balaclava with Goggles (Beast)";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Beast_BLK",
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Goggle_BLK_ca"
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_BeastG_DES: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] Balaclava with Goggles (Beast)";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Beast_DES",
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Goggle_BLK_ca"
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_BeastG_SNO: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] Balaclava with Goggles (Beast)";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Beast_SNO",
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Goggle_BLK_ca"
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_BeastG_WDL: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] Balaclava with Goggles (Beast)";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Beast_WDL",
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Goggle_BLK_ca"
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_NoG_BLK: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Balaclava";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Mask_BLK",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_NoG_DES: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] Balaclava";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Mask_DES",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_NoG_SNO: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] Balaclava";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Mask_SNO",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_NoG_WDL: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] Balaclava";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Mask_WDL",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_G_BLK: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=2;
		author="Mesa";
		displayName="[MM] Balaclava with Goggles";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Mask_BLK",
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Goggle_BLK_ca"
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_G_DES: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] Balaclava with Goggles";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Mask_DES",
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Goggle_BLK_ca"
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_G_SNO: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] Balaclava with Goggles";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Mask_SNO",
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Goggle_BLK_ca"
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
	class 82nd_Bala_G_WDL: 82nd_Shemagh_Purple
	{
		scope=2;
		scopeArsenal=1;
		author="Mesa";
		displayName="[MM] Balaclava with Goggles";
		ace_resistance=2;
		ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Mask_WDL",
			"82nd_Armor_New\data\armors\fw\Bala\82nd_Bala_Goggle_BLK_ca"
		};
		hiddenSelectionsMaterials[]=
		{
			"82nd_Armor_New\data\armors\fw\V_BGH.rvmat",
			"",
			""
		};
	};
};
class CfgOptreHudSchemes
{
	class Glasses
	{
		class MainDialogs
		{
			82nd_Shawggles="OPTRE_MarrineGlasses_green";
		};
	};
};
