# 1 "data/maps/Route3/scripts.pory"

# 2 "data/maps/Route3/scripts.pory"
Route3_MapScripts::
# 3 "data/maps/Route3/scripts.pory"
	.byte 0

Route3_EventScript_Leave::
# 7 "data/maps/Route3/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_EventScript_Leave_Movement_0
# 8 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Leave_Text_0, MSGBOX_YESNO
# 9 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_Leave_2
# 16 "data/maps/Route3/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_EventScript_Leave_Movement_2
Route3_EventScript_Leave_1:
# 18 "data/maps/Route3/scripts.pory"
	closemessage
	return

Route3_EventScript_Leave_2:
# 10 "data/maps/Route3/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_EventScript_Leave_Movement_1
# 11 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 12 "data/maps/Route3/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_EventScript_Leave_Movement_1
# 13 "data/maps/Route3/scripts.pory"
	setvar VAR_ROUTE3_STATE, 1
# 14 "data/maps/Route3/scripts.pory"
	warp MAP_ROUTE4, 16, 18
	goto Route3_EventScript_Leave_1


# 7 "data/maps/Route3/scripts.pory"
Route3_EventScript_Leave_Movement_0:
# 7 "data/maps/Route3/scripts.pory"
	face_up
	step_end

# 10 "data/maps/Route3/scripts.pory"
Route3_EventScript_Leave_Movement_1:
# 10 "data/maps/Route3/scripts.pory"
	walk_up
	step_end

# 16 "data/maps/Route3/scripts.pory"
Route3_EventScript_Leave_Movement_2:
# 16 "data/maps/Route3/scripts.pory"
	walk_down
	step_end

Route3_EventScript_Leave_Text_0:
# 8 "data/maps/Route3/scripts.pory"
	.string "Are you sure you want to move on?$"
