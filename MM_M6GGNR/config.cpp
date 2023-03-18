class cfgPatches {
	class MM_M6GGNR {
		authors[]={
			"Mesa",
			"Saint"
		};
		units[]={};
		weapons[]={
			"MM_M6GGNR"
		};
		magazines[]={
			"MM_SpLaser_Battery"
		};
		ammo[]={
			"MM_SpLaserAmmo"
		};
		requiredversion=0.1;
		requiredAddons[]={
			"OPTRE_Core",
			"OPTRE_Weapons"
		};
	};
};

class cfgFunctions
{};
class cfgWeaponCursors {
	class throw;
	class MM_Splaser: throw 	{
		texture="\MM_M6GGNR\Splaser\data\ui\splaser_reticle.paa";
	};
};
class cfgAmmo {
	class OPTRE_M41_Rocket_HEAT;
	class MM_SpLaserAmmo: OPTRE_M41_Rocket_HEAT {
		scope=2;
		scopeArsenal=2;
		caliber=1;
		hit=1250;
		indirectHit=250;
		explosive=0.8;
		indirectHitRange=3.5;
		fuseDistance=1;
		typicalSpeed=1500;
		maxSpeed=1500;
		model="MM_M6GGNR\Weapons\data\spartan_laser.p3d";
	};
};
class cfgMagazines {
	class CA_Magazine;
	class MM_SpLaser_Battery: CA_Magazine {
		scope=2;
		scopeArsenal=2;
		displayName="M6 Laser Battery";
		displayNameShort="Laser";
		ammo="MM_SpLaserAmmo";
		model="\OPTRE_Weapons\Ammo\boxAmmo.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTexturesp[]={
			"OPTRE_Weapons\Ammo\data\SpartanLaser_Ammo_CO.paa"
		};
		initSpeed=1500;
		count=4;
		muzzleImpulseFactor[]={0,0};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class cfgWeapons {
	class OPTRE_UnguidedLauncher_Base;
	class MM_M6GGNR: OPTRE_UnguidedLauncher_Base {
		author="Mesa";
		scope=2;
		scopeArsenal=2;
		displayname="[MM] M6V G/GNR";
		descriptionshort="M6V Grindel/Galilean Non-Linear Rifle";
		magazines[]={
			"MM_SpLaser_Battery"
		};
		magazineWell[]={};
		picture="\MM_M6GGNR\data\ui\splaser.paa";
		model="\MM_M6GGNR\data\spartan_laser.p3d";
		handAnim[]={
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\Splaser\data\spartan_laser.rtm"
		};
		modelOptics[]={
			"\MM_M6GGNR\splaser\data\ui\M6V_Optic_2x.p3d",
			"\MM_M6GGNR\splaser\data\ui\M6V_Optic_4x.p3d",
			"\MM_M6GGNR\splaser\data\ui\M6V_Optic_10x.p3d"
		};
		baseWeapon="OPTRE_M6GGNR";
		cursor="MM_Splaser";
		pictureWire="\MM_M6GGNR\Splaser\data\ui\splaserwire.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses="OPTRE_ODST_HUD_AmmoCount_AR";
		Eye="OPTRE_ODST_HUD_AmmoCount_AR";
		HUD_BulletInARows=4;
		HUD_TotalPosibleBullet=4;
		ace_overpressure_angle=0;
		ace_overpressure_range=0;
		ace_overpressure_damage=0;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"MM_M6GGNR\splaser\data\Spartan_Laser_Camo1_co.paa",
			"MM_M6GGNR\splaser\data\Spartan_Laser_Camo2_co.paa"
		};
		class WeaponSlotsInfo {
			mass=150;
		};
		class GunParticles {};
		class OpticsModes {
			class StepScope {
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]={
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=0;
				opticsZoomMin=0.125;
				opticsZoomMax=0.041999999;
				opticsZoomInit=0.125;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]={
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={0,1};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.125,0.052499998,0.041999999};
				discreteInitIndex=0;
			};
		};
		modes[]={
			"Single"
		};
		recoil="Empty";
		class Single: Mode_SemiAuto {
			sounds[]= {
				"StandardSound"
			};
			class StandardSound {
				begin1[]={
					"OPTRE_Weapons\Vehicle\data\sounds\Laser_1.wss",
					2.5,
					1,
					1500
				};
				soundBegin[]={
					"begin1",
					1
				};
			};
			soundContinuous=0;
			aiRateOfFire=1;
			reloadTime=90;
			magazineReloadTime=20;
			autoReload=1;
			minRange=50;
			minRangeProbab=0.40000001;
			midRange=1000;
			midRangeProbab=0.40000001;
			maxRange=1500;
			maxRangeProbab=0.2;
		};
		canLock=0;
		weaponLockDelay=2;
		weaponLockSystem="2 + 16";
		cmImmunity=0.25;
		lockAcquire=1;
		lockingTargetSound[]={
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",
			0.31622776,
			1
		};
		lockedTargetSound[]={
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",
			0.31622776,
			2.5
		};
	};
};