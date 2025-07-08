# 1 "data/maps/TeardropForest/scripty.pory"

# 2 "data/maps/TeardropForest/scripty.pory"
TeardropForest_MapScripts::
# 3 "data/maps/TeardropForest/scripty.pory"
	.byte 0

TeardropForest_EventScript_Lunala::
# 8 "data/maps/TeardropForest/scripty.pory"
	lock
# 9 "data/maps/TeardropForest/scripty.pory"
	msgbox TeardropForest_EventScript_Lunala_Text_0, MSGBOX_YESNO
# 10 "data/maps/TeardropForest/scripty.pory"
	compare VAR_RESULT, YES
	goto_if_eq TeardropForest_EventScript_Lunala_2
TeardropForest_EventScript_Lunala_1:
# 30 "data/maps/TeardropForest/scripty.pory"
	closemessage
# 31 "data/maps/TeardropForest/scripty.pory"
	release
	return

TeardropForest_EventScript_Lunala_2:
# 12 "data/maps/TeardropForest/scripty.pory"
	setflag FLAG_SYS_POKEMON_GET
# 13 "data/maps/TeardropForest/scripty.pory"
	setvar VAR_TEARDROP_FOREST_STATE, 2
# 14 "data/maps/TeardropForest/scripty.pory"
	closemessage
# 15 "data/maps/TeardropForest/scripty.pory"
	faceplayer
# 16 "data/maps/TeardropForest/scripty.pory"
	playmoncry SPECIES_LUNALA, CRY_MODE_ENCOUNTER
# 17 "data/maps/TeardropForest/scripty.pory"
	waitmoncry
# 18 "data/maps/TeardropForest/scripty.pory"
	givemon SPECIES_LUNALA, 50
# 19 "data/maps/TeardropForest/scripty.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/TeardropForest/scripty.pory"
	msgbox TeardropForest_EventScript_Lunala_Text_1
# 21 "data/maps/TeardropForest/scripty.pory"
	call NicknamePartyMon
# 22 "data/maps/TeardropForest/scripty.pory"
	closemessage
# 23 "data/maps/TeardropForest/scripty.pory"
	fadescreen FADE_TO_BLACK
# 24 "data/maps/TeardropForest/scripty.pory"
	removeobject 1
# 25 "data/maps/TeardropForest/scripty.pory"
	removeobject 2
# 26 "data/maps/TeardropForest/scripty.pory"
	fadescreen FADE_FROM_BLACK
# 27 "data/maps/TeardropForest/scripty.pory"
	msgbox TeardropForest_EventScript_Lunala_Text_2
# 28 "data/maps/TeardropForest/scripty.pory"
	waitmessage
	goto TeardropForest_EventScript_Lunala_1


TeardropForest_EventScript_Kyogre::
# 35 "data/maps/TeardropForest/scripty.pory"
	lock
# 36 "data/maps/TeardropForest/scripty.pory"
	msgbox TeardropForest_EventScript_Kyogre_Text_0, MSGBOX_YESNO
# 37 "data/maps/TeardropForest/scripty.pory"
	compare VAR_RESULT, YES
	goto_if_eq TeardropForest_EventScript_Kyogre_2
TeardropForest_EventScript_Kyogre_1:
# 56 "data/maps/TeardropForest/scripty.pory"
	closemessage
# 57 "data/maps/TeardropForest/scripty.pory"
	release
	return

TeardropForest_EventScript_Kyogre_2:
# 39 "data/maps/TeardropForest/scripty.pory"
	setflag FLAG_SYS_POKEMON_GET
# 40 "data/maps/TeardropForest/scripty.pory"
	setvar VAR_TEARDROP_FOREST_STATE, 2
# 41 "data/maps/TeardropForest/scripty.pory"
	closemessage
# 42 "data/maps/TeardropForest/scripty.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 43 "data/maps/TeardropForest/scripty.pory"
	waitmoncry
# 44 "data/maps/TeardropForest/scripty.pory"
	givemon SPECIES_KYOGRE, 50
# 45 "data/maps/TeardropForest/scripty.pory"
	playfanfare MUS_OBTAIN_ITEM
# 46 "data/maps/TeardropForest/scripty.pory"
	msgbox TeardropForest_EventScript_Kyogre_Text_1
# 47 "data/maps/TeardropForest/scripty.pory"
	call NicknamePartyMon
# 48 "data/maps/TeardropForest/scripty.pory"
	closemessage
# 49 "data/maps/TeardropForest/scripty.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/TeardropForest/scripty.pory"
	removeobject 1
# 51 "data/maps/TeardropForest/scripty.pory"
	removeobject 2
# 52 "data/maps/TeardropForest/scripty.pory"
	fadescreen FADE_FROM_BLACK
# 53 "data/maps/TeardropForest/scripty.pory"
	msgbox TeardropForest_EventScript_Kyogre_Text_2
# 54 "data/maps/TeardropForest/scripty.pory"
	waitmessage
	goto TeardropForest_EventScript_Kyogre_1


TeardropForest_EventScript_SeeLegendaries::
# 61 "data/maps/TeardropForest/scripty.pory"
	lockall
# 62 "data/maps/TeardropForest/scripty.pory"
	special SpawnCameraObject
# 63 "data/maps/TeardropForest/scripty.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TeardropForest_EventScript_SeeLegendaries_Movement_0
# 64 "data/maps/TeardropForest/scripty.pory"
	waitmovement 0
# 65 "data/maps/TeardropForest/scripty.pory"
	playmoncry SPECIES_LUNALA, CRY_MODE_ENCOUNTER
# 66 "data/maps/TeardropForest/scripty.pory"
	msgbox TeardropForest_EventScript_SeeLegendaries_Text_0, MSGBOX_AUTOCLOSE
# 67 "data/maps/TeardropForest/scripty.pory"
	waitmoncry
# 68 "data/maps/TeardropForest/scripty.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TeardropForest_EventScript_SeeLegendaries_Movement_1
# 69 "data/maps/TeardropForest/scripty.pory"
	waitmovement 0
# 70 "data/maps/TeardropForest/scripty.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 71 "data/maps/TeardropForest/scripty.pory"
	msgbox TeardropForest_EventScript_SeeLegendaries_Text_1, MSGBOX_AUTOCLOSE
# 72 "data/maps/TeardropForest/scripty.pory"
	waitmoncry
# 73 "data/maps/TeardropForest/scripty.pory"
	setvar VAR_TEARDROP_FOREST_STATE, 1
# 74 "data/maps/TeardropForest/scripty.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TeardropForest_EventScript_SeeLegendaries_Movement_2
# 75 "data/maps/TeardropForest/scripty.pory"
	waitmovement 0
# 76 "data/maps/TeardropForest/scripty.pory"
	special RemoveCameraObject
# 77 "data/maps/TeardropForest/scripty.pory"
	msgbox TeardropForest_EventScript_SeeLegendaries_Text_2, MSGBOX_AUTOCLOSE
# 78 "data/maps/TeardropForest/scripty.pory"
	releaseall
	return


TeardropForest_EventScript_Leave::
# 82 "data/maps/TeardropForest/scripty.pory"
	msgbox TeardropForest_EventScript_Leave_Text_0, MSGBOX_AUTOCLOSE
# 83 "data/maps/TeardropForest/scripty.pory"
	applymovement LOCALID_PLAYER, TeardropForest_EventScript_Leave_Movement_0
	return


# 63 "data/maps/TeardropForest/scripty.pory"
TeardropForest_EventScript_SeeLegendaries_Movement_0:
# 63 "data/maps/TeardropForest/scripty.pory"
	walk_up
# 63 "data/maps/TeardropForest/scripty.pory"
	walk_up
# 63 "data/maps/TeardropForest/scripty.pory"
	walk_left
# 63 "data/maps/TeardropForest/scripty.pory"
	walk_left
# 63 "data/maps/TeardropForest/scripty.pory"
	walk_left
# 63 "data/maps/TeardropForest/scripty.pory"
	walk_left
# 63 "data/maps/TeardropForest/scripty.pory"
	walk_left
	step_end

# 68 "data/maps/TeardropForest/scripty.pory"
TeardropForest_EventScript_SeeLegendaries_Movement_1:
# 68 "data/maps/TeardropForest/scripty.pory"
	walk_right
# 68 "data/maps/TeardropForest/scripty.pory"
	walk_right
# 68 "data/maps/TeardropForest/scripty.pory"
	walk_right
# 68 "data/maps/TeardropForest/scripty.pory"
	walk_right
# 68 "data/maps/TeardropForest/scripty.pory"
	walk_right
# 68 "data/maps/TeardropForest/scripty.pory"
	walk_right
# 68 "data/maps/TeardropForest/scripty.pory"
	walk_right
# 68 "data/maps/TeardropForest/scripty.pory"
	walk_right
# 68 "data/maps/TeardropForest/scripty.pory"
	walk_right
# 68 "data/maps/TeardropForest/scripty.pory"
	walk_right
# 68 "data/maps/TeardropForest/scripty.pory"
	walk_up
# 68 "data/maps/TeardropForest/scripty.pory"
	walk_up
# 68 "data/maps/TeardropForest/scripty.pory"
	walk_up
	step_end

# 74 "data/maps/TeardropForest/scripty.pory"
TeardropForest_EventScript_SeeLegendaries_Movement_2:
# 74 "data/maps/TeardropForest/scripty.pory"
	walk_left
# 74 "data/maps/TeardropForest/scripty.pory"
	walk_left
# 74 "data/maps/TeardropForest/scripty.pory"
	walk_left
# 74 "data/maps/TeardropForest/scripty.pory"
	walk_left
# 74 "data/maps/TeardropForest/scripty.pory"
	walk_left
# 74 "data/maps/TeardropForest/scripty.pory"
	walk_down
# 74 "data/maps/TeardropForest/scripty.pory"
	walk_down
# 74 "data/maps/TeardropForest/scripty.pory"
	walk_down
# 74 "data/maps/TeardropForest/scripty.pory"
	walk_down
# 74 "data/maps/TeardropForest/scripty.pory"
	walk_down
	step_end

# 83 "data/maps/TeardropForest/scripty.pory"
TeardropForest_EventScript_Leave_Movement_0:
# 83 "data/maps/TeardropForest/scripty.pory"
	walk_right
	step_end

TeardropForest_EventScript_Lunala_Text_0:
# 9 "data/maps/TeardropForest/scripty.pory"
	.string "Do you want to join up with LUNALA?$"

TeardropForest_EventScript_Lunala_Text_1:
# 20 "data/maps/TeardropForest/scripty.pory"
	.string "LUNALA joins you!$"

TeardropForest_EventScript_Lunala_Text_2:
# 27 "data/maps/TeardropForest/scripty.pory"
	.string "KYOGRE swam away!$"

TeardropForest_EventScript_Kyogre_Text_0:
# 36 "data/maps/TeardropForest/scripty.pory"
	.string "Do you want to join up with KYOGRE?$"

TeardropForest_EventScript_Kyogre_Text_1:
# 46 "data/maps/TeardropForest/scripty.pory"
	.string "KYOGRE joins you!$"

TeardropForest_EventScript_Kyogre_Text_2:
# 53 "data/maps/TeardropForest/scripty.pory"
	.string "LUNALA flew away!$"

TeardropForest_EventScript_SeeLegendaries_Text_0:
# 66 "data/maps/TeardropForest/scripty.pory"
	.string "You see LUNALA resting in a clearing\n"
	.string "ahead of you.$"

TeardropForest_EventScript_SeeLegendaries_Text_1:
# 71 "data/maps/TeardropForest/scripty.pory"
	.string "KYOGRE is swimming in the nearby lake.$"

TeardropForest_EventScript_SeeLegendaries_Text_2:
# 77 "data/maps/TeardropForest/scripty.pory"
	.string "It seems like either wants to join you!$"

TeardropForest_EventScript_Leave_Text_0:
# 82 "data/maps/TeardropForest/scripty.pory"
	.string "You can't just leave yet!$"
