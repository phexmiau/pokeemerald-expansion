# 1 "data/maps/Route2/scripts.pory"

# 2 "data/maps/Route2/scripts.pory"
Route2_MapScripts::
# 3 "data/maps/Route2/scripts.pory"
	.byte 0

Route2_EventScript_Teleport::
# 8 "data/maps/Route2/scripts.pory"
	lockall
# 9 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_Teleport_Text_0
# 10 "data/maps/Route2/scripts.pory"
	warp MAP_ROUTE3, 10, 18
# 11 "data/maps/Route2/scripts.pory"
	releaseall
	return


Route2_EventScript_Teleport_Text_0:
# 9 "data/maps/Route2/scripts.pory"
	.string "You take the boat to the next route.$"
