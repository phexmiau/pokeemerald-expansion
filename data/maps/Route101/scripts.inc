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
	setflag FLAG_ROUTE101_ESPURR_POST_SHROODLE
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
Route101_Transition_Espurr_Support::
# 33 "data/maps/Route101/scripts.pory"
	end
# 34 "data/maps/Route101/scripts.pory"

# 35 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 36 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 37 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 38 "data/maps/Route101/scripts.pory"
	end
# 39 "data/maps/Route101/scripts.pory"

# 40 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 41 "data/maps/Route101/scripts.pory"
	lockall
# 42 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 43 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 44 "data/maps/Route101/scripts.pory"
	closemessage
# 45 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 46 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 47 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 48 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 49 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 50 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 52 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 53 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 55 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 57 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 58 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 60 "data/maps/Route101/scripts.pory"
	closemessage
# 61 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 62 "data/maps/Route101/scripts.pory"
	releaseall
# 63 "data/maps/Route101/scripts.pory"
	end
# 64 "data/maps/Route101/scripts.pory"

# 65 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 66 "data/maps/Route101/scripts.pory"
	lockall
# 67 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 68 "data/maps/Route101/scripts.pory"
	closemessage
# 69 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 70 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route101/scripts.pory"
	releaseall
# 72 "data/maps/Route101/scripts.pory"
	end
# 73 "data/maps/Route101/scripts.pory"

# 74 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 75 "data/maps/Route101/scripts.pory"
	lockall
# 76 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 77 "data/maps/Route101/scripts.pory"
	closemessage
# 78 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 79 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route101/scripts.pory"
	releaseall
# 81 "data/maps/Route101/scripts.pory"
	end
# 82 "data/maps/Route101/scripts.pory"

# 83 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 84 "data/maps/Route101/scripts.pory"
	lockall
# 85 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 86 "data/maps/Route101/scripts.pory"
	closemessage
# 87 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 88 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route101/scripts.pory"
	releaseall
# 90 "data/maps/Route101/scripts.pory"
	end
# 91 "data/maps/Route101/scripts.pory"

# 92 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 93 "data/maps/Route101/scripts.pory"
	walk_up
# 94 "data/maps/Route101/scripts.pory"
	step_end
# 95 "data/maps/Route101/scripts.pory"

# 96 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 97 "data/maps/Route101/scripts.pory"
	walk_right
# 98 "data/maps/Route101/scripts.pory"
	step_end
# 99 "data/maps/Route101/scripts.pory"

# 100 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 101 "data/maps/Route101/scripts.pory"
	walk_down
# 102 "data/maps/Route101/scripts.pory"
	step_end
# 103 "data/maps/Route101/scripts.pory"

# 104 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 135 "data/maps/Route101/scripts.pory"
	step_end
# 136 "data/maps/Route101/scripts.pory"

# 137 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 144 "data/maps/Route101/scripts.pory"
	step_end
# 145 "data/maps/Route101/scripts.pory"

# 146 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 147 "data/maps/Route101/scripts.pory"
	step_end
# 148 "data/maps/Route101/scripts.pory"

# 149 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 150 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 151 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 152 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 153 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 154 "data/maps/Route101/scripts.pory"
	step_end
# 155 "data/maps/Route101/scripts.pory"

# 156 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 161 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 162 "data/maps/Route101/scripts.pory"
	step_end
# 163 "data/maps/Route101/scripts.pory"

# 164 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 187 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 188 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 195 "data/maps/Route101/scripts.pory"
	step_end
# 196 "data/maps/Route101/scripts.pory"

# 197 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 198 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 199 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 200 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 201 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 202 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 203 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 204 "data/maps/Route101/scripts.pory"
	step_end
# 205 "data/maps/Route101/scripts.pory"

# 206 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 207 "data/maps/Route101/scripts.pory"
	step_end
# 208 "data/maps/Route101/scripts.pory"

# 209 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 210 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 211 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 212 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 213 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 214 "data/maps/Route101/scripts.pory"
	step_end
# 215 "data/maps/Route101/scripts.pory"

# 216 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 217 "data/maps/Route101/scripts.pory"
	walk_up
# 218 "data/maps/Route101/scripts.pory"
	walk_up
# 219 "data/maps/Route101/scripts.pory"
	step_end
# 220 "data/maps/Route101/scripts.pory"

# 221 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 222 "data/maps/Route101/scripts.pory"
	walk_up
# 223 "data/maps/Route101/scripts.pory"
	walk_left
# 224 "data/maps/Route101/scripts.pory"
	walk_up
# 225 "data/maps/Route101/scripts.pory"
	step_end
# 226 "data/maps/Route101/scripts.pory"

# 227 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 228 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 229 "data/maps/Route101/scripts.pory"
	end
# 230 "data/maps/Route101/scripts.pory"

# 231 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 232 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 233 "data/maps/Route101/scripts.pory"
	end
# 234 "data/maps/Route101/scripts.pory"

# 235 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 236 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 237 "data/maps/Route101/scripts.pory"
	end
# 238 "data/maps/Route101/scripts.pory"

# 239 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 240 "data/maps/Route101/scripts.pory"
	lock
# 241 "data/maps/Route101/scripts.pory"
	faceplayer
# 242 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 243 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 244 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 245 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 246 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 247 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 248 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 250 "data/maps/Route101/scripts.pory"
	waitstate
# 251 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 252 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 253 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 254 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 255 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 256 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 257 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 258 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 259 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 260 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 261 "data/maps/Route101/scripts.pory"
	checkplayergender
# 262 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 263 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 264 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 265 "data/maps/Route101/scripts.pory"
	waitstate
# 266 "data/maps/Route101/scripts.pory"
	release
# 267 "data/maps/Route101/scripts.pory"
	end
# 268 "data/maps/Route101/scripts.pory"

# 269 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 270 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 271 "data/maps/Route101/scripts.pory"
	return
# 272 "data/maps/Route101/scripts.pory"

# 273 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 274 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 275 "data/maps/Route101/scripts.pory"
	return
# 276 "data/maps/Route101/scripts.pory"

# 277 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 278 "data/maps/Route101/scripts.pory"
	walk_right
# 279 "data/maps/Route101/scripts.pory"
	step_end
# 280 "data/maps/Route101/scripts.pory"

# 281 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 282 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 283 "data/maps/Route101/scripts.pory"

# 284 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 285 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 286 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 287 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 288 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 289 "data/maps/Route101/scripts.pory"

# 290 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 291 "data/maps/Route101/scripts.pory"
	.string "You can't just leave the BUNEARY...$"
# 292 "data/maps/Route101/scripts.pory"

# 293 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 294 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 295 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 296 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 297 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 298 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 299 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 300 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 301 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 302 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 303 "data/maps/Route101/scripts.pory"

# 304 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 305 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 306 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 307 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 308 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 309 "data/maps/Route101/scripts.pory"

# 310 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 311 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 312 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 313 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 314 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 315 "data/maps/Route101/scripts.pory"

# 316 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 317 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 318 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101_EventScript_BunearyIntroMoveToCryRight::
# 321 "data/maps/Route101/scripts.pory"
	lock
# 322 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 323 "data/maps/Route101/scripts.pory"
	waitmoncry
# 324 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 325 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryRight
# 326 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 327 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 328 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_BunearyIntroHelpBuneary
	return


Route101_EventScript_BunearyIntroMoveToCryLeft::
# 332 "data/maps/Route101/scripts.pory"
	lock
# 333 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 334 "data/maps/Route101/scripts.pory"
	waitmoncry
# 335 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 336 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 337 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 339 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_BunearyIntroHelpBuneary
	return


Route101_EventScript_BunearyIntroHelpBuneary::
# 343 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_POISONED
# 344 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyRunAwayDown
# 345 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 346 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyTurnLeftRight
# 347 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 348 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyRunAwayRight
# 349 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_Movement_ShroodleRunAway
# 350 "data/maps/Route101/scripts.pory"
	waitmovement 0
Route101_EventScript_BunearyIntroHelpBuneary_3:
# 352 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_0, MSGBOX_YESNO
# 353 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_8
Route101_EventScript_BunearyIntroHelpBuneary_2:
# 356 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_3
# 357 "data/maps/Route101/scripts.pory"
	closemessage
# 358 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_0
# 359 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 360 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLE, FOLLOWER_EMOTION_UPSET
# 361 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_1
# 362 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 363 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 364 "data/maps/Route101/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 0
# 365 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 366 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_2
# 367 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_3
# 368 "data/maps/Route101/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 0
# 369 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route101/scripts.pory"
	givemon SPECIES_BUNEARY, 5, item = ITEM_ORAN_BERRY, abilityNum = 1, gender = MON_FEMALE, isShiny = TRUE
# 371 "data/maps/Route101/scripts.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 372 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 3
# 373 "data/maps/Route101/scripts.pory"
	setflag FLAG_NO_RUNNING
# 374 "data/maps/Route101/scripts.pory"
	setflag FLAG_INTRO_SHROODLE_BATTLE
# 375 "data/maps/Route101/scripts.pory"
	dowildbattle
# 376 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 377 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 378 "data/maps/Route101/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 379 "data/maps/Route101/scripts.pory"
	clearflag FLAG_INTRO_SHROODLE_BATTLE
# 380 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_SHROODLE_INTRO
# 381 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_4
# 382 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 383 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLE
# 384 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 385 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_5
# 386 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 387 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_6
# 388 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_CURIOUS
# 389 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 390 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_6
# 391 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_LOVE
# 392 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 393 "data/maps/Route101/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 394 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_2
# 395 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 396 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_3
# 397 "data/maps/Route101/scripts.pory"
	waitfanfare
# 398 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_4, MSGBOX_YESNO
# 399 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_6
Route101_EventScript_BunearyIntroHelpBuneary_5:
# 403 "data/maps/Route101/scripts.pory"
	closemessage
# 404 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_7
# 405 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 406 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 407 "data/maps/Route101/scripts.pory"
	delay 20
# 408 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 409 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_8
# 410 "data/maps/Route101/scripts.pory"
	waitmoncry
# 411 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 412 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_SHROODLEARMYLEAD, 3, 15
# 413 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 414 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 415 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 416 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYLEAD, FOLLOWER_EMOTION_UPSET
# 417 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 418 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SAD
# 419 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_10
# 420 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_11
# 421 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 422 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyTurnLeftRight
# 423 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 424 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_12
# 425 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 426 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_13
# 427 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_14
# 428 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_14
# 429 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 430 "data/maps/Route101/scripts.pory"
	delay 30
# 431 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_3
# 432 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 433 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 434 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 435 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 436 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 437 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_5, MSGBOX_AUTOCLOSE
# 438 "data/maps/Route101/scripts.pory"
	doobjectemotion OBJ_EVENT_ID_PLAYER, FOLLOWER_EMOTION_SURPRISE
# 439 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 440 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYLEAD, FOLLOWER_EMOTION_SURPRISE
# 441 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYGRUNTTOP, FOLLOWER_EMOTION_SURPRISE
# 442 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYGRUNTBOTTOM, FOLLOWER_EMOTION_SURPRISE
# 443 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_16
# 444 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SPRIGATITO, CRY_MODE_ENCOUNTER
# 445 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_17
# 446 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 447 "data/maps/Route101/scripts.pory"
	delay 70
# 448 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_6
# 449 "data/maps/Route101/scripts.pory"
	closemessage
# 450 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_17
# 451 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 452 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_7, MSGBOX_AUTOCLOSE
# 453 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_18
# 454 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 455 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_19
# 456 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_WHITE
# 457 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_20
# 458 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_20
# 459 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_21
# 460 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 461 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 462 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 463 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_SHROODLE_ARMY_INTRO
# 464 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYLEAD
# 465 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYGRUNTTOP
# 466 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYGRUNTBOTTOM
# 467 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_22
# 468 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 469 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_8
# 470 "data/maps/Route101/scripts.pory"
	closemessage
# 471 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_23
# 472 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 473 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_24
# 474 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_25
# 475 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_26
# 476 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SPRIGATITO, FOLLOWER_EMOTION_HAPPY
# 478 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_27
# 479 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 480 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_HAPPY
# 481 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_7
# 482 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_28
# 483 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 484 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_9
# 485 "data/maps/Route101/scripts.pory"
	closemessage
# 486 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_29
# 487 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 488 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_10
# 489 "data/maps/Route101/scripts.pory"
	closemessage
# 490 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 491 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_8
# 492 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_30
# 493 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 494 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_11
# 495 "data/maps/Route101/scripts.pory"
	closemessage
# 496 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_31
# 497 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_32
# 498 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_32
# 499 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 500 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_33
# 501 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 502 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_12
# 503 "data/maps/Route101/scripts.pory"
	closemessage
# 504 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_HAPPY
# 505 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_34
# 506 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 507 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_13
# 508 "data/maps/Route101/scripts.pory"
	closemessage
# 509 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_BUNEARY_INTRO
# 510 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_24
# 511 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_35
# 512 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_36
# 513 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 514 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_37
# 515 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_14, MSGBOX_AUTOCLOSE
# 516 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_38
# 517 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_39
# 518 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_40
# 519 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 520 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 521 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 522 "data/maps/Route101/scripts.pory"
	clearflag FLAG_BIRCH_NOT_IN_LAB
# 523 "data/maps/Route101/scripts.pory"
	clearflag FLAG_KATE_NOT_IN_LAB
# 524 "data/maps/Route101/scripts.pory"
	clearflag FLAG_STARTER_TREECKO
# 525 "data/maps/Route101/scripts.pory"
	clearflag FLAG_STARTER_SCORBUNNY
# 526 "data/maps/Route101/scripts.pory"
	clearflag FLAG_STARTER_POPPLIO
# 527 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_KATE
# 528 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SPRIGATITO
# 529 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_PROF_BIRCH
# 530 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_BUNEARY
# 531 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 532 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 533 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 534 "data/maps/Route101/scripts.pory"
	releaseall
	return

Route101_EventScript_BunearyIntroHelpBuneary_6:
# 400 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8004, 0
# 401 "data/maps/Route101/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route101_EventScript_BunearyIntroHelpBuneary_5

Route101_EventScript_BunearyIntroHelpBuneary_8:
# 354 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_1
	goto Route101_EventScript_BunearyIntroHelpBuneary_2


# 537 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerRunToCryRight:
# 538 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 539 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 540 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 543 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerRunToCryLeft:
# 544 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 547 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyRunAwayDown:
# 548 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 548 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 548 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 551 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyTurnLeftRight:
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
# 559 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 560 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 563 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyRunAwayRight:
# 564 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 564 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 564 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 564 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 565 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 568 "data/maps/Route101/scripts.pory"
Route101_Movement_ShroodleRunAway:
# 569 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 569 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 569 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 569 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 570 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

Route101_EventScript_Karrablast::
# 574 "data/maps/Route101/scripts.pory"
	lock
# 575 "data/maps/Route101/scripts.pory"
	faceplayer
# 576 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_KARRABLAST
# 577 "data/maps/Route101/scripts.pory"
	doobjectemotion 14, FOLLOWER_EMOTION_UPSET
# 578 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_KARRABLAST, CRY_MODE_ENCOUNTER
# 579 "data/maps/Route101/scripts.pory"
	waitmoncry
# 580 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_KARRABLAST, 4, ITEM_NONE
# 581 "data/maps/Route101/scripts.pory"
	dowildbattle
# 582 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 583 "data/maps/Route101/scripts.pory"
	removeobject 14
# 584 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 585 "data/maps/Route101/scripts.pory"
	waitmessage
# 586 "data/maps/Route101/scripts.pory"
	release
	return


Route101_EventScript_Poochyena::
# 590 "data/maps/Route101/scripts.pory"
	lock
# 591 "data/maps/Route101/scripts.pory"
	faceplayer
# 592 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_POOCHYENA
# 593 "data/maps/Route101/scripts.pory"
	doobjectemotion 15, FOLLOWER_EMOTION_UPSET
# 594 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 595 "data/maps/Route101/scripts.pory"
	waitmoncry
# 596 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_POOCHYENA, 4, ITEM_NONE
# 597 "data/maps/Route101/scripts.pory"
	dowildbattle
# 598 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 599 "data/maps/Route101/scripts.pory"
	removeobject 15
# 600 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 601 "data/maps/Route101/scripts.pory"
	waitmessage
# 602 "data/maps/Route101/scripts.pory"
	release
	return


Route101_EventScript_Espurr::
# 606 "data/maps/Route101/scripts.pory"
	lock
# 607 "data/maps/Route101/scripts.pory"
	faceplayer
# 608 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_ESPURR
# 609 "data/maps/Route101/scripts.pory"
	doobjectemotion 12, FOLLOWER_EMOTION_UPSET
# 610 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ESPURR, CRY_MODE_ENCOUNTER
# 611 "data/maps/Route101/scripts.pory"
	waitmoncry
# 612 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_ESPURR, 3, ITEM_NONE
# 613 "data/maps/Route101/scripts.pory"
	dowildbattle
# 614 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 615 "data/maps/Route101/scripts.pory"
	removeobject 12
# 616 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 617 "data/maps/Route101/scripts.pory"
	waitmessage
# 618 "data/maps/Route101/scripts.pory"
	release
	return


Route101_EventScript_Espurr_Post_Shroodle::
# 622 "data/maps/Route101/scripts.pory"
	lock
# 623 "data/maps/Route101/scripts.pory"
	faceplayer
# 624 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_ESPURR_POST_SHROODLE
# 625 "data/maps/Route101/scripts.pory"
	doobjectemotion 16, FOLLOWER_EMOTION_HAPPY
# 626 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ESPURR, CRY_MODE_ENCOUNTER
# 627 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Espurr_Post_Shroodle_Text_0, MSGBOX_YESNO
# 628 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 629 "data/maps/Route101/scripts.pory"
	removeobject 16
# 630 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 631 "data/maps/Route101/scripts.pory"
	waitmessage
# 632 "data/maps/Route101/scripts.pory"
	release
	return


Route101_EventScript_Shroodle::
# 636 "data/maps/Route101/scripts.pory"
	lock
# 637 "data/maps/Route101/scripts.pory"
	faceplayer
# 638 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_SHROODLE
# 639 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ROUTE101_ESPURR_POST_SHROODLE
# 640 "data/maps/Route101/scripts.pory"
	doobjectemotion 13, FOLLOWER_EMOTION_UPSET
# 641 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 642 "data/maps/Route101/scripts.pory"
	waitmoncry
# 643 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 4, ITEM_NONE
# 644 "data/maps/Route101/scripts.pory"
	dowildbattle
# 645 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 646 "data/maps/Route101/scripts.pory"
	goto_if_unset FLAG_ROUTE101_ESPURR, Route101_EventScript_Shroodle_2
Route101_EventScript_Shroodle_1:
# 651 "data/maps/Route101/scripts.pory"
	removeobject 13
# 652 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 653 "data/maps/Route101/scripts.pory"
	waitmessage
# 654 "data/maps/Route101/scripts.pory"
	release
	return

Route101_EventScript_Shroodle_2:
# 647 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_ESPURR
# 648 "data/maps/Route101/scripts.pory"
	removeobject 12
# 649 "data/maps/Route101/scripts.pory"
	addobject 16
	goto Route101_EventScript_Shroodle_1


# 358 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_0:
# 358 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 358 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 358 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 358 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 361 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_1:
# 361 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 361 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 361 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 361 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 361 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 361 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 361 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 361 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 361 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 366 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_2:
# 366 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 366 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 367 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_3:
# 367 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 367 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 381 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_4:
# 381 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 381 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 381 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 381 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 381 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 381 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 381 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 381 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 381 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 385 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_5:
# 385 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 387 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_6:
# 387 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 387 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 387 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 387 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 387 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 404 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_7:
# 404 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 404 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 404 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 404 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 404 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 404 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 409 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_8:
# 409 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 413 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_9:
# 413 "data/maps/Route101/scripts.pory"
	walk_right
# 413 "data/maps/Route101/scripts.pory"
	walk_right
# 413 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 419 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_10:
# 419 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 420 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_11:
# 420 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 424 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_12:
# 424 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 424 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 424 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 426 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_13:
# 426 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 426 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 426 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 426 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 426 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 426 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 426 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 426 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 426 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 426 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 426 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 426 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 426 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 427 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_14:
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
	step_end

# 433 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_15:
# 433 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 433 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 433 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 433 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 433 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 433 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 433 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 433 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 443 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_16:
# 443 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 445 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_17:
# 445 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 445 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 445 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 453 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_18:
# 453 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 453 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 453 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 453 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 455 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_19:
# 455 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 455 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 455 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 455 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 455 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 455 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 457 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_20:
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 459 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_21:
# 459 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 459 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 459 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 459 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 459 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 459 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 459 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 459 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 459 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 467 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_22:
# 467 "data/maps/Route101/scripts.pory"
	walk_down
# 467 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 471 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_23:
# 471 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 473 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_24:
# 473 "data/maps/Route101/scripts.pory"
	walk_down
# 473 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 474 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_25:
# 474 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 474 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 474 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 474 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 474 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 475 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_26:
# 475 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 478 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_27:
# 478 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 478 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 482 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_28:
# 482 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 482 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 482 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 482 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 482 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 482 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 486 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_29:
# 486 "data/maps/Route101/scripts.pory"
	walk_down
# 486 "data/maps/Route101/scripts.pory"
	walk_down
# 486 "data/maps/Route101/scripts.pory"
	walk_down
# 486 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 492 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_30:
# 492 "data/maps/Route101/scripts.pory"
	walk_right
# 492 "data/maps/Route101/scripts.pory"
	walk_right
# 492 "data/maps/Route101/scripts.pory"
	walk_down
# 492 "data/maps/Route101/scripts.pory"
	walk_down
# 492 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 496 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_31:
# 496 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 496 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 497 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_32:
# 497 "data/maps/Route101/scripts.pory"
	walk_down
# 497 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 500 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_33:
# 500 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 505 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_34:
# 505 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 505 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 505 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 505 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 505 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 505 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 505 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 505 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 511 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_35:
# 511 "data/maps/Route101/scripts.pory"
	walk_right
# 511 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 512 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_36:
# 512 "data/maps/Route101/scripts.pory"
	walk_right
# 512 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 514 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_37:
# 514 "data/maps/Route101/scripts.pory"
	FACE_UP
	step_end

# 516 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_38:
# 516 "data/maps/Route101/scripts.pory"
	walk_right
# 516 "data/maps/Route101/scripts.pory"
	walk_right
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

# 517 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_39:
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
Route101_EventScript_BunearyIntroHelpBuneary_Movement_40:
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
# 518 "data/maps/Route101/scripts.pory"
	walk_down
# 518 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

Route101_EventScript_BunearyIntroHelpBuneary_Text_0:
# 352 "data/maps/Route101/scripts.pory"
	.string "That poor BUNEARY seems to be in\n"
	.string "trouble! Do you want to step in?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_1:
# 354 "data/maps/Route101/scripts.pory"
	.string "You can't really plan on not helping\n"
	.string "that poor BUNEARY, right...$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_2:
# 394 "data/maps/Route101/scripts.pory"
	.string "It looks like BUNEARY wants to stay\n"
	.string "with you!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_3:
# 396 "data/maps/Route101/scripts.pory"
	.string "{STR_VAR_1} joined {PLAYER}!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_4:
# 398 "data/maps/Route101/scripts.pory"
	.string "Do you want to give a nickname to\n"
	.string "BUNEARY?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_5:
# 437 "data/maps/Route101/scripts.pory"
	.string "???: Watch out!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_6:
# 448 "data/maps/Route101/scripts.pory"
	.string "???: SPRIGATITO! Let's go!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_7:
# 452 "data/maps/Route101/scripts.pory"
	.string "???: LEAFAGE LEAFAGE LEAFAGE LEAFAGE\n"
	.string "LEAFAGE LEAFAGE LEAFAGE LEAFAGE$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_8:
# 469 "data/maps/Route101/scripts.pory"
	.string "???: Phew, just in time!\n"
	.string "Hey, are you okay?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_9:
# 484 "data/maps/Route101/scripts.pory"
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
# 488 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: So that's where you ran\n"
	.string "off ahead to KATE...$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_11:
# 494 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Oh, and you must be\n"
	.string "{PLAYER}?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_12:
# 502 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Is that your BUNEARY?\p"
	.string "I was told you didn't have a POKEMON\n"
	.string "yet!\p"
	.string "Me and KATE were just on our way to give\n"
	.string "you your first POKEMON.$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_13:
# 507 "data/maps/Route101/scripts.pory"
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
# 515 "data/maps/Route101/scripts.pory"
	.string "KATE: Come on {PLAYER}!$"

Route101_EventScript_Espurr_Post_Shroodle_Text_0:
# 627 "data/maps/Route101/scripts.pory"
	.string "It seems like ESPURR wants to join you!\p"
	.string "Do you want to take it with you?$"
