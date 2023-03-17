class cfgPatches
{
	class OPTRE_Weapons_Splaser
	{
		author="Mesa";
		units[]={};
		weapons[]=
		{
			"OPTRE_M6GNGNR"
		};
		magazines[]=
		{
			"OPTRE_SpLaser_Battery2"
		};
		ammo[]=
		{
			"OPTRE_SpLaserAmmo2"
		};
		requiredversion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core"
		};
	};
};

class cfgFunctions
{};
class cfgWeaponCursors
{
	class throw;
	class OPTRE_Splaser2: throw
	{
		texture="\OPTRE_Weapons\Splaser\data\ui\splaser_reticle.paa";
	};
};
class cfgAmmo
{
	class OPTRE_M41_Rocket_HEAT;
	class OPTRE_SpLaserAmmo2: OPTRE_M41_Rocket_HEAT
	{
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
		model="OPTRE_Weapons\Weapons\data\spartan_laser.p3d";
	};
};
class cfgMagazines
{
	class CA_Magazine;
	class OPTRE_SpLaser_Battery2: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		displayName="M6 Laser Battery";
		displayNameShort="Laser";
		ammo="OPTRE_SpLaserAmmo2";
		model="\OPTRE_Weapons\Ammo\boxAmmo.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTexturesp[]=
		{
			"OPTRE_Weapons\Ammo\data\SpartanLaser_Ammo_CO.paa"
		};
		initSpeed=1500;
		count=4;
		muzzleImpulseFactor[]={0,0};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class cfgWeapons
{
	class OPTRE_UnguidedLauncher_Base;
	class OPTRE_M6GNGNR: OPTRE_UnguidedLauncher_Base
	{
		author="Article 2 Studios";
		dlc="Operation: TREBUCHET";
		scope=2;
		scopeArsenal=2;
		displayname="M6V GN/GNR";
		descriptionshort="M6V Grindel/Galilean Non-Linear Rifle";
		magazines[]=
		{
			"OPTRE_SpLaser_Battery2"
		};
		magazineWell[]={};
		picture="\OPTRE_splaser\data\ui\splaser.paa";
		model="\OPTRE_Splaser\data\spartan_laser.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\Splaser\data\spartan_laser.rtm"
		};
		modelOptics[]=
		{
			"\OPTRE_Weapons\splaser\data\ui\M6V_Optic_2x.p3d",
			"\OPTRE_Weapons\splaser\data\ui\M6V_Optic_4x.p3d",
			"\OPTRE_Weapons\splaser\data\ui\M6V_Optic_10x.p3d"
		};
		baseWeapon="OPTRE_M6GNGNR";
		cursor="OPTRE_Splaser2";
		pictureWire="\OPTRE_Weapons\Splaser\data\ui\splaserwire.paa";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses="OPTRE_ODST_HUD_AmmoCount_AR";
		Eye="OPTRE_ODST_HUD_AmmoCount_AR";
		HUD_BulletInARows=4;
		HUD_TotalPosibleBullet=4;
		ace_overpressure_angle=0;
		ace_overpressure_range=0;
		ace_overpressure_damage=0;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Weapons\splaser\data\Spartan_Laser_Camo1_co.paa",
			"OPTRE_Weapons\splaser\data\Spartan_Laser_Camo2_co.paa"
		};
		class WeaponSlotsInfo
		{
			mass=150;
		};
		class GunParticles {};
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
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
				visionMode[]=
				{
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
		modes[]=
		{
			"Single"
		};
		recoil="Empty";
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"OPTRE_Weapons\Vehicle\data\sounds\Laser_1.wss",
					2.5,
					1,
					1500
				};
				soundBegin[]=
				{
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
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",
			0.31622776,
			2.5
		};
	};
};