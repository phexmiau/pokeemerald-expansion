# 1 "data/maps/BoringRoad/scripts.pory"

# 2 "data/maps/BoringRoad/scripts.pory"
BoringRoad_MapScripts::
# 3 "data/maps/BoringRoad/scripts.pory"
	.byte 0

BoringRoad_EventScript_Sign::
# 7 "data/maps/BoringRoad/scripts.pory"
	lockall
# 8 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_Sign_Text_0
# 9 "data/maps/BoringRoad/scripts.pory"
	releaseall
	return


BoringRoad_EventScript_Sign_Text_0:
# 8 "data/maps/BoringRoad/scripts.pory"
	.string "BEWARE:\nSilly Pokemon around!$"
