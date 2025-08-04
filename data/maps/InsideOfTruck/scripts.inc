# 1 "data/maps/InsideOfTruck/scripts.pory"

# 2 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_MapScripts::
# 3 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
# 4 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
# 5 "data/maps/InsideOfTruck/scripts.pory"
	.byte 0
# 6 "data/maps/InsideOfTruck/scripts.pory"

# 7 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnLoad:
# 8 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 9 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 10 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
# 11 "data/maps/InsideOfTruck/scripts.pory"
	end
# 12 "data/maps/InsideOfTruck/scripts.pory"

# 13 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnResume:
# 14 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
# 15 "data/maps/InsideOfTruck/scripts.pory"
	end
# 16 "data/maps/InsideOfTruck/scripts.pory"

# 17 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlags::
# 18 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 19 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_IntroText, MSGBOX_AUTOCLOSE
# 20 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 21 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 22 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_FORCED_DOUBLES
# 23 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_BADGE01_GET
# 24 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_BADGE02_GET
# 25 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_BADGE03_GET
# 26 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_BADGE04_GET
# 27 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_BADGE05_GET
# 28 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_BADGE06_GET
# 29 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_BADGE07_GET
# 30 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_BADGE08_GET
# 31 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ROUND_2
# 32 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ROUND_3
# 33 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ROUND_4
# 34 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ROUND_5
# 35 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ROUND_6
# 36 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ROUND_7
# 37 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ROUND_8
# 38 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ROUND_9
# 39 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ROUND_10
# 40 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ROUND_11
# 41 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ROUND_12
# 42 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ROUND_13
# 43 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ROUND_14
# 44 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 45 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LVL_CAP 50
# 46 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_REGIONAL_STATE 0
# 47 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE 1
# 48 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 49 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
# 50 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, InsideOfTruck_EventScript_SetIntroFlagsFemale
# 51 "data/maps/InsideOfTruck/scripts.pory"
	end
# 52 "data/maps/InsideOfTruck/scripts.pory"

# 53 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsMale::
# 54 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 55 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 56 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 57 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 58 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 59 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 60 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 61 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 62 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
# 63 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 64 "data/maps/InsideOfTruck/scripts.pory"
	end
# 65 "data/maps/InsideOfTruck/scripts.pory"

# 66 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsFemale::
# 67 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 68 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 69 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 70 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 71 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 72 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 73 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 74 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
# 75 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
# 76 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 77 "data/maps/InsideOfTruck/scripts.pory"
	end
# 78 "data/maps/InsideOfTruck/scripts.pory"

# 79 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_MovingBox::
# 80 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
# 81 "data/maps/InsideOfTruck/scripts.pory"
	end
# 82 "data/maps/InsideOfTruck/scripts.pory"

# 83 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_BoxPrintedWithMonLogo:
# 84 "data/maps/InsideOfTruck/scripts.pory"
	.string "The box is printed with a POKéMON logo.\p"
# 85 "data/maps/InsideOfTruck/scripts.pory"
	.string "It's a POKéMON brand moving and\n"
# 86 "data/maps/InsideOfTruck/scripts.pory"
	.string "delivery service.$"

InsideOfTruck_EventScript_Teleport::
# 91 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 92 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_ROUTE1, 6, 24
# 93 "data/maps/InsideOfTruck/scripts.pory"
	waitstate
# 94 "data/maps/InsideOfTruck/scripts.pory"
	applymovement LOCALID_PLAYER, InsideOfTruck_EventScript_Teleport_Movement_0
# 95 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement LOCALID_PLAYER
# 96 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
	return


# 94 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_Teleport_Movement_0:
# 94 "data/maps/InsideOfTruck/scripts.pory"
	face_up
	step_end

InsideOfTruck_Text_IntroText::
# 99 "data/maps/InsideOfTruck/scripts.pory"
	.string "You're on your way to the first regional\n"
	.string "of the newly announced Regulation R.\l"
	.string "While you'd love to play yourself, you\l"
	.string "unfortunately did not manage to get a\l"
	.string "team prepared for it in time, so you're\l"
	.string "just planning on spectating today.\p"
	.string "It seems like the truck has stopped, so\n"
	.string "you should probably head outside...$"
