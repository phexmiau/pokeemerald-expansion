# 1 "data/maps/AfterTruck/scripts.pory"

# 2 "data/maps/AfterTruck/scripts.pory"
AfterTruck_MapScripts::
# 3 "data/maps/AfterTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AfterTruck_OnTransition
# 4 "data/maps/AfterTruck/scripts.pory"
	.byte 0
# 5 "data/maps/AfterTruck/scripts.pory"

# 6 "data/maps/AfterTruck/scripts.pory"
AfterTruck_OnTransition:
# 7 "data/maps/AfterTruck/scripts.pory"
    setflag FLAG_TEMP_2
# 8 "data/maps/AfterTruck/scripts.pory"
	end

AfterTruck_EventScript_SignVolcano::
# 12 "data/maps/AfterTruck/scripts.pory"
	lockall
# 13 "data/maps/AfterTruck/scripts.pory"
	msgbox AfterTruck_EventScript_SignVolcano_Text_0
# 14 "data/maps/AfterTruck/scripts.pory"
	releaseall
	return


AfterTruck_EventScript_SignCrystal::
# 18 "data/maps/AfterTruck/scripts.pory"
	lockall
# 19 "data/maps/AfterTruck/scripts.pory"
	msgbox AfterTruck_EventScript_SignCrystal_Text_0
# 20 "data/maps/AfterTruck/scripts.pory"
	releaseall
	return


AfterTruck_EventScript_SignBoring::
# 24 "data/maps/AfterTruck/scripts.pory"
	lockall
# 25 "data/maps/AfterTruck/scripts.pory"
	msgbox AfterTruck_EventScript_SignBoring_Text_0
# 26 "data/maps/AfterTruck/scripts.pory"
	releaseall
	return


AfterTruck_EventScript_SignTeardrop::
# 30 "data/maps/AfterTruck/scripts.pory"
	lockall
# 31 "data/maps/AfterTruck/scripts.pory"
	msgbox AfterTruck_EventScript_SignTeardrop_Text_0
# 32 "data/maps/AfterTruck/scripts.pory"
	releaseall
	return


AfterTruck_EventScript_SignTruck::
# 36 "data/maps/AfterTruck/scripts.pory"
	lockall
# 37 "data/maps/AfterTruck/scripts.pory"
	msgbox AfterTruck_EventScript_SignTruck_Text_0
# 38 "data/maps/AfterTruck/scripts.pory"
	releaseall
	return


AfterTruck_EventScript_IntroTrigger::
# 42 "data/maps/AfterTruck/scripts.pory"
	lock
# 45 "data/maps/AfterTruck/scripts.pory"
	addobject 2
# 46 "data/maps/AfterTruck/scripts.pory"
	applymovement 2, AfterTruck_EventScript_IntroTrigger_Movement_0
# 47 "data/maps/AfterTruck/scripts.pory"
	waitmovement
# 48 "data/maps/AfterTruck/scripts.pory"
	applymovement LOCALID_PLAYER, AfterTruck_EventScript_IntroTrigger_Movement_1
# 49 "data/maps/AfterTruck/scripts.pory"
	waitmovement
# 50 "data/maps/AfterTruck/scripts.pory"
	msgbox AfterTruck_EventScript_IntroTrigger_Text_0, MSGBOX_AUTOCLOSE
# 51 "data/maps/AfterTruck/scripts.pory"
	waitmessage
# 52 "data/maps/AfterTruck/scripts.pory"
	setvar VAR_TEMP_0, 1
# 53 "data/maps/AfterTruck/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 54 "data/maps/AfterTruck/scripts.pory"
	release
	return


AfterTruck_EventScript_Driver::
# 58 "data/maps/AfterTruck/scripts.pory"
	lock
# 59 "data/maps/AfterTruck/scripts.pory"
	faceplayer
# 60 "data/maps/AfterTruck/scripts.pory"
	msgbox AfterTruck_EventScript_Driver_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/AfterTruck/scripts.pory"
	waitmessage
# 62 "data/maps/AfterTruck/scripts.pory"
	release
	return


# 46 "data/maps/AfterTruck/scripts.pory"
AfterTruck_EventScript_IntroTrigger_Movement_0:
# 46 "data/maps/AfterTruck/scripts.pory"
	walk_down
# 46 "data/maps/AfterTruck/scripts.pory"
	walk_right
	step_end

# 48 "data/maps/AfterTruck/scripts.pory"
AfterTruck_EventScript_IntroTrigger_Movement_1:
# 48 "data/maps/AfterTruck/scripts.pory"
	face_left
	step_end

AfterTruck_EventScript_SignVolcano_Text_0:
# 13 "data/maps/AfterTruck/scripts.pory"
	.string "Ahead: Volcano of Truth$"

AfterTruck_EventScript_SignCrystal_Text_0:
# 19 "data/maps/AfterTruck/scripts.pory"
	.string "Ahead: Crystal Cave$"

AfterTruck_EventScript_SignBoring_Text_0:
# 25 "data/maps/AfterTruck/scripts.pory"
	.string "Ahead: Boring Road$"

AfterTruck_EventScript_SignTeardrop_Text_0:
# 31 "data/maps/AfterTruck/scripts.pory"
	.string "Ahead: Teardrop Forest$"

AfterTruck_EventScript_SignTruck_Text_0:
# 37 "data/maps/AfterTruck/scripts.pory"
	.string "Truck Stop$"

AfterTruck_EventScript_IntroTrigger_Text_0:
# 50 "data/maps/AfterTruck/scripts.pory"
	.string "Welp, that's the furthest I can get you!\p"
	.string "If you want to make it to the regional\n"
	.string "venue from here, you'll have to take one\l"
	.string "of those four paths ahead.\p"
	.string "Such a bummer still that you didn't\n"
	.string "manage to get a team ready in time to\l"
	.string "participate yourself...\p"
	.string "Hope spectating will be still be a blast\n"
	.string "tho!$"

AfterTruck_EventScript_Driver_Text_0:
# 60 "data/maps/AfterTruck/scripts.pory"
	.string "You won't have time to return here once\n"
	.string "you make a choice, unless you want to\l"
	.string "be late for the regional...\p"
	.string "But I still believe you should think\n"
	.string "this through carefully.\p"
	.string "This odd feeling won't leave me, saying\n"
	.string "that your decision will have legendary\l"
	.string "ramifications...$"
