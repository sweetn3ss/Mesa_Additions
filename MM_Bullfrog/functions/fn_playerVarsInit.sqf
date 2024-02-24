params ["_unit"];

// set energy var
_unit setVariable ["MM_Bullfrog_energy", 0];

// set jetpack verification var to false
_unit setVariable ["MM_Bullfrog_isWearJet", false];

// set paused regeneration to false
_unit setVariable ["MM_Bullfrog_rPaused", false];