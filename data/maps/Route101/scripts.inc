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
	goto_if_eq VAR_ROUTE101_STATE, 0, Route101_EventScript_DontShowOW
# 22 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ROUTE101_COTTONEE
# 23 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ROUTE101_MEOWTH_ALOLA
# 24 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_ESPURR_POST_SHROODLE
# 25 "data/maps/Route101/scripts.pory"
	removeobject 16
# 26 "data/maps/Route101/scripts.pory"
	end
# 27 "data/maps/Route101/scripts.pory"

# 28 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 29 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 30 "data/maps/Route101/scripts.pory"
	.2byte 0
# 31 "data/maps/Route101/scripts.pory"

# 32 "data/maps/Route101/scripts.pory"
Route101_EventScript_DontShowOW:
# 33 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_COTTONEE
# 34 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_MEOWTH_ALOLA
# 35 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_SHROODLE_ESPURR
# 36 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_ESPURR_POST_SHROODLE
# 37 "data/maps/Route101/scripts.pory"
	end
# 38 "data/maps/Route101/scripts.pory"

# 39 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 40 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 41 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 42 "data/maps/Route101/scripts.pory"
	end
# 43 "data/maps/Route101/scripts.pory"

# 44 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 45 "data/maps/Route101/scripts.pory"
	lockall
# 46 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 47 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 48 "data/maps/Route101/scripts.pory"
	closemessage
# 49 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 50 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 51 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 52 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 53 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 54 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 56 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 57 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 59 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 61 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 62 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 64 "data/maps/Route101/scripts.pory"
	closemessage
# 65 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 66 "data/maps/Route101/scripts.pory"
	releaseall
# 67 "data/maps/Route101/scripts.pory"
	end
# 68 "data/maps/Route101/scripts.pory"

# 69 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 70 "data/maps/Route101/scripts.pory"
	lockall
# 71 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 72 "data/maps/Route101/scripts.pory"
	closemessage
# 73 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 74 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route101/scripts.pory"
	releaseall
# 76 "data/maps/Route101/scripts.pory"
	end
# 77 "data/maps/Route101/scripts.pory"

# 78 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 79 "data/maps/Route101/scripts.pory"
	lockall
# 80 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 81 "data/maps/Route101/scripts.pory"
	closemessage
# 82 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 83 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route101/scripts.pory"
	releaseall
# 85 "data/maps/Route101/scripts.pory"
	end
# 86 "data/maps/Route101/scripts.pory"

# 87 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 88 "data/maps/Route101/scripts.pory"
	lockall
# 89 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 90 "data/maps/Route101/scripts.pory"
	closemessage
# 91 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 92 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route101/scripts.pory"
	releaseall
# 94 "data/maps/Route101/scripts.pory"
	end
# 95 "data/maps/Route101/scripts.pory"

# 96 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 97 "data/maps/Route101/scripts.pory"
	walk_up
# 98 "data/maps/Route101/scripts.pory"
	step_end
# 99 "data/maps/Route101/scripts.pory"

# 100 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 101 "data/maps/Route101/scripts.pory"
	walk_right
# 102 "data/maps/Route101/scripts.pory"
	step_end
# 103 "data/maps/Route101/scripts.pory"

# 104 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 105 "data/maps/Route101/scripts.pory"
	walk_down
# 106 "data/maps/Route101/scripts.pory"
	step_end
# 107 "data/maps/Route101/scripts.pory"

# 108 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 139 "data/maps/Route101/scripts.pory"
	step_end
# 140 "data/maps/Route101/scripts.pory"

# 141 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 147 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 148 "data/maps/Route101/scripts.pory"
	step_end
# 149 "data/maps/Route101/scripts.pory"

# 150 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 151 "data/maps/Route101/scripts.pory"
	step_end
# 152 "data/maps/Route101/scripts.pory"

# 153 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 154 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 155 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 156 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 157 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 158 "data/maps/Route101/scripts.pory"
	step_end
# 159 "data/maps/Route101/scripts.pory"

# 160 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 165 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 166 "data/maps/Route101/scripts.pory"
	step_end
# 167 "data/maps/Route101/scripts.pory"

# 168 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 187 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 188 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 195 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 197 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 198 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 199 "data/maps/Route101/scripts.pory"
	step_end
# 200 "data/maps/Route101/scripts.pory"

# 201 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 202 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 203 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 204 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 205 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 206 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 207 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 208 "data/maps/Route101/scripts.pory"
	step_end
# 209 "data/maps/Route101/scripts.pory"

# 210 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 211 "data/maps/Route101/scripts.pory"
	step_end
# 212 "data/maps/Route101/scripts.pory"

# 213 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 214 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 215 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 216 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 217 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 218 "data/maps/Route101/scripts.pory"
	step_end
# 219 "data/maps/Route101/scripts.pory"

# 220 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 221 "data/maps/Route101/scripts.pory"
	walk_up
# 222 "data/maps/Route101/scripts.pory"
	walk_up
# 223 "data/maps/Route101/scripts.pory"
	step_end
# 224 "data/maps/Route101/scripts.pory"

# 225 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 226 "data/maps/Route101/scripts.pory"
	walk_up
# 227 "data/maps/Route101/scripts.pory"
	walk_left
# 228 "data/maps/Route101/scripts.pory"
	walk_up
# 229 "data/maps/Route101/scripts.pory"
	step_end
# 230 "data/maps/Route101/scripts.pory"

# 231 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 232 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 233 "data/maps/Route101/scripts.pory"
	end
# 234 "data/maps/Route101/scripts.pory"

# 235 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 236 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 237 "data/maps/Route101/scripts.pory"
	end
# 238 "data/maps/Route101/scripts.pory"

# 239 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 240 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 241 "data/maps/Route101/scripts.pory"
	end
# 242 "data/maps/Route101/scripts.pory"

# 243 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 244 "data/maps/Route101/scripts.pory"
	lock
# 245 "data/maps/Route101/scripts.pory"
	faceplayer
# 246 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 247 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 248 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 249 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 250 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 251 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 252 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 253 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 254 "data/maps/Route101/scripts.pory"
	waitstate
# 255 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 256 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 258 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 259 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 260 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 261 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 262 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 263 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 264 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 265 "data/maps/Route101/scripts.pory"
	checkplayergender
# 266 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 267 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 268 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 269 "data/maps/Route101/scripts.pory"
	waitstate
# 270 "data/maps/Route101/scripts.pory"
	release
# 271 "data/maps/Route101/scripts.pory"
	end
# 272 "data/maps/Route101/scripts.pory"

# 273 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 274 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 275 "data/maps/Route101/scripts.pory"
	return
# 276 "data/maps/Route101/scripts.pory"

# 277 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 278 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 279 "data/maps/Route101/scripts.pory"
	return
# 280 "data/maps/Route101/scripts.pory"

# 281 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 282 "data/maps/Route101/scripts.pory"
	walk_right
# 283 "data/maps/Route101/scripts.pory"
	step_end
# 284 "data/maps/Route101/scripts.pory"

# 285 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 286 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 287 "data/maps/Route101/scripts.pory"

# 288 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 289 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 290 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 291 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 292 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 293 "data/maps/Route101/scripts.pory"

# 294 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 295 "data/maps/Route101/scripts.pory"
	.string "You can't just leave the BUNEARY...$"
# 296 "data/maps/Route101/scripts.pory"

# 297 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 298 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 299 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 300 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 301 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 302 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 303 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 304 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 305 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 306 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 307 "data/maps/Route101/scripts.pory"

# 308 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 309 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 310 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 311 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 312 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 313 "data/maps/Route101/scripts.pory"

# 314 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 315 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 316 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 317 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 318 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 319 "data/maps/Route101/scripts.pory"

# 320 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 321 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 322 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101_EventScript_BunearyIntroMoveToCryRight::
# 325 "data/maps/Route101/scripts.pory"
	lock
# 326 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 327 "data/maps/Route101/scripts.pory"
	waitmoncry
# 328 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 329 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryRight
# 330 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 331 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 332 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_BunearyIntroHelpBuneary
	return


Route101_EventScript_BunearyIntroMoveToCryLeft::
# 336 "data/maps/Route101/scripts.pory"
	lock
# 337 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 338 "data/maps/Route101/scripts.pory"
	waitmoncry
# 339 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 340 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 341 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 342 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 343 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_BunearyIntroHelpBuneary
	return


Route101_EventScript_BunearyIntroHelpBuneary::
# 347 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_POISONED
# 348 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyRunAwayDown
# 349 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 350 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyTurnLeftRight
# 351 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 352 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyRunAwayRight
# 353 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_Movement_ShroodleRunAway
# 354 "data/maps/Route101/scripts.pory"
	waitmovement 0
Route101_EventScript_BunearyIntroHelpBuneary_3:
# 356 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_0, MSGBOX_YESNO
# 357 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_8
Route101_EventScript_BunearyIntroHelpBuneary_2:
# 360 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_3
# 361 "data/maps/Route101/scripts.pory"
	closemessage
# 362 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_0
# 363 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 364 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLE, FOLLOWER_EMOTION_UPSET
# 365 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_1
# 366 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 367 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 368 "data/maps/Route101/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 0
# 369 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 370 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_2
# 371 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_3
# 372 "data/maps/Route101/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 0
# 373 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 374 "data/maps/Route101/scripts.pory"
	givemon SPECIES_BUNEARY, 5, item = ITEM_ORAN_BERRY, abilityNum = 1, gender = MON_FEMALE, isShiny = TRUE
# 375 "data/maps/Route101/scripts.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 376 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 3
# 377 "data/maps/Route101/scripts.pory"
	setflag FLAG_NO_RUNNING
# 378 "data/maps/Route101/scripts.pory"
	setflag FLAG_INTRO_SHROODLE_BATTLE
# 379 "data/maps/Route101/scripts.pory"
	dowildbattle
# 380 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 381 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 382 "data/maps/Route101/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 383 "data/maps/Route101/scripts.pory"
	clearflag FLAG_INTRO_SHROODLE_BATTLE
# 384 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_SHROODLE_INTRO
# 385 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_4
# 386 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 387 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLE
# 388 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 389 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_5
# 390 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_6
# 392 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_CURIOUS
# 393 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 394 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_6
# 395 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_LOVE
# 396 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 397 "data/maps/Route101/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 398 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_2
# 399 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 400 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_3
# 401 "data/maps/Route101/scripts.pory"
	waitfanfare
# 402 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_4, MSGBOX_YESNO
# 403 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_6
Route101_EventScript_BunearyIntroHelpBuneary_5:
# 407 "data/maps/Route101/scripts.pory"
	closemessage
# 408 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_7
# 409 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 410 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 411 "data/maps/Route101/scripts.pory"
	delay 20
# 412 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 413 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_8
# 414 "data/maps/Route101/scripts.pory"
	waitmoncry
# 415 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 416 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_SHROODLEARMYLEAD, 3, 15
# 417 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 418 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 419 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 420 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYLEAD, FOLLOWER_EMOTION_UPSET
# 421 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 422 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SAD
# 423 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_10
# 424 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_11
# 425 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 426 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyTurnLeftRight
# 427 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 428 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_12
# 429 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 430 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_13
# 431 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_14
# 432 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_14
# 433 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 434 "data/maps/Route101/scripts.pory"
	delay 30
# 435 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_3
# 436 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 437 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 438 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 439 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 440 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 441 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_5, MSGBOX_AUTOCLOSE
# 442 "data/maps/Route101/scripts.pory"
	doobjectemotion OBJ_EVENT_ID_PLAYER, FOLLOWER_EMOTION_SURPRISE
# 443 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 444 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYLEAD, FOLLOWER_EMOTION_SURPRISE
# 445 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYGRUNTTOP, FOLLOWER_EMOTION_SURPRISE
# 446 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYGRUNTBOTTOM, FOLLOWER_EMOTION_SURPRISE
# 447 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_16
# 448 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SPRIGATITO, CRY_MODE_ENCOUNTER
# 449 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_17
# 450 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 451 "data/maps/Route101/scripts.pory"
	delay 70
# 452 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_6
# 453 "data/maps/Route101/scripts.pory"
	closemessage
# 454 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_17
# 455 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_7, MSGBOX_AUTOCLOSE
# 457 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_18
# 458 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 459 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_19
# 460 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_WHITE
# 461 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_20
# 462 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_20
# 463 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_21
# 464 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 465 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 466 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 467 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_SHROODLE_ARMY_INTRO
# 468 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYLEAD
# 469 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYGRUNTTOP
# 470 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYGRUNTBOTTOM
# 471 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_22
# 472 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 473 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_8
# 474 "data/maps/Route101/scripts.pory"
	closemessage
# 475 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_23
# 476 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_24
# 478 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_25
# 479 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_26
# 480 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 481 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SPRIGATITO, FOLLOWER_EMOTION_HAPPY
# 482 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_27
# 483 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 484 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_HAPPY
# 485 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_7
# 486 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_28
# 487 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 488 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_9
# 489 "data/maps/Route101/scripts.pory"
	closemessage
# 490 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_29
# 491 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 492 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_10
# 493 "data/maps/Route101/scripts.pory"
	closemessage
# 494 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 495 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_8
# 496 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_30
# 497 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 498 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_11
# 499 "data/maps/Route101/scripts.pory"
	closemessage
# 500 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_31
# 501 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_32
# 502 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_32
# 503 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 504 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_33
# 505 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 506 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_12
# 507 "data/maps/Route101/scripts.pory"
	closemessage
# 508 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_HAPPY
# 509 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_34
# 510 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 511 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_13
# 512 "data/maps/Route101/scripts.pory"
	closemessage
# 513 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_BUNEARY_INTRO
# 514 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_24
# 515 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_35
# 516 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_36
# 517 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 518 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_37
# 519 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_14, MSGBOX_AUTOCLOSE
# 520 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_38
# 521 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_39
# 522 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_40
# 523 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 524 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 525 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 526 "data/maps/Route101/scripts.pory"
	clearflag FLAG_BIRCH_NOT_IN_LAB
# 527 "data/maps/Route101/scripts.pory"
	clearflag FLAG_KATE_NOT_IN_LAB
# 528 "data/maps/Route101/scripts.pory"
	clearflag FLAG_STARTER_TREECKO
# 529 "data/maps/Route101/scripts.pory"
	clearflag FLAG_STARTER_SCORBUNNY
# 530 "data/maps/Route101/scripts.pory"
	clearflag FLAG_STARTER_POPPLIO
# 531 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_KATE
# 532 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SPRIGATITO
# 533 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_PROF_BIRCH
# 534 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_BUNEARY
# 535 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 536 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 537 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 538 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 539 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ROUTE101_SHROODLE_ESPURR
# 540 "data/maps/Route101/scripts.pory"
	releaseall
	return

Route101_EventScript_BunearyIntroHelpBuneary_6:
# 404 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8004, 0
# 405 "data/maps/Route101/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route101_EventScript_BunearyIntroHelpBuneary_5

Route101_EventScript_BunearyIntroHelpBuneary_8:
# 358 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_1
	goto Route101_EventScript_BunearyIntroHelpBuneary_2


# 543 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerRunToCryRight:
# 544 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 545 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 546 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 549 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerRunToCryLeft:
# 550 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 553 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyRunAwayDown:
# 554 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 554 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 554 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 557 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyTurnLeftRight:
# 558 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 559 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 560 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 561 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 562 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 563 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 564 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 565 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 566 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 569 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyRunAwayRight:
# 570 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 570 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 570 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 570 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 571 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 574 "data/maps/Route101/scripts.pory"
Route101_Movement_ShroodleRunAway:
# 575 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 575 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 575 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 575 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 576 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

Route101_EventScript_Cottonee::
# 580 "data/maps/Route101/scripts.pory"
	lock
# 581 "data/maps/Route101/scripts.pory"
	faceplayer
# 582 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_COTTONEE
# 583 "data/maps/Route101/scripts.pory"
	doobjectemotion 14, FOLLOWER_EMOTION_UPSET
# 584 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_COTTONEE, CRY_MODE_ENCOUNTER
# 585 "data/maps/Route101/scripts.pory"
	waitmoncry
# 586 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_COTTONEE, 4, ITEM_NONE
# 587 "data/maps/Route101/scripts.pory"
	dowildbattle
# 588 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 589 "data/maps/Route101/scripts.pory"
	removeobject 14
# 590 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 591 "data/maps/Route101/scripts.pory"
	waitmessage
# 592 "data/maps/Route101/scripts.pory"
	release
	return


Route101_EventScript_Meowth_A::
# 596 "data/maps/Route101/scripts.pory"
	lock
# 597 "data/maps/Route101/scripts.pory"
	faceplayer
# 598 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_MEOWTH_ALOLA
# 599 "data/maps/Route101/scripts.pory"
	doobjectemotion 15, FOLLOWER_EMOTION_UPSET
# 600 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_MEOWTH_ALOLA, CRY_MODE_ENCOUNTER
# 601 "data/maps/Route101/scripts.pory"
	waitmoncry
# 602 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_MEOWTH_ALOLA, 4, ITEM_NONE
# 603 "data/maps/Route101/scripts.pory"
	dowildbattle
# 604 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 605 "data/maps/Route101/scripts.pory"
	removeobject 15
# 606 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 607 "data/maps/Route101/scripts.pory"
	waitmessage
# 608 "data/maps/Route101/scripts.pory"
	release
	return


Route101_EventScript_Espurr::
# 612 "data/maps/Route101/scripts.pory"
	lock
# 613 "data/maps/Route101/scripts.pory"
	faceplayer
# 614 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_SHROODLE_ESPURR
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
# 620 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 621 "data/maps/Route101/scripts.pory"
	removeobject 12
# 622 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 623 "data/maps/Route101/scripts.pory"
	applymovement 13, Route101_EventScript_Espurr_Movement_0
# 624 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 625 "data/maps/Route101/scripts.pory"
	removeobject 13
# 626 "data/maps/Route101/scripts.pory"
	waitmessage
# 627 "data/maps/Route101/scripts.pory"
	release
	return


Route101_EventScript_Espurr_Post_Shroodle::
# 631 "data/maps/Route101/scripts.pory"
	lock
# 632 "data/maps/Route101/scripts.pory"
	faceplayer
# 633 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_ESPURR_POST_SHROODLE
# 634 "data/maps/Route101/scripts.pory"
	doobjectemotion 16, FOLLOWER_EMOTION_HAPPY
# 635 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ESPURR, CRY_MODE_ENCOUNTER
# 636 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Espurr_Post_Shroodle_Text_0, MSGBOX_YESNO
# 637 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route101_EventScript_Espurr_Post_Shroodle_2
# 651 "data/maps/Route101/scripts.pory"
	closemessage
# 652 "data/maps/Route101/scripts.pory"
	release
# 653 "data/maps/Route101/scripts.pory"
	lock
# 654 "data/maps/Route101/scripts.pory"
	faceawayplayer
# 655 "data/maps/Route101/scripts.pory"
	doobjectemotion 16, FOLLOWER_EMOTION_SAD
# 656 "data/maps/Route101/scripts.pory"
	delay 30
Route101_EventScript_Espurr_Post_Shroodle_1:
# 658 "data/maps/Route101/scripts.pory"
	closemessage
# 659 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 660 "data/maps/Route101/scripts.pory"
	removeobject 16
# 661 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 662 "data/maps/Route101/scripts.pory"
	waitmessage
# 663 "data/maps/Route101/scripts.pory"
	release
	return

Route101_EventScript_Espurr_Post_Shroodle_2:
# 638 "data/maps/Route101/scripts.pory"
	givemon SPECIES_ESPURR, 3
# 639 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route101_EventScript_Espurr_Post_Shroodle_6
Route101_EventScript_Espurr_Post_Shroodle_5:
# 644 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route101_EventScript_Espurr_Post_Shroodle_8
	goto Route101_EventScript_Espurr_Post_Shroodle_1

Route101_EventScript_Espurr_Post_Shroodle_6:
# 640 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 641 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Espurr_Post_Shroodle_Text_1
# 642 "data/maps/Route101/scripts.pory"
	call NicknamePartyMon
	goto Route101_EventScript_Espurr_Post_Shroodle_5

Route101_EventScript_Espurr_Post_Shroodle_8:
# 645 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 646 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Espurr_Post_Shroodle_Text_1
# 647 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ESPURR
# 648 "data/maps/Route101/scripts.pory"
	call NicknameBoxMon
	goto Route101_EventScript_Espurr_Post_Shroodle_1


Route101_EventScript_Shroodle::
# 667 "data/maps/Route101/scripts.pory"
	lock
# 668 "data/maps/Route101/scripts.pory"
	faceplayer
# 669 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_SHROODLE_ESPURR
# 670 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ROUTE101_ESPURR_POST_SHROODLE
# 671 "data/maps/Route101/scripts.pory"
	doobjectemotion 13, FOLLOWER_EMOTION_UPSET
# 672 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 673 "data/maps/Route101/scripts.pory"
	waitmoncry
# 674 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 4, ITEM_NONE
# 675 "data/maps/Route101/scripts.pory"
	dowildbattle
# 676 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 677 "data/maps/Route101/scripts.pory"
	removeobject 12
# 678 "data/maps/Route101/scripts.pory"
	addobject 16
# 679 "data/maps/Route101/scripts.pory"
	removeobject 13
# 680 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 681 "data/maps/Route101/scripts.pory"
	doobjectemotion 16, FOLLOWER_EMOTION_HAPPY
# 682 "data/maps/Route101/scripts.pory"
	waitmessage
# 683 "data/maps/Route101/scripts.pory"
	release
	return


# 362 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_0:
# 362 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 362 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 362 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 362 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 365 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_1:
# 365 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 365 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 365 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 365 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 365 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 365 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 365 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 365 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 365 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 370 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_2:
# 370 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 370 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 371 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_3:
# 371 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 371 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 385 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_4:
# 385 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 385 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 385 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 385 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 385 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 385 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 385 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 385 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 385 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 389 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_5:
# 389 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 391 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_6:
# 391 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 391 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 391 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 391 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 391 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 408 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_7:
# 408 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 408 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 408 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 408 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 408 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 408 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 413 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_8:
# 413 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 417 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_9:
# 417 "data/maps/Route101/scripts.pory"
	walk_right
# 417 "data/maps/Route101/scripts.pory"
	walk_right
# 417 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 423 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_10:
# 423 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 424 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_11:
# 424 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 428 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_12:
# 428 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 428 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 428 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 430 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_13:
# 430 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 430 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 430 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 430 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 430 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 430 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 430 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 430 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 430 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 430 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 430 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 430 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 430 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 431 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_14:
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
# 431 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 431 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 431 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 431 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 437 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_15:
# 437 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 437 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 437 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 437 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 437 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 437 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 437 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 437 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 447 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_16:
# 447 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 449 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_17:
# 449 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 449 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 449 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 457 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_18:
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 457 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 457 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 459 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_19:
# 459 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 459 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 459 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 459 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 459 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 459 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 461 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_20:
# 461 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 461 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 461 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 461 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 461 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 461 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 463 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_21:
# 463 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 463 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 463 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 463 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 463 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 463 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 463 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 463 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 463 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 471 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_22:
# 471 "data/maps/Route101/scripts.pory"
	walk_down
# 471 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 475 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_23:
# 475 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 477 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_24:
# 477 "data/maps/Route101/scripts.pory"
	walk_down
# 477 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 478 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_25:
# 478 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 478 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 478 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 478 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 478 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 479 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_26:
# 479 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 482 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_27:
# 482 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 482 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 486 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_28:
# 486 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 486 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 486 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 486 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 486 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 486 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 490 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_29:
# 490 "data/maps/Route101/scripts.pory"
	walk_down
# 490 "data/maps/Route101/scripts.pory"
	walk_down
# 490 "data/maps/Route101/scripts.pory"
	walk_down
# 490 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 496 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_30:
# 496 "data/maps/Route101/scripts.pory"
	walk_right
# 496 "data/maps/Route101/scripts.pory"
	walk_right
# 496 "data/maps/Route101/scripts.pory"
	walk_down
# 496 "data/maps/Route101/scripts.pory"
	walk_down
# 496 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 500 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_31:
# 500 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 500 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 501 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_32:
# 501 "data/maps/Route101/scripts.pory"
	walk_down
# 501 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 504 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_33:
# 504 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 509 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_34:
# 509 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 509 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 509 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 509 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 509 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 509 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 509 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 509 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 515 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_35:
# 515 "data/maps/Route101/scripts.pory"
	walk_right
# 515 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 516 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_36:
# 516 "data/maps/Route101/scripts.pory"
	walk_right
# 516 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 518 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_37:
# 518 "data/maps/Route101/scripts.pory"
	FACE_UP
	step_end

# 520 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_38:
# 520 "data/maps/Route101/scripts.pory"
	walk_right
# 520 "data/maps/Route101/scripts.pory"
	walk_right
# 520 "data/maps/Route101/scripts.pory"
	walk_down
# 520 "data/maps/Route101/scripts.pory"
	walk_down
# 520 "data/maps/Route101/scripts.pory"
	walk_down
# 520 "data/maps/Route101/scripts.pory"
	walk_down
# 520 "data/maps/Route101/scripts.pory"
	walk_down
# 520 "data/maps/Route101/scripts.pory"
	walk_down
# 520 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 521 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_39:
# 521 "data/maps/Route101/scripts.pory"
	walk_right
# 521 "data/maps/Route101/scripts.pory"
	walk_down
# 521 "data/maps/Route101/scripts.pory"
	walk_down
# 521 "data/maps/Route101/scripts.pory"
	walk_down
# 521 "data/maps/Route101/scripts.pory"
	walk_down
# 521 "data/maps/Route101/scripts.pory"
	walk_down
# 521 "data/maps/Route101/scripts.pory"
	walk_down
# 521 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 522 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_40:
# 522 "data/maps/Route101/scripts.pory"
	walk_down
# 522 "data/maps/Route101/scripts.pory"
	walk_down
# 522 "data/maps/Route101/scripts.pory"
	walk_down
# 522 "data/maps/Route101/scripts.pory"
	walk_down
# 522 "data/maps/Route101/scripts.pory"
	walk_down
# 522 "data/maps/Route101/scripts.pory"
	walk_down
# 522 "data/maps/Route101/scripts.pory"
	walk_down
# 522 "data/maps/Route101/scripts.pory"
	walk_down
# 522 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 623 "data/maps/Route101/scripts.pory"
Route101_EventScript_Espurr_Movement_0:
# 623 "data/maps/Route101/scripts.pory"
	walk_right
# 623 "data/maps/Route101/scripts.pory"
	walk_right
# 623 "data/maps/Route101/scripts.pory"
	walk_right
# 623 "data/maps/Route101/scripts.pory"
	walk_right
# 623 "data/maps/Route101/scripts.pory"
	walk_right
# 623 "data/maps/Route101/scripts.pory"
	walk_right
# 623 "data/maps/Route101/scripts.pory"
	walk_right
# 623 "data/maps/Route101/scripts.pory"
	walk_right
# 623 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

Route101_EventScript_BunearyIntroHelpBuneary_Text_0:
# 356 "data/maps/Route101/scripts.pory"
	.string "That poor BUNEARY seems to be in\n"
	.string "trouble! Do you want to step in?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_1:
# 358 "data/maps/Route101/scripts.pory"
	.string "You can't really plan on not helping\n"
	.string "that poor BUNEARY, right...$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_2:
# 398 "data/maps/Route101/scripts.pory"
	.string "It looks like BUNEARY wants to stay\n"
	.string "with you!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_3:
# 400 "data/maps/Route101/scripts.pory"
	.string "{STR_VAR_1} joined {PLAYER}!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_4:
# 402 "data/maps/Route101/scripts.pory"
	.string "Do you want to give a nickname to\n"
	.string "BUNEARY?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_5:
# 441 "data/maps/Route101/scripts.pory"
	.string "???: Watch out!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_6:
# 452 "data/maps/Route101/scripts.pory"
	.string "???: SPRIGATITO! Let's go!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_7:
# 456 "data/maps/Route101/scripts.pory"
	.string "???: LEAFAGE LEAFAGE LEAFAGE LEAFAGE\n"
	.string "LEAFAGE LEAFAGE LEAFAGE LEAFAGE$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_8:
# 473 "data/maps/Route101/scripts.pory"
	.string "???: Phew, just in time!\n"
	.string "Hey, are you okay?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_9:
# 488 "data/maps/Route101/scripts.pory"
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
# 492 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: So that's where you ran\n"
	.string "off ahead to KATE...$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_11:
# 498 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Oh, and you must be\n"
	.string "{PLAYER}?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_12:
# 506 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Is that your BUNEARY?\p"
	.string "I was told you didn't have a POKEMON\n"
	.string "yet!\p"
	.string "Me and KATE were just on our way to give\n"
	.string "you your first POKEMON.$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_13:
# 511 "data/maps/Route101/scripts.pory"
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
# 519 "data/maps/Route101/scripts.pory"
	.string "KATE: Come on {PLAYER}!$"

Route101_EventScript_Espurr_Post_Shroodle_Text_0:
# 636 "data/maps/Route101/scripts.pory"
	.string "It seems like ESPURR wants to join you!\p"
	.string "Do you want to take it with you?$"

Route101_EventScript_Espurr_Post_Shroodle_Text_1:
# 641 "data/maps/Route101/scripts.pory"
	.string "You got ESPURR!$"
