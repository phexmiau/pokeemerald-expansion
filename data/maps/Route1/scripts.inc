# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 3 "data/maps/Route1/scripts.pory"
	.byte 0

Route1_EventScript_Leave::
# 7 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_0
# 8 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Leave_Text_0, MSGBOX_YESNO
# 9 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_EventScript_Leave_2
# 16 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_2
Route1_EventScript_Leave_1:
# 18 "data/maps/Route1/scripts.pory"
	closemessage
	return

Route1_EventScript_Leave_2:
# 10 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_1
# 11 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 12 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_1
# 13 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE1_STATE, 2
# 14 "data/maps/Route1/scripts.pory"
	warp MAP_ROUTE2, 7, 26
	goto Route1_EventScript_Leave_1


Route1_EventScript_DidBag::
# 22 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_DidBag_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_2
	return


Route1_EventScript_Bag::
# 27 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Bag_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route1/scripts.pory"
	delay 60
# 29 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Bag_Text_1, MSGBOX_AUTOCLOSE
# 30 "data/maps/Route1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 5
# 31 "data/maps/Route1/scripts.pory"
	giveitem ITEM_FULL_RESTORE, 5
# 32 "data/maps/Route1/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 33 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Bag_Text_2, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
	return


# 7 "data/maps/Route1/scripts.pory"
Route1_EventScript_Leave_Movement_0:
# 7 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 10 "data/maps/Route1/scripts.pory"
Route1_EventScript_Leave_Movement_1:
# 10 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

# 16 "data/maps/Route1/scripts.pory"
Route1_EventScript_Leave_Movement_2:
# 16 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

Route1_EventScript_Leave_Text_0:
# 8 "data/maps/Route1/scripts.pory"
	.string "Are you sure you want to move on?$"

Route1_EventScript_DidBag_Text_0:
# 22 "data/maps/Route1/scripts.pory"
	.string "You should check that bag before going\n"
	.string "further!$"

Route1_EventScript_Bag_Text_0:
# 27 "data/maps/Route1/scripts.pory"
	.string "You take a look through the bag...$"

Route1_EventScript_Bag_Text_1:
# 29 "data/maps/Route1/scripts.pory"
	.string "You found 5 Master Balls, 5 Full\n"
	.string "Restores and a Super Rod!$"

Route1_EventScript_Bag_Text_2:
# 33 "data/maps/Route1/scripts.pory"
	.string "With these you can still catch a team in\n"
	.string "time for the regional!$"
