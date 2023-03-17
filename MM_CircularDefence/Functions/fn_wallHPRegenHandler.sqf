es_regenShieldHealth = {
	params ["_object"];
	_lastHit = _object getVariable "es_shieldLastHitTime";
	_currentShieldValue = _object getVariable "wallHealthState";
	while {alive _object and _currentShieldValue <= _maxShield and (CBA_missionTime >= ( _lastHit + 10)) } do {
    _object setVariable ["wallHealthState", _currentShieldValue + 1];
  };
};