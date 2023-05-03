params = ["_unit","_allDamages","_typeOfDamage"];


if(PlzNoFallMommy) then {
  if (true) exitwith{[]};} else {
  [_unit,_allDamages,_typeOfDamage] call ace_medical_damage_fnc_woundsHandlerBase;
};

// DAISY SUGGESTED EDIT
/* 
if(PlzNoFallMommy) exitwith{[]}; 
[_unit,_allDamages,_typeOfDamage] call ace_medical_damage_fnc_woundsHandlerBase;
*/