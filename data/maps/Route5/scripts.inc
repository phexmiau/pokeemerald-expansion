# 1 "data/maps/Route5/scripts.pory"

# 2 "data/maps/Route5/scripts.pory"
Route5_MapScripts::
# 3 "data/maps/Route5/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route5_OnResume
# 4 "data/maps/Route5/scripts.pory"
	.byte 0
# 5 "data/maps/Route5/scripts.pory"

# 6 "data/maps/Route5/scripts.pory"
Route5_OnResume:
# 7 "data/maps/Route5/scripts.pory"
	setstepcallback STEP_CB_ASH
# 8 "data/maps/Route5/scripts.pory"
	end

Route5_EventScript_Leave::
# 12 "data/maps/Route5/scripts.pory"
	applymovement LOCALID_PLAYER, Route5_EventScript_Leave_Movement_0
# 13 "data/maps/Route5/scripts.pory"
	msgbox Route5_EventScript_Leave_Text_0, MSGBOX_YESNO
# 14 "data/maps/Route5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route5_EventScript_Leave_2
# 21 "data/maps/Route5/scripts.pory"
	applymovement LOCALID_PLAYER, Route5_EventScript_Leave_Movement_2
Route5_EventScript_Leave_1:
# 23 "data/maps/Route5/scripts.pory"
	closemessage
	return

Route5_EventScript_Leave_2:
# 15 "data/maps/Route5/scripts.pory"
	applymovement LOCALID_PLAYER, Route5_EventScript_Leave_Movement_1
# 16 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route5/scripts.pory"
	applymovement LOCALID_PLAYER, Route5_EventScript_Leave_Movement_1
# 18 "data/maps/Route5/scripts.pory"
	setvar VAR_ROUTE5_STATE, 1
# 19 "data/maps/Route5/scripts.pory"
	warp MAP_REGIONAL_SITE, 16, 18
	goto Route5_EventScript_Leave_1


# 12 "data/maps/Route5/scripts.pory"
Route5_EventScript_Leave_Movement_0:
# 12 "data/maps/Route5/scripts.pory"
	face_up
	step_end

# 15 "data/maps/Route5/scripts.pory"
Route5_EventScript_Leave_Movement_1:
# 15 "data/maps/Route5/scripts.pory"
	walk_up
	step_end

# 21 "data/maps/Route5/scripts.pory"
Route5_EventScript_Leave_Movement_2:
# 21 "data/maps/Route5/scripts.pory"
	walk_down
	step_end

Route5_EventScript_Leave_Text_0:
# 13 "data/maps/Route5/scripts.pory"
	.string "Are you sure you want to move on?$"
