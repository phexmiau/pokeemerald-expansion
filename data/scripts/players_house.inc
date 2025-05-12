# 1 "data/scripts/players_house.pory"

# 2 "data/scripts/players_house.pory"
@ Local IDs are the same for both players houses
# 3 "data/scripts/players_house.pory"
.set LOCALID_MOM, 1
# 4 "data/scripts/players_house.pory"
.set LOCALID_DAD, 5
# 5 "data/scripts/players_house.pory"
.set LOCALID_MOM_2F, 14
# 6 "data/scripts/players_house.pory"

# 7 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet::
# 8 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
# 9 "data/scripts/players_house.pory"
	return
# 10 "data/scripts/players_house.pory"

# 11 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_EnterHouseMovingIn::
# 12 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
# 13 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 14 "data/scripts/players_house.pory"
	waitmovement 0
# 15 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8005, MALE, PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale
# 16 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8005, FEMALE, PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale
# 17 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_MoversPokemonGoSetClock, MSGBOX_DEFAULT
# 18 "data/scripts/players_house.pory"
	closemessage
# 19 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
# 20 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerWalkIn
# 21 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 22 "data/scripts/players_house.pory"
	waitmovement 0
# 23 "data/scripts/players_house.pory"
	releaseall
# 24 "data/scripts/players_house.pory"
	end
# 25 "data/scripts/players_house.pory"

# 26 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale::
# 27 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 28 "data/scripts/players_house.pory"
	waitmovement 0
# 29 "data/scripts/players_house.pory"
	return
# 30 "data/scripts/players_house.pory"

# 31 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale::
# 32 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 33 "data/scripts/players_house.pory"
	waitmovement 0
# 34 "data/scripts/players_house.pory"
	return
# 35 "data/scripts/players_house.pory"

# 36 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerWalkIn:
# 37 "data/scripts/players_house.pory"
	walk_up
# 38 "data/scripts/players_house.pory"
	step_end
# 39 "data/scripts/players_house.pory"

# 40 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomGoSeeRoom::
# 41 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ArentYouInterestedInRoom, MSGBOX_DEFAULT
# 42 "data/scripts/players_house.pory"
	closemessage
# 43 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 44 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MovePlayerAwayFromDoor
# 45 "data/scripts/players_house.pory"
	waitmovement 0
# 46 "data/scripts/players_house.pory"
	releaseall
# 47 "data/scripts/players_house.pory"
	end
# 48 "data/scripts/players_house.pory"

# 49 "data/scripts/players_house.pory"
LittlerootTown_BrendansHouse_2F_EventScript_WallClock::
# 50 "data/scripts/players_house.pory"
	lockall
# 51 "data/scripts/players_house.pory"
	setvar VAR_0x8004, MALE
# 52 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
# 53 "data/scripts/players_house.pory"
	end
# 54 "data/scripts/players_house.pory"

# 55 "data/scripts/players_house.pory"
LittlerootTown_MaysHouse_2F_EventScript_WallClock::
# 56 "data/scripts/players_house.pory"
	lockall
# 57 "data/scripts/players_house.pory"
	setvar VAR_0x8004, FEMALE
# 58 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
# 59 "data/scripts/players_house.pory"
	end
# 60 "data/scripts/players_house.pory"

# 61 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_WallClock::
# 62 "data/scripts/players_house.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, PlayersHouse_2F_EventScript_CheckWallClock
# 63 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 64 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 65 "data/scripts/players_house.pory"
	delay 30
# 66 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 67 "data/scripts/players_house.pory"
	setflag FLAG_SET_WALL_CLOCK
# 68 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 69 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 70 "data/scripts/players_house.pory"
	checkplayergender
# 71 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_2F_EventScript_MomComesUpstairsMale
# 72 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_2F_EventScript_MomComesUpstairsFemale
# 73 "data/scripts/players_house.pory"
	playse SE_EXIT
# 74 "data/scripts/players_house.pory"
	removeobject VAR_0x8008
# 75 "data/scripts/players_house.pory"
	releaseall
# 76 "data/scripts/players_house.pory"
	end
# 77 "data/scripts/players_house.pory"

# 78 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_MomComesUpstairsMale::
# 79 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_MOM_2F
# 80 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 81 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersMale
# 82 "data/scripts/players_house.pory"
	waitmovement 0
# 83 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 84 "data/scripts/players_house.pory"
	waitmovement 0
# 85 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_Text_HowDoYouLikeYourRoom, MSGBOX_DEFAULT
# 86 "data/scripts/players_house.pory"
	closemessage
# 87 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsMale
# 88 "data/scripts/players_house.pory"
	waitmovement 0
# 89 "data/scripts/players_house.pory"
	return
# 90 "data/scripts/players_house.pory"

# 91 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_MomComesUpstairsFemale::
# 92 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_MOM_2F
# 93 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 94 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersFemale
# 95 "data/scripts/players_house.pory"
	waitmovement 0
# 96 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 97 "data/scripts/players_house.pory"
	waitmovement 0
# 98 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_Text_HowDoYouLikeYourRoom, MSGBOX_DEFAULT
# 99 "data/scripts/players_house.pory"
	closemessage
# 100 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsFemale
# 101 "data/scripts/players_house.pory"
	waitmovement 0
# 102 "data/scripts/players_house.pory"
	return
# 103 "data/scripts/players_house.pory"

# 104 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_CheckWallClock::
# 105 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 106 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 107 "data/scripts/players_house.pory"
	special Special_ViewWallClock
# 108 "data/scripts/players_house.pory"
	waitstate
# 109 "data/scripts/players_house.pory"
	releaseall
# 110 "data/scripts/players_house.pory"
	end
# 111 "data/scripts/players_house.pory"

# 112 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_SetWallClock::
# 113 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 114 "data/scripts/players_house.pory"
	special StartWallClock
# 115 "data/scripts/players_house.pory"
	waitstate
# 116 "data/scripts/players_house.pory"
	return
# 117 "data/scripts/players_house.pory"

# 118 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomEntersMale:
# 119 "data/scripts/players_house.pory"
	delay_8
# 120 "data/scripts/players_house.pory"
	walk_down
# 121 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 122 "data/scripts/players_house.pory"
	delay_16
# 123 "data/scripts/players_house.pory"
	delay_8
# 124 "data/scripts/players_house.pory"
	walk_left
# 125 "data/scripts/players_house.pory"
	step_end
# 126 "data/scripts/players_house.pory"

# 127 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomExitsMale:
# 128 "data/scripts/players_house.pory"
	walk_right
# 129 "data/scripts/players_house.pory"
	walk_up
# 130 "data/scripts/players_house.pory"
	delay_8
# 131 "data/scripts/players_house.pory"
	step_end
# 132 "data/scripts/players_house.pory"

# 133 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomEntersFemale:
# 134 "data/scripts/players_house.pory"
	delay_8
# 135 "data/scripts/players_house.pory"
	walk_down
# 136 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 137 "data/scripts/players_house.pory"
	delay_16
# 138 "data/scripts/players_house.pory"
	delay_8
# 139 "data/scripts/players_house.pory"
	walk_right
# 140 "data/scripts/players_house.pory"
	step_end
# 141 "data/scripts/players_house.pory"

# 142 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomExitsFemale:
# 143 "data/scripts/players_house.pory"
	walk_left
# 144 "data/scripts/players_house.pory"
	walk_up
# 145 "data/scripts/players_house.pory"
	delay_8
# 146 "data/scripts/players_house.pory"
	step_end
# 147 "data/scripts/players_house.pory"

# 148 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetWatchedBroadcast::
# 149 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 150 "data/scripts/players_house.pory"
	releaseall
# 151 "data/scripts/players_house.pory"
	end
# 152 "data/scripts/players_house.pory"

# 153 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportMale::
# 154 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterRight
# 155 "data/scripts/players_house.pory"
	waitmovement 0
# 156 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 157 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymMale
# 158 "data/scripts/players_house.pory"
	waitmovement 0
# 159 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 160 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_MaybeDadWillBeOn, MSGBOX_DEFAULT
# 161 "data/scripts/players_house.pory"
	closemessage
# 162 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale
# 163 "data/scripts/players_house.pory"
	waitmovement 0
# 164 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVMale
# 165 "data/scripts/players_house.pory"
	waitmovement 0
# 166 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 167 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 168 "data/scripts/players_house.pory"
	waitmovement 0
# 169 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ItsOverWeMissedHim, MSGBOX_DEFAULT
# 170 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor, MSGBOX_DEFAULT
# 171 "data/scripts/players_house.pory"
	closemessage
# 172 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 173 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatMale
# 174 "data/scripts/players_house.pory"
	waitmovement 0
# 175 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
# 176 "data/scripts/players_house.pory"
	end
# 177 "data/scripts/players_house.pory"

# 178 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportFemale::
# 179 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterLeft
# 180 "data/scripts/players_house.pory"
	waitmovement 0
# 181 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 182 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale
# 183 "data/scripts/players_house.pory"
	waitmovement 0
# 184 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 185 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_MaybeDadWillBeOn, MSGBOX_DEFAULT
# 186 "data/scripts/players_house.pory"
	closemessage
# 187 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale
# 188 "data/scripts/players_house.pory"
	waitmovement 0
# 189 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVFemale
# 190 "data/scripts/players_house.pory"
	waitmovement 0
# 191 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 192 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 193 "data/scripts/players_house.pory"
	waitmovement 0
# 194 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ItsOverWeMissedHim, MSGBOX_DEFAULT
# 195 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor, MSGBOX_DEFAULT
# 196 "data/scripts/players_house.pory"
	closemessage
# 197 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 198 "data/scripts/players_house.pory"
    goto PlayersHouse_1F_EventScript_GetRunningShoes
# 199 "data/scripts/players_house.pory"
	end
# 200 "data/scripts/players_house.pory"

# 201 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticeGymBroadcast::
# 202 "data/scripts/players_house.pory"
	playse SE_PIN
# 203 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_ExclamationMark
# 204 "data/scripts/players_house.pory"
	waitmovement 0
# 205 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_Delay48
# 206 "data/scripts/players_house.pory"
	waitmovement 0
# 207 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_OhComeQuickly, MSGBOX_DEFAULT
# 208 "data/scripts/players_house.pory"
	closemessage
# 209 "data/scripts/players_house.pory"
	return
# 210 "data/scripts/players_house.pory"

# 211 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_WatchGymBroadcast::
# 212 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 213 "data/scripts/players_house.pory"
	waitmovement 0
# 214 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ReportFromPetalburgGym, MSGBOX_DEFAULT
# 215 "data/scripts/players_house.pory"
	fadedefaultbgm
# 216 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 217 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_HOME
# 218 "data/scripts/players_house.pory"
	delay 35
# 219 "data/scripts/players_house.pory"
	return
# 220 "data/scripts/players_house.pory"

# 221 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadMale:
# 222 "data/scripts/players_house.pory"
	walk_up
# 223 "data/scripts/players_house.pory"
	walk_right
# 224 "data/scripts/players_house.pory"
	walk_right
# 225 "data/scripts/players_house.pory"
	walk_right
# 226 "data/scripts/players_house.pory"
	walk_right
# 227 "data/scripts/players_house.pory"
	walk_down
# 228 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 229 "data/scripts/players_house.pory"
	step_end
# 230 "data/scripts/players_house.pory"

# 231 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadFemale:
# 232 "data/scripts/players_house.pory"
	walk_up
# 233 "data/scripts/players_house.pory"
	walk_left
# 234 "data/scripts/players_house.pory"
	walk_left
# 235 "data/scripts/players_house.pory"
	walk_left
# 236 "data/scripts/players_house.pory"
	walk_left
# 237 "data/scripts/players_house.pory"
	walk_down
# 238 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 239 "data/scripts/players_house.pory"
	step_end
# 240 "data/scripts/players_house.pory"

# 241 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerMale:
# 242 "data/scripts/players_house.pory"
	walk_right
# 243 "data/scripts/players_house.pory"
	step_end
# 244 "data/scripts/players_house.pory"

# 245 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerFemale:
# 246 "data/scripts/players_house.pory"
	walk_left
# 247 "data/scripts/players_house.pory"
	step_end
# 248 "data/scripts/players_house.pory"

# 249 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale:
# 250 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 251 "data/scripts/players_house.pory"
	delay_16
# 252 "data/scripts/players_house.pory"
	delay_16
# 253 "data/scripts/players_house.pory"
	delay_16
# 254 "data/scripts/players_house.pory"
	delay_16
# 255 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 256 "data/scripts/players_house.pory"
	delay_16
# 257 "data/scripts/players_house.pory"
	delay_16
# 258 "data/scripts/players_house.pory"
	step_end
# 259 "data/scripts/players_house.pory"

# 260 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale:
# 261 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 262 "data/scripts/players_house.pory"
	delay_16
# 263 "data/scripts/players_house.pory"
	delay_16
# 264 "data/scripts/players_house.pory"
	delay_16
# 265 "data/scripts/players_house.pory"
	delay_16
# 266 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 267 "data/scripts/players_house.pory"
	delay_16
# 268 "data/scripts/players_house.pory"
	delay_16
# 269 "data/scripts/players_house.pory"
	step_end
# 270 "data/scripts/players_house.pory"

# 271 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale:
# 272 "data/scripts/players_house.pory"
	walk_up
# 273 "data/scripts/players_house.pory"
	walk_left
# 274 "data/scripts/players_house.pory"
	walk_left
# 275 "data/scripts/players_house.pory"
	step_end
# 276 "data/scripts/players_house.pory"

# 277 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale:
# 278 "data/scripts/players_house.pory"
	walk_up
# 279 "data/scripts/players_house.pory"
	walk_right
# 280 "data/scripts/players_house.pory"
	walk_right
# 281 "data/scripts/players_house.pory"
	step_end
# 282 "data/scripts/players_house.pory"

# 283 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale:
# 284 "data/scripts/players_house.pory"
	walk_left
# 285 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 286 "data/scripts/players_house.pory"
	step_end
# 287 "data/scripts/players_house.pory"

# 288 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale:
# 289 "data/scripts/players_house.pory"
	walk_right
# 290 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 291 "data/scripts/players_house.pory"
	step_end
# 292 "data/scripts/players_house.pory"

# 293 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatMale:
# 294 "data/scripts/players_house.pory"
	walk_left
# 295 "data/scripts/players_house.pory"
	walk_down
# 296 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 297 "data/scripts/players_house.pory"
	step_end
# 298 "data/scripts/players_house.pory"

# 299 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatFemale:
# 300 "data/scripts/players_house.pory"
	walk_right
# 301 "data/scripts/players_house.pory"
    walk_right
# 302 "data/scripts/players_house.pory"
    walk_right
# 303 "data/scripts/players_house.pory"
	walk_down
# 304 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 305 "data/scripts/players_house.pory"
	step_end
# 306 "data/scripts/players_house.pory"

# 307 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Mom::
# 308 "data/scripts/players_house.pory"
	lock
# 309 "data/scripts/players_house.pory"
	faceplayer
# 310 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, PlayersHouse_1F_EventScript_DontPushYourselfTooHard
# 311 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, PlayersHouse_1F_EventScript_DontPushYourselfTooHard
# 312 "data/scripts/players_house.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PlayersHouse_1F_EventScript_TryRegisterMom
# 313 "data/scripts/players_house.pory"
	goto_if_set FLAG_RESCUED_BIRCH, PlayersHouse_1F_EventScript_MomHealsParty
# 314 "data/scripts/players_house.pory"
	goto_if_eq VAR_TEMP_1, 1, PlayersHouse_1F_EventScript_SeeYouHoney
# 315 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 7, PlayersHouse_1F_EventScript_DidYouMeetProfBirch
# 316 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
# 317 "data/scripts/players_house.pory"
	release
# 318 "data/scripts/players_house.pory"
	end
# 319 "data/scripts/players_house.pory"

# 320 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DontPushYourselfTooHard::
# 321 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 322 "data/scripts/players_house.pory"
	release
# 323 "data/scripts/players_house.pory"
	end
# 324 "data/scripts/players_house.pory"

# 325 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryRegisterMom::
# 326 "data/scripts/players_house.pory"
	goto_if_set FLAG_ENABLE_MOM_MATCH_CALL, PlayersHouse_1F_EventScript_CheckGiveAmuletCoin
# 327 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatAPokenav, MSGBOX_DEFAULT
# 328 "data/scripts/players_house.pory"
	closemessage
# 329 "data/scripts/players_house.pory"
	delay 30
# 330 "data/scripts/players_house.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 331 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_RegisteredMom, MSGBOX_DEFAULT
# 332 "data/scripts/players_house.pory"
	waitfanfare
# 333 "data/scripts/players_house.pory"
	closemessage
# 334 "data/scripts/players_house.pory"
	delay 30
# 335 "data/scripts/players_house.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
# 336 "data/scripts/players_house.pory"
	release
# 337 "data/scripts/players_house.pory"
	end
# 338 "data/scripts/players_house.pory"

# 339 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_CheckGiveAmuletCoin::
# 340 "data/scripts/players_house.pory"
	goto_if_set FLAG_BADGE05_GET, PlayersHouse_1F_EventScript_TryGiveAmuletCoin
# 341 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
# 342 "data/scripts/players_house.pory"

# 343 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryGiveAmuletCoin::
# 344 "data/scripts/players_house.pory"
	goto_if_set FLAG_RECEIVED_AMULET_COIN, PlayersHouse_1F_EventScript_MomHealsParty
# 345 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom, MSGBOX_DEFAULT
# 346 "data/scripts/players_house.pory"
	giveitem ITEM_AMULET_COIN
# 347 "data/scripts/players_house.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 348 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 349 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_AMULET_COIN
# 350 "data/scripts/players_house.pory"
	release
# 351 "data/scripts/players_house.pory"
	end
# 352 "data/scripts/players_house.pory"

# 353 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomHealsParty::
# 354 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_YouShouldRestABit, MSGBOX_DEFAULT
# 355 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_HealParty
# 356 "data/scripts/players_house.pory"
	end
# 357 "data/scripts/players_house.pory"

# 358 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SeeYouHoney::
# 359 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_SeeYouHoney, MSGBOX_DEFAULT
# 360 "data/scripts/players_house.pory"
	release
# 361 "data/scripts/players_house.pory"
	end
# 362 "data/scripts/players_house.pory"

# 363 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_HealParty::
# 364 "data/scripts/players_house.pory"
	closemessage
# 365 "data/scripts/players_house.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 366 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 367 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TakeCareHoney, MSGBOX_DEFAULT
# 368 "data/scripts/players_house.pory"
	release
# 369 "data/scripts/players_house.pory"
	end
# 370 "data/scripts/players_house.pory"

# 371 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DidYouMeetProfBirch::
# 372 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DidYouMeetProfBirch, MSGBOX_DEFAULT
# 373 "data/scripts/players_house.pory"
	release
# 374 "data/scripts/players_house.pory"
	end
# 375 "data/scripts/players_house.pory"

# 376 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Vigoroth1::
# 377 "data/scripts/players_house.pory"
	lock
# 378 "data/scripts/players_house.pory"
	faceplayer
# 379 "data/scripts/players_house.pory"
	waitse
# 380 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 381 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth1, MSGBOX_DEFAULT
# 382 "data/scripts/players_house.pory"
	waitmoncry
# 383 "data/scripts/players_house.pory"
	release
# 384 "data/scripts/players_house.pory"
	end
# 385 "data/scripts/players_house.pory"

# 386 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Vigoroth2::
# 387 "data/scripts/players_house.pory"
	lock
# 388 "data/scripts/players_house.pory"
	faceplayer
# 389 "data/scripts/players_house.pory"
	waitse
# 390 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 391 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth2, MSGBOX_DEFAULT
# 392 "data/scripts/players_house.pory"
	waitmoncry
# 393 "data/scripts/players_house.pory"
	release
# 394 "data/scripts/players_house.pory"
	end
# 395 "data/scripts/players_house.pory"

# 396 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymMale:
# 397 "data/scripts/players_house.pory"
	walk_down
# 398 "data/scripts/players_house.pory"
	walk_down
# 399 "data/scripts/players_house.pory"
	walk_left
# 400 "data/scripts/players_house.pory"
	walk_left
# 401 "data/scripts/players_house.pory"
	walk_left
# 402 "data/scripts/players_house.pory"
	step_end
# 403 "data/scripts/players_house.pory"

# 404 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVMale:
# 405 "data/scripts/players_house.pory"
	walk_left
# 406 "data/scripts/players_house.pory"
	step_end
# 407 "data/scripts/players_house.pory"

# 408 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale:
# 409 "data/scripts/players_house.pory"
	walk_down
# 410 "data/scripts/players_house.pory"
	walk_down
# 411 "data/scripts/players_house.pory"
	walk_right
# 412 "data/scripts/players_house.pory"
	walk_right
# 413 "data/scripts/players_house.pory"
	walk_right
# 414 "data/scripts/players_house.pory"
	step_end
# 415 "data/scripts/players_house.pory"

# 416 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVFemale:
# 417 "data/scripts/players_house.pory"
	walk_right
# 418 "data/scripts/players_house.pory"
	step_end
# 419 "data/scripts/players_house.pory"

# 420 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MovePlayerAwayFromDoor:
# 421 "data/scripts/players_house.pory"
	walk_up
# 422 "data/scripts/players_house.pory"
	step_end
# 423 "data/scripts/players_house.pory"

# 424 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV::
# 425 "data/scripts/players_house.pory"
	lockall
# 426 "data/scripts/players_house.pory"
	checkplayergender
# 427 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale
# 428 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale
# 429 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerEnterRoomMale
# 430 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerEnterRoomFemale
# 431 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_FacePlayer
# 432 "data/scripts/players_house.pory"
	waitmovement 0
# 433 "data/scripts/players_house.pory"
	playse SE_PIN
# 434 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_ExclamationMark
# 435 "data/scripts/players_house.pory"
	waitmovement 0
# 436 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_Delay48
# 437 "data/scripts/players_house.pory"
	waitmovement 0
# 438 "data/scripts/players_house.pory"
	delay 20
# 439 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadApproachPlayerMale
# 440 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadApproachPlayerFemale
# 441 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TicketFromBrineyCameForYou, MSGBOX_DEFAULT
# 442 "data/scripts/players_house.pory"
	giveitem ITEM_SS_TICKET
# 443 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_PortsInSlateportLilycove, MSGBOX_DEFAULT
# 444 "data/scripts/players_house.pory"
	closemessage
# 445 "data/scripts/players_house.pory"
	delay 20
# 446 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachDadMale
# 447 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachDadFemale
# 448 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_BetterGetBackToGym, MSGBOX_DEFAULT
# 449 "data/scripts/players_house.pory"
	closemessage
# 450 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadExitsMale
# 451 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadExitsFemale
# 452 "data/scripts/players_house.pory"
	playse SE_DOOR
# 453 "data/scripts/players_house.pory"
	removeobject VAR_0x8009
# 454 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 455 "data/scripts/players_house.pory"
	delay 30
# 456 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerMale
# 457 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerFemale
# 458 "data/scripts/players_house.pory"
	delay 20
# 459 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DadShouldStayLonger, MSGBOX_DEFAULT
# 460 "data/scripts/players_house.pory"
	closemessage
# 461 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 462 "data/scripts/players_house.pory"
	special TurnOnTVScreen
# 463 "data/scripts/players_house.pory"
	delay 60
# 464 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale
# 465 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale
# 466 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatABreakingStory, MSGBOX_DEFAULT
# 467 "data/scripts/players_house.pory"
	closemessage
# 468 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale
# 469 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale
# 470 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_LatiEmergencyNewsFlash, MSGBOX_DEFAULT
# 471 "data/scripts/players_house.pory"
	closemessage
# 472 "data/scripts/players_house.pory"
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
# 473 "data/scripts/players_house.pory"
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
# 474 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 475 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale
# 476 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale
# 477 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_WhatColorDidTheySay, MSGBOX_DEFAULT
# 478 "data/scripts/players_house.pory"
	multichoice 22, 8, MULTI_TV_LATI, TRUE
# 479 "data/scripts/players_house.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 480 "data/scripts/players_house.pory"
	special InitRoamer
# 481 "data/scripts/players_house.pory"
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
# 482 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_StillUnknownPokemon, MSGBOX_DEFAULT
# 483 "data/scripts/players_house.pory"
	closemessage
# 484 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
# 485 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
# 486 "data/scripts/players_house.pory"
	releaseall
# 487 "data/scripts/players_house.pory"
	end
# 488 "data/scripts/players_house.pory"

# 489 "data/scripts/players_house.pory"
@ Never called.
# 490 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_AirLatiBroadcast::
# 491 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 492 "data/scripts/players_house.pory"
	return
# 493 "data/scripts/players_house.pory"

# 494 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale::
# 495 "data/scripts/players_house.pory"
	setvar VAR_0x8008, MALE
# 496 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_DAD
# 497 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_MOM
# 498 "data/scripts/players_house.pory"
	return
# 499 "data/scripts/players_house.pory"

# 500 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale::
# 501 "data/scripts/players_house.pory"
	setvar VAR_0x8008, FEMALE
# 502 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_DAD
# 503 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_MOM
# 504 "data/scripts/players_house.pory"
	return
# 505 "data/scripts/players_house.pory"

# 506 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerMale::
# 507 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerMale
# 508 "data/scripts/players_house.pory"
	waitmovement 0
# 509 "data/scripts/players_house.pory"
	return
# 510 "data/scripts/players_house.pory"

# 511 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerFemale::
# 512 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerFemale
# 513 "data/scripts/players_house.pory"
	waitmovement 0
# 514 "data/scripts/players_house.pory"
	return
# 515 "data/scripts/players_house.pory"

# 516 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadMale::
# 517 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadMale
# 518 "data/scripts/players_house.pory"
	waitmovement 0
# 519 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomMale
# 520 "data/scripts/players_house.pory"
	waitmovement 0
# 521 "data/scripts/players_house.pory"
	return
# 522 "data/scripts/players_house.pory"

# 523 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadFemale::
# 524 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadFemale
# 525 "data/scripts/players_house.pory"
	waitmovement 0
# 526 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomFemale
# 527 "data/scripts/players_house.pory"
	waitmovement 0
# 528 "data/scripts/players_house.pory"
	return
# 529 "data/scripts/players_house.pory"

# 530 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsMale::
# 531 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 532 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 533 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsMale
# 534 "data/scripts/players_house.pory"
	waitmovement 0
# 535 "data/scripts/players_house.pory"
	return
# 536 "data/scripts/players_house.pory"

# 537 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsFemale::
# 538 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 539 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 540 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsFemale
# 541 "data/scripts/players_house.pory"
	waitmovement 0
# 542 "data/scripts/players_house.pory"
	return
# 543 "data/scripts/players_house.pory"

# 544 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomMale::
# 545 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomMale
# 546 "data/scripts/players_house.pory"
	waitmovement 0
# 547 "data/scripts/players_house.pory"
	return
# 548 "data/scripts/players_house.pory"

# 549 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomFemale::
# 550 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomFemale
# 551 "data/scripts/players_house.pory"
	waitmovement 0
# 552 "data/scripts/players_house.pory"
	return
# 553 "data/scripts/players_house.pory"

# 554 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale::
# 555 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale
# 556 "data/scripts/players_house.pory"
	waitmovement 0
# 557 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterLeft
# 558 "data/scripts/players_house.pory"
	waitmovement 0
# 559 "data/scripts/players_house.pory"
	return
# 560 "data/scripts/players_house.pory"

# 561 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale::
# 562 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale
# 563 "data/scripts/players_house.pory"
	waitmovement 0
# 564 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterRight
# 565 "data/scripts/players_house.pory"
	waitmovement 0
# 566 "data/scripts/players_house.pory"
	return
# 567 "data/scripts/players_house.pory"

# 568 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerMale::
# 569 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerMale
# 570 "data/scripts/players_house.pory"
	waitmovement 0
# 571 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 572 "data/scripts/players_house.pory"
	waitmovement 0
# 573 "data/scripts/players_house.pory"
	return
# 574 "data/scripts/players_house.pory"

# 575 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerFemale::
# 576 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerFemale
# 577 "data/scripts/players_house.pory"
	waitmovement 0
# 578 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 579 "data/scripts/players_house.pory"
	waitmovement 0
# 580 "data/scripts/players_house.pory"
	return
# 581 "data/scripts/players_house.pory"

# 582 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale::
# 583 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale
# 584 "data/scripts/players_house.pory"
	waitmovement 0
# 585 "data/scripts/players_house.pory"
	return
# 586 "data/scripts/players_house.pory"

# 587 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale::
# 588 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale
# 589 "data/scripts/players_house.pory"
	waitmovement 0
# 590 "data/scripts/players_house.pory"
	return
# 591 "data/scripts/players_house.pory"

# 592 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale::
# 593 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale
# 594 "data/scripts/players_house.pory"
	waitmovement 0
# 595 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 596 "data/scripts/players_house.pory"
	waitmovement 0
# 597 "data/scripts/players_house.pory"
	return
# 598 "data/scripts/players_house.pory"

# 599 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale::
# 600 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale
# 601 "data/scripts/players_house.pory"
	waitmovement 0
# 602 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 603 "data/scripts/players_house.pory"
	waitmovement 0
# 604 "data/scripts/players_house.pory"
	return
# 605 "data/scripts/players_house.pory"

# 606 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerMale:
# 607 "data/scripts/players_house.pory"
	walk_right
# 608 "data/scripts/players_house.pory"
	walk_right
# 609 "data/scripts/players_house.pory"
	step_end
# 610 "data/scripts/players_house.pory"

# 611 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerFemale:
# 612 "data/scripts/players_house.pory"
	walk_left
# 613 "data/scripts/players_house.pory"
	walk_left
# 614 "data/scripts/players_house.pory"
	step_end
# 615 "data/scripts/players_house.pory"

# 616 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomMale:
# 617 "data/scripts/players_house.pory"
	face_left
# 618 "data/scripts/players_house.pory"
	step_end
# 619 "data/scripts/players_house.pory"

# 620 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomFemale:
# 621 "data/scripts/players_house.pory"
	face_right
# 622 "data/scripts/players_house.pory"
	step_end
# 623 "data/scripts/players_house.pory"

# 624 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsMale:
# 625 "data/scripts/players_house.pory"
	walk_down
# 626 "data/scripts/players_house.pory"
	walk_right
# 627 "data/scripts/players_house.pory"
	walk_down
# 628 "data/scripts/players_house.pory"
	delay_8
# 629 "data/scripts/players_house.pory"
	step_end
# 630 "data/scripts/players_house.pory"

# 631 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsFemale:
# 632 "data/scripts/players_house.pory"
	walk_down
# 633 "data/scripts/players_house.pory"
	walk_left
# 634 "data/scripts/players_house.pory"
	walk_down
# 635 "data/scripts/players_house.pory"
	delay_8
# 636 "data/scripts/players_house.pory"
	step_end
# 637 "data/scripts/players_house.pory"

# 638 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomMale:
# 639 "data/scripts/players_house.pory"
	delay_16
# 640 "data/scripts/players_house.pory"
	walk_down
# 641 "data/scripts/players_house.pory"
	walk_down
# 642 "data/scripts/players_house.pory"
	walk_down
# 643 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 644 "data/scripts/players_house.pory"
	step_end
# 645 "data/scripts/players_house.pory"

# 646 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit:
# 647 "data/scripts/players_house.pory"
	delay_8
# 648 "data/scripts/players_house.pory"
	delay_16
# 649 "data/scripts/players_house.pory"
	delay_16
# 650 "data/scripts/players_house.pory"
	walk_in_place_faster_down
# 651 "data/scripts/players_house.pory"
	step_end
# 652 "data/scripts/players_house.pory"

# 653 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomFemale:
# 654 "data/scripts/players_house.pory"
	delay_16
# 655 "data/scripts/players_house.pory"
	walk_down
# 656 "data/scripts/players_house.pory"
	walk_down
# 657 "data/scripts/players_house.pory"
	walk_down
# 658 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 659 "data/scripts/players_house.pory"
	step_end
# 660 "data/scripts/players_house.pory"

# 661 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale:
# 662 "data/scripts/players_house.pory"
	walk_up
# 663 "data/scripts/players_house.pory"
	walk_left
# 664 "data/scripts/players_house.pory"
	walk_left
# 665 "data/scripts/players_house.pory"
	walk_left
# 666 "data/scripts/players_house.pory"
	walk_left
# 667 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 668 "data/scripts/players_house.pory"
	step_end
# 669 "data/scripts/players_house.pory"

# 670 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale:
# 671 "data/scripts/players_house.pory"
	walk_up
# 672 "data/scripts/players_house.pory"
	walk_right
# 673 "data/scripts/players_house.pory"
	walk_right
# 674 "data/scripts/players_house.pory"
	walk_right
# 675 "data/scripts/players_house.pory"
	walk_right
# 676 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 677 "data/scripts/players_house.pory"
	step_end
# 678 "data/scripts/players_house.pory"

# 679 "data/scripts/players_house.pory"
EventScript_RunningShoesManual::
# 680 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_RunningShoesManual, MSGBOX_SIGN
# 681 "data/scripts/players_house.pory"
	end
# 682 "data/scripts/players_house.pory"

# 683 "data/scripts/players_house.pory"
PlayersHouse_1F_Text_SwitchShoesWithRunningShoes:
# 684 "data/scripts/players_house.pory"
	.string "{PLAYER} switched shoes with the\n"
# 685 "data/scripts/players_house.pory"
	.string "RUNNING SHOES.$"

PlayersHouse_1F_EventScript_GetRunningShoes::
# 690 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_EventScript_GetRunningShoes_Movement_0
# 691 "data/scripts/players_house.pory"
	waitmovement 0
# 692 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_EventScript_GetRunningShoes_Movement_1
# 693 "data/scripts/players_house.pory"
	doobjectemotion VAR_0x8005, FOLLOWER_EMOTION_SURPRISE
# 694 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_GetRunningShoes_Text_0
# 695 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_EventScript_GetRunningShoes_Movement_2
# 696 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_EventScript_GetRunningShoes_Movement_0
# 697 "data/scripts/players_house.pory"
	waitmovement 0
# 698 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_GetRunningShoes_Text_1, MSGBOX_AUTOCLOSE
# 699 "data/scripts/players_house.pory"
	setflag FLAG_SYS_B_DASH
# 700 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 701 "data/scripts/players_house.pory"
	playfanfare MUS_OBTAIN_ITEM
# 702 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_SwitchShoesWithRunningShoes
# 703 "data/scripts/players_house.pory"
	waitfanfare
# 704 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_GetRunningShoes_Text_2, MSGBOX_AUTOCLOSE
# 705 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatFemale
# 706 "data/scripts/players_house.pory"
	waitmovement 0
# 707 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
	return


# 690 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetRunningShoes_Movement_0:
# 690 "data/scripts/players_house.pory"
	walk_left
# 690 "data/scripts/players_house.pory"
	walk_left
	step_end

# 692 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetRunningShoes_Movement_1:
# 692 "data/scripts/players_house.pory"
	face_left
	step_end

# 695 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetRunningShoes_Movement_2:
# 695 "data/scripts/players_house.pory"
	face_right
	step_end

PlayersHouse_1F_EventScript_GetRunningShoes_Text_0:
# 694 "data/scripts/players_house.pory"
	.string "MOM: Oh wait, I almost forgot!$"

PlayersHouse_1F_EventScript_GetRunningShoes_Text_1:
# 698 "data/scripts/players_house.pory"
	.string "I also got you a new pair of RUNNING\n"
	.string "SHOES.\p"
	.string "You just have to PRESS B to walk much\n"
	.string "faster!$"

PlayersHouse_1F_EventScript_GetRunningShoes_Text_2:
# 704 "data/scripts/players_house.pory"
	.string "MOM: Now go out and meet PROF BIRCH,\n"
	.string "{PLAYER}!$"
