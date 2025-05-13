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
	clearflag FLAG_ROUTE101_ESPURR
# 25 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ROUTE101_ESPURR_POST_SHROODLE
# 26 "data/maps/Route101/scripts.pory"
	setobjectmovementtype 12 MOVEMENT_TYPE_WALK_UP_AND_DOWN
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
Route101_Transition_Espurr_Support::
# 34 "data/maps/Route101/scripts.pory"
	end
# 35 "data/maps/Route101/scripts.pory"

# 36 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 37 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 38 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 39 "data/maps/Route101/scripts.pory"
	end
# 40 "data/maps/Route101/scripts.pory"

# 41 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 42 "data/maps/Route101/scripts.pory"
	lockall
# 43 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 44 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 45 "data/maps/Route101/scripts.pory"
	closemessage
# 46 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 47 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 48 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 49 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 50 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 51 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 53 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 54 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 56 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 58 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 59 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 61 "data/maps/Route101/scripts.pory"
	closemessage
# 62 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 63 "data/maps/Route101/scripts.pory"
	releaseall
# 64 "data/maps/Route101/scripts.pory"
	end
# 65 "data/maps/Route101/scripts.pory"

# 66 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 67 "data/maps/Route101/scripts.pory"
	lockall
# 68 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 69 "data/maps/Route101/scripts.pory"
	closemessage
# 70 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 71 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route101/scripts.pory"
	releaseall
# 73 "data/maps/Route101/scripts.pory"
	end
# 74 "data/maps/Route101/scripts.pory"

# 75 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 76 "data/maps/Route101/scripts.pory"
	lockall
# 77 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 78 "data/maps/Route101/scripts.pory"
	closemessage
# 79 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 80 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route101/scripts.pory"
	releaseall
# 82 "data/maps/Route101/scripts.pory"
	end
# 83 "data/maps/Route101/scripts.pory"

# 84 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 85 "data/maps/Route101/scripts.pory"
	lockall
# 86 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 87 "data/maps/Route101/scripts.pory"
	closemessage
# 88 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 89 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route101/scripts.pory"
	releaseall
# 91 "data/maps/Route101/scripts.pory"
	end
# 92 "data/maps/Route101/scripts.pory"

# 93 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 94 "data/maps/Route101/scripts.pory"
	walk_up
# 95 "data/maps/Route101/scripts.pory"
	step_end
# 96 "data/maps/Route101/scripts.pory"

# 97 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 98 "data/maps/Route101/scripts.pory"
	walk_right
# 99 "data/maps/Route101/scripts.pory"
	step_end
# 100 "data/maps/Route101/scripts.pory"

# 101 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 102 "data/maps/Route101/scripts.pory"
	walk_down
# 103 "data/maps/Route101/scripts.pory"
	step_end
# 104 "data/maps/Route101/scripts.pory"

# 105 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 136 "data/maps/Route101/scripts.pory"
	step_end
# 137 "data/maps/Route101/scripts.pory"

# 138 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route101/scripts.pory"
	step_end
# 146 "data/maps/Route101/scripts.pory"

# 147 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 148 "data/maps/Route101/scripts.pory"
	step_end
# 149 "data/maps/Route101/scripts.pory"

# 150 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 151 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 152 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 153 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 154 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 155 "data/maps/Route101/scripts.pory"
	step_end
# 156 "data/maps/Route101/scripts.pory"

# 157 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 162 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 163 "data/maps/Route101/scripts.pory"
	step_end
# 164 "data/maps/Route101/scripts.pory"

# 165 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 187 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 188 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 195 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 196 "data/maps/Route101/scripts.pory"
	step_end
# 197 "data/maps/Route101/scripts.pory"

# 198 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 199 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 200 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 201 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 202 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 203 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 204 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 205 "data/maps/Route101/scripts.pory"
	step_end
# 206 "data/maps/Route101/scripts.pory"

# 207 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 208 "data/maps/Route101/scripts.pory"
	step_end
# 209 "data/maps/Route101/scripts.pory"

# 210 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 211 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 212 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 213 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 214 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 215 "data/maps/Route101/scripts.pory"
	step_end
# 216 "data/maps/Route101/scripts.pory"

# 217 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 218 "data/maps/Route101/scripts.pory"
	walk_up
# 219 "data/maps/Route101/scripts.pory"
	walk_up
# 220 "data/maps/Route101/scripts.pory"
	step_end
# 221 "data/maps/Route101/scripts.pory"

# 222 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 223 "data/maps/Route101/scripts.pory"
	walk_up
# 224 "data/maps/Route101/scripts.pory"
	walk_left
# 225 "data/maps/Route101/scripts.pory"
	walk_up
# 226 "data/maps/Route101/scripts.pory"
	step_end
# 227 "data/maps/Route101/scripts.pory"

# 228 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 229 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 230 "data/maps/Route101/scripts.pory"
	end
# 231 "data/maps/Route101/scripts.pory"

# 232 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 233 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 234 "data/maps/Route101/scripts.pory"
	end
# 235 "data/maps/Route101/scripts.pory"

# 236 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 237 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 238 "data/maps/Route101/scripts.pory"
	end
# 239 "data/maps/Route101/scripts.pory"

# 240 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 241 "data/maps/Route101/scripts.pory"
	lock
# 242 "data/maps/Route101/scripts.pory"
	faceplayer
# 243 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 244 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 245 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 246 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 247 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 248 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 249 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 250 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 251 "data/maps/Route101/scripts.pory"
	waitstate
# 252 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 253 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 254 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 255 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 256 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 257 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 258 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 259 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 260 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 261 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 262 "data/maps/Route101/scripts.pory"
	checkplayergender
# 263 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 264 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 265 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 266 "data/maps/Route101/scripts.pory"
	waitstate
# 267 "data/maps/Route101/scripts.pory"
	release
# 268 "data/maps/Route101/scripts.pory"
	end
# 269 "data/maps/Route101/scripts.pory"

# 270 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 271 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 272 "data/maps/Route101/scripts.pory"
	return
# 273 "data/maps/Route101/scripts.pory"

# 274 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 275 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 276 "data/maps/Route101/scripts.pory"
	return
# 277 "data/maps/Route101/scripts.pory"

# 278 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 279 "data/maps/Route101/scripts.pory"
	walk_right
# 280 "data/maps/Route101/scripts.pory"
	step_end
# 281 "data/maps/Route101/scripts.pory"

# 282 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 283 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 284 "data/maps/Route101/scripts.pory"

# 285 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 286 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 287 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 288 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 289 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 290 "data/maps/Route101/scripts.pory"

# 291 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 292 "data/maps/Route101/scripts.pory"
	.string "You can't just leave the BUNEARY...$"
# 293 "data/maps/Route101/scripts.pory"

# 294 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 295 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 296 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 297 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 298 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 299 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 300 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 301 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 302 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 303 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 304 "data/maps/Route101/scripts.pory"

# 305 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 306 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 307 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 308 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 309 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 310 "data/maps/Route101/scripts.pory"

# 311 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 312 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 313 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 314 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 315 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 316 "data/maps/Route101/scripts.pory"

# 317 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 318 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 319 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101_EventScript_BunearyIntroMoveToCryRight::
# 322 "data/maps/Route101/scripts.pory"
	lock
# 323 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 324 "data/maps/Route101/scripts.pory"
	waitmoncry
# 325 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 326 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryRight
# 327 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 328 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 329 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_BunearyIntroHelpBuneary
	return


Route101_EventScript_BunearyIntroMoveToCryLeft::
# 333 "data/maps/Route101/scripts.pory"
	lock
# 334 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 335 "data/maps/Route101/scripts.pory"
	waitmoncry
# 336 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 337 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 338 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 339 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 340 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_BunearyIntroHelpBuneary
	return


Route101_EventScript_BunearyIntroHelpBuneary::
# 344 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_POISONED
# 345 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyRunAwayDown
# 346 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 347 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyTurnLeftRight
# 348 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 349 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyRunAwayRight
# 350 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_Movement_ShroodleRunAway
# 351 "data/maps/Route101/scripts.pory"
	waitmovement 0
Route101_EventScript_BunearyIntroHelpBuneary_3:
# 353 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_0, MSGBOX_YESNO
# 354 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_8
Route101_EventScript_BunearyIntroHelpBuneary_2:
# 357 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_3
# 358 "data/maps/Route101/scripts.pory"
	closemessage
# 359 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_0
# 360 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 361 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLE, FOLLOWER_EMOTION_UPSET
# 362 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_1
# 363 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 364 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 365 "data/maps/Route101/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 0
# 366 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 367 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_2
# 368 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_3
# 369 "data/maps/Route101/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 0
# 370 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 371 "data/maps/Route101/scripts.pory"
	givemon SPECIES_BUNEARY, 5, item = ITEM_ORAN_BERRY, abilityNum = 1, gender = MON_FEMALE, isShiny = TRUE
# 372 "data/maps/Route101/scripts.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 373 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 3
# 374 "data/maps/Route101/scripts.pory"
	setflag FLAG_NO_RUNNING
# 375 "data/maps/Route101/scripts.pory"
	setflag FLAG_INTRO_SHROODLE_BATTLE
# 376 "data/maps/Route101/scripts.pory"
	dowildbattle
# 377 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 378 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 379 "data/maps/Route101/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 380 "data/maps/Route101/scripts.pory"
	clearflag FLAG_INTRO_SHROODLE_BATTLE
# 381 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_SHROODLE_INTRO
# 382 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_4
# 383 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 384 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLE
# 385 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 386 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_5
# 387 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 388 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_6
# 389 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_CURIOUS
# 390 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_6
# 392 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_LOVE
# 393 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 394 "data/maps/Route101/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 395 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_2
# 396 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 397 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_3
# 398 "data/maps/Route101/scripts.pory"
	waitfanfare
# 399 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_4, MSGBOX_YESNO
# 400 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_6
Route101_EventScript_BunearyIntroHelpBuneary_5:
# 404 "data/maps/Route101/scripts.pory"
	closemessage
# 405 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_7
# 406 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 407 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 408 "data/maps/Route101/scripts.pory"
	delay 20
# 409 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 410 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_8
# 411 "data/maps/Route101/scripts.pory"
	waitmoncry
# 412 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 413 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_SHROODLEARMYLEAD, 3, 15
# 414 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 415 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 416 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 417 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYLEAD, FOLLOWER_EMOTION_UPSET
# 418 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 419 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SAD
# 420 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_10
# 421 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_11
# 422 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 423 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyTurnLeftRight
# 424 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 425 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_12
# 426 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 427 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_13
# 428 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_14
# 429 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_14
# 430 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 431 "data/maps/Route101/scripts.pory"
	delay 30
# 432 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_3
# 433 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 434 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 435 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 436 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 437 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 438 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_5, MSGBOX_AUTOCLOSE
# 439 "data/maps/Route101/scripts.pory"
	doobjectemotion OBJ_EVENT_ID_PLAYER, FOLLOWER_EMOTION_SURPRISE
# 440 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 441 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYLEAD, FOLLOWER_EMOTION_SURPRISE
# 442 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYGRUNTTOP, FOLLOWER_EMOTION_SURPRISE
# 443 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYGRUNTBOTTOM, FOLLOWER_EMOTION_SURPRISE
# 444 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_16
# 445 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SPRIGATITO, CRY_MODE_ENCOUNTER
# 446 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_17
# 447 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 448 "data/maps/Route101/scripts.pory"
	delay 70
# 449 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_6
# 450 "data/maps/Route101/scripts.pory"
	closemessage
# 451 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_17
# 452 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 453 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_7, MSGBOX_AUTOCLOSE
# 454 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_18
# 455 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_19
# 457 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_WHITE
# 458 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_20
# 459 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_20
# 460 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_21
# 461 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 462 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 463 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 464 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_SHROODLE_ARMY_INTRO
# 465 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYLEAD
# 466 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYGRUNTTOP
# 467 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYGRUNTBOTTOM
# 468 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_22
# 469 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 470 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_8
# 471 "data/maps/Route101/scripts.pory"
	closemessage
# 472 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_23
# 473 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 474 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_24
# 475 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_25
# 476 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_26
# 477 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 478 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SPRIGATITO, FOLLOWER_EMOTION_HAPPY
# 479 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_27
# 480 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 481 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_HAPPY
# 482 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_7
# 483 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_28
# 484 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 485 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_9
# 486 "data/maps/Route101/scripts.pory"
	closemessage
# 487 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_29
# 488 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 489 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_10
# 490 "data/maps/Route101/scripts.pory"
	closemessage
# 491 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 492 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_8
# 493 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_30
# 494 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 495 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_11
# 496 "data/maps/Route101/scripts.pory"
	closemessage
# 497 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_31
# 498 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_32
# 499 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_32
# 500 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 501 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_33
# 502 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 503 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_12
# 504 "data/maps/Route101/scripts.pory"
	closemessage
# 505 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_HAPPY
# 506 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_34
# 507 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 508 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_13
# 509 "data/maps/Route101/scripts.pory"
	closemessage
# 510 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_BUNEARY_INTRO
# 511 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_24
# 512 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_35
# 513 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_36
# 514 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 515 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_37
# 516 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_14, MSGBOX_AUTOCLOSE
# 517 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_38
# 518 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_39
# 519 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_40
# 520 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 521 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 522 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 523 "data/maps/Route101/scripts.pory"
	clearflag FLAG_BIRCH_NOT_IN_LAB
# 524 "data/maps/Route101/scripts.pory"
	clearflag FLAG_KATE_NOT_IN_LAB
# 525 "data/maps/Route101/scripts.pory"
	clearflag FLAG_STARTER_TREECKO
# 526 "data/maps/Route101/scripts.pory"
	clearflag FLAG_STARTER_SCORBUNNY
# 527 "data/maps/Route101/scripts.pory"
	clearflag FLAG_STARTER_POPPLIO
# 528 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_KATE
# 529 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SPRIGATITO
# 530 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_PROF_BIRCH
# 531 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_BUNEARY
# 532 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 533 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 534 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 535 "data/maps/Route101/scripts.pory"
	releaseall
	return

Route101_EventScript_BunearyIntroHelpBuneary_6:
# 401 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8004, 0
# 402 "data/maps/Route101/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route101_EventScript_BunearyIntroHelpBuneary_5

Route101_EventScript_BunearyIntroHelpBuneary_8:
# 355 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_1
	goto Route101_EventScript_BunearyIntroHelpBuneary_2


# 538 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerRunToCryRight:
# 539 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 540 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 541 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 544 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerRunToCryLeft:
# 545 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 548 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyRunAwayDown:
# 549 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 549 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 549 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 552 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyTurnLeftRight:
# 553 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 554 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 555 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 556 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 557 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 558 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 559 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 560 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 561 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 564 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyRunAwayRight:
# 565 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 565 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 565 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 565 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 566 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 569 "data/maps/Route101/scripts.pory"
Route101_Movement_ShroodleRunAway:
# 570 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 570 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 570 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 570 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 571 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

Route101_EventScript_Karrablast::
# 575 "data/maps/Route101/scripts.pory"
	lock
# 576 "data/maps/Route101/scripts.pory"
	faceplayer
# 577 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_KARRABLAST
# 578 "data/maps/Route101/scripts.pory"
	doobjectemotion 14, FOLLOWER_EMOTION_UPSET
# 579 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_KARRABLAST, CRY_MODE_ENCOUNTER
# 580 "data/maps/Route101/scripts.pory"
	waitmoncry
# 581 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_KARRABLAST, 4, ITEM_NONE
# 582 "data/maps/Route101/scripts.pory"
	dowildbattle
# 583 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 584 "data/maps/Route101/scripts.pory"
	removeobject 14
# 585 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 586 "data/maps/Route101/scripts.pory"
	waitmessage
# 587 "data/maps/Route101/scripts.pory"
	release
	return


Route101_EventScript_Poochyena::
# 591 "data/maps/Route101/scripts.pory"
	lock
# 592 "data/maps/Route101/scripts.pory"
	faceplayer
# 593 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_POOCHYENA
# 594 "data/maps/Route101/scripts.pory"
	doobjectemotion 15, FOLLOWER_EMOTION_UPSET
# 595 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 596 "data/maps/Route101/scripts.pory"
	waitmoncry
# 597 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_POOCHYENA, 4, ITEM_NONE
# 598 "data/maps/Route101/scripts.pory"
	dowildbattle
# 599 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 600 "data/maps/Route101/scripts.pory"
	removeobject 15
# 601 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 602 "data/maps/Route101/scripts.pory"
	waitmessage
# 603 "data/maps/Route101/scripts.pory"
	release
	return


Route101_EventScript_Espurr::
# 607 "data/maps/Route101/scripts.pory"
	lock
# 608 "data/maps/Route101/scripts.pory"
	faceplayer
# 609 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_ESPURR
# 610 "data/maps/Route101/scripts.pory"
	goto_if_set FLAG_ROUTE101_ESPURR_POST_SHROODLE, Route101_EventScript_Espurr_2
# 615 "data/maps/Route101/scripts.pory"
	doobjectemotion 12, FOLLOWER_EMOTION_UPSET
# 616 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ESPURR, CRY_MODE_ENCOUNTER
# 617 "data/maps/Route101/scripts.pory"
	waitmoncry
# 618 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_ESPURR, 3, ITEM_NONE
# 619 "data/maps/Route101/scripts.pory"
	dowildbattle
Route101_EventScript_Espurr_1:
# 621 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 622 "data/maps/Route101/scripts.pory"
	removeobject 12
# 623 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 624 "data/maps/Route101/scripts.pory"
	waitmessage
# 625 "data/maps/Route101/scripts.pory"
	release
	return

Route101_EventScript_Espurr_2:
# 611 "data/maps/Route101/scripts.pory"
	doobjectemotion 12, FOLLOWER_EMOTION_HAPPY
# 612 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ESPURR, CRY_MODE_ENCOUNTER
# 613 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Espurr_Text_0, MSGBOX_YESNO
	goto Route101_EventScript_Espurr_1


Route101_EventScript_Shroodle::
# 629 "data/maps/Route101/scripts.pory"
	lock
# 630 "data/maps/Route101/scripts.pory"
	faceplayer
# 631 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_SHROODLE
# 632 "data/maps/Route101/scripts.pory"
	doobjectemotion 13, FOLLOWER_EMOTION_UPSET
# 633 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 634 "data/maps/Route101/scripts.pory"
	waitmoncry
# 635 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 4, ITEM_NONE
# 636 "data/maps/Route101/scripts.pory"
	dowildbattle
# 637 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 638 "data/maps/Route101/scripts.pory"
	goto_if_unset FLAG_ROUTE101_ESPURR, Route101_EventScript_Shroodle_2
Route101_EventScript_Shroodle_1:
# 643 "data/maps/Route101/scripts.pory"
	removeobject 13
# 644 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 645 "data/maps/Route101/scripts.pory"
	waitmessage
# 646 "data/maps/Route101/scripts.pory"
	release
	return

Route101_EventScript_Shroodle_2:
# 639 "data/maps/Route101/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_LEFT_DOWN_UP
# 640 "data/maps/Route101/scripts.pory"
	setobjectxy 12, 2, 4
# 641 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_ESPURR_POST_SHROODLE
	goto Route101_EventScript_Shroodle_1


# 359 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_0:
# 359 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 359 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 359 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 359 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 362 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_1:
# 362 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 362 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 362 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 362 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 362 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 362 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 362 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 362 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 362 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 367 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_2:
# 367 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 367 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 368 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_3:
# 368 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 368 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 382 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_4:
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 386 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_5:
# 386 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 388 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_6:
# 388 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 388 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 388 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 388 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 388 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 405 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_7:
# 405 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 405 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 405 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 405 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 405 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 405 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 410 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_8:
# 410 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 414 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_9:
# 414 "data/maps/Route101/scripts.pory"
	walk_right
# 414 "data/maps/Route101/scripts.pory"
	walk_right
# 414 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 420 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_10:
# 420 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 421 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_11:
# 421 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 425 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_12:
# 425 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 425 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 425 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 427 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_13:
# 427 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 427 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 427 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 427 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 427 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 427 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 427 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 427 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 427 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 427 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 427 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 427 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 427 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 428 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_14:
# 428 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 428 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 428 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 428 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 428 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 428 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 428 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 428 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 428 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 428 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 428 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 428 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 434 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_15:
# 434 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 434 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 434 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 434 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 434 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 434 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 434 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 434 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 444 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_16:
# 444 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 446 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_17:
# 446 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 454 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_18:
# 454 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 454 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 456 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_19:
# 456 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 456 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 456 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 456 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 456 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 456 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 458 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_20:
# 458 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 458 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 458 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 458 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 458 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 458 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 460 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_21:
# 460 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 460 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 460 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 460 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 460 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 460 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 460 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 460 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 460 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 468 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_22:
# 468 "data/maps/Route101/scripts.pory"
	walk_down
# 468 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 472 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_23:
# 472 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 474 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_24:
# 474 "data/maps/Route101/scripts.pory"
	walk_down
# 474 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 475 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_25:
# 475 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 475 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 475 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 475 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 475 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 476 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_26:
# 476 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 479 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_27:
# 479 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 479 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 483 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_28:
# 483 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 483 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 483 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 483 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 483 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 483 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 487 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_29:
# 487 "data/maps/Route101/scripts.pory"
	walk_down
# 487 "data/maps/Route101/scripts.pory"
	walk_down
# 487 "data/maps/Route101/scripts.pory"
	walk_down
# 487 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 493 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_30:
# 493 "data/maps/Route101/scripts.pory"
	walk_right
# 493 "data/maps/Route101/scripts.pory"
	walk_right
# 493 "data/maps/Route101/scripts.pory"
	walk_down
# 493 "data/maps/Route101/scripts.pory"
	walk_down
# 493 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 497 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_31:
# 497 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 497 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 498 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_32:
# 498 "data/maps/Route101/scripts.pory"
	walk_down
# 498 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 501 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_33:
# 501 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 506 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_34:
# 506 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 506 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 506 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 506 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 506 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 506 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 506 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 506 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 512 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_35:
# 512 "data/maps/Route101/scripts.pory"
	walk_right
# 512 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 513 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_36:
# 513 "data/maps/Route101/scripts.pory"
	walk_right
# 513 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 515 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_37:
# 515 "data/maps/Route101/scripts.pory"
	FACE_UP
	step_end

# 517 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_38:
# 517 "data/maps/Route101/scripts.pory"
	walk_right
# 517 "data/maps/Route101/scripts.pory"
	walk_right
# 517 "data/maps/Route101/scripts.pory"
	walk_down
# 517 "data/maps/Route101/scripts.pory"
	walk_down
# 517 "data/maps/Route101/scripts.pory"
	walk_down
# 517 "data/maps/Route101/scripts.pory"
	walk_down
# 517 "data/maps/Route101/scripts.pory"
	walk_down
# 517 "data/maps/Route101/scripts.pory"
	walk_down
# 517 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 518 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_39:
# 518 "data/maps/Route101/scripts.pory"
	walk_right
# 518 "data/maps/Route101/scripts.pory"
	walk_down
# 518 "data/maps/Route101/scripts.pory"
	walk_down
# 518 "data/maps/Route101/scripts.pory"
	walk_down
# 518 "data/maps/Route101/scripts.pory"
	walk_down
# 518 "data/maps/Route101/scripts.pory"
	walk_down
# 518 "data/maps/Route101/scripts.pory"
	walk_down
# 518 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 519 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_40:
# 519 "data/maps/Route101/scripts.pory"
	walk_down
# 519 "data/maps/Route101/scripts.pory"
	walk_down
# 519 "data/maps/Route101/scripts.pory"
	walk_down
# 519 "data/maps/Route101/scripts.pory"
	walk_down
# 519 "data/maps/Route101/scripts.pory"
	walk_down
# 519 "data/maps/Route101/scripts.pory"
	walk_down
# 519 "data/maps/Route101/scripts.pory"
	walk_down
# 519 "data/maps/Route101/scripts.pory"
	walk_down
# 519 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

Route101_EventScript_BunearyIntroHelpBuneary_Text_0:
# 353 "data/maps/Route101/scripts.pory"
	.string "That poor BUNEARY seems to be in\n"
	.string "trouble! Do you want to step in?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_1:
# 355 "data/maps/Route101/scripts.pory"
	.string "You can't really plan on not helping\n"
	.string "that poor BUNEARY, right...$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_2:
# 395 "data/maps/Route101/scripts.pory"
	.string "It looks like BUNEARY wants to stay\n"
	.string "with you!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_3:
# 397 "data/maps/Route101/scripts.pory"
	.string "{STR_VAR_1} joined {PLAYER}!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_4:
# 399 "data/maps/Route101/scripts.pory"
	.string "Do you want to give a nickname to\n"
	.string "BUNEARY?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_5:
# 438 "data/maps/Route101/scripts.pory"
	.string "???: Watch out!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_6:
# 449 "data/maps/Route101/scripts.pory"
	.string "???: SPRIGATITO! Let's go!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_7:
# 453 "data/maps/Route101/scripts.pory"
	.string "???: LEAFAGE LEAFAGE LEAFAGE LEAFAGE\n"
	.string "LEAFAGE LEAFAGE LEAFAGE LEAFAGE$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_8:
# 470 "data/maps/Route101/scripts.pory"
	.string "???: Phew, just in time!\n"
	.string "Hey, are you okay?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_9:
# 485 "data/maps/Route101/scripts.pory"
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
# 489 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: So that's where you ran\n"
	.string "off ahead to KATE...$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_11:
# 495 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Oh, and you must be\n"
	.string "{PLAYER}?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_12:
# 503 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Is that your BUNEARY?\p"
	.string "I was told you didn't have a POKEMON\n"
	.string "yet!\p"
	.string "Me and KATE were just on our way to give\n"
	.string "you your first POKEMON.$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_13:
# 508 "data/maps/Route101/scripts.pory"
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
# 516 "data/maps/Route101/scripts.pory"
	.string "KATE: Come on {PLAYER}!$"

Route101_EventScript_Espurr_Text_0:
# 613 "data/maps/Route101/scripts.pory"
	.string "It seems like ESPURR wants to join you!\p"
	.string "Do you want to take it with you?$"
