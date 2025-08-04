# 1 "data/maps/Route5/scripts.pory"

# 2 "data/maps/Route5/scripts.pory"
Route5_MapScripts::
# 3 "data/maps/Route5/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route5_OnResume
# 4 "data/maps/Route5/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Route5_OnTransition
# 5 "data/maps/Route5/scripts.pory"
	.byte 0
# 6 "data/maps/Route5/scripts.pory"

# 7 "data/maps/Route5/scripts.pory"
Route5_OnResume:
# 8 "data/maps/Route5/scripts.pory"
	setstepcallback STEP_CB_ASH
# 9 "data/maps/Route5/scripts.pory"
	end
# 10 "data/maps/Route5/scripts.pory"

# 11 "data/maps/Route5/scripts.pory"
Route5_OnTransition:
# 12 "data/maps/Route5/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE5
# 13 "data/maps/Route5/scripts.pory"
	end

Route5_EventScript_Leave::
# 17 "data/maps/Route5/scripts.pory"
	applymovement LOCALID_PLAYER, Route5_EventScript_Leave_Movement_0
# 18 "data/maps/Route5/scripts.pory"
	msgbox Route5_EventScript_Leave_Text_0, MSGBOX_YESNO
# 19 "data/maps/Route5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route5_EventScript_Leave_2
# 26 "data/maps/Route5/scripts.pory"
	applymovement LOCALID_PLAYER, Route5_EventScript_Leave_Movement_2
Route5_EventScript_Leave_1:
# 28 "data/maps/Route5/scripts.pory"
	closemessage
	return

Route5_EventScript_Leave_2:
# 20 "data/maps/Route5/scripts.pory"
	applymovement LOCALID_PLAYER, Route5_EventScript_Leave_Movement_1
# 21 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route5/scripts.pory"
	applymovement LOCALID_PLAYER, Route5_EventScript_Leave_Movement_1
# 23 "data/maps/Route5/scripts.pory"
	setvar VAR_ROUTE5_STATE, 1
# 24 "data/maps/Route5/scripts.pory"
	warp MAP_REGIONAL_SITE, 16, 18
	goto Route5_EventScript_Leave_1


# 17 "data/maps/Route5/scripts.pory"
Route5_EventScript_Leave_Movement_0:
# 17 "data/maps/Route5/scripts.pory"
	face_up
	step_end

# 20 "data/maps/Route5/scripts.pory"
Route5_EventScript_Leave_Movement_1:
# 20 "data/maps/Route5/scripts.pory"
	walk_up
	step_end

# 26 "data/maps/Route5/scripts.pory"
Route5_EventScript_Leave_Movement_2:
# 26 "data/maps/Route5/scripts.pory"
	walk_down
	step_end

Route5_EventScript_Leave_Text_0:
# 18 "data/maps/Route5/scripts.pory"
	.string "Are you sure you want to move on?\p"
	.string "You won't be able to return to this\n"
	.string "route.$"
