class CfgPatches {
	class MM_CircularDefence {
		name="MMSOC Yeeter";
		requiredAddons[]= {
			"OPTRE_Weapons",
			"OPTRE_FC_Weapons"
		};
		units[]= {
			"MM_Bubble_Shield"
		};
		weapons[]={};
		magazines[]= {
			"MM_Bubble_Mag"
		};
		ammo[]= {
			"MM_Bubbleshield_Ammo"
		};
		requiredVersion=0.1;
	};
};
class Extended_PostInit_EventHandlers {
	class yeeter {
		init="call compile preprocessFileLineNumbers 'MesaYeeter_key.sqf'";
	};
};
class cfgFunctions {
	class Throw {
		class functions {
			file="MM_CircularDefence\functions";
			class bubbleshield_throw {};
		};
	};
	class Keys {
		class KeyInt {
			class ThrowPostInit {
				file="\MM_CircularDefence\MesaYeeter_key.sqf";
				postInit=1;
			};
		};
	};
};
class cfgAmmo {
	class ACE_SatchelCharge_Remote_Ammo_Thrown;
	class MM_Bubbleshield_Ammo: ACE_SatchelCharge_Remote_Ammo_Thrown {
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		defaultMagazine="MM_Bubble_Mag";
		model="\MM_CircularDefence\data\bubble\bubbleprojectile.p3d";
		explosive=0;
		explosionType="";
		mineModelDisabled="\MM_CircularDefence\data\bubble\bubbleprojectile.p3d";
		triggerWhenDestroyed=0;
		explosionEffects="";
		CraterEffects="";
		soundHit1[]= {
			"",
			0,
			0,
			0
		};
		multiSoundHit[]={};
		mineInconspicuousness=9999;
		timetolive=15;
		explosionTime=6;
		effectFlare="";
		effectsFire="";
		effectsMissile="";
		effectsSmoke="";
		explosionEffectsDir="";
		explosionForceCoef="";
		explosionPos="";
		explosionEffectsRadius=0;
		explosionSoundEffect="";
		SoundSetExplosion[]= {
			""
		};
		class CamShakeExplode {
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
	};
};
class cfgMagazines
{
	class OPTRE_M9_Frag;
	class MM_Bubble_Mag: OPTRE_M9_Frag {
		scope=2;
		scopeArsenal=2;
		displayName="[MM] Z-4190 TPE/SS";
		displayNameShort="Throwable Bubble Shield";
		descriptionShort="Throwable Bubble Shield";
		type="256";
		allowedSlots[]={901,701};
		ammo="MM_Bubbleshield_Ammo";
		model="\MM_CircularDefence\data\bubble\bubbleprojectile.p3d";
		mass=15;
		count=1;
		sound[]= {
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			10
		};
		initSpeed=12;
	};
};
class cfgWeapons {
	class Grenadelauncher;
	class ThrowMuzzle;
	class Throw: Grenadelauncher {
		muzzles[]+= {
			"MM_Bubble_Muzzle"
		};
		class MM_Bubble_Muzzle: ThrowMuzzle {
			reloadtime=0;
			magazines[]= {
				"MM_Bubble_Mag"
			};
			class EventHandlers {
				fired="_this call Throw_fnc_bubbleshield_throw;";
			};
		};
	};
};
class cfgVehicles {
	class ThingX;
	class Items_base_F: ThingX {
		class DestructionEffects;
	};
	class House;
	class House_F: House {
		class DestructionEffects;
	};
	class MM_Bubble_Shield: House_F {
		scope=2;
		scopeCurator=2;
		armor=999999;
		armorStructural=999;
		displayName="[MM] Bubble Shield";
		model="\MM_CircularDefence\data\bubble\bubbledeployed.p3d";
		author="Saint";
		editorCategory="MM_Battalion";
		editorSubcategory="MM_Props";
	};
};
