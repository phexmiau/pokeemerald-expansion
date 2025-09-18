# 1 "data/maps/SparkleHollow/scripts.pory"

# 2 "data/maps/SparkleHollow/scripts.pory"
SparkleHollow_MapScripts::
# 3 "data/maps/SparkleHollow/scripts.pory"
	.byte 0

SparkleHollow_EventScript_GetScreamTail::
# 7 "data/maps/SparkleHollow/scripts.pory"
	lock
# 8 "data/maps/SparkleHollow/scripts.pory"
	faceplayer
# 9 "data/maps/SparkleHollow/scripts.pory"
	playmoncry SPECIES_SCREAM_TAIL, CRY_MODE_ENCOUNTER
# 10 "data/maps/SparkleHollow/scripts.pory"
	msgbox SparkleHollow_EventScript_GetScreamTail_Text_0, MSGBOX_YESNO
# 11 "data/maps/SparkleHollow/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SparkleHollow_EventScript_GetScreamTail_2
SparkleHollow_EventScript_GetScreamTail_1:
# 30 "data/maps/SparkleHollow/scripts.pory"
	release
	return

SparkleHollow_EventScript_GetScreamTail_2:
# 12 "data/maps/SparkleHollow/scripts.pory"
	givemon SPECIES_SCREAM_TAIL, 50, isShiny = TRUE
# 13 "data/maps/SparkleHollow/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SparkleHollow_EventScript_GetScreamTail_5
SparkleHollow_EventScript_GetScreamTail_4:
# 18 "data/maps/SparkleHollow/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SparkleHollow_EventScript_GetScreamTail_8
SparkleHollow_EventScript_GetScreamTail_7:
# 24 "data/maps/SparkleHollow/scripts.pory"
	closemessage
# 25 "data/maps/SparkleHollow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 26 "data/maps/SparkleHollow/scripts.pory"
	removeobject 2
# 27 "data/maps/SparkleHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 28 "data/maps/SparkleHollow/scripts.pory"
	setflag FLAG_GOT_SCREAMTAIL
	goto SparkleHollow_EventScript_GetScreamTail_1

SparkleHollow_EventScript_GetScreamTail_5:
# 14 "data/maps/SparkleHollow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/SparkleHollow/scripts.pory"
	msgbox SparkleHollow_EventScript_GetScreamTail_Text_1
# 16 "data/maps/SparkleHollow/scripts.pory"
	call NicknamePartyMon
	goto SparkleHollow_EventScript_GetScreamTail_4

SparkleHollow_EventScript_GetScreamTail_8:
# 19 "data/maps/SparkleHollow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/SparkleHollow/scripts.pory"
	msgbox SparkleHollow_EventScript_GetScreamTail_Text_1
# 21 "data/maps/SparkleHollow/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SCREAM_TAIL
# 22 "data/maps/SparkleHollow/scripts.pory"
	call NicknameBoxMon
	goto SparkleHollow_EventScript_GetScreamTail_7


SparkleHollow_EventScript_GetDiancie::
# 34 "data/maps/SparkleHollow/scripts.pory"
	lock
# 35 "data/maps/SparkleHollow/scripts.pory"
	faceplayer
# 36 "data/maps/SparkleHollow/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_ENCOUNTER
# 37 "data/maps/SparkleHollow/scripts.pory"
	msgbox SparkleHollow_EventScript_GetDiancie_Text_0, MSGBOX_YESNO
# 38 "data/maps/SparkleHollow/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SparkleHollow_EventScript_GetDiancie_2
SparkleHollow_EventScript_GetDiancie_1:
# 57 "data/maps/SparkleHollow/scripts.pory"
	release
	return

SparkleHollow_EventScript_GetDiancie_2:
# 39 "data/maps/SparkleHollow/scripts.pory"
	givemon SPECIES_DIANCIE, 50, item = ITEM_DIANCITE
# 40 "data/maps/SparkleHollow/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SparkleHollow_EventScript_GetDiancie_5
SparkleHollow_EventScript_GetDiancie_4:
# 45 "data/maps/SparkleHollow/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SparkleHollow_EventScript_GetDiancie_8
SparkleHollow_EventScript_GetDiancie_7:
# 51 "data/maps/SparkleHollow/scripts.pory"
	closemessage
# 52 "data/maps/SparkleHollow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/SparkleHollow/scripts.pory"
	removeobject 1
# 54 "data/maps/SparkleHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 55 "data/maps/SparkleHollow/scripts.pory"
	setflag FLAG_GOT_DIANCIE
	goto SparkleHollow_EventScript_GetDiancie_1

SparkleHollow_EventScript_GetDiancie_5:
# 41 "data/maps/SparkleHollow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 42 "data/maps/SparkleHollow/scripts.pory"
	msgbox SparkleHollow_EventScript_GetDiancie_Text_1
# 43 "data/maps/SparkleHollow/scripts.pory"
	call NicknamePartyMon
	goto SparkleHollow_EventScript_GetDiancie_4

SparkleHollow_EventScript_GetDiancie_8:
# 46 "data/maps/SparkleHollow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data/maps/SparkleHollow/scripts.pory"
	msgbox SparkleHollow_EventScript_GetDiancie_Text_1
# 48 "data/maps/SparkleHollow/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DIANCIE
# 49 "data/maps/SparkleHollow/scripts.pory"
	call NicknameBoxMon
	goto SparkleHollow_EventScript_GetDiancie_7


SparkleHollow_EventScript_GetScreamTail_Text_0:
# 10 "data/maps/SparkleHollow/scripts.pory"
	.string "SCREAM TAIL wants to join you!\p"
	.string "Do you want to take it with you?$"

SparkleHollow_EventScript_GetScreamTail_Text_1:
# 15 "data/maps/SparkleHollow/scripts.pory"
	.string "You got SCREAM TAIL!$"

SparkleHollow_EventScript_GetDiancie_Text_0:
# 37 "data/maps/SparkleHollow/scripts.pory"
	.string "DIANCIE wants to join you!\p"
	.string "Do you want to take it with you?$"

SparkleHollow_EventScript_GetDiancie_Text_1:
# 42 "data/maps/SparkleHollow/scripts.pory"
	.string "You got DIANCIE!$"
