# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 3 "data/maps/Route1/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Route1_OnTransition
# 4 "data/maps/Route1/scripts.pory"
	.byte 0
# 5 "data/maps/Route1/scripts.pory"

# 6 "data/maps/Route1/scripts.pory"
Route1_OnTransition:
# 7 "data/maps/Route1/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE1
# 8 "data/maps/Route1/scripts.pory"
	end

Route1_EventScript_Leave::
# 13 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_0
# 14 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Leave_Text_0, MSGBOX_YESNO
# 15 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_EventScript_Leave_2
# 22 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_2
Route1_EventScript_Leave_1:
# 24 "data/maps/Route1/scripts.pory"
	closemessage
	return

Route1_EventScript_Leave_2:
# 16 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_1
# 17 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_1
# 19 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE1_STATE, 2
# 20 "data/maps/Route1/scripts.pory"
	warp MAP_ROUTE2, 7, 26
	goto Route1_EventScript_Leave_1


Route1_EventScript_DidBag::
# 28 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_DidBag_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_2
	return


Route1_EventScript_Bag::
# 33 "data/maps/Route1/scripts.pory"
	switch VAR_ROUTE1_STATE
# 34 "data/maps/Route1/scripts.pory"
	case 0, Route1_EventScript_Bag_2
# 45 "data/maps/Route1/scripts.pory"
	case 1, Route1_EventScript_Bag_3
	return

Route1_EventScript_Bag_2:
# 35 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Bag_Text_0
# 36 "data/maps/Route1/scripts.pory"
	delay 60
# 37 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Bag_Text_1
# 38 "data/maps/Route1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 5
# 39 "data/maps/Route1/scripts.pory"
	giveitem ITEM_INFINITE_FULL_RESTORE
# 40 "data/maps/Route1/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 41 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Bag_Text_2
# 42 "data/maps/Route1/scripts.pory"
	waitmessage
# 43 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Bag_Text_3, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
	return

Route1_EventScript_Bag_3:
# 46 "data/maps/Route1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 200
# 47 "data/maps/Route1/scripts.pory"
	waitmessage
# 48 "data/maps/Route1/scripts.pory"
	closemessage
	return


# 13 "data/maps/Route1/scripts.pory"
Route1_EventScript_Leave_Movement_0:
# 13 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 16 "data/maps/Route1/scripts.pory"
Route1_EventScript_Leave_Movement_1:
# 16 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

# 22 "data/maps/Route1/scripts.pory"
Route1_EventScript_Leave_Movement_2:
# 22 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

Route1_EventScript_Leave_Text_0:
# 14 "data/maps/Route1/scripts.pory"
	.string "Are you sure you want to move on?\p"
	.string "You won't be able to return to this\n"
	.string "route.$"

Route1_EventScript_DidBag_Text_0:
# 28 "data/maps/Route1/scripts.pory"
	.string "You should check that bag before going\n"
	.string "further!$"

Route1_EventScript_Bag_Text_0:
# 35 "data/maps/Route1/scripts.pory"
	.string "You take a look through the bag...$"

Route1_EventScript_Bag_Text_1:
# 37 "data/maps/Route1/scripts.pory"
	.string "You found a bunch of useful items!$"

Route1_EventScript_Bag_Text_2:
# 41 "data/maps/Route1/scripts.pory"
	.string "With these you can still catch a team in\n"
	.string "time for the regional!$"

Route1_EventScript_Bag_Text_3:
# 43 "data/maps/Route1/scripts.pory"
	.string "(Developer's Note: By interacting with\n"
	.string "the bag again you can get more\l"
	.string "Pokéballs as essentially a sandbox\l"
	.string "mode for catching your ideal team.\p"
	.string "You will later on get access to full mon\n"
	.string "customization regardless, so you don't\l"
	.string "need to worry about catching certain\l"
	.string "natures etc.)$"
