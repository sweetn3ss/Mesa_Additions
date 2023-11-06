//	##############################
//	########## - Pants Changer - ##########
//	##############################
//	#
//	#
//	#
//	#
//	# Intended to allow the player to swap between a
//	# loadout already worn, and a duplicate filled with
//	# bananas!

params [];

private _mmPreBananMaster = [[],[],[],[],[],[],"","",[],["","","","","",""]];
private _mmPreBanan = mmPreBananMaster;
private _outfit = mmPreBanan;
/*
private _outfit = getUnitLoadout player;
private _bkp = _outfit # 5;
private _vst = _outfit # 4;
private _uni = _outfit # 3;

private _bkpC = _bkp # 0;
private _vstC = _vst # 0;
private _uniC = _uni # 0;

// bananan array math go here

_bkp set [1, array of banana items];
_vst set [1, array of banana items];
_uni set [1, array of banana items];

_outfit set [5, _bkp];
_outfit set [4, _vst];
_outfit set [3, _uni];
*/
while (sleep 0.5; alive player;) {
	if (pressa da button) then {
		if (outfit = mmPreBanan && outfit != mmBanan) then {
			mmPreBanan = getUnitLoadout player;
			outfit = mmBanan; sleep 0.1;
			player setUnitLoadout mmPreBananMaster; sleep 0.1;
			player setUnitLoadout 
		} else {
			player setUnitLoadout mmPreBananMaster;
			player setUnitLoadout mmPreBanan;
			outfit = mmPreBanan
		};
	};
};