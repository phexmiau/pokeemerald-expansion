# 1 "data/maps/Route2/scripts.pory"

# 2 "data/maps/Route2/scripts.pory"
Route2_MapScripts::
# 3 "data/maps/Route2/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Route2_OnTransition
# 4 "data/maps/Route2/scripts.pory"
	.byte 0
# 5 "data/maps/Route2/scripts.pory"

# 6 "data/maps/Route2/scripts.pory"
Route2_OnTransition:
# 7 "data/maps/Route2/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE2
# 8 "data/maps/Route2/scripts.pory"
    special HealPlayerParty
# 9 "data/maps/Route2/scripts.pory"
	end

Route2_EventScript_Teleport::
# 15 "data/maps/Route2/scripts.pory"
	lock
# 16 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_EventScript_Teleport_Movement_0
# 17 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_Teleport_Text_0, MSGBOX_YESNO
# 18 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route2_EventScript_Teleport_2
# 22 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_EventScript_Teleport_Movement_1
# 23 "data/maps/Route2/scripts.pory"
	waitmovement 0
Route2_EventScript_Teleport_1:
# 25 "data/maps/Route2/scripts.pory"
	release
	return

Route2_EventScript_Teleport_2:
# 19 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_Teleport_Text_1
# 20 "data/maps/Route2/scripts.pory"
	warp MAP_ROUTE3, 10, 18
	goto Route2_EventScript_Teleport_1


# 16 "data/maps/Route2/scripts.pory"
Route2_EventScript_Teleport_Movement_0:
# 16 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 22 "data/maps/Route2/scripts.pory"
Route2_EventScript_Teleport_Movement_1:
# 22 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

Route2_EventScript_Teleport_Text_0:
# 17 "data/maps/Route2/scripts.pory"
	.string "Are you sure you want to move on?\p"
	.string "You won't be able to return to this\n"
	.string "route.$"

Route2_EventScript_Teleport_Text_1:
# 19 "data/maps/Route2/scripts.pory"
	.string "You take the boat to the next route.$"
