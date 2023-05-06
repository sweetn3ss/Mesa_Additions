#include "\a3\ui_f\hpp\defineDIKCodes.inc"

["Maglock Mania", "MLMtoPel", ["Add MLM to Pel", "Add MaglockMania to pelican."], {
    
	["AddPel", cursorObject] execVM "MaglockM\MagMania\SetStart.sqf";
}, {
   //_this call mymod_fnc_keyUp
}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;

//Pelican List
[
	"MLMPelicanList",
	"EDITBOX",
	["Pelican List", "Array of Pelicans that Maglock Mania can be applied to."],
	"Maglock Mania",
	"['82nd_Pelican_Armed',
	'82nd_Pelican_VTOL_Armed', 
	'82nd_Pelican_Unarmed', 
	'82nd_Pelican_VTOL', 
	'82nd_pelican_Heavy',
	'VES_D77HTCI', 
	'VES_D77HTCIS', 
	'VES_D77HTCI_A', 
	'VES_D77HTCIS_A', 
	'OPTRE_Pelican_unarmed', 
	'OPCOS_Pelican_Unarmed', 
	'OPTRE_Pelican_armed', 
	'OPCOS_Pelican_Armed', 
	'C82nd_O_URF_Pelican_Unarmed', 
	'TCF_ER_WDL_Pelican', 
	'TCF_ER_WDL_PelicanAV', 
	'TCF_GMF_Pelican', 
	'TCF_GMF_PelicanAV', 
	'TCF_URA_ARC_PelicanAV', 
	'TCF_URA_DES_PelicanAV', 
	'TCF_URA_URB_PelicanAV', 
	'TCF_URA_WDL_PelicanAV', 
	'OPTRE_Pelican_unarmed_ins', 
	'OPTRE_Pelican_armed_ins', 
	'C82nd_O_UNSC_Pelican_Armed_01', 
	'LM_OPCAN_D77_U_CGC', 
	'LM_OPCAN_D77_A_CGC', 
	'LM_OPCAN_D77_U_IDAP']",
	1
] call CBA_fnc_addSetting;

/*
//Object to spawn MaglockMania
[
	"MLMSpawnItem",
	"EDITBOX",
	["Maglock Mania Spawn Object", "Name of Object that Maglock Mania can be called form"],
	"Maglock Mania",
	"YourObjectNameHere",
	1
] call CBA_fnc_addSetting;
*/


//Supply Pod Cargo
[
	"MLMSupplyPod",
	"EDITBOX",
	["Supply Pod Items", "Addes custom items. Use 'getItemCargo' to get current items in cargo."],
	"Maglock Mania","['adv_aceCPR_AED','ACE_elasticBandage','ACE_packingBandage','OPTRE_Biofoam','ACE_bloodIV','ACE_bloodIV_250','ACE_bloodIV_500','ACE_CableTie','ACE_epinephrine','ACE_MapTools','ACE_Clacker','ItemcTabHCam','MineDetector','ACE_morphine','OPTRE_Medigel','ACE_splint','ACE_tourniquet','ACE_wirecutter','ACE_DefusalKit','ACE_EntrenchingTool','ACE_IR_Strobe_Item']",
	1
] call CBA_fnc_addSetting;

//Supply Pod Cargo Num
[
	"MLMSupplyPodNum",
	"EDITBOX",
	["Supply Pod Items Number", "Number of the items that will be spawned in the invtory. Number order corresponds with item order above."],
	"Maglock Mania",
	"[2,20,100,10,40,40,40,25,40,10,2,10,2,20,10,40,50,2,2,5,10]",
	1
] call CBA_fnc_addSetting;



//Supply Pod Mags
[
	"MLMSupplyPodMags",
	"EDITBOX",
	["Supply Pod Mags", "Addes custom magazine. Use 'getMagazineCargo' to get current magzines in cargo."],
	"Maglock Mania","['OPTRE_36Rnd_95x40_Mag','OPTRE_36Rnd_95x40_Mag_Tracer','OPTRE_60Rnd_5x23mm_Mag_tracer','OPTRE_32Rnd_762x51_Mag','OPTRE_32Rnd_762x51_Mag_Tracer','OPTRE_60Rnd_762x51_Mag','OPTRE_15Rnd_762x51_Mag','OPTRE_15Rnd_762x51_Mag_Tracer','OPTRE_60Rnd_5x23mm_Mag','OPTRE_1Rnd_50x137_HEAT','OPTRE_M41_Twin_HEAT_G','OPTRE_M41_Twin_HEAT_SACLOS','OPTRE_8Rnd_127x40_Mag','OPTRE_8Rnd_127x40_Mag_Tracer','SmokeShell','SmokeShellRed','SmokeShellPurple','SmokeShellBlue','SmokeShellGreen','OPTRE_M9_Frag','1Rnd_HE_Grenade_shell','OPTRE_12Rnd_8Gauge_Pellets','OPTRE_12Rnd_8Gauge_Slugs','OPTRE_6Rnd_8Gauge_Pellet','OPTRE_6Rnd_8Gauge_Slug','Commando_20Rnd_65_Mag','Commando_20Rnd_65_TracerY_Mag','OPTRE_200Rnd_95x40_Box_Tracer','OPTRE_200Rnd_95x40_Box','OPTRE_60Rnd_762x51_Mag_Tracer_Yellow','Gamma_762_mag','Gamma_762_mag_Tracer']",
	1
] call CBA_fnc_addSetting;

//Supply Pod Mags Num
[
	"MLMSupplyPodMagsNum",
	"EDITBOX",
	["Supply Pod Mags Number", "Number of the Magazines that will be spawned in the invtory. Number order corresponds with magazines order above."],
	"Maglock Mania",
	"[50,30,10,40,20,30,20,20,30,15,10,10,20,10,10,5,5,5,5,20,20,10,10,10,10,20,10,10,5,20,10,5]",
	1
] call CBA_fnc_addSetting;

//Medic Pod Cargo
[
	"MLMMedPod",
	"EDITBOX",
	["Medic Pod Items", "Items that will spawn in supply pod. Items only no mag ect."],
	"Maglock Mania",
	"['ACE_elasticBandage','ACE_packingBandage','adv_aceCPR_AED','ACE_bloodIV','ACE_bloodIV_250','ACE_bloodIV_500','ACE_morphine','ACE_surgicalKit','ACE_personalAidKit','ACE_epinephrine','OPTRE_Biofoam','ACE_splint','OPTRE_Medigel','ACE_tourniquet','ACE_bodyBag','ACE_CableTie']",
	1
] call CBA_fnc_addSetting;

//Medic Pod Cargo Num
[
	"MLMMedPodNum",
	"EDITBOX",
	["Medic Pod Items Number", "Number of the items that will be spawned in the invtory. Number order corresponds with item order above."],
	"Maglock Mania",
	"[100,100,2,20,20,25,25,2,2,50,10,25,10,25,5,10]",
	1
] call CBA_fnc_addSetting;

//UP Down Min
[
	"MLMUdMin",
	"SLIDER",
	["Up/Down Min", "How far down from pelican center can attached object go"],
	"Maglock Mania",
	[-10, 0, -4, 2],
	1
] call CBA_fnc_addSetting;

//UP Down Max
[
	"MLMUdMax",
	"SLIDER",
	["Up/Down Max", "How far up from pelican center can attached object go"],
	"Maglock Mania",
	[0, 10, 3, 2],
	1
] call CBA_fnc_addSetting;

//Front/Back Min
[
	"MLMFbMin",
	"SLIDER",
	["Front/Back Min", "How far back from pelican center can attached object go"],
	"Maglock Mania",
	[-10, 0, -9, 2],
	1
] call CBA_fnc_addSetting;

//Front/Back Max
[
	"MLMFbMax",
	"SLIDER",
	["Front/Back Max", "How far forward from pelican center can attached object go"],
	"Maglock Mania",
	[0, 10, 0, 2],
	1
] call CBA_fnc_addSetting;


//Need to be in pilot seat
[
	"MLMPilotReq",
	"CHECKBOX",
	["Must be in Pilot seat", "If checked you must be in the Pilot seat to use Maglock Mania"],
	"Maglock Mania",
	true,
	1
] call CBA_fnc_addSetting;
