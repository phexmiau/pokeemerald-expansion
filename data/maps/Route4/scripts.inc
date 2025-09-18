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
    special HealPlayerParty
# 9 "data/maps/Route4/scripts.pory"
	end

Route4_EventScript_Leave::
# 13 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_PLAYER, Route4_EventScript_Leave_Movement_0
# 14 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Leave_Text_0, MSGBOX_YESNO
# 15 "data/maps/Route4/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route4_EventScript_Leave_2
# 22 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_PLAYER, Route4_EventScript_Leave_Movement_2
Route4_EventScript_Leave_1:
# 24 "data/maps/Route4/scripts.pory"
	closemessage
	return

Route4_EventScript_Leave_2:
# 16 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_PLAYER, Route4_EventScript_Leave_Movement_1
# 17 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_PLAYER, Route4_EventScript_Leave_Movement_1
# 19 "data/maps/Route4/scripts.pory"
	setvar VAR_ROUTE4_STATE, 1
# 20 "data/maps/Route4/scripts.pory"
	warp MAP_ROUTE5, 9, 18
	goto Route4_EventScript_Leave_1


# 13 "data/maps/Route4/scripts.pory"
Route4_EventScript_Leave_Movement_0:
# 13 "data/maps/Route4/scripts.pory"
	face_up
	step_end

# 16 "data/maps/Route4/scripts.pory"
Route4_EventScript_Leave_Movement_1:
# 16 "data/maps/Route4/scripts.pory"
	walk_up
	step_end

# 22 "data/maps/Route4/scripts.pory"
Route4_EventScript_Leave_Movement_2:
# 22 "data/maps/Route4/scripts.pory"
	walk_down
	step_end

Route4_EventScript_Leave_Text_0:
# 14 "data/maps/Route4/scripts.pory"
	.string "Are you sure you want to move on?\p"
	.string "You won't be able to return to this\n"
	.string "route.$"
