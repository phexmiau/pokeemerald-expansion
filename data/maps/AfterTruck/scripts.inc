# 1 "data/maps/AfterTruck/scripts.pory"

# 2 "data/maps/AfterTruck/scripts.pory"
AfterTruck_MapScripts::
# 3 "data/maps/AfterTruck/scripts.pory"
	.byte 0

AfterTruck_EventScript_SignVolcano::
# 7 "data/maps/AfterTruck/scripts.pory"
	lockall
# 8 "data/maps/AfterTruck/scripts.pory"
	msgbox AfterTruck_EventScript_SignVolcano_Text_0
# 9 "data/maps/AfterTruck/scripts.pory"
	releaseall
	return


AfterTruck_EventScript_SignCrystal::
# 13 "data/maps/AfterTruck/scripts.pory"
	lockall
# 14 "data/maps/AfterTruck/scripts.pory"
	msgbox AfterTruck_EventScript_SignCrystal_Text_0
# 15 "data/maps/AfterTruck/scripts.pory"
	releaseall
	return


AfterTruck_EventScript_SignBoring::
# 19 "data/maps/AfterTruck/scripts.pory"
	lockall
# 20 "data/maps/AfterTruck/scripts.pory"
	msgbox AfterTruck_EventScript_SignBoring_Text_0
# 21 "data/maps/AfterTruck/scripts.pory"
	releaseall
	return


AfterTruck_EventScript_SignTeardrop::
# 25 "data/maps/AfterTruck/scripts.pory"
	lockall
# 26 "data/maps/AfterTruck/scripts.pory"
	msgbox AfterTruck_EventScript_SignTeardrop_Text_0
# 27 "data/maps/AfterTruck/scripts.pory"
	releaseall
	return


AfterTruck_EventScript_SignVolcano_Text_0:
# 8 "data/maps/AfterTruck/scripts.pory"
	.string "Ahead: Volcano of Truth$"

AfterTruck_EventScript_SignCrystal_Text_0:
# 14 "data/maps/AfterTruck/scripts.pory"
	.string "Ahead: Crystal Cave$"

AfterTruck_EventScript_SignBoring_Text_0:
# 20 "data/maps/AfterTruck/scripts.pory"
	.string "Ahead: Boring Road$"

AfterTruck_EventScript_SignTeardrop_Text_0:
# 26 "data/maps/AfterTruck/scripts.pory"
	.string "Ahead: Teardrop Forest$"
