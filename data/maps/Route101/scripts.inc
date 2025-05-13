# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 1
# 3 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 1
# 4 "data/maps/Route101/scripts.pory"
.set LOCALID_BUNEARY, 4
# 5 "data/maps/Route101/scripts.pory"
.set LOCALID_SHROODLE, 5
# 6 "data/maps/Route101/scripts.pory"
.set LOCALID_SHROODLEARMYLEAD, 6
# 7 "data/maps/Route101/scripts.pory"
.set LOCALID_SHROODLEARMYGRUNTTOP, 7
# 8 "data/maps/Route101/scripts.pory"
.set LOCALID_SHROODLEARMYGRUNTBOTTOM, 8
# 9 "data/maps/Route101/scripts.pory"
.set LOCALID_KATE, 9
# 10 "data/maps/Route101/scripts.pory"
.set LOCALID_SPRIGATITO, 10
# 11 "data/maps/Route101/scripts.pory"
.set LOCALID_PROF_BIRCH, 11
# 12 "data/maps/Route101/scripts.pory"

# 13 "data/maps/Route101/scripts.pory"

# 14 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 15 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 16 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 17 "data/maps/Route101/scripts.pory"
	.byte 0
# 18 "data/maps/Route101/scripts.pory"

# 19 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 20 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 21 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ROUTE101_KARRABLAST
# 22 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ROUTE101_POOCHYENA
# 23 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ROUTE101_SHROODLE
# 24 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ROUTE101_ESPURR_PRE_SHROODLE
# 25 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ROUTE101_ESPURR_POST_SHROODLE
# 26 "data/maps/Route101/scripts.pory"
	removeobject 16
# 27 "data/maps/Route101/scripts.pory"
	end
# 28 "data/maps/Route101/scripts.pory"

# 29 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 30 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 31 "data/maps/Route101/scripts.pory"
	.2byte 0
# 32 "data/maps/Route101/scripts.pory"

# 33 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 34 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 35 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 36 "data/maps/Route101/scripts.pory"
	end
# 37 "data/maps/Route101/scripts.pory"

# 38 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 39 "data/maps/Route101/scripts.pory"
	lockall
# 40 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 41 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 42 "data/maps/Route101/scripts.pory"
	closemessage
# 43 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 44 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 45 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 46 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 47 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 48 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 50 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 51 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 53 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 55 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 56 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 58 "data/maps/Route101/scripts.pory"
	closemessage
# 59 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 60 "data/maps/Route101/scripts.pory"
	releaseall
# 61 "data/maps/Route101/scripts.pory"
	end
# 62 "data/maps/Route101/scripts.pory"

# 63 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 64 "data/maps/Route101/scripts.pory"
	lockall
# 65 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 66 "data/maps/Route101/scripts.pory"
	closemessage
# 67 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 68 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route101/scripts.pory"
	releaseall
# 70 "data/maps/Route101/scripts.pory"
	end
# 71 "data/maps/Route101/scripts.pory"

# 72 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 73 "data/maps/Route101/scripts.pory"
	lockall
# 74 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 75 "data/maps/Route101/scripts.pory"
	closemessage
# 76 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 77 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route101/scripts.pory"
	releaseall
# 79 "data/maps/Route101/scripts.pory"
	end
# 80 "data/maps/Route101/scripts.pory"

# 81 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 82 "data/maps/Route101/scripts.pory"
	lockall
# 83 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 84 "data/maps/Route101/scripts.pory"
	closemessage
# 85 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 86 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route101/scripts.pory"
	releaseall
# 88 "data/maps/Route101/scripts.pory"
	end
# 89 "data/maps/Route101/scripts.pory"

# 90 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 91 "data/maps/Route101/scripts.pory"
	walk_up
# 92 "data/maps/Route101/scripts.pory"
	step_end
# 93 "data/maps/Route101/scripts.pory"

# 94 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 95 "data/maps/Route101/scripts.pory"
	walk_right
# 96 "data/maps/Route101/scripts.pory"
	step_end
# 97 "data/maps/Route101/scripts.pory"

# 98 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 99 "data/maps/Route101/scripts.pory"
	walk_down
# 100 "data/maps/Route101/scripts.pory"
	step_end
# 101 "data/maps/Route101/scripts.pory"

# 102 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 133 "data/maps/Route101/scripts.pory"
	step_end
# 134 "data/maps/Route101/scripts.pory"

# 135 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 142 "data/maps/Route101/scripts.pory"
	step_end
# 143 "data/maps/Route101/scripts.pory"

# 144 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 145 "data/maps/Route101/scripts.pory"
	step_end
# 146 "data/maps/Route101/scripts.pory"

# 147 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 148 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 149 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 150 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 151 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 152 "data/maps/Route101/scripts.pory"
	step_end
# 153 "data/maps/Route101/scripts.pory"

# 154 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 159 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 160 "data/maps/Route101/scripts.pory"
	step_end
# 161 "data/maps/Route101/scripts.pory"

# 162 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 187 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 188 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 193 "data/maps/Route101/scripts.pory"
	step_end
# 194 "data/maps/Route101/scripts.pory"

# 195 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 196 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 197 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 198 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 199 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 200 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 201 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 202 "data/maps/Route101/scripts.pory"
	step_end
# 203 "data/maps/Route101/scripts.pory"

# 204 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 205 "data/maps/Route101/scripts.pory"
	step_end
# 206 "data/maps/Route101/scripts.pory"

# 207 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 208 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 209 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 210 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 211 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 212 "data/maps/Route101/scripts.pory"
	step_end
# 213 "data/maps/Route101/scripts.pory"

# 214 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 215 "data/maps/Route101/scripts.pory"
	walk_up
# 216 "data/maps/Route101/scripts.pory"
	walk_up
# 217 "data/maps/Route101/scripts.pory"
	step_end
# 218 "data/maps/Route101/scripts.pory"

# 219 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 220 "data/maps/Route101/scripts.pory"
	walk_up
# 221 "data/maps/Route101/scripts.pory"
	walk_left
# 222 "data/maps/Route101/scripts.pory"
	walk_up
# 223 "data/maps/Route101/scripts.pory"
	step_end
# 224 "data/maps/Route101/scripts.pory"

# 225 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 226 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 227 "data/maps/Route101/scripts.pory"
	end
# 228 "data/maps/Route101/scripts.pory"

# 229 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 230 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 231 "data/maps/Route101/scripts.pory"
	end
# 232 "data/maps/Route101/scripts.pory"

# 233 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 234 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 235 "data/maps/Route101/scripts.pory"
	end
# 236 "data/maps/Route101/scripts.pory"

# 237 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 238 "data/maps/Route101/scripts.pory"
	lock
# 239 "data/maps/Route101/scripts.pory"
	faceplayer
# 240 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 241 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 242 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 243 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 244 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 245 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 246 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 248 "data/maps/Route101/scripts.pory"
	waitstate
# 249 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 250 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 251 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 252 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 253 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 254 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 255 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 256 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 257 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 258 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 259 "data/maps/Route101/scripts.pory"
	checkplayergender
# 260 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 261 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 262 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 263 "data/maps/Route101/scripts.pory"
	waitstate
# 264 "data/maps/Route101/scripts.pory"
	release
# 265 "data/maps/Route101/scripts.pory"
	end
# 266 "data/maps/Route101/scripts.pory"

# 267 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 268 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 269 "data/maps/Route101/scripts.pory"
	return
# 270 "data/maps/Route101/scripts.pory"

# 271 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 272 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 273 "data/maps/Route101/scripts.pory"
	return
# 274 "data/maps/Route101/scripts.pory"

# 275 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 276 "data/maps/Route101/scripts.pory"
	walk_right
# 277 "data/maps/Route101/scripts.pory"
	step_end
# 278 "data/maps/Route101/scripts.pory"

# 279 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 280 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 281 "data/maps/Route101/scripts.pory"

# 282 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 283 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 284 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 285 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 286 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 287 "data/maps/Route101/scripts.pory"

# 288 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 289 "data/maps/Route101/scripts.pory"
	.string "You can't just leave the BUNEARY...$"
# 290 "data/maps/Route101/scripts.pory"

# 291 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 292 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 293 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 294 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 295 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 296 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 297 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 298 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 299 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 300 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 301 "data/maps/Route101/scripts.pory"

# 302 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 303 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 304 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 305 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 306 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 307 "data/maps/Route101/scripts.pory"

# 308 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 309 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 310 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 311 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 312 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 313 "data/maps/Route101/scripts.pory"

# 314 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 315 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 316 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101_EventScript_BunearyIntroMoveToCryRight::
# 319 "data/maps/Route101/scripts.pory"
	lock
# 320 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 321 "data/maps/Route101/scripts.pory"
	waitmoncry
# 322 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 323 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryRight
# 324 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 325 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 326 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_BunearyIntroHelpBuneary
	return


Route101_EventScript_BunearyIntroMoveToCryLeft::
# 330 "data/maps/Route101/scripts.pory"
	lock
# 331 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 332 "data/maps/Route101/scripts.pory"
	waitmoncry
# 333 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 334 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 335 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 336 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 337 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_BunearyIntroHelpBuneary
	return


Route101_EventScript_BunearyIntroHelpBuneary::
# 341 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_POISONED
# 342 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyRunAwayDown
# 343 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 344 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyTurnLeftRight
# 345 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 346 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyRunAwayRight
# 347 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_Movement_ShroodleRunAway
# 348 "data/maps/Route101/scripts.pory"
	waitmovement 0
Route101_EventScript_BunearyIntroHelpBuneary_3:
# 350 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_0, MSGBOX_YESNO
# 351 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_8
Route101_EventScript_BunearyIntroHelpBuneary_2:
# 354 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_3
# 355 "data/maps/Route101/scripts.pory"
	closemessage
# 356 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_0
# 357 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 358 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLE, FOLLOWER_EMOTION_UPSET
# 359 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_1
# 360 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 361 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 362 "data/maps/Route101/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 0
# 363 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 364 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_2
# 365 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_3
# 366 "data/maps/Route101/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 0
# 367 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 368 "data/maps/Route101/scripts.pory"
	givemon SPECIES_BUNEARY, 5, item = ITEM_ORAN_BERRY, abilityNum = 1, gender = MON_FEMALE, isShiny = TRUE
# 369 "data/maps/Route101/scripts.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 370 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 3
# 371 "data/maps/Route101/scripts.pory"
	setflag FLAG_NO_RUNNING
# 372 "data/maps/Route101/scripts.pory"
	setflag FLAG_INTRO_SHROODLE_BATTLE
# 373 "data/maps/Route101/scripts.pory"
	dowildbattle
# 374 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 375 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 376 "data/maps/Route101/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 377 "data/maps/Route101/scripts.pory"
	clearflag FLAG_INTRO_SHROODLE_BATTLE
# 378 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_SHROODLE_INTRO
# 379 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_4
# 380 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 381 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLE
# 382 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 383 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_5
# 384 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 385 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_6
# 386 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_CURIOUS
# 387 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 388 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_6
# 389 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_LOVE
# 390 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route101/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 392 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_2
# 393 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 394 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_3
# 395 "data/maps/Route101/scripts.pory"
	waitfanfare
# 396 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_4, MSGBOX_YESNO
# 397 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_6
Route101_EventScript_BunearyIntroHelpBuneary_5:
# 401 "data/maps/Route101/scripts.pory"
	closemessage
# 402 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_7
# 403 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 404 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 405 "data/maps/Route101/scripts.pory"
	delay 20
# 406 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 407 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_8
# 408 "data/maps/Route101/scripts.pory"
	waitmoncry
# 409 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 410 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_SHROODLEARMYLEAD, 3, 15
# 411 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 412 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 413 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 414 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYLEAD, FOLLOWER_EMOTION_UPSET
# 415 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 416 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SAD
# 417 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_10
# 418 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_11
# 419 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 420 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyTurnLeftRight
# 421 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 422 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_12
# 423 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 424 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_13
# 425 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_14
# 426 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_14
# 427 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 428 "data/maps/Route101/scripts.pory"
	delay 30
# 429 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_3
# 430 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 431 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 432 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 433 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 434 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 435 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_5, MSGBOX_AUTOCLOSE
# 436 "data/maps/Route101/scripts.pory"
	doobjectemotion OBJ_EVENT_ID_PLAYER, FOLLOWER_EMOTION_SURPRISE
# 437 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 438 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYLEAD, FOLLOWER_EMOTION_SURPRISE
# 439 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYGRUNTTOP, FOLLOWER_EMOTION_SURPRISE
# 440 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYGRUNTBOTTOM, FOLLOWER_EMOTION_SURPRISE
# 441 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_16
# 442 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SPRIGATITO, CRY_MODE_ENCOUNTER
# 443 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_17
# 444 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 445 "data/maps/Route101/scripts.pory"
	delay 70
# 446 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_6
# 447 "data/maps/Route101/scripts.pory"
	closemessage
# 448 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_17
# 449 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 450 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_7, MSGBOX_AUTOCLOSE
# 451 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_18
# 452 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 453 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_19
# 454 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_WHITE
# 455 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_20
# 456 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_20
# 457 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_21
# 458 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 459 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 460 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 461 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_SHROODLE_ARMY_INTRO
# 462 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYLEAD
# 463 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYGRUNTTOP
# 464 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYGRUNTBOTTOM
# 465 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_22
# 466 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 467 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_8
# 468 "data/maps/Route101/scripts.pory"
	closemessage
# 469 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_23
# 470 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 471 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_24
# 472 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_25
# 473 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_26
# 474 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 475 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SPRIGATITO, FOLLOWER_EMOTION_HAPPY
# 476 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_27
# 477 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 478 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_HAPPY
# 479 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_7
# 480 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_28
# 481 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 482 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_9
# 483 "data/maps/Route101/scripts.pory"
	closemessage
# 484 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_29
# 485 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 486 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_10
# 487 "data/maps/Route101/scripts.pory"
	closemessage
# 488 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 489 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_8
# 490 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_30
# 491 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 492 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_11
# 493 "data/maps/Route101/scripts.pory"
	closemessage
# 494 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_31
# 495 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_32
# 496 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_32
# 497 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 498 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_33
# 499 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 500 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_12
# 501 "data/maps/Route101/scripts.pory"
	closemessage
# 502 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_HAPPY
# 503 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_34
# 504 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 505 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_13
# 506 "data/maps/Route101/scripts.pory"
	closemessage
# 507 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_BUNEARY_INTRO
# 508 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_24
# 509 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_35
# 510 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_36
# 511 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 512 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_37
# 513 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_14, MSGBOX_AUTOCLOSE
# 514 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_38
# 515 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_39
# 516 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_40
# 517 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 518 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 519 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 520 "data/maps/Route101/scripts.pory"
	clearflag FLAG_BIRCH_NOT_IN_LAB
# 521 "data/maps/Route101/scripts.pory"
	clearflag FLAG_KATE_NOT_IN_LAB
# 522 "data/maps/Route101/scripts.pory"
	clearflag FLAG_STARTER_TREECKO
# 523 "data/maps/Route101/scripts.pory"
	clearflag FLAG_STARTER_SCORBUNNY
# 524 "data/maps/Route101/scripts.pory"
	clearflag FLAG_STARTER_POPPLIO
# 525 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_KATE
# 526 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SPRIGATITO
# 527 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_PROF_BIRCH
# 528 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_BUNEARY
# 529 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 530 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 531 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 532 "data/maps/Route101/scripts.pory"
	releaseall
	return

Route101_EventScript_BunearyIntroHelpBuneary_6:
# 398 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8004, 0
# 399 "data/maps/Route101/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route101_EventScript_BunearyIntroHelpBuneary_5

Route101_EventScript_BunearyIntroHelpBuneary_8:
# 352 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_1
	goto Route101_EventScript_BunearyIntroHelpBuneary_2


# 535 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerRunToCryRight:
# 536 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 537 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 538 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 541 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerRunToCryLeft:
# 542 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 545 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyRunAwayDown:
# 546 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 546 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 546 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 549 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyTurnLeftRight:
# 550 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 551 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 552 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 553 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 554 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 555 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 556 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 557 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 558 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 561 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyRunAwayRight:
# 562 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 562 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 562 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 562 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 563 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 566 "data/maps/Route101/scripts.pory"
Route101_Movement_ShroodleRunAway:
# 567 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 567 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 567 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 567 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 568 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

Route101_EventScript_Karrablast::
# 572 "data/maps/Route101/scripts.pory"
	lockall
# 573 "data/maps/Route101/scripts.pory"
	faceplayer
# 574 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_KARRABLAST
# 575 "data/maps/Route101/scripts.pory"
	doobjectemotion 14, FOLLOWER_EMOTION_UPSET
# 576 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_KARRABLAST, CRY_MODE_ENCOUNTER
# 577 "data/maps/Route101/scripts.pory"
	waitmoncry
# 578 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_KARRABLAST, 4, ITEM_NONE
# 579 "data/maps/Route101/scripts.pory"
	dowildbattle
# 580 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 581 "data/maps/Route101/scripts.pory"
	removeobject 14
# 582 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 583 "data/maps/Route101/scripts.pory"
	waitmessage
# 584 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_EventScript_Poochyena::
# 588 "data/maps/Route101/scripts.pory"
	lockall
# 589 "data/maps/Route101/scripts.pory"
	faceplayer
# 590 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_POOCHYENA
# 591 "data/maps/Route101/scripts.pory"
	doobjectemotion 15, FOLLOWER_EMOTION_UPSET
# 592 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 593 "data/maps/Route101/scripts.pory"
	waitmoncry
# 594 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_POOCHYENA, 4, ITEM_NONE
# 595 "data/maps/Route101/scripts.pory"
	dowildbattle
# 596 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 597 "data/maps/Route101/scripts.pory"
	removeobject 15
# 598 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 599 "data/maps/Route101/scripts.pory"
	waitmessage
# 600 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_EventScript_Espurr::
# 604 "data/maps/Route101/scripts.pory"
	lockall
# 605 "data/maps/Route101/scripts.pory"
	faceplayer
# 606 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_ESPURR_PRE_SHROODLE
# 607 "data/maps/Route101/scripts.pory"
	doobjectemotion 12, FOLLOWER_EMOTION_UPSET
# 608 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ESPURR, CRY_MODE_ENCOUNTER
# 609 "data/maps/Route101/scripts.pory"
	waitmoncry
# 610 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_ESPURR, 3, ITEM_NONE
# 611 "data/maps/Route101/scripts.pory"
	dowildbattle
# 612 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 613 "data/maps/Route101/scripts.pory"
	removeobject 12
# 614 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 615 "data/maps/Route101/scripts.pory"
	waitmessage
# 616 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_EventScript_Espurr_Post_Shroodle::
# 620 "data/maps/Route101/scripts.pory"
	lockall
# 621 "data/maps/Route101/scripts.pory"
	faceplayer
# 622 "data/maps/Route101/scripts.pory"
	doobjectemotion 12, FOLLOWER_EMOTION_HAPPY
# 623 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ESPURR, CRY_MODE_ENCOUNTER
# 624 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Espurr_Post_Shroodle_Text_0, MSGBOX_YESNO
# 625 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_ESPURR_POST_SHROODLE
# 626 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 627 "data/maps/Route101/scripts.pory"
	removeobject 16
# 628 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 629 "data/maps/Route101/scripts.pory"
	waitmessage
# 630 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_EventScript_Shroodle::
# 634 "data/maps/Route101/scripts.pory"
	lockall
# 635 "data/maps/Route101/scripts.pory"
	faceplayer
# 636 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_SHROODLE
# 637 "data/maps/Route101/scripts.pory"
	doobjectemotion 13, FOLLOWER_EMOTION_UPSET
# 638 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 639 "data/maps/Route101/scripts.pory"
	waitmoncry
# 640 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 4, ITEM_NONE
# 641 "data/maps/Route101/scripts.pory"
	dowildbattle
# 642 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 643 "data/maps/Route101/scripts.pory"
	goto_if_unset FLAG_ROUTE101_ESPURR_PRE_SHROODLE, Route101_EventScript_Shroodle_2
Route101_EventScript_Shroodle_1:
# 647 "data/maps/Route101/scripts.pory"
	removeobject 13
# 648 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 649 "data/maps/Route101/scripts.pory"
	waitmessage
# 650 "data/maps/Route101/scripts.pory"
	releaseall
	return

Route101_EventScript_Shroodle_2:
# 644 "data/maps/Route101/scripts.pory"
	removeobject 12
# 645 "data/maps/Route101/scripts.pory"
	setobjectxy 16, 2, 4
	goto Route101_EventScript_Shroodle_1


# 356 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_0:
# 356 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 356 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 356 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 356 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 359 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_1:
# 359 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 359 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 359 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 359 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 359 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 359 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 359 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 359 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 359 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 364 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_2:
# 364 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 364 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 365 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_3:
# 365 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 365 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 379 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_4:
# 379 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 379 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 379 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 379 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 379 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 379 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 379 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 379 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 379 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 383 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_5:
# 383 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 385 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_6:
# 385 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 385 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 385 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 385 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 385 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 402 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_7:
# 402 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 402 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 402 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 402 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 402 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 402 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 407 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_8:
# 407 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 411 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_9:
# 411 "data/maps/Route101/scripts.pory"
	walk_right
# 411 "data/maps/Route101/scripts.pory"
	walk_right
# 411 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 417 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_10:
# 417 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 418 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_11:
# 418 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 422 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_12:
# 422 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 422 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 422 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 424 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_13:
# 424 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 424 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 424 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 424 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 424 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 424 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 424 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 424 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 424 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 424 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 424 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 424 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 424 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 425 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_14:
# 425 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 425 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 425 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 425 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 425 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 425 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 425 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 425 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 425 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 425 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 425 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 425 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 431 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_15:
# 431 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 431 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 431 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 431 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 431 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 431 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 431 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 431 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 441 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_16:
# 441 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 443 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_17:
# 443 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 443 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 443 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 451 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_18:
# 451 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 451 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 451 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 451 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 453 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_19:
# 453 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 453 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 453 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 453 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 453 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 453 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 455 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_20:
# 455 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 455 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 455 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 455 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 455 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 455 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 457 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_21:
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 465 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_22:
# 465 "data/maps/Route101/scripts.pory"
	walk_down
# 465 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 469 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_23:
# 469 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 471 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_24:
# 471 "data/maps/Route101/scripts.pory"
	walk_down
# 471 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 472 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_25:
# 472 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 472 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 472 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 472 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 472 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 473 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_26:
# 473 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 476 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_27:
# 476 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 476 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 480 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_28:
# 480 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 480 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 480 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 480 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 480 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 480 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 484 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_29:
# 484 "data/maps/Route101/scripts.pory"
	walk_down
# 484 "data/maps/Route101/scripts.pory"
	walk_down
# 484 "data/maps/Route101/scripts.pory"
	walk_down
# 484 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 490 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_30:
# 490 "data/maps/Route101/scripts.pory"
	walk_right
# 490 "data/maps/Route101/scripts.pory"
	walk_right
# 490 "data/maps/Route101/scripts.pory"
	walk_down
# 490 "data/maps/Route101/scripts.pory"
	walk_down
# 490 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 494 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_31:
# 494 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 494 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 495 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_32:
# 495 "data/maps/Route101/scripts.pory"
	walk_down
# 495 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 498 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_33:
# 498 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 503 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_34:
# 503 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 503 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 503 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 503 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 503 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 503 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 503 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 503 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 509 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_35:
# 509 "data/maps/Route101/scripts.pory"
	walk_right
# 509 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 510 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_36:
# 510 "data/maps/Route101/scripts.pory"
	walk_right
# 510 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 512 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_37:
# 512 "data/maps/Route101/scripts.pory"
	FACE_UP
	step_end

# 514 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_38:
# 514 "data/maps/Route101/scripts.pory"
	walk_right
# 514 "data/maps/Route101/scripts.pory"
	walk_right
# 514 "data/maps/Route101/scripts.pory"
	walk_down
# 514 "data/maps/Route101/scripts.pory"
	walk_down
# 514 "data/maps/Route101/scripts.pory"
	walk_down
# 514 "data/maps/Route101/scripts.pory"
	walk_down
# 514 "data/maps/Route101/scripts.pory"
	walk_down
# 514 "data/maps/Route101/scripts.pory"
	walk_down
# 514 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 515 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_39:
# 515 "data/maps/Route101/scripts.pory"
	walk_right
# 515 "data/maps/Route101/scripts.pory"
	walk_down
# 515 "data/maps/Route101/scripts.pory"
	walk_down
# 515 "data/maps/Route101/scripts.pory"
	walk_down
# 515 "data/maps/Route101/scripts.pory"
	walk_down
# 515 "data/maps/Route101/scripts.pory"
	walk_down
# 515 "data/maps/Route101/scripts.pory"
	walk_down
# 515 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 516 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_40:
# 516 "data/maps/Route101/scripts.pory"
	walk_down
# 516 "data/maps/Route101/scripts.pory"
	walk_down
# 516 "data/maps/Route101/scripts.pory"
	walk_down
# 516 "data/maps/Route101/scripts.pory"
	walk_down
# 516 "data/maps/Route101/scripts.pory"
	walk_down
# 516 "data/maps/Route101/scripts.pory"
	walk_down
# 516 "data/maps/Route101/scripts.pory"
	walk_down
# 516 "data/maps/Route101/scripts.pory"
	walk_down
# 516 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

Route101_EventScript_BunearyIntroHelpBuneary_Text_0:
# 350 "data/maps/Route101/scripts.pory"
	.string "That poor BUNEARY seems to be in\n"
	.string "trouble! Do you want to step in?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_1:
# 352 "data/maps/Route101/scripts.pory"
	.string "You can't really plan on not helping\n"
	.string "that poor BUNEARY, right...$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_2:
# 392 "data/maps/Route101/scripts.pory"
	.string "It looks like BUNEARY wants to stay\n"
	.string "with you!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_3:
# 394 "data/maps/Route101/scripts.pory"
	.string "{STR_VAR_1} joined {PLAYER}!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_4:
# 396 "data/maps/Route101/scripts.pory"
	.string "Do you want to give a nickname to\n"
	.string "BUNEARY?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_5:
# 435 "data/maps/Route101/scripts.pory"
	.string "???: Watch out!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_6:
# 446 "data/maps/Route101/scripts.pory"
	.string "???: SPRIGATITO! Let's go!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_7:
# 450 "data/maps/Route101/scripts.pory"
	.string "???: LEAFAGE LEAFAGE LEAFAGE LEAFAGE\n"
	.string "LEAFAGE LEAFAGE LEAFAGE LEAFAGE$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_8:
# 467 "data/maps/Route101/scripts.pory"
	.string "???: Phew, just in time!\n"
	.string "Hey, are you okay?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_9:
# 482 "data/maps/Route101/scripts.pory"
	.string "???: Well it looks like your BUNEARY is\n"
	.string "doing better already!\p"
	.string "I'm glad you are okay!\p"
	.string "My name's KATE! I'm PROFFESOR BIRCH'S\n"
	.string "daughter.\p"
	.string "And I guess you are {PLAYER}? I heard\n"
	.string "your family was going to move here\l"
	.string "today, but I wasn't expecting us to\l"
	.string "meet like this!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_10:
# 486 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: So that's where you ran\n"
	.string "off ahead to KATE...$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_11:
# 492 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Oh, and you must be\n"
	.string "{PLAYER}?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_12:
# 500 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Is that your BUNEARY?\p"
	.string "I was told you didn't have a POKEMON\n"
	.string "yet!\p"
	.string "Me and KATE were just on our way to give\n"
	.string "you your first POKEMON.$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_13:
# 505 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: So you met this BUNEARY\n"
	.string "just now while protecting it from a wild\l"
	.string "SHROODLE?\p"
	.string "And it trusts you so much already...\n"
	.string "Fascinating!\p"
	.string "Well no point in... what do you kids say?\n"
	.string "Yapping?\l"
	.string "out here. Let's go to my laboratory and\l"
	.string "talk more there!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_14:
# 513 "data/maps/Route101/scripts.pory"
	.string "KATE: Come on {PLAYER}!$"

Route101_EventScript_Espurr_Post_Shroodle_Text_0:
# 624 "data/maps/Route101/scripts.pory"
	.string "It seems like ESPURR wants to join you!\p"
	.string "Do you want to take it with you?$"
