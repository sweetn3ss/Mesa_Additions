class MM_Bullfrog_Jump_Sound
{
	sound="Project_Airborne_Jump_SoundSFX";
	scope = 2;
};

class Bag_Base;
class MM_Bullfrog_Base : Bag_Base {
	author = "Daisy";
	model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
	displayName="[MMB] S-12 SOLA (Base)";
	picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
	hiddenSelectionsTextures[] = { "\A3\weapons_f\ammoboxes\bags\data\backpack_compact_digi_co.paa" };
	scope=2;
	scopeArsenal=2;
	maximumLoad=300;
	mass=60;
	isJetpack=1;
	shortType="omni";
	longType="omni";
	maxCharge=100;
};
/*
class OPTRE_S12_SOLA_Jetpack;
class MM_S12_SOLA_Omni: OPTRE_S12_SOLA_Jetpack {
	scope=2;
	scopeArsenal=2;
	displayName="[MM] S-12 SOLA (Omni)";
	maximumLoad=300;
	mass=60;
	isJetpack=1;
	shortType="omni";
	longType="omni";
	maxCharge=100;
};
class MM_S12_SOLA_Vector: OPTRE_S12_SOLA_Jetpack {
	scope=2;
	scopeArsenal=2;
	displayName="[MM] S-12 SOLA (Vector)"; // suggest name changes to distinguish visually in-arsenal besides the identifiers in ()
	maximumLoad=300;
	mass=60;
	isJetpack=1;
	shortType="vector";
	longType="vector";
	maxCharge=100;
};
class MM_S12_SOLA_VO: OPTRE_S12_SOLA_Jetpack {
	scope=2;
	scopeArsenal=2;
	displayName="[MM] S-12 SOLA (V/O)";
	maximumLoad=300;
	mass=60;
	isJetpack=1;
	shortType="vector";
	longType="omni";
	maxCharge=100;
};
class MM_S12_SOLA_OV: OPTRE_S12_SOLA_Jetpack {
	scope=2;
	scopeArsenal=2;
	displayName="[MM] S-12 SOLA (O/V)";
	maximumLoad=300;
	mass=60;
	isJetpack=1;
	shortType="omni";
	longType="vector";
	maxCharge=100;
};*/