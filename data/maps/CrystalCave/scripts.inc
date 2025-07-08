# 1 "data/maps/CrystalCave/scripts.pory"

# 2 "data/maps/CrystalCave/scripts.pory"
CrystalCave_MapScripts::
# 3 "data/maps/CrystalCave/scripts.pory"
	.byte 0

CrystalCave_EventScript_Terapagos::
# 7 "data/maps/CrystalCave/scripts.pory"
	lock
# 8 "data/maps/CrystalCave/scripts.pory"
	msgbox CrystalCave_EventScript_Terapagos_Text_0, MSGBOX_YESNO
# 9 "data/maps/CrystalCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CrystalCave_EventScript_Terapagos_2
CrystalCave_EventScript_Terapagos_1:
# 28 "data/maps/CrystalCave/scripts.pory"
	closemessage
# 29 "data/maps/CrystalCave/scripts.pory"
	release
	return

CrystalCave_EventScript_Terapagos_2:
# 11 "data/maps/CrystalCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 12 "data/maps/CrystalCave/scripts.pory"
	setvar VAR_CRYSTAL_CAVE_STATE, 2
# 13 "data/maps/CrystalCave/scripts.pory"
	closemessage
# 14 "data/maps/CrystalCave/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_ENCOUNTER
# 15 "data/maps/CrystalCave/scripts.pory"
	applymovement 1, CrystalCave_EventScript_Terapagos_Movement_0
# 16 "data/maps/CrystalCave/scripts.pory"
	waitmovement 0
# 17 "data/maps/CrystalCave/scripts.pory"
	waitmoncry
# 18 "data/maps/CrystalCave/scripts.pory"
	givemon SPECIES_TERAPAGOS, 50
# 19 "data/maps/CrystalCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/CrystalCave/scripts.pory"
	msgbox CrystalCave_EventScript_Terapagos_Text_1
# 21 "data/maps/CrystalCave/scripts.pory"
	call NicknamePartyMon
# 22 "data/maps/CrystalCave/scripts.pory"
	closemessage
# 23 "data/maps/CrystalCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 24 "data/maps/CrystalCave/scripts.pory"
	removeobject 1
# 25 "data/maps/CrystalCave/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 26 "data/maps/CrystalCave/scripts.pory"
	waitmessage
	goto CrystalCave_EventScript_Terapagos_1


CrystalCave_EventScript_Leave::
# 33 "data/maps/CrystalCave/scripts.pory"
	msgbox CrystalCave_EventScript_Leave_Text_0, MSGBOX_AUTOCLOSE
# 34 "data/maps/CrystalCave/scripts.pory"
	applymovement LOCALID_PLAYER, CrystalCave_EventScript_Leave_Movement_0
	return


CrystalCave_EventScript_SeeLegendaries::
# 38 "data/maps/CrystalCave/scripts.pory"
	lockall
# 39 "data/maps/CrystalCave/scripts.pory"
	applymovement LOCALID_PLAYER, CrystalCave_EventScript_SeeLegendaries_Movement_0
# 40 "data/maps/CrystalCave/scripts.pory"
	special SpawnCameraObject
# 41 "data/maps/CrystalCave/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CrystalCave_EventScript_SeeLegendaries_Movement_1
# 42 "data/maps/CrystalCave/scripts.pory"
	waitmovement 0
# 43 "data/maps/CrystalCave/scripts.pory"
	msgbox CrystalCave_EventScript_SeeLegendaries_Text_0, MSGBOX_AUTOCLOSE
# 44 "data/maps/CrystalCave/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_ENCOUNTER
# 45 "data/maps/CrystalCave/scripts.pory"
	waitmoncry
# 46 "data/maps/CrystalCave/scripts.pory"
	setvar VAR_CRYSTAL_CAVE_STATE, 1
# 47 "data/maps/CrystalCave/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CrystalCave_EventScript_SeeLegendaries_Movement_2
# 48 "data/maps/CrystalCave/scripts.pory"
	waitmovement 0
# 49 "data/maps/CrystalCave/scripts.pory"
	special RemoveCameraObject
# 50 "data/maps/CrystalCave/scripts.pory"
	msgbox CrystalCave_EventScript_SeeLegendaries_Text_1, MSGBOX_AUTOCLOSE
# 51 "data/maps/CrystalCave/scripts.pory"
	releaseall
	return


# 15 "data/maps/CrystalCave/scripts.pory"
CrystalCave_EventScript_Terapagos_Movement_0:
# 15 "data/maps/CrystalCave/scripts.pory"
	walk_in_place_fast_down
# 15 "data/maps/CrystalCave/scripts.pory"
	walk_in_place_fast_down
# 15 "data/maps/CrystalCave/scripts.pory"
	walk_in_place_fast_down
# 15 "data/maps/CrystalCave/scripts.pory"
	walk_in_place_fast_down
# 15 "data/maps/CrystalCave/scripts.pory"
	walk_in_place_fast_down
# 15 "data/maps/CrystalCave/scripts.pory"
	walk_in_place_fast_down
# 15 "data/maps/CrystalCave/scripts.pory"
	walk_in_place_fast_down
# 15 "data/maps/CrystalCave/scripts.pory"
	walk_in_place_fast_down
	step_end

# 34 "data/maps/CrystalCave/scripts.pory"
CrystalCave_EventScript_Leave_Movement_0:
# 34 "data/maps/CrystalCave/scripts.pory"
	walk_down
	step_end

# 39 "data/maps/CrystalCave/scripts.pory"
CrystalCave_EventScript_SeeLegendaries_Movement_0:
# 39 "data/maps/CrystalCave/scripts.pory"
	face_up
	step_end

# 41 "data/maps/CrystalCave/scripts.pory"
CrystalCave_EventScript_SeeLegendaries_Movement_1:
# 41 "data/maps/CrystalCave/scripts.pory"
	walk_up
# 41 "data/maps/CrystalCave/scripts.pory"
	walk_up
# 41 "data/maps/CrystalCave/scripts.pory"
	walk_up
# 41 "data/maps/CrystalCave/scripts.pory"
	walk_up
# 41 "data/maps/CrystalCave/scripts.pory"
	walk_up
# 41 "data/maps/CrystalCave/scripts.pory"
	walk_up
# 41 "data/maps/CrystalCave/scripts.pory"
	walk_right
	step_end

# 47 "data/maps/CrystalCave/scripts.pory"
CrystalCave_EventScript_SeeLegendaries_Movement_2:
# 47 "data/maps/CrystalCave/scripts.pory"
	walk_down
# 47 "data/maps/CrystalCave/scripts.pory"
	walk_down
# 47 "data/maps/CrystalCave/scripts.pory"
	walk_down
# 47 "data/maps/CrystalCave/scripts.pory"
	walk_down
# 47 "data/maps/CrystalCave/scripts.pory"
	walk_down
# 47 "data/maps/CrystalCave/scripts.pory"
	walk_down
# 47 "data/maps/CrystalCave/scripts.pory"
	walk_left
	step_end

CrystalCave_EventScript_Terapagos_Text_0:
# 8 "data/maps/CrystalCave/scripts.pory"
	.string "Do you want to join up with TERAPAGOS?$"

CrystalCave_EventScript_Terapagos_Text_1:
# 20 "data/maps/CrystalCave/scripts.pory"
	.string "TERAPAGOS joins you!$"

CrystalCave_EventScript_Leave_Text_0:
# 33 "data/maps/CrystalCave/scripts.pory"
	.string "You can't just leave yet!$"

CrystalCave_EventScript_SeeLegendaries_Text_0:
# 43 "data/maps/CrystalCave/scripts.pory"
	.string "You see TERAPAGOS chilling in the\n"
	.string "crystal pool.$"

CrystalCave_EventScript_SeeLegendaries_Text_1:
# 50 "data/maps/CrystalCave/scripts.pory"
	.string "You should say hi!$"
