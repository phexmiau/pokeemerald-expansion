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
    special HealPlayerParty
# 9 "data/maps/Route1/scripts.pory"
	end

Route1_EventScript_Leave::
# 14 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_0
# 15 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Leave_Text_0, MSGBOX_YESNO
# 16 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_EventScript_Leave_2
# 23 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_2
Route1_EventScript_Leave_1:
# 25 "data/maps/Route1/scripts.pory"
	closemessage
	return

Route1_EventScript_Leave_2:
# 17 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_1
# 18 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_1
# 20 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE1_STATE, 2
# 21 "data/maps/Route1/scripts.pory"
	warp MAP_ROUTE2, 7, 26
	goto Route1_EventScript_Leave_1


Route1_EventScript_DidBag::
# 29 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_DidBag_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_EventScript_Leave_Movement_2
	return


Route1_EventScript_Bag::
# 34 "data/maps/Route1/scripts.pory"
	switch VAR_ROUTE1_STATE
# 35 "data/maps/Route1/scripts.pory"
	case 0, Route1_EventScript_Bag_2
# 50 "data/maps/Route1/scripts.pory"
	case 1, Route1_EventScript_Bag_3
	return

Route1_EventScript_Bag_2:
# 36 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Bag_Text_0
# 37 "data/maps/Route1/scripts.pory"
	delay 60
# 38 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Bag_Text_1
# 39 "data/maps/Route1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 5
# 40 "data/maps/Route1/scripts.pory"
	giveitem ITEM_INFINITE_FULL_RESTORE
# 41 "data/maps/Route1/scripts.pory"
	giveitem ITEM_INFINITE_ELIXIR
# 42 "data/maps/Route1/scripts.pory"
	giveitem ITEM_INFINITE_REVIVE
# 43 "data/maps/Route1/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 44 "data/maps/Route1/scripts.pory"
	giveitem ITEM_TERA_ORB
# 45 "data/maps/Route1/scripts.pory"
	special HealPlayerParty
# 46 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Bag_Text_2
# 47 "data/maps/Route1/scripts.pory"
	waitmessage
# 48 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Bag_Text_3, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
	return

Route1_EventScript_Bag_3:
# 51 "data/maps/Route1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 200
# 52 "data/maps/Route1/scripts.pory"
	waitmessage
# 53 "data/maps/Route1/scripts.pory"
	closemessage
	return


Route1_EventScript_BugCatcher::
# 58 "data/maps/Route1/scripts.pory"
	lock
# 59 "data/maps/Route1/scripts.pory"
	faceplayer
# 60 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_BugCatcher_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/Route1/scripts.pory"
	waitmessage
# 62 "data/maps/Route1/scripts.pory"
	release
	return


# 14 "data/maps/Route1/scripts.pory"
Route1_EventScript_Leave_Movement_0:
# 14 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 17 "data/maps/Route1/scripts.pory"
Route1_EventScript_Leave_Movement_1:
# 17 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

# 23 "data/maps/Route1/scripts.pory"
Route1_EventScript_Leave_Movement_2:
# 23 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

Route1_EventScript_Leave_Text_0:
# 15 "data/maps/Route1/scripts.pory"
	.string "Are you sure you want to move on?\p"
	.string "You won't be able to return to this\n"
	.string "route.$"

Route1_EventScript_DidBag_Text_0:
# 29 "data/maps/Route1/scripts.pory"
	.string "You should check that bag before going\n"
	.string "further!$"

Route1_EventScript_Bag_Text_0:
# 36 "data/maps/Route1/scripts.pory"
	.string "You take a look through the bag...$"

Route1_EventScript_Bag_Text_1:
# 38 "data/maps/Route1/scripts.pory"
	.string "You found a bunch of useful items!$"

Route1_EventScript_Bag_Text_2:
# 46 "data/maps/Route1/scripts.pory"
	.string "With these you can still catch a team in\n"
	.string "time for the regional!$"

Route1_EventScript_Bag_Text_3:
# 48 "data/maps/Route1/scripts.pory"
	.string "(Developer's Note: By interacting with\n"
	.string "the bag again you can get more\l"
	.string "Pokéballs as essentially a sandbox\l"
	.string "mode for catching your ideal team.\p"
	.string "You will later on get access to full mon\n"
	.string "customization regardless, so you don't\l"
	.string "need to worry about catching certain\l"
	.string "natures etc.)$"

Route1_EventScript_BugCatcher_Text_0:
# 60 "data/maps/Route1/scripts.pory"
	.string "I came up with this crazy challenge idea\n"
	.string "the other day.\p"
	.string "There are 5 routes that you need to\n"
	.string "pass to get to the site of the VGC\l"
	.string "regional...\l"
	.string "so what if someone were to play using\l"
	.string "only their first encounter on each\l"
	.string "route?\p"
	.string "Is that even possible!?$"
