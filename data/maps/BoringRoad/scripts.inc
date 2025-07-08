# 1 "data/maps/BoringRoad/scripts.pory"

# 2 "data/maps/BoringRoad/scripts.pory"
BoringRoad_MapScripts::
# 3 "data/maps/BoringRoad/scripts.pory"
	.byte 0

BoringRoad_EventScript_Sign::
# 7 "data/maps/BoringRoad/scripts.pory"
	lockall
# 8 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_Sign_Text_0
# 9 "data/maps/BoringRoad/scripts.pory"
	releaseall
	return


BoringRoad_EventScript_Leave::
# 13 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_Leave_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/BoringRoad/scripts.pory"
	applymovement LOCALID_PLAYER, BoringRoad_EventScript_Leave_Movement_0
	return


BoringRoad_EventScript_Miraidon::
# 18 "data/maps/BoringRoad/scripts.pory"
	lock
# 19 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_Miraidon_Text_0, MSGBOX_YESNO
# 20 "data/maps/BoringRoad/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BoringRoad_EventScript_Miraidon_2
BoringRoad_EventScript_Miraidon_1:
# 42 "data/maps/BoringRoad/scripts.pory"
	closemessage
# 43 "data/maps/BoringRoad/scripts.pory"
	release
	return

BoringRoad_EventScript_Miraidon_2:
# 22 "data/maps/BoringRoad/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 23 "data/maps/BoringRoad/scripts.pory"
	setvar VAR_BORING_ROAD_STATE, 1
# 24 "data/maps/BoringRoad/scripts.pory"
	closemessage
# 25 "data/maps/BoringRoad/scripts.pory"
	faceplayer
# 26 "data/maps/BoringRoad/scripts.pory"
	playmoncry SPECIES_MIRAIDON, CRY_MODE_ENCOUNTER
# 27 "data/maps/BoringRoad/scripts.pory"
	waitmoncry
# 28 "data/maps/BoringRoad/scripts.pory"
	givemon SPECIES_MIRAIDON, 50
# 29 "data/maps/BoringRoad/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 30 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_Miraidon_Text_1
# 31 "data/maps/BoringRoad/scripts.pory"
	call NicknamePartyMon
# 32 "data/maps/BoringRoad/scripts.pory"
	closemessage
# 33 "data/maps/BoringRoad/scripts.pory"
	fadescreen FADE_TO_BLACK
# 34 "data/maps/BoringRoad/scripts.pory"
	removeobject 1
# 35 "data/maps/BoringRoad/scripts.pory"
	removeobject 2
# 36 "data/maps/BoringRoad/scripts.pory"
	removeobject 3
# 37 "data/maps/BoringRoad/scripts.pory"
	removeobject 4
# 38 "data/maps/BoringRoad/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 39 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_Miraidon_Text_2
# 40 "data/maps/BoringRoad/scripts.pory"
	waitmessage
	goto BoringRoad_EventScript_Miraidon_1


BoringRoad_EventScript_Koraidon::
# 47 "data/maps/BoringRoad/scripts.pory"
	lock
# 48 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_Koraidon_Text_0, MSGBOX_YESNO
# 49 "data/maps/BoringRoad/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BoringRoad_EventScript_Koraidon_2
BoringRoad_EventScript_Koraidon_1:
# 71 "data/maps/BoringRoad/scripts.pory"
	closemessage
# 72 "data/maps/BoringRoad/scripts.pory"
	release
	return

BoringRoad_EventScript_Koraidon_2:
# 51 "data/maps/BoringRoad/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 52 "data/maps/BoringRoad/scripts.pory"
	setvar VAR_BORING_ROAD_STATE, 1
# 53 "data/maps/BoringRoad/scripts.pory"
	closemessage
# 54 "data/maps/BoringRoad/scripts.pory"
	faceplayer
# 55 "data/maps/BoringRoad/scripts.pory"
	playmoncry SPECIES_KORAIDON, CRY_MODE_ENCOUNTER
# 56 "data/maps/BoringRoad/scripts.pory"
	waitmoncry
# 57 "data/maps/BoringRoad/scripts.pory"
	givemon SPECIES_KORAIDON, 50
# 58 "data/maps/BoringRoad/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 59 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_Koraidon_Text_1
# 60 "data/maps/BoringRoad/scripts.pory"
	call NicknamePartyMon
# 61 "data/maps/BoringRoad/scripts.pory"
	closemessage
# 62 "data/maps/BoringRoad/scripts.pory"
	fadescreen FADE_TO_BLACK
# 63 "data/maps/BoringRoad/scripts.pory"
	removeobject 1
# 64 "data/maps/BoringRoad/scripts.pory"
	removeobject 2
# 65 "data/maps/BoringRoad/scripts.pory"
	removeobject 3
# 66 "data/maps/BoringRoad/scripts.pory"
	removeobject 4
# 67 "data/maps/BoringRoad/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 68 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_Miraidon_Text_2
# 69 "data/maps/BoringRoad/scripts.pory"
	waitmessage
	goto BoringRoad_EventScript_Koraidon_1


BoringRoad_EventScript_CIR::
# 76 "data/maps/BoringRoad/scripts.pory"
	lock
# 77 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_CIR_Text_0, MSGBOX_YESNO
# 78 "data/maps/BoringRoad/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BoringRoad_EventScript_CIR_2
BoringRoad_EventScript_CIR_1:
# 100 "data/maps/BoringRoad/scripts.pory"
	closemessage
# 101 "data/maps/BoringRoad/scripts.pory"
	release
	return

BoringRoad_EventScript_CIR_2:
# 80 "data/maps/BoringRoad/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 81 "data/maps/BoringRoad/scripts.pory"
	setvar VAR_BORING_ROAD_STATE, 1
# 82 "data/maps/BoringRoad/scripts.pory"
	closemessage
# 83 "data/maps/BoringRoad/scripts.pory"
	faceplayer
# 84 "data/maps/BoringRoad/scripts.pory"
	playmoncry SPECIES_CALYREX_ICE, CRY_MODE_ENCOUNTER
# 85 "data/maps/BoringRoad/scripts.pory"
	waitmoncry
# 86 "data/maps/BoringRoad/scripts.pory"
	givemon SPECIES_CALYREX_ICE, 50
# 87 "data/maps/BoringRoad/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 88 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_CIR_Text_1
# 89 "data/maps/BoringRoad/scripts.pory"
	call NicknamePartyMon
# 90 "data/maps/BoringRoad/scripts.pory"
	closemessage
# 91 "data/maps/BoringRoad/scripts.pory"
	fadescreen FADE_TO_BLACK
# 92 "data/maps/BoringRoad/scripts.pory"
	removeobject 1
# 93 "data/maps/BoringRoad/scripts.pory"
	removeobject 2
# 94 "data/maps/BoringRoad/scripts.pory"
	removeobject 3
# 95 "data/maps/BoringRoad/scripts.pory"
	removeobject 4
# 96 "data/maps/BoringRoad/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 97 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_Miraidon_Text_2
# 98 "data/maps/BoringRoad/scripts.pory"
	waitmessage
	goto BoringRoad_EventScript_CIR_1


BoringRoad_EventScript_CSR::
# 105 "data/maps/BoringRoad/scripts.pory"
	lock
# 106 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_CSR_Text_0, MSGBOX_YESNO
# 107 "data/maps/BoringRoad/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BoringRoad_EventScript_CSR_2
BoringRoad_EventScript_CSR_1:
# 129 "data/maps/BoringRoad/scripts.pory"
	closemessage
# 130 "data/maps/BoringRoad/scripts.pory"
	release
	return

BoringRoad_EventScript_CSR_2:
# 109 "data/maps/BoringRoad/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 110 "data/maps/BoringRoad/scripts.pory"
	setvar VAR_BORING_ROAD_STATE, 1
# 111 "data/maps/BoringRoad/scripts.pory"
	closemessage
# 112 "data/maps/BoringRoad/scripts.pory"
	faceplayer
# 113 "data/maps/BoringRoad/scripts.pory"
	playmoncry SPECIES_CALYREX_SHADOW, CRY_MODE_ENCOUNTER
# 114 "data/maps/BoringRoad/scripts.pory"
	waitmoncry
# 115 "data/maps/BoringRoad/scripts.pory"
	givemon SPECIES_CALYREX_SHADOW, 50
# 116 "data/maps/BoringRoad/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 117 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_CSR_Text_1
# 118 "data/maps/BoringRoad/scripts.pory"
	call NicknamePartyMon
# 119 "data/maps/BoringRoad/scripts.pory"
	closemessage
# 120 "data/maps/BoringRoad/scripts.pory"
	fadescreen FADE_TO_BLACK
# 121 "data/maps/BoringRoad/scripts.pory"
	removeobject 1
# 122 "data/maps/BoringRoad/scripts.pory"
	removeobject 2
# 123 "data/maps/BoringRoad/scripts.pory"
	removeobject 3
# 124 "data/maps/BoringRoad/scripts.pory"
	removeobject 4
# 125 "data/maps/BoringRoad/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 126 "data/maps/BoringRoad/scripts.pory"
	msgbox BoringRoad_EventScript_Miraidon_Text_2
# 127 "data/maps/BoringRoad/scripts.pory"
	waitmessage
	goto BoringRoad_EventScript_CSR_1


# 14 "data/maps/BoringRoad/scripts.pory"
BoringRoad_EventScript_Leave_Movement_0:
# 14 "data/maps/BoringRoad/scripts.pory"
	walk_down
	step_end

BoringRoad_EventScript_Sign_Text_0:
# 8 "data/maps/BoringRoad/scripts.pory"
	.string "BEWARE:\nSilly Pokemon around!\pFeel free to grab one!$"

BoringRoad_EventScript_Leave_Text_0:
# 13 "data/maps/BoringRoad/scripts.pory"
	.string "You can't just leave yet!$"

BoringRoad_EventScript_Miraidon_Text_0:
# 19 "data/maps/BoringRoad/scripts.pory"
	.string "Do you want to join up with MIRAIDON?$"

BoringRoad_EventScript_Miraidon_Text_1:
# 30 "data/maps/BoringRoad/scripts.pory"
	.string "MIRAIDON joins you!$"

BoringRoad_EventScript_Miraidon_Text_2:
# 39 "data/maps/BoringRoad/scripts.pory"
	.string "The others hurried away!$"

BoringRoad_EventScript_Koraidon_Text_0:
# 48 "data/maps/BoringRoad/scripts.pory"
	.string "Do you want to join up with KORAIDON?$"

BoringRoad_EventScript_Koraidon_Text_1:
# 59 "data/maps/BoringRoad/scripts.pory"
	.string "KORAIDON joins you!$"

BoringRoad_EventScript_CIR_Text_0:
# 77 "data/maps/BoringRoad/scripts.pory"
	.string "Do you want to join up with CALYREX ICE\n"
	.string "RIDER?$"

BoringRoad_EventScript_CIR_Text_1:
# 88 "data/maps/BoringRoad/scripts.pory"
	.string "CALYREX ICE RIDER joins you!$"

BoringRoad_EventScript_CSR_Text_0:
# 106 "data/maps/BoringRoad/scripts.pory"
	.string "Do you want to join up with CALYREX\n"
	.string "SHADOW RIDER?$"

BoringRoad_EventScript_CSR_Text_1:
# 117 "data/maps/BoringRoad/scripts.pory"
	.string "CALYREX SHADOW RIDER joins you!$"
