/////////////////////////////////////////////////////////////
////////////// Maglock Mania Code Start /////////////////////
//////////////////By: Cardboardboxo//////////////////////////

//_MagMania = YourObjectNameHere;  //Add object name to use Maglock Mania from.

/*
Pelicans = ["82nd_Pelican_Armed", //Add Pelicans Here. Each on must be seprated by a , and in ""
"82nd_Pelican_VTOL_Armed", 
"82nd_Pelican_Unarmed", 
"82nd_Pelican_VTOL", 
"LM_OPCAN_D77_U_AR_DES", 
"LM_OPCAN_D77_A_AR_DES", 
"LM_OPCAN_D77_U_AR_MIX", 
"LM_OPCAN_D77_A_AR_MIX", 
"LM_OPCAN_D77_U_AR_WDL", 
"LM_OPCAN_D77_A_AR_WDL", 
"LM_OPCAN_D77_U_MC_WDL", 
"LM_OPCAN_D77_A_MC_WDL", 
"VES_D77HTCI", 
"VES_D77HTCIS", 
"VES_D77HTCI_A", 
"VES_D77HTCIS_A", 
"OPTRE_Pelican_unarmed", 
"OPCOS_Pelican_Unarmed", 
"OPTRE_Pelican_armed", 
"OPCOS_Pelican_Armed", 
"C82nd_O_URF_Pelican_Unarmed", 
"TCF_ER_WDL_Pelican", 
"TCF_ER_WDL_PelicanAV", 
"TCF_GMF_Pelican", 
"TCF_GMF_PelicanAV", 
"TCF_URA_ARC_PelicanAV", 
"TCF_URA_DES_PelicanAV", 
"TCF_URA_URB_PelicanAV", 
"TCF_URA_WDL_PelicanAV", 
"OPTRE_Pelican_unarmed_ins", 
"OPTRE_Pelican_armed_ins", 
"C82nd_O_UNSC_Pelican_Armed_01", 
"LM_OPCAN_D77_U_CGC", 
"LM_OPCAN_D77_A_CGC", 
"LM_OPCAN_D77_U_IDAP"];  
*/

ACE_maxWeightCarry = 5000;  //Sets ACE max carry weight really high so cargo pods can be carried.

//////////////////////////////////////////////////////////////////////////////////////
///////////// Only go past this point if you know what you are doing!!! /////////////
/////////////////////////////////////////////////////////////////////////////////////

//Global Vars
maniaGhost = nil;
maniaPel = nil;
maniaVeh = nil;
aPos = nil;
bPos = nil;

//daisy debug begin
if (isNil "MLMSpawnItem") exitWith {
    systemChat "[INFO] Maglock Mania | No item found to apply Maglock Mania to. No features will be accessible.";
    diag_log "[INFO] Maglock Mania | No item found to apply Maglock Mania to. No features will be accessible.";
};
//daisy debug end

//Adding Action
//Adds Maglock Mania
MLMSpawnItem addAction ["Add Maglock Mania to Pelican", {
titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>AIM AT PELICAN</t><br/>-------------------------------------------<br/> Aim at a Pelican then hold down ACTION KEY", "PLAIN DOWN", -1, true, true];
playSound "FD_CP_Clear_F";
[player, "Aim at Pelican", "\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa", "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa", "true", "true", {}, {}, {["AddPel", cursorObject] execVM "MaglockM\MagMania\SetStart.sqf"}, {[ _target,_actionId] call BIS_fnc_holdActionRemove; titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLOCK MANIA ABORTED</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true]; playSound "FD_CP_Not_Clear_F";}, [], 1, nil, true, false] call BIS_fnc_holdActionAdd}];

//Adds Bench
MLMSpawnItem addAction ["Add Bench (+8)", {
titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>AIM AT PELICAN</t><br/>-------------------------------------------<br/> Aim at a Pelican then hold down ACTION KEY", "PLAIN DOWN", -1, true, true];
playSound "FD_CP_Clear_F";
[player, "Aim at Pelican", "\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa", "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa", "true", "true", {}, {}, {[0, cursorObject] execVM "MaglockM\MagMania\Loadbench.sqf"}, {[ _target,_actionId] call BIS_fnc_holdActionRemove; titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>POD ATTACHING ABORTED</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true]; playSound "FD_CP_Not_Clear_F";}, [], 1, nil, true, false] call BIS_fnc_holdActionAdd}];

//Adds Transport Pod
MLMSpawnItem addAction ["Add Troop Transport (+16)", {
titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>AIM AT PELICAN</t><br/>-------------------------------------------<br/> Aim at a Pelican then hold down ACTION KEY", "PLAIN DOWN", -1, true, true];
playSound "FD_CP_Clear_F";
[player, "Aim at Pelican", "\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa", "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa", "true", "true", {}, {}, {[1, cursorObject] execVM "MaglockM\MagMania\Loadbench.sqf"}, {[ _target,_actionId] call BIS_fnc_holdActionRemove; titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>POD ATTACHING ABORTED</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true]; playSound "FD_CP_Not_Clear_F";}, [], 1, nil, true, false] call BIS_fnc_holdActionAdd}];

//Adds Med Pod
MLMSpawnItem addAction ["Add Med Pod (+4)", {
titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>AIM AT PELICAN</t><br/>-------------------------------------------<br/> Aim at a Pelican then hold down ACTION KEY", "PLAIN DOWN", -1, true, true];
playSound "FD_CP_Clear_F";
[player, "Aim at Pelican", "\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa", "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa", "true", "true", {}, {}, {[2, cursorObject] execVM "MaglockM\MagMania\Loadbench.sqf"}, {[ _target,_actionId] call BIS_fnc_holdActionRemove; titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>POD ATTACHING ABORTED</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true]; playSound "FD_CP_Not_Clear_F";}, [], 1, nil, true, false] call BIS_fnc_holdActionAdd}];

//Adds Fule Pod
MLMSpawnItem addAction ["Add Fuel Pod", {
titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>AIM AT PELICAN</t><br/>-------------------------------------------<br/> Aim at a Pelican then hold down ACTION KEY", "PLAIN DOWN", -1, true, true];
playSound "FD_CP_Clear_F";
[player, "Aim at Pelican", "\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa", "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa", "true", "true", {}, {}, {[4, cursorObject] execVM "MaglockM\MagMania\Loadbench.sqf"}, {[ _target,_actionId] call BIS_fnc_holdActionRemove; titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>POD ATTACHING ABORTED</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true]; playSound "FD_CP_Not_Clear_F";}, [], 1, nil, true, false] call BIS_fnc_holdActionAdd}];

//Adds Repair Pod
MLMSpawnItem addAction ["Add Repair Pod", {
titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>AIM AT PELICAN</t><br/>-------------------------------------------<br/> Aim at a Pelican then hold down ACTION KEY", "PLAIN DOWN", -1, true, true];
playSound "FD_CP_Clear_F";
[player, "Aim at Pelican", "\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa", "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa", "true", "true", {}, {}, {[5, cursorObject] execVM "MaglockM\MagMania\Loadbench.sqf"}, {[ _target,_actionId] call BIS_fnc_holdActionRemove; titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>POD ATTACHING ABORTED</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true]; playSound "FD_CP_Not_Clear_F";}, [], 1, nil, true, false] call BIS_fnc_holdActionAdd}];

//Adds Cargo Pod
MLMSpawnItem addAction ["Add Cargo Pod", {
titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>AIM AT PELICAN</t><br/>-------------------------------------------<br/> Aim at a Pelican then hold down ACTION KEY", "PLAIN DOWN", -1, true, true];
playSound "FD_CP_Clear_F";
[player, "Aim at Pelican", "\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa", "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa", "true", "true", {}, {}, {[6, cursorObject] execVM "MaglockM\MagMania\Loadbench.sqf"}, {[ _target,_actionId] call BIS_fnc_holdActionRemove; titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>POD ATTACHING ABORTED</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true]; playSound "FD_CP_Not_Clear_F";}, [], 1, nil, true, false] call BIS_fnc_holdActionAdd}];

//Adds Ammo Pod
MLMSpawnItem addAction ["Add Ammo Pod", {
titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>AIM AT PELICAN</t><br/>-------------------------------------------<br/> Aim at a Pelican then hold down ACTION KEY", "PLAIN DOWN", -1, true, true];
playSound "FD_CP_Clear_F";
[player, "Aim at Pelican", "\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa", "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa", "true", "true", {}, {}, {[7, cursorObject] execVM "MaglockM\MagMania\Loadbench.sqf"}, {[ _target,_actionId] call BIS_fnc_holdActionRemove; titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>POD ATTACHING ABORTED</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true]; playSound "FD_CP_Not_Clear_F";}, [], 1, nil, true, false] call BIS_fnc_holdActionAdd}];

////////////////////////////////////////////////////////////
////////////// Maglock Mania Code End //////////////////////
////////////////////////////////////////////////////////////