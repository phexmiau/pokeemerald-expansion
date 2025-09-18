# 1 "data/maps/RegionalSite/scripts.pory"

# 2 "data/maps/RegionalSite/scripts.pory"
RegionalSite_MapScripts::
# 3 "data/maps/RegionalSite/scripts.pory"
	.byte 0

RegionalSite_EventScript_GetSnail::
# 7 "data/maps/RegionalSite/scripts.pory"
	lock
# 8 "data/maps/RegionalSite/scripts.pory"
	faceplayer
# 9 "data/maps/RegionalSite/scripts.pory"
	playmoncry SPECIES_GASTRODON, CRY_MODE_ENCOUNTER
# 10 "data/maps/RegionalSite/scripts.pory"
	msgbox RegionalSite_EventScript_GetSnail_Text_0, MSGBOX_YESNO
# 11 "data/maps/RegionalSite/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RegionalSite_EventScript_GetSnail_2
RegionalSite_EventScript_GetSnail_1:
# 30 "data/maps/RegionalSite/scripts.pory"
	release
	return

RegionalSite_EventScript_GetSnail_2:
# 12 "data/maps/RegionalSite/scripts.pory"
	givemon SPECIES_GASTRODON_WEST, 50
# 13 "data/maps/RegionalSite/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RegionalSite_EventScript_GetSnail_5
RegionalSite_EventScript_GetSnail_4:
# 18 "data/maps/RegionalSite/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RegionalSite_EventScript_GetSnail_8
RegionalSite_EventScript_GetSnail_7:
# 24 "data/maps/RegionalSite/scripts.pory"
	closemessage
# 25 "data/maps/RegionalSite/scripts.pory"
	fadescreen FADE_TO_BLACK
# 26 "data/maps/RegionalSite/scripts.pory"
	removeobject 2
# 27 "data/maps/RegionalSite/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 28 "data/maps/RegionalSite/scripts.pory"
	setflag FLAG_GOT_SNAIL
	goto RegionalSite_EventScript_GetSnail_1

RegionalSite_EventScript_GetSnail_5:
# 14 "data/maps/RegionalSite/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/RegionalSite/scripts.pory"
	msgbox RegionalSite_EventScript_GetSnail_Text_1
# 16 "data/maps/RegionalSite/scripts.pory"
	call NicknamePartyMon
	goto RegionalSite_EventScript_GetSnail_4

RegionalSite_EventScript_GetSnail_8:
# 19 "data/maps/RegionalSite/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/RegionalSite/scripts.pory"
	msgbox RegionalSite_EventScript_GetSnail_Text_1
# 21 "data/maps/RegionalSite/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GASTRODON_WEST
# 22 "data/maps/RegionalSite/scripts.pory"
	call NicknameBoxMon
	goto RegionalSite_EventScript_GetSnail_7


RegionalSite_EventScript_GetTinka::
# 34 "data/maps/RegionalSite/scripts.pory"
	lock
# 35 "data/maps/RegionalSite/scripts.pory"
	faceplayer
# 36 "data/maps/RegionalSite/scripts.pory"
	playmoncry SPECIES_TINKATON, CRY_MODE_ENCOUNTER
# 37 "data/maps/RegionalSite/scripts.pory"
	msgbox RegionalSite_EventScript_GetTinka_Text_0, MSGBOX_YESNO
# 38 "data/maps/RegionalSite/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RegionalSite_EventScript_GetTinka_2
RegionalSite_EventScript_GetTinka_1:
# 57 "data/maps/RegionalSite/scripts.pory"
	release
	return

RegionalSite_EventScript_GetTinka_2:
# 39 "data/maps/RegionalSite/scripts.pory"
	givemon SPECIES_TINKATON, 50
# 40 "data/maps/RegionalSite/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RegionalSite_EventScript_GetTinka_5
RegionalSite_EventScript_GetTinka_4:
# 45 "data/maps/RegionalSite/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RegionalSite_EventScript_GetTinka_8
RegionalSite_EventScript_GetTinka_7:
# 51 "data/maps/RegionalSite/scripts.pory"
	closemessage
# 52 "data/maps/RegionalSite/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/RegionalSite/scripts.pory"
	removeobject 1
# 54 "data/maps/RegionalSite/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 55 "data/maps/RegionalSite/scripts.pory"
	setflag FLAG_GOT_TINKA
	goto RegionalSite_EventScript_GetTinka_1

RegionalSite_EventScript_GetTinka_5:
# 41 "data/maps/RegionalSite/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 42 "data/maps/RegionalSite/scripts.pory"
	msgbox RegionalSite_EventScript_GetTinka_Text_1
# 43 "data/maps/RegionalSite/scripts.pory"
	call NicknamePartyMon
	goto RegionalSite_EventScript_GetTinka_4

RegionalSite_EventScript_GetTinka_8:
# 46 "data/maps/RegionalSite/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data/maps/RegionalSite/scripts.pory"
	msgbox RegionalSite_EventScript_GetTinka_Text_1
# 48 "data/maps/RegionalSite/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TINKATON
# 49 "data/maps/RegionalSite/scripts.pory"
	call NicknameBoxMon
	goto RegionalSite_EventScript_GetTinka_7


RegionalSite_EventScript_GetMesprit::
# 61 "data/maps/RegionalSite/scripts.pory"
	lock
# 62 "data/maps/RegionalSite/scripts.pory"
	faceplayer
# 63 "data/maps/RegionalSite/scripts.pory"
	playmoncry SPECIES_MESPRIT, CRY_MODE_ENCOUNTER
# 64 "data/maps/RegionalSite/scripts.pory"
	msgbox RegionalSite_EventScript_GetMesprit_Text_0, MSGBOX_YESNO
# 65 "data/maps/RegionalSite/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RegionalSite_EventScript_GetMesprit_2
RegionalSite_EventScript_GetMesprit_1:
# 84 "data/maps/RegionalSite/scripts.pory"
	release
	return

RegionalSite_EventScript_GetMesprit_2:
# 66 "data/maps/RegionalSite/scripts.pory"
	givemon SPECIES_MESPRIT, 50
# 67 "data/maps/RegionalSite/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RegionalSite_EventScript_GetMesprit_5
RegionalSite_EventScript_GetMesprit_4:
# 72 "data/maps/RegionalSite/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RegionalSite_EventScript_GetMesprit_8
RegionalSite_EventScript_GetMesprit_7:
# 78 "data/maps/RegionalSite/scripts.pory"
	closemessage
# 79 "data/maps/RegionalSite/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/RegionalSite/scripts.pory"
	removeobject 3
# 81 "data/maps/RegionalSite/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 82 "data/maps/RegionalSite/scripts.pory"
	setflag FLAG_GOT_MESPRIT
	goto RegionalSite_EventScript_GetMesprit_1

RegionalSite_EventScript_GetMesprit_5:
# 68 "data/maps/RegionalSite/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 69 "data/maps/RegionalSite/scripts.pory"
	msgbox RegionalSite_EventScript_GetMesprit_Text_1
# 70 "data/maps/RegionalSite/scripts.pory"
	call NicknamePartyMon
	goto RegionalSite_EventScript_GetMesprit_4

RegionalSite_EventScript_GetMesprit_8:
# 73 "data/maps/RegionalSite/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/RegionalSite/scripts.pory"
	msgbox RegionalSite_EventScript_GetMesprit_Text_1
# 75 "data/maps/RegionalSite/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MESPRIT
# 76 "data/maps/RegionalSite/scripts.pory"
	call NicknameBoxMon
	goto RegionalSite_EventScript_GetMesprit_7


RegionalSite_EventScript_LakeSign::
# 88 "data/maps/RegionalSite/scripts.pory"
	lockall
# 89 "data/maps/RegionalSite/scripts.pory"
	msgbox RegionalSite_EventScript_LakeSign_Text_0, MSGBOX_AUTOCLOSE
# 90 "data/maps/RegionalSite/scripts.pory"
	releaseall
	return


RegionalSite_EventScript_RegionalSiteSign::
# 94 "data/maps/RegionalSite/scripts.pory"
	lockall
# 95 "data/maps/RegionalSite/scripts.pory"
	msgbox RegionalSite_EventScript_RegionalSiteSign_Text_0, MSGBOX_AUTOCLOSE
# 96 "data/maps/RegionalSite/scripts.pory"
	releaseall
	return


RegionalSite_EventScript_GetSnail_Text_0:
# 10 "data/maps/RegionalSite/scripts.pory"
	.string "GASTRODON wants to join you!\p"
	.string "Do you want to take it with you?$"

RegionalSite_EventScript_GetSnail_Text_1:
# 15 "data/maps/RegionalSite/scripts.pory"
	.string "You got GASTRODON!$"

RegionalSite_EventScript_GetTinka_Text_0:
# 37 "data/maps/RegionalSite/scripts.pory"
	.string "TINKATON wants to join you!\p"
	.string "Do you want to take it with you?$"

RegionalSite_EventScript_GetTinka_Text_1:
# 42 "data/maps/RegionalSite/scripts.pory"
	.string "You got TINKATON!$"

RegionalSite_EventScript_GetMesprit_Text_0:
# 64 "data/maps/RegionalSite/scripts.pory"
	.string "MESPRIT wants to join you!\p"
	.string "Do you want to take it with you?$"

RegionalSite_EventScript_GetMesprit_Text_1:
# 69 "data/maps/RegionalSite/scripts.pory"
	.string "You got MESPRIT!$"

RegionalSite_EventScript_LakeSign_Text_0:
# 89 "data/maps/RegionalSite/scripts.pory"
	.string "Mini Lake of Verity$"

RegionalSite_EventScript_RegionalSiteSign_Text_0:
# 95 "data/maps/RegionalSite/scripts.pory"
	.string "Regional Venue$"
