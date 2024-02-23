params = ["_unit","_allDamages","_typeOfDamage"];


if (PlzNoFallMommy) then {
  if (true) exitwith{[]};} else {
  [_unit,_allDamages,_typeOfDamage] call ace_medical_damage_fnc_woundsHandlerBase;
};

// DAISY SUGGESTED EDIT
/* 
if(PlzNoFallMommy) exitwith{diag_log "[INFO] MM_Bullfrog | Damage will not be applied this session."}; 
[_unit,_allDamages,_typeOfDamage] call ace_medical_damage_fnc_woundsHandlerBase;

this is an old edit of mine. just found it on 2/22/24. i've been through a lot more, but gotdamn.
i still got that little bit of arrogance. 
*/