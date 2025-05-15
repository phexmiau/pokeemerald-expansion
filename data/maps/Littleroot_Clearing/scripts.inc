# 1 "data/maps/Littleroot_Clearing/scripts.pory"

# 2 "data/maps/Littleroot_Clearing/scripts.pory"
Littleroot_Clearing_MapScripts::
# 3 "data/maps/Littleroot_Clearing/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Littleroot_Clearing_OnTransition
# 4 "data/maps/Littleroot_Clearing/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Littleroot_Clearing_OnFrame
# 5 "data/maps/Littleroot_Clearing/scripts.pory"
	.byte 0
# 6 "data/maps/Littleroot_Clearing/scripts.pory"

# 7 "data/maps/Littleroot_Clearing/scripts.pory"
Littleroot_Clearing_OnTransition:
# 8 "data/maps/Littleroot_Clearing/scripts.pory"
    clearflag FLAG_LITTLEROOT_CLEARING_ODDISH
# 9 "data/maps/Littleroot_Clearing/scripts.pory"
    clearflag FLAG_LITTLEROOT_CLEARING_VULPIX
# 10 "data/maps/Littleroot_Clearing/scripts.pory"
    clearflag FLAG_LITTLEROOT_CLEARING_SEEDOT
# 11 "data/maps/Littleroot_Clearing/scripts.pory"
    clearflag FLAG_LITTLEROOT_CLEARING_SURSKIT
# 12 "data/maps/Littleroot_Clearing/scripts.pory"
	getcaughtmon SPECIES_WO_CHIEN
# 13 "data/maps/Littleroot_Clearing/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Littleroot_Clearing_Respawn_Wo_Chien
# 14 "data/maps/Littleroot_Clearing/scripts.pory"
	end
# 15 "data/maps/Littleroot_Clearing/scripts.pory"

# 16 "data/maps/Littleroot_Clearing/scripts.pory"
Littleroot_Clearing_OnFrame:
# 17 "data/maps/Littleroot_Clearing/scripts.pory"
	.2byte 0

Littleroot_Clearing_EventScript_Oddish::
# 21 "data/maps/Littleroot_Clearing/scripts.pory"
	lock
# 22 "data/maps/Littleroot_Clearing/scripts.pory"
	faceplayer
# 23 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_LITTLEROOT_CLEARING_ODDISH
# 24 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 4, FOLLOWER_EMOTION_UPSET
# 25 "data/maps/Littleroot_Clearing/scripts.pory"
	playmoncry SPECIES_ODDISH, CRY_MODE_ENCOUNTER
# 26 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmoncry
# 27 "data/maps/Littleroot_Clearing/scripts.pory"
	setwildbattle SPECIES_ODDISH, 6, ITEM_NONE
# 28 "data/maps/Littleroot_Clearing/scripts.pory"
	dowildbattle
# 29 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/Littleroot_Clearing/scripts.pory"
	removeobject 4
# 31 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 32 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmessage
# 33 "data/maps/Littleroot_Clearing/scripts.pory"
	release
	return


Littleroot_Clearing_EventScript_Vulpix::
# 37 "data/maps/Littleroot_Clearing/scripts.pory"
	lock
# 38 "data/maps/Littleroot_Clearing/scripts.pory"
	faceplayer
# 39 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_LITTLEROOT_CLEARING_VULPIX
# 40 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 2, FOLLOWER_EMOTION_UPSET
# 41 "data/maps/Littleroot_Clearing/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_ENCOUNTER
# 42 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmoncry
# 43 "data/maps/Littleroot_Clearing/scripts.pory"
	setwildbattle SPECIES_VULPIX, 6, ITEM_NONE
# 44 "data/maps/Littleroot_Clearing/scripts.pory"
	dowildbattle
# 45 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 46 "data/maps/Littleroot_Clearing/scripts.pory"
	removeobject 2
# 47 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 48 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmessage
# 49 "data/maps/Littleroot_Clearing/scripts.pory"
	release
	return


Littleroot_Clearing_EventScript_Seedot::
# 53 "data/maps/Littleroot_Clearing/scripts.pory"
	lock
# 54 "data/maps/Littleroot_Clearing/scripts.pory"
	faceplayer
# 55 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_LITTLEROOT_CLEARING_SEEDOT
# 56 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 1, FOLLOWER_EMOTION_UPSET
# 57 "data/maps/Littleroot_Clearing/scripts.pory"
	playmoncry SPECIES_SEEDOT, CRY_MODE_ENCOUNTER
# 58 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmoncry
# 59 "data/maps/Littleroot_Clearing/scripts.pory"
	setwildbattle SPECIES_SEEDOT, 6, ITEM_NONE
# 60 "data/maps/Littleroot_Clearing/scripts.pory"
	dowildbattle
# 61 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/maps/Littleroot_Clearing/scripts.pory"
	removeobject 1
# 63 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 64 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmessage
# 65 "data/maps/Littleroot_Clearing/scripts.pory"
	release
	return


Littleroot_Clearing_EventScript_Surskit::
# 69 "data/maps/Littleroot_Clearing/scripts.pory"
	lock
# 70 "data/maps/Littleroot_Clearing/scripts.pory"
	faceplayer
# 71 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_LITTLEROOT_CLEARING_SURSKIT
# 72 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 3, FOLLOWER_EMOTION_UPSET
# 73 "data/maps/Littleroot_Clearing/scripts.pory"
	playmoncry SPECIES_SURSKIT, CRY_MODE_ENCOUNTER
# 74 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmoncry
# 75 "data/maps/Littleroot_Clearing/scripts.pory"
	setwildbattle SPECIES_SURSKIT, 6, ITEM_NONE
# 76 "data/maps/Littleroot_Clearing/scripts.pory"
	dowildbattle
# 77 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/Littleroot_Clearing/scripts.pory"
	removeobject 3
# 79 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 80 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmessage
# 81 "data/maps/Littleroot_Clearing/scripts.pory"
	release
	return


Littleroot_Clearing_EventScript_Morgrem::
# 85 "data/maps/Littleroot_Clearing/scripts.pory"
	lock
# 86 "data/maps/Littleroot_Clearing/scripts.pory"
	playmoncry SPECIES_GOOMY, CRY_MODE_ENCOUNTER
# 87 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 9, FOLLOWER_EMOTION_SAD
# 88 "data/maps/Littleroot_Clearing/scripts.pory"
	applymovement 9, Littleroot_Clearing_EventScript_Morgrem_Movement_0
# 89 "data/maps/Littleroot_Clearing/scripts.pory"
	applymovement 9, Littleroot_Clearing_EventScript_Morgrem_Movement_1
# 90 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmovement 0
# 91 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Morgrem_Text_0
# 92 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Morgrem_Text_1
# 93 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Morgrem_Text_2, MSGBOX_YESNO
# 94 "data/maps/Littleroot_Clearing/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Littleroot_Clearing_EventScript_Morgrem_2
# 145 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 9, FOLLOWER_EMOTION_SAD
Littleroot_Clearing_EventScript_Morgrem_1:
# 147 "data/maps/Littleroot_Clearing/scripts.pory"
	release
	return

Littleroot_Clearing_EventScript_Morgrem_2:
# 95 "data/maps/Littleroot_Clearing/scripts.pory"
	faceplayer
# 96 "data/maps/Littleroot_Clearing/scripts.pory"
	playmoncry SPECIES_MORGREM, CRY_MODE_ENCOUNTER
# 97 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 8, FOLLOWER_EMOTION_UPSET
# 98 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmoncry
# 99 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 100 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_NO_CATCHING
# 101 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_NO_RUNNING
# 102 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_SCARY_BATTLE
# 103 "data/maps/Littleroot_Clearing/scripts.pory"
	setstrongwildbattle SPECIES_MORGREM, 8, item = ITEM_BIG_ROOT, nature = NATURE_HARDY, abilityNum = 0, gender = MON_MALE, hpIv = 10, atkIv = 10, defIv = 10, speedIv = 10, spAtkIv = 10, spDefIv = 10, move1 = MOVE_FAKE_OUT, move2 = MOVE_TORMENT, move3 = MOVE_DRAINING_KISS, move4 = MOVE_BITE
# 104 "data/maps/Littleroot_Clearing/scripts.pory"
	dostrongwildbattle
# 105 "data/maps/Littleroot_Clearing/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 106 "data/maps/Littleroot_Clearing/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 107 "data/maps/Littleroot_Clearing/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 108 "data/maps/Littleroot_Clearing/scripts.pory"
	clearflag FLAG_SCARY_BATTLE
# 109 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_LITTLEROOT_CLEARING_MORGREM
# 110 "data/maps/Littleroot_Clearing/scripts.pory"
	fadedefaultbgm
# 111 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 112 "data/maps/Littleroot_Clearing/scripts.pory"
	removeobject 8
# 113 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 114 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Morgrem_Text_3
# 115 "data/maps/Littleroot_Clearing/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/Littleroot_Clearing/scripts.pory"
	giveitem ITEM_BIG_ROOT
# 117 "data/maps/Littleroot_Clearing/scripts.pory"
	closemessage
# 118 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 9, FOLLOWER_EMOTION_HAPPY
# 119 "data/maps/Littleroot_Clearing/scripts.pory"
	applymovement 9, Littleroot_Clearing_EventScript_Morgrem_Movement_2
# 120 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmovement 0
# 121 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 9, FOLLOWER_EMOTION_LOVE
# 122 "data/maps/Littleroot_Clearing/scripts.pory"
	playmoncry SPECIES_GOOMY, CRY_MODE_ENCOUNTER
# 123 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Morgrem_Text_4, MSGBOX_YESNO
# 124 "data/maps/Littleroot_Clearing/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Littleroot_Clearing_EventScript_Morgrem_5
# 142 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 9, FOLLOWER_EMOTION_SAD
	goto Littleroot_Clearing_EventScript_Morgrem_1

Littleroot_Clearing_EventScript_Morgrem_5:
# 125 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_LITTLEROOT_CLEARING_GOOMY
# 126 "data/maps/Littleroot_Clearing/scripts.pory"
	givemon SPECIES_GOOMY, 5
# 127 "data/maps/Littleroot_Clearing/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Littleroot_Clearing_EventScript_Morgrem_9
Littleroot_Clearing_EventScript_Morgrem_8:
# 132 "data/maps/Littleroot_Clearing/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Littleroot_Clearing_EventScript_Morgrem_12
Littleroot_Clearing_EventScript_Morgrem_11:
# 138 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 139 "data/maps/Littleroot_Clearing/scripts.pory"
	removeobject 9
# 140 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Littleroot_Clearing_EventScript_Morgrem_1

Littleroot_Clearing_EventScript_Morgrem_9:
# 128 "data/maps/Littleroot_Clearing/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 129 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Morgrem_Text_5
# 130 "data/maps/Littleroot_Clearing/scripts.pory"
	call NicknamePartyMon
	goto Littleroot_Clearing_EventScript_Morgrem_8

Littleroot_Clearing_EventScript_Morgrem_12:
# 133 "data/maps/Littleroot_Clearing/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 134 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Morgrem_Text_5
# 135 "data/maps/Littleroot_Clearing/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GOOMY
# 136 "data/maps/Littleroot_Clearing/scripts.pory"
	call NicknameBoxMon
	goto Littleroot_Clearing_EventScript_Morgrem_11


Littleroot_Clearing_EventScript_Goomy::
# 151 "data/maps/Littleroot_Clearing/scripts.pory"
	lock
# 152 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 9, FOLLOWER_EMOTION_LOVE
# 153 "data/maps/Littleroot_Clearing/scripts.pory"
	playmoncry SPECIES_GOOMY, CRY_MODE_ENCOUNTER
# 154 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Morgrem_Text_4, MSGBOX_YESNO
# 155 "data/maps/Littleroot_Clearing/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Littleroot_Clearing_EventScript_Goomy_2
# 174 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 9, FOLLOWER_EMOTION_SAD
Littleroot_Clearing_EventScript_Goomy_1:
# 176 "data/maps/Littleroot_Clearing/scripts.pory"
	release
	return

Littleroot_Clearing_EventScript_Goomy_2:
# 156 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_LITTLEROOT_CLEARING_GOOMY
# 157 "data/maps/Littleroot_Clearing/scripts.pory"
	givemon SPECIES_GOOMY, 5
# 158 "data/maps/Littleroot_Clearing/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Littleroot_Clearing_EventScript_Goomy_6
Littleroot_Clearing_EventScript_Goomy_5:
# 163 "data/maps/Littleroot_Clearing/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Littleroot_Clearing_EventScript_Goomy_9
Littleroot_Clearing_EventScript_Goomy_8:
# 169 "data/maps/Littleroot_Clearing/scripts.pory"
	closemessage
# 170 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 171 "data/maps/Littleroot_Clearing/scripts.pory"
	removeobject 9
# 172 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Littleroot_Clearing_EventScript_Goomy_1

Littleroot_Clearing_EventScript_Goomy_6:
# 159 "data/maps/Littleroot_Clearing/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 160 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Morgrem_Text_5
# 161 "data/maps/Littleroot_Clearing/scripts.pory"
	call NicknamePartyMon
	goto Littleroot_Clearing_EventScript_Goomy_5

Littleroot_Clearing_EventScript_Goomy_9:
# 164 "data/maps/Littleroot_Clearing/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 165 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Morgrem_Text_5
# 166 "data/maps/Littleroot_Clearing/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GOOMY
# 167 "data/maps/Littleroot_Clearing/scripts.pory"
	call NicknameBoxMon
	goto Littleroot_Clearing_EventScript_Goomy_8


Littleroot_Clearing_EventScript_Wo_Chien::
# 180 "data/maps/Littleroot_Clearing/scripts.pory"
	lock
# 181 "data/maps/Littleroot_Clearing/scripts.pory"
	faceplayer
# 182 "data/maps/Littleroot_Clearing/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 183 "data/maps/Littleroot_Clearing/scripts.pory"
	applymovement 5, Littleroot_Clearing_EventScript_Wo_Chien_Movement_0
# 184 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmovement 0
# 185 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Wo_Chien_Text_0, MSGBOX_AUTOCLOSE
# 186 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 5, FOLLOWER_EMOTION_ANGRY
# 187 "data/maps/Littleroot_Clearing/scripts.pory"
	playmoncry SPECIES_WO_CHIEN, CRY_MODE_ENCOUNTER
# 188 "data/maps/Littleroot_Clearing/scripts.pory"
	applymovement 5, Littleroot_Clearing_EventScript_Wo_Chien_Movement_1
# 189 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Wo_Chien_Text_1, MSGBOX_AUTOCLOSE
# 190 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_LITTLEROOT_CLEARING_WO_CHIEN
# 191 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 192 "data/maps/Littleroot_Clearing/scripts.pory"
	setstrongwildbattle SPECIES_WO_CHIEN, 40, move1 = MOVE_MEGA_DRAIN, move2 = MOVE_LEECH_SEED, move3 = MOVE_INGRAIN, move4 = MOVE_DARK_PULSE
# 193 "data/maps/Littleroot_Clearing/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 194 "data/maps/Littleroot_Clearing/scripts.pory"
	waitstate
# 195 "data/maps/Littleroot_Clearing/scripts.pory"
	fadedefaultbgm
# 196 "data/maps/Littleroot_Clearing/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 197 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 198 "data/maps/Littleroot_Clearing/scripts.pory"
	removeobject 5
# 199 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 200 "data/maps/Littleroot_Clearing/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 201 "data/maps/Littleroot_Clearing/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne Littleroot_Clearing_EventScript_Wo_Chien_2
Littleroot_Clearing_EventScript_Wo_Chien_1:
# 204 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmessage
# 205 "data/maps/Littleroot_Clearing/scripts.pory"
	release
	return

Littleroot_Clearing_EventScript_Wo_Chien_2:
# 202 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Wo_Chien_Text_2, MSGBOX_AUTOCLOSE
	goto Littleroot_Clearing_EventScript_Wo_Chien_1


Littleroot_Clearing_Respawn_Wo_Chien::
# 209 "data/maps/Littleroot_Clearing/scripts.pory"
	clearflag FLAG_LITTLEROOT_CLEARING_WO_CHIEN
	return


Littleroot_Clearing_EventScript_Shroodle::
# 213 "data/maps/Littleroot_Clearing/scripts.pory"
	lock
# 214 "data/maps/Littleroot_Clearing/scripts.pory"
	faceplayer
# 215 "data/maps/Littleroot_Clearing/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 216 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Shroodle_Text_0
# 217 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Shroodle_Text_1
# 218 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Shroodle_Text_2, MSGBOX_YESNO
# 219 "data/maps/Littleroot_Clearing/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Littleroot_Clearing_EventScript_Shroodle_2
Littleroot_Clearing_EventScript_Shroodle_1:
# 245 "data/maps/Littleroot_Clearing/scripts.pory"
	fadedefaultbgm
# 246 "data/maps/Littleroot_Clearing/scripts.pory"
	release
	return

Littleroot_Clearing_EventScript_Shroodle_2:
# 220 "data/maps/Littleroot_Clearing/scripts.pory"
	doobjectemotion 10, FOLLOWER_EMOTION_UPSET
# 221 "data/maps/Littleroot_Clearing/scripts.pory"
	applymovement 10, Littleroot_Clearing_EventScript_Shroodle_Movement_0
# 222 "data/maps/Littleroot_Clearing/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 223 "data/maps/Littleroot_Clearing/scripts.pory"
	waitmovement 0
# 224 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 225 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_NO_CATCHING
# 226 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_NO_RUNNING
# 227 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_SCARY_BATTLE
# 228 "data/maps/Littleroot_Clearing/scripts.pory"
	setstrongwildbattle SPECIES_SHROODLE, 10, nature = NATURE_HARDY, abilityNum = 2, gender = MON_FEMALE, hpIv = 10, atkIv = 10, defIv = 10, speedIv = 10, spAtkIv = 10, spDefIv = 10, move1 = MOVE_POISON_FANG, move2 = MOVE_FURY_SWIPES, move3 = MOVE_SWAGGER, move4 = MOVE_POUNCE
# 229 "data/maps/Littleroot_Clearing/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 0, 1
# 230 "data/maps/Littleroot_Clearing/scripts.pory"
	dostrongwildbattle
# 231 "data/maps/Littleroot_Clearing/scripts.pory"
	fadedefaultbgm
# 232 "data/maps/Littleroot_Clearing/scripts.pory"
	setflag FLAG_LITTLEROOT_CLEARING_A_SHROODLE
# 233 "data/maps/Littleroot_Clearing/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 234 "data/maps/Littleroot_Clearing/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 235 "data/maps/Littleroot_Clearing/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 236 "data/maps/Littleroot_Clearing/scripts.pory"
	clearflag FLAG_SCARY_BATTLE
# 237 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 238 "data/maps/Littleroot_Clearing/scripts.pory"
	removeobject 10
# 239 "data/maps/Littleroot_Clearing/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 240 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Shroodle_Text_3
# 241 "data/maps/Littleroot_Clearing/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 242 "data/maps/Littleroot_Clearing/scripts.pory"
	giveitem ITEM_POISON_GEM
# 243 "data/maps/Littleroot_Clearing/scripts.pory"
	closemessage
	goto Littleroot_Clearing_EventScript_Shroodle_1


Littleroot_Clearing_EventScript_Primus::
# 250 "data/maps/Littleroot_Clearing/scripts.pory"
	trainerbattle_single TRAINER_PRIMUS, Littleroot_Clearing_Text_PrimusIntro, Littleroot_Clearing_Text_PrimusDefeated
# 251 "data/maps/Littleroot_Clearing/scripts.pory"
	msgbox Littleroot_Clearing_EventScript_Primus_Text_0
# 252 "data/maps/Littleroot_Clearing/scripts.pory"
	release
	return


# 88 "data/maps/Littleroot_Clearing/scripts.pory"
Littleroot_Clearing_EventScript_Morgrem_Movement_0:
# 88 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_faster_up
# 88 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_faster_up
# 88 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_faster_up
# 88 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
# 88 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
# 88 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
# 88 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_left
	step_end

# 89 "data/maps/Littleroot_Clearing/scripts.pory"
Littleroot_Clearing_EventScript_Morgrem_Movement_1:
# 89 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_right
# 89 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_right
# 89 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_right
# 89 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_right
# 89 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_right
# 89 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_right
# 89 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_right
# 89 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_right
	step_end

# 119 "data/maps/Littleroot_Clearing/scripts.pory"
Littleroot_Clearing_EventScript_Morgrem_Movement_2:
# 119 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_left
# 119 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_left
# 119 "data/maps/Littleroot_Clearing/scripts.pory"
	face_up
	step_end

# 183 "data/maps/Littleroot_Clearing/scripts.pory"
Littleroot_Clearing_EventScript_Wo_Chien_Movement_0:
# 183 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_down
# 183 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_down
# 183 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
# 183 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
	step_end

# 188 "data/maps/Littleroot_Clearing/scripts.pory"
Littleroot_Clearing_EventScript_Wo_Chien_Movement_1:
# 188 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
# 188 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
# 188 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
# 188 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
# 188 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
# 188 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
# 188 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
# 188 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
# 188 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
# 188 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_down
	step_end

# 221 "data/maps/Littleroot_Clearing/scripts.pory"
Littleroot_Clearing_EventScript_Shroodle_Movement_0:
# 221 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_left
# 221 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_left
# 221 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_left
# 221 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_left
# 221 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_left
# 221 "data/maps/Littleroot_Clearing/scripts.pory"
	walk_in_place_fast_left
	step_end

Littleroot_Clearing_EventScript_Morgrem_Text_0:
# 91 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "A MIGHTY MORGREM seems to be preying\n"
	.string "on the GOOMY.\p"
	.string "Do you want to step in?$"

Littleroot_Clearing_EventScript_Morgrem_Text_1:
# 92 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "Note: Sometimes you will run into wild\n"
	.string "overworld POKEMON - like this MORGREM -\l"
	.string "that are more MIGHTY than the average\l"
	.string "POKEMON you'd encounter in that area.\p"
	.string "They are often on a higher level, can't\n"
	.string "be caught and don't use random moves!$"

Littleroot_Clearing_EventScript_Morgrem_Text_2:
# 93 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "All that said... do you want to step in?$"

Littleroot_Clearing_EventScript_Morgrem_Text_3:
# 114 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "It seems like the MORGREM left\n"
	.string "something behind!$"

Littleroot_Clearing_EventScript_Morgrem_Text_4:
# 123 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "GOOMY wants to join you!\p"
	.string "Do you want to take GOOMY with you?$"

Littleroot_Clearing_EventScript_Morgrem_Text_5:
# 129 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "You got GOOMY!$"

Littleroot_Clearing_EventScript_Wo_Chien_Text_0:
# 185 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "You stand face to face with the\n"
	.string "LEGENDARY WO-CHIEN.\p"
	.string "It seems you have disturbed its\n"
	.string "slumber.$"

Littleroot_Clearing_EventScript_Wo_Chien_Text_1:
# 189 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "WO-CHIEN charges at you!$"

Littleroot_Clearing_EventScript_Wo_Chien_Text_2:
# 202 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "The WO-CHIEN fled deeper into the\n"
	.string "forest...$"

Littleroot_Clearing_EventScript_Shroodle_Text_0:
# 216 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "It's the leader of the SHROODLE that\n"
	.string "attacked you and BUNEARY!\p"
	.string "Do you want to challenge it?$"

Littleroot_Clearing_EventScript_Shroodle_Text_1:
# 217 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "Note: During your journey you will\n"
	.string "sometimes run into ALPHA POKEMON - like\l"
	.string "this SHROODLE - that get stat boosts\l"
	.string "when entering the battle.\p"
	.string "They are often on a higher level, can't\n"
	.string "be caught and don't use random moves!\p"
	.string "The game will warn you when you are\n"
	.string "about to fight an ALPHA POKEMON, and\l"
	.string "inform you about its level before\l"
	.string "engaging in battle.$"

Littleroot_Clearing_EventScript_Shroodle_Text_2:
# 218 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "The ALPHA SHROODLE is level 10.\p"
	.string "Do you want to challenge it?$"

Littleroot_Clearing_EventScript_Shroodle_Text_3:
# 240 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "It seems like the SHROODLE left\n"
	.string "something behind!$"

Littleroot_Clearing_EventScript_Primus_Text_0:
# 251 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "You better make good use of these\n"
	.string "berries now that you've STOLEN them\l"
	.string "from me!$"

Littleroot_Clearing_Text_PrimusIntro::
# 255 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "Stop! I saw those berries first so they\n"
	.string "belong to me.$"

Littleroot_Clearing_Text_PrimusDefeated::
# 259 "data/maps/Littleroot_Clearing/scripts.pory"
	.string "NOOOOOO! My berries!$"
