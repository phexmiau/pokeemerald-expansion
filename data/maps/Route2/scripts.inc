# 1 "data/maps/Route2/scripts.pory"

# 2 "data/maps/Route2/scripts.pory"
Route2_MapScripts::
# 3 "data/maps/Route2/scripts.pory"
	.byte 0

Route2_EventScript_Teleport::
# 8 "data/maps/Route2/scripts.pory"
	lock
# 9 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_EventScript_Teleport_Movement_0
# 10 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_Teleport_Text_0, MSGBOX_YESNO
# 11 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route2_EventScript_Teleport_2
# 15 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_EventScript_Teleport_Movement_1
# 16 "data/maps/Route2/scripts.pory"
	waitmovement 0
Route2_EventScript_Teleport_1:
# 18 "data/maps/Route2/scripts.pory"
	release
	return

Route2_EventScript_Teleport_2:
# 12 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_Teleport_Text_1
# 13 "data/maps/Route2/scripts.pory"
	warp MAP_ROUTE3, 10, 18
	goto Route2_EventScript_Teleport_1


# 9 "data/maps/Route2/scripts.pory"
Route2_EventScript_Teleport_Movement_0:
# 9 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 15 "data/maps/Route2/scripts.pory"
Route2_EventScript_Teleport_Movement_1:
# 15 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

Route2_EventScript_Teleport_Text_0:
# 10 "data/maps/Route2/scripts.pory"
	.string "Are you sure you want to move on?$"

Route2_EventScript_Teleport_Text_1:
# 12 "data/maps/Route2/scripts.pory"
	.string "You take the boat to the next route.$"
