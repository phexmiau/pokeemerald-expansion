# 1 "data/maps/Route4/scripts.pory"

# 2 "data/maps/Route4/scripts.pory"
Route4_MapScripts::
# 3 "data/maps/Route4/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Route4_OnTransition
# 4 "data/maps/Route4/scripts.pory"
	.byte 0
# 5 "data/maps/Route4/scripts.pory"

# 6 "data/maps/Route4/scripts.pory"
Route4_OnTransition:
# 7 "data/maps/Route4/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE4
# 8 "data/maps/Route4/scripts.pory"
	end

Route4_EventScript_Leave::
# 12 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_PLAYER, Route4_EventScript_Leave_Movement_0
# 13 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Leave_Text_0, MSGBOX_YESNO
# 14 "data/maps/Route4/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route4_EventScript_Leave_2
# 21 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_PLAYER, Route4_EventScript_Leave_Movement_2
Route4_EventScript_Leave_1:
# 23 "data/maps/Route4/scripts.pory"
	closemessage
	return

Route4_EventScript_Leave_2:
# 15 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_PLAYER, Route4_EventScript_Leave_Movement_1
# 16 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_PLAYER, Route4_EventScript_Leave_Movement_1
# 18 "data/maps/Route4/scripts.pory"
	setvar VAR_ROUTE4_STATE, 1
# 19 "data/maps/Route4/scripts.pory"
	warp MAP_ROUTE5, 9, 18
	goto Route4_EventScript_Leave_1


# 12 "data/maps/Route4/scripts.pory"
Route4_EventScript_Leave_Movement_0:
# 12 "data/maps/Route4/scripts.pory"
	face_up
	step_end

# 15 "data/maps/Route4/scripts.pory"
Route4_EventScript_Leave_Movement_1:
# 15 "data/maps/Route4/scripts.pory"
	walk_up
	step_end

# 21 "data/maps/Route4/scripts.pory"
Route4_EventScript_Leave_Movement_2:
# 21 "data/maps/Route4/scripts.pory"
	walk_down
	step_end

Route4_EventScript_Leave_Text_0:
# 13 "data/maps/Route4/scripts.pory"
	.string "Are you sure you want to move on?\p"
	.string "You won't be able to return to this\n"
	.string "route.$"
