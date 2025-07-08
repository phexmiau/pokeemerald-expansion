# 1 "data/maps/VolcanoOfTruth/scripts.pory"

# 2 "data/maps/VolcanoOfTruth/scripts.pory"
VolcanoOfTruth_MapScripts::
# 3 "data/maps/VolcanoOfTruth/scripts.pory"
	.byte 0

VolcanoOfTruth_EventScript_Reshiram::
# 7 "data/maps/VolcanoOfTruth/scripts.pory"
	lock
# 8 "data/maps/VolcanoOfTruth/scripts.pory"
	msgbox VolcanoOfTruth_EventScript_Reshiram_Text_0, MSGBOX_YESNO
# 9 "data/maps/VolcanoOfTruth/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VolcanoOfTruth_EventScript_Reshiram_2
VolcanoOfTruth_EventScript_Reshiram_1:
# 29 "data/maps/VolcanoOfTruth/scripts.pory"
	closemessage
# 30 "data/maps/VolcanoOfTruth/scripts.pory"
	release
	return

VolcanoOfTruth_EventScript_Reshiram_2:
# 11 "data/maps/VolcanoOfTruth/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 12 "data/maps/VolcanoOfTruth/scripts.pory"
	setvar VAR_VOLCANO_OF_TRUTH_STATE, 2
# 13 "data/maps/VolcanoOfTruth/scripts.pory"
	closemessage
# 14 "data/maps/VolcanoOfTruth/scripts.pory"
	faceplayer
# 15 "data/maps/VolcanoOfTruth/scripts.pory"
	playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
# 16 "data/maps/VolcanoOfTruth/scripts.pory"
	waitmoncry
# 17 "data/maps/VolcanoOfTruth/scripts.pory"
	givemon SPECIES_RESHIRAM, 50
# 18 "data/maps/VolcanoOfTruth/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/VolcanoOfTruth/scripts.pory"
	msgbox VolcanoOfTruth_EventScript_Reshiram_Text_1
# 20 "data/maps/VolcanoOfTruth/scripts.pory"
	call NicknamePartyMon
# 21 "data/maps/VolcanoOfTruth/scripts.pory"
	closemessage
# 22 "data/maps/VolcanoOfTruth/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/VolcanoOfTruth/scripts.pory"
	removeobject 1
# 24 "data/maps/VolcanoOfTruth/scripts.pory"
	removeobject 2
# 25 "data/maps/VolcanoOfTruth/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 26 "data/maps/VolcanoOfTruth/scripts.pory"
	msgbox VolcanoOfTruth_EventScript_Reshiram_Text_2
# 27 "data/maps/VolcanoOfTruth/scripts.pory"
	waitmessage
	goto VolcanoOfTruth_EventScript_Reshiram_1


VolcanoOfTruth_EventScript_Groudon::
# 34 "data/maps/VolcanoOfTruth/scripts.pory"
	lock
# 35 "data/maps/VolcanoOfTruth/scripts.pory"
	applymovement LOCALID_PLAYER, VolcanoOfTruth_EventScript_Groudon_Movement_0
# 36 "data/maps/VolcanoOfTruth/scripts.pory"
	msgbox VolcanoOfTruth_EventScript_Groudon_Text_0, MSGBOX_YESNO
# 37 "data/maps/VolcanoOfTruth/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VolcanoOfTruth_EventScript_Groudon_2
VolcanoOfTruth_EventScript_Groudon_1:
# 56 "data/maps/VolcanoOfTruth/scripts.pory"
	closemessage
# 57 "data/maps/VolcanoOfTruth/scripts.pory"
	release
	return

VolcanoOfTruth_EventScript_Groudon_2:
# 39 "data/maps/VolcanoOfTruth/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 40 "data/maps/VolcanoOfTruth/scripts.pory"
	setvar VAR_VOLCANO_OF_TRUTH_STATE, 2
# 41 "data/maps/VolcanoOfTruth/scripts.pory"
	closemessage
# 42 "data/maps/VolcanoOfTruth/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 43 "data/maps/VolcanoOfTruth/scripts.pory"
	waitmoncry
# 44 "data/maps/VolcanoOfTruth/scripts.pory"
	givemon SPECIES_GROUDON, 50
# 45 "data/maps/VolcanoOfTruth/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 46 "data/maps/VolcanoOfTruth/scripts.pory"
	msgbox VolcanoOfTruth_EventScript_Groudon_Text_1
# 47 "data/maps/VolcanoOfTruth/scripts.pory"
	call NicknamePartyMon
# 48 "data/maps/VolcanoOfTruth/scripts.pory"
	closemessage
# 49 "data/maps/VolcanoOfTruth/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/VolcanoOfTruth/scripts.pory"
	removeobject 1
# 51 "data/maps/VolcanoOfTruth/scripts.pory"
	removeobject 2
# 52 "data/maps/VolcanoOfTruth/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 53 "data/maps/VolcanoOfTruth/scripts.pory"
	msgbox VolcanoOfTruth_EventScript_Groudon_Text_2
# 54 "data/maps/VolcanoOfTruth/scripts.pory"
	waitmessage
	goto VolcanoOfTruth_EventScript_Groudon_1


VolcanoOfTruth_EventScript_SeeLegendaries::
# 61 "data/maps/VolcanoOfTruth/scripts.pory"
	lock
# 62 "data/maps/VolcanoOfTruth/scripts.pory"
	applymovement LOCALID_PLAYER, VolcanoOfTruth_EventScript_SeeLegendaries_Movement_0
# 63 "data/maps/VolcanoOfTruth/scripts.pory"
	special SpawnCameraObject
# 64 "data/maps/VolcanoOfTruth/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VolcanoOfTruth_EventScript_SeeLegendaries_Movement_1
# 65 "data/maps/VolcanoOfTruth/scripts.pory"
	waitmovement 0
# 66 "data/maps/VolcanoOfTruth/scripts.pory"
	msgbox VolcanoOfTruth_EventScript_SeeLegendaries_Text_0, MSGBOX_AUTOCLOSE
# 69 "data/maps/VolcanoOfTruth/scripts.pory"
	playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
# 71 "data/maps/VolcanoOfTruth/scripts.pory"
	waitmoncry
# 73 "data/maps/VolcanoOfTruth/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 75 "data/maps/VolcanoOfTruth/scripts.pory"
	waitmoncry
# 76 "data/maps/VolcanoOfTruth/scripts.pory"
	setvar VAR_VOLCANO_OF_TRUTH_STATE, 1
# 77 "data/maps/VolcanoOfTruth/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VolcanoOfTruth_EventScript_SeeLegendaries_Movement_2
# 78 "data/maps/VolcanoOfTruth/scripts.pory"
	waitmovement 0
# 79 "data/maps/VolcanoOfTruth/scripts.pory"
	special RemoveCameraObject
# 80 "data/maps/VolcanoOfTruth/scripts.pory"
	msgbox VolcanoOfTruth_EventScript_SeeLegendaries_Text_1, MSGBOX_AUTOCLOSE
# 81 "data/maps/VolcanoOfTruth/scripts.pory"
	release
	return


VolcanoOfTruth_EventScript_Leave::
# 85 "data/maps/VolcanoOfTruth/scripts.pory"
	msgbox VolcanoOfTruth_EventScript_Leave_Text_0, MSGBOX_AUTOCLOSE
# 86 "data/maps/VolcanoOfTruth/scripts.pory"
	applymovement LOCALID_PLAYER, VolcanoOfTruth_EventScript_Leave_Movement_0
	return


NicknamePartyMon::
# 90 "data/maps/VolcanoOfTruth/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 91 "data/maps/VolcanoOfTruth/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 92 "data/maps/VolcanoOfTruth/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 93 "data/maps/VolcanoOfTruth/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 98 "data/maps/VolcanoOfTruth/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 99 "data/maps/VolcanoOfTruth/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 102 "data/maps/VolcanoOfTruth/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 100 "data/maps/VolcanoOfTruth/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


# 35 "data/maps/VolcanoOfTruth/scripts.pory"
VolcanoOfTruth_EventScript_Groudon_Movement_0:
# 35 "data/maps/VolcanoOfTruth/scripts.pory"
	face_left
	step_end

# 62 "data/maps/VolcanoOfTruth/scripts.pory"
VolcanoOfTruth_EventScript_SeeLegendaries_Movement_0:
# 62 "data/maps/VolcanoOfTruth/scripts.pory"
	face_up
	step_end

# 64 "data/maps/VolcanoOfTruth/scripts.pory"
VolcanoOfTruth_EventScript_SeeLegendaries_Movement_1:
# 64 "data/maps/VolcanoOfTruth/scripts.pory"
	walk_up
# 64 "data/maps/VolcanoOfTruth/scripts.pory"
	walk_up
# 64 "data/maps/VolcanoOfTruth/scripts.pory"
	walk_up
# 64 "data/maps/VolcanoOfTruth/scripts.pory"
	walk_up
# 64 "data/maps/VolcanoOfTruth/scripts.pory"
	walk_up
# 64 "data/maps/VolcanoOfTruth/scripts.pory"
	walk_up
	step_end

# 77 "data/maps/VolcanoOfTruth/scripts.pory"
VolcanoOfTruth_EventScript_SeeLegendaries_Movement_2:
# 77 "data/maps/VolcanoOfTruth/scripts.pory"
	walk_down
# 77 "data/maps/VolcanoOfTruth/scripts.pory"
	walk_down
# 77 "data/maps/VolcanoOfTruth/scripts.pory"
	walk_down
# 77 "data/maps/VolcanoOfTruth/scripts.pory"
	walk_down
# 77 "data/maps/VolcanoOfTruth/scripts.pory"
	walk_down
# 77 "data/maps/VolcanoOfTruth/scripts.pory"
	walk_down
	step_end

# 86 "data/maps/VolcanoOfTruth/scripts.pory"
VolcanoOfTruth_EventScript_Leave_Movement_0:
# 86 "data/maps/VolcanoOfTruth/scripts.pory"
	walk_down
	step_end

VolcanoOfTruth_EventScript_Reshiram_Text_0:
# 8 "data/maps/VolcanoOfTruth/scripts.pory"
	.string "Do you want to join up with RESHIRAM?$"

VolcanoOfTruth_EventScript_Reshiram_Text_1:
# 19 "data/maps/VolcanoOfTruth/scripts.pory"
	.string "RESHIRAM joins you!$"

VolcanoOfTruth_EventScript_Reshiram_Text_2:
# 26 "data/maps/VolcanoOfTruth/scripts.pory"
	.string "GROUDON hurried away!$"

VolcanoOfTruth_EventScript_Groudon_Text_0:
# 36 "data/maps/VolcanoOfTruth/scripts.pory"
	.string "Do you want to join up with GROUDON?$"

VolcanoOfTruth_EventScript_Groudon_Text_1:
# 46 "data/maps/VolcanoOfTruth/scripts.pory"
	.string "GROUDON joins you!$"

VolcanoOfTruth_EventScript_Groudon_Text_2:
# 53 "data/maps/VolcanoOfTruth/scripts.pory"
	.string "RESHIRAM hurried away!$"

VolcanoOfTruth_EventScript_SeeLegendaries_Text_0:
# 66 "data/maps/VolcanoOfTruth/scripts.pory"
	.string "You see RESHIRAM and GROUDON in a\n"
	.string "stalemate before you.$"

VolcanoOfTruth_EventScript_SeeLegendaries_Text_1:
# 80 "data/maps/VolcanoOfTruth/scripts.pory"
	.string "You have to decide on one of them to\n"
	.string "help!$"

VolcanoOfTruth_EventScript_Leave_Text_0:
# 85 "data/maps/VolcanoOfTruth/scripts.pory"
	.string "You can't just leave yet!$"

NicknamePartyMon_Text_0:
# 90 "data/maps/VolcanoOfTruth/scripts.pory"
	.string "Give it a nickname?$"
