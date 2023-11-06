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
mmPreBananMaster = [[],[],[],[],[],[],"","",[],["","","","","",""]];
mmPreBanan = mmPreBananMaster;
outfit = mmPreBanan;

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