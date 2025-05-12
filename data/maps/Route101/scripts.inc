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
	end
# 22 "data/maps/Route101/scripts.pory"

# 23 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 24 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 25 "data/maps/Route101/scripts.pory"
	.2byte 0
# 26 "data/maps/Route101/scripts.pory"

# 27 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 28 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 29 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 30 "data/maps/Route101/scripts.pory"
	end
# 31 "data/maps/Route101/scripts.pory"

# 32 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 33 "data/maps/Route101/scripts.pory"
	lockall
# 34 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 35 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 36 "data/maps/Route101/scripts.pory"
	closemessage
# 37 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 38 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 39 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 40 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 41 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 42 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 44 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 45 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 47 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 49 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 50 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 52 "data/maps/Route101/scripts.pory"
	closemessage
# 53 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 54 "data/maps/Route101/scripts.pory"
	releaseall
# 55 "data/maps/Route101/scripts.pory"
	end
# 56 "data/maps/Route101/scripts.pory"

# 57 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 58 "data/maps/Route101/scripts.pory"
	lockall
# 59 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 60 "data/maps/Route101/scripts.pory"
	closemessage
# 61 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 62 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route101/scripts.pory"
	releaseall
# 64 "data/maps/Route101/scripts.pory"
	end
# 65 "data/maps/Route101/scripts.pory"

# 66 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 67 "data/maps/Route101/scripts.pory"
	lockall
# 68 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 69 "data/maps/Route101/scripts.pory"
	closemessage
# 70 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 71 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route101/scripts.pory"
	releaseall
# 73 "data/maps/Route101/scripts.pory"
	end
# 74 "data/maps/Route101/scripts.pory"

# 75 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 76 "data/maps/Route101/scripts.pory"
	lockall
# 77 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 78 "data/maps/Route101/scripts.pory"
	closemessage
# 79 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 80 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route101/scripts.pory"
	releaseall
# 82 "data/maps/Route101/scripts.pory"
	end
# 83 "data/maps/Route101/scripts.pory"

# 84 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 85 "data/maps/Route101/scripts.pory"
	walk_up
# 86 "data/maps/Route101/scripts.pory"
	step_end
# 87 "data/maps/Route101/scripts.pory"

# 88 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 89 "data/maps/Route101/scripts.pory"
	walk_right
# 90 "data/maps/Route101/scripts.pory"
	step_end
# 91 "data/maps/Route101/scripts.pory"

# 92 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 93 "data/maps/Route101/scripts.pory"
	walk_down
# 94 "data/maps/Route101/scripts.pory"
	step_end
# 95 "data/maps/Route101/scripts.pory"

# 96 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 127 "data/maps/Route101/scripts.pory"
	step_end
# 128 "data/maps/Route101/scripts.pory"

# 129 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 136 "data/maps/Route101/scripts.pory"
	step_end
# 137 "data/maps/Route101/scripts.pory"

# 138 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 139 "data/maps/Route101/scripts.pory"
	step_end
# 140 "data/maps/Route101/scripts.pory"

# 141 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 142 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 143 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 144 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 145 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 146 "data/maps/Route101/scripts.pory"
	step_end
# 147 "data/maps/Route101/scripts.pory"

# 148 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 153 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 154 "data/maps/Route101/scripts.pory"
	step_end
# 155 "data/maps/Route101/scripts.pory"

# 156 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 187 "data/maps/Route101/scripts.pory"
	step_end
# 188 "data/maps/Route101/scripts.pory"

# 189 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 195 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 196 "data/maps/Route101/scripts.pory"
	step_end
# 197 "data/maps/Route101/scripts.pory"

# 198 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 199 "data/maps/Route101/scripts.pory"
	step_end
# 200 "data/maps/Route101/scripts.pory"

# 201 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 202 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 203 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 204 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 205 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 206 "data/maps/Route101/scripts.pory"
	step_end
# 207 "data/maps/Route101/scripts.pory"

# 208 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 209 "data/maps/Route101/scripts.pory"
	walk_up
# 210 "data/maps/Route101/scripts.pory"
	walk_up
# 211 "data/maps/Route101/scripts.pory"
	step_end
# 212 "data/maps/Route101/scripts.pory"

# 213 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 214 "data/maps/Route101/scripts.pory"
	walk_up
# 215 "data/maps/Route101/scripts.pory"
	walk_left
# 216 "data/maps/Route101/scripts.pory"
	walk_up
# 217 "data/maps/Route101/scripts.pory"
	step_end
# 218 "data/maps/Route101/scripts.pory"

# 219 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 220 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 221 "data/maps/Route101/scripts.pory"
	end
# 222 "data/maps/Route101/scripts.pory"

# 223 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 224 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 225 "data/maps/Route101/scripts.pory"
	end
# 226 "data/maps/Route101/scripts.pory"

# 227 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 228 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 229 "data/maps/Route101/scripts.pory"
	end
# 230 "data/maps/Route101/scripts.pory"

# 231 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 232 "data/maps/Route101/scripts.pory"
	lock
# 233 "data/maps/Route101/scripts.pory"
	faceplayer
# 234 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 235 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 236 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 237 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 238 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 239 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 240 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 242 "data/maps/Route101/scripts.pory"
	waitstate
# 243 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 244 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 245 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 246 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 247 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 248 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 249 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 250 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 251 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 252 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 253 "data/maps/Route101/scripts.pory"
	checkplayergender
# 254 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 255 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 256 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 257 "data/maps/Route101/scripts.pory"
	waitstate
# 258 "data/maps/Route101/scripts.pory"
	release
# 259 "data/maps/Route101/scripts.pory"
	end
# 260 "data/maps/Route101/scripts.pory"

# 261 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 262 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 263 "data/maps/Route101/scripts.pory"
	return
# 264 "data/maps/Route101/scripts.pory"

# 265 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 266 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 267 "data/maps/Route101/scripts.pory"
	return
# 268 "data/maps/Route101/scripts.pory"

# 269 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 270 "data/maps/Route101/scripts.pory"
	walk_right
# 271 "data/maps/Route101/scripts.pory"
	step_end
# 272 "data/maps/Route101/scripts.pory"

# 273 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 274 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 275 "data/maps/Route101/scripts.pory"

# 276 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 277 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 278 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 279 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 280 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 281 "data/maps/Route101/scripts.pory"

# 282 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 283 "data/maps/Route101/scripts.pory"
	.string "You can't just leave the BUNEARY...$"
# 284 "data/maps/Route101/scripts.pory"

# 285 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 286 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 287 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 288 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 289 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 290 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 291 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 292 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 293 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 294 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 295 "data/maps/Route101/scripts.pory"

# 296 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 297 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 298 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 299 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 300 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 301 "data/maps/Route101/scripts.pory"

# 302 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 303 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 304 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 305 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 306 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 307 "data/maps/Route101/scripts.pory"

# 308 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 309 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 310 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101_EventScript_BunearyIntroMoveToCryRight::
# 313 "data/maps/Route101/scripts.pory"
	lock
# 314 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 315 "data/maps/Route101/scripts.pory"
	waitmoncry
# 316 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 317 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryRight
# 318 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 319 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 320 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_BunearyIntroHelpBuneary
	return


Route101_EventScript_BunearyIntroMoveToCryLeft::
# 324 "data/maps/Route101/scripts.pory"
	lock
# 325 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 326 "data/maps/Route101/scripts.pory"
	waitmoncry
# 327 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 328 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 329 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 330 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerRunToCryLeft
# 331 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_BunearyIntroHelpBuneary
	return


Route101_EventScript_BunearyIntroHelpBuneary::
# 335 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_POISONED
# 336 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyRunAwayDown
# 337 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyTurnLeftRight
# 339 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 340 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyRunAwayRight
# 341 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_Movement_ShroodleRunAway
# 342 "data/maps/Route101/scripts.pory"
	waitmovement 0
Route101_EventScript_BunearyIntroHelpBuneary_3:
# 344 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_0, MSGBOX_YESNO
# 345 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_5
Route101_EventScript_BunearyIntroHelpBuneary_2:
# 348 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route101_EventScript_BunearyIntroHelpBuneary_3
# 349 "data/maps/Route101/scripts.pory"
	closemessage
# 350 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_0
# 351 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 352 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLE, FOLLOWER_EMOTION_UPSET
# 353 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_1
# 354 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 355 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 356 "data/maps/Route101/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 0
# 357 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 358 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_2
# 359 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_3
# 360 "data/maps/Route101/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 0
# 361 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 362 "data/maps/Route101/scripts.pory"
	givemon SPECIES_BUNEARY, 5, item = ITEM_ORAN_BERRY, abilityNum = 1, gender = MON_FEMALE, isShiny = TRUE
# 363 "data/maps/Route101/scripts.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 364 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 3
# 365 "data/maps/Route101/scripts.pory"
	setflag FLAG_NO_RUNNING
# 366 "data/maps/Route101/scripts.pory"
	setflag FLAG_INTRO_SHROODLE_BATTLE
# 367 "data/maps/Route101/scripts.pory"
	dowildbattle
# 368 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 369 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 370 "data/maps/Route101/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 371 "data/maps/Route101/scripts.pory"
	clearflag FLAG_INTRO_SHROODLE_BATTLE
# 372 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_SHROODLE_INTRO
# 373 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_4
# 374 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 375 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLE
# 376 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 377 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_5
# 378 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 379 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_6
# 380 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_CURIOUS
# 381 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 382 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_6
# 383 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_LOVE
# 384 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 385 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_2
# 386 "data/maps/Route101/scripts.pory"
	closemessage
# 387 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_7
# 388 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 389 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 390 "data/maps/Route101/scripts.pory"
	delay 20
# 391 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 392 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_8
# 393 "data/maps/Route101/scripts.pory"
	waitmoncry
# 394 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 395 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_SHROODLEARMYLEAD, 3, 15
# 396 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 397 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 398 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_9
# 399 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYLEAD, FOLLOWER_EMOTION_UPSET
# 400 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SHROODLE, CRY_MODE_ENCOUNTER
# 401 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SAD
# 402 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_10
# 403 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_11
# 404 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 405 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_Movement_BunearyTurnLeftRight
# 406 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 407 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_12
# 408 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 409 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_13
# 410 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_14
# 411 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_14
# 412 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 413 "data/maps/Route101/scripts.pory"
	delay 30
# 414 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_3
# 415 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 416 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 417 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 418 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_15
# 419 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 420 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_3, MSGBOX_AUTOCLOSE
# 421 "data/maps/Route101/scripts.pory"
	doobjectemotion OBJ_EVENT_ID_PLAYER, FOLLOWER_EMOTION_SURPRISE
# 422 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 423 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYLEAD, FOLLOWER_EMOTION_SURPRISE
# 424 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYGRUNTTOP, FOLLOWER_EMOTION_SURPRISE
# 425 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SHROODLEARMYGRUNTBOTTOM, FOLLOWER_EMOTION_SURPRISE
# 426 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_16
# 427 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_SPRIGATITO, CRY_MODE_ENCOUNTER
# 428 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_17
# 429 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 430 "data/maps/Route101/scripts.pory"
	delay 70
# 431 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_4
# 432 "data/maps/Route101/scripts.pory"
	closemessage
# 433 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_17
# 434 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 435 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_5, MSGBOX_AUTOCLOSE
# 436 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_18
# 437 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 438 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_19
# 439 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_WHITE
# 440 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTBOTTOM, Route101_EventScript_BunearyIntroHelpBuneary_Movement_20
# 441 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYGRUNTTOP, Route101_EventScript_BunearyIntroHelpBuneary_Movement_20
# 442 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SHROODLEARMYLEAD, Route101_EventScript_BunearyIntroHelpBuneary_Movement_21
# 443 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 444 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 445 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 446 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_SHROODLE_ARMY_INTRO
# 447 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYLEAD
# 448 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYGRUNTTOP
# 449 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SHROODLEARMYGRUNTBOTTOM
# 450 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_22
# 451 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 452 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_6
# 453 "data/maps/Route101/scripts.pory"
	closemessage
# 454 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_23
# 455 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_24
# 457 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_25
# 458 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_BunearyIntroHelpBuneary_Movement_26
# 459 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 460 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_SPRIGATITO, FOLLOWER_EMOTION_HAPPY
# 461 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_27
# 462 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 463 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_HAPPY
# 464 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_7
# 465 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_28
# 466 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 467 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_7
# 468 "data/maps/Route101/scripts.pory"
	closemessage
# 469 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_29
# 470 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 471 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_8
# 472 "data/maps/Route101/scripts.pory"
	closemessage
# 473 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_SURPRISE
# 474 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_8
# 475 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_30
# 476 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_9
# 478 "data/maps/Route101/scripts.pory"
	closemessage
# 479 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_31
# 480 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_32
# 481 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_32
# 482 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 483 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_33
# 484 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 485 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_10
# 486 "data/maps/Route101/scripts.pory"
	closemessage
# 487 "data/maps/Route101/scripts.pory"
	doobjectemotion LOCALID_BUNEARY, FOLLOWER_EMOTION_HAPPY
# 488 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BUNEARY, Route101_EventScript_BunearyIntroHelpBuneary_Movement_34
# 489 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 490 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_11
# 491 "data/maps/Route101/scripts.pory"
	closemessage
# 492 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_BUNEARY_INTRO
# 493 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_24
# 494 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_35
# 495 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_36
# 496 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 497 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_37
# 498 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_12, MSGBOX_AUTOCLOSE
# 499 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PROF_BIRCH, Route101_EventScript_BunearyIntroHelpBuneary_Movement_38
# 500 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_KATE, Route101_EventScript_BunearyIntroHelpBuneary_Movement_39
# 501 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPRIGATITO, Route101_EventScript_BunearyIntroHelpBuneary_Movement_40
# 502 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 503 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 504 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 505 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_KATE
# 506 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SPRIGATITO
# 507 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_PROF_BIRCH
# 508 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_BUNEARY
# 509 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 510 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 511 "data/maps/Route101/scripts.pory"
	releaseall
	return

Route101_EventScript_BunearyIntroHelpBuneary_5:
# 346 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_BunearyIntroHelpBuneary_Text_1
	goto Route101_EventScript_BunearyIntroHelpBuneary_2


# 514 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerRunToCryRight:
# 515 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 516 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 517 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 520 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerRunToCryLeft:
# 521 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 524 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyRunAwayDown:
# 525 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 525 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 525 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 528 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyTurnLeftRight:
# 529 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 530 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 531 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 532 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 533 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 534 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 535 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 536 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 537 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 540 "data/maps/Route101/scripts.pory"
Route101_Movement_BunearyRunAwayRight:
# 541 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 541 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 541 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 541 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 542 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 545 "data/maps/Route101/scripts.pory"
Route101_Movement_ShroodleRunAway:
# 546 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 546 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 546 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 546 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 547 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 350 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_0:
# 350 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 350 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 350 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 350 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 353 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_1:
# 353 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 353 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 353 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 353 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 353 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 353 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 353 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 353 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 353 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 358 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_2:
# 358 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 358 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 359 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_3:
# 359 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 359 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 373 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_4:
# 373 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 373 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 373 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 373 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 373 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 373 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 373 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 373 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 373 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 377 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_5:
# 377 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 379 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_6:
# 379 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 379 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 379 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 379 "data/maps/Route101/scripts.pory"
	walk_in_place_right
# 379 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 387 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_7:
# 387 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 387 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 387 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 387 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 387 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 387 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 392 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_8:
# 392 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 396 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_9:
# 396 "data/maps/Route101/scripts.pory"
	walk_right
# 396 "data/maps/Route101/scripts.pory"
	walk_right
# 396 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 402 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_10:
# 402 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 403 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_11:
# 403 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 407 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_12:
# 407 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 407 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 407 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 409 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_13:
# 409 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 409 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 409 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 409 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 409 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 409 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 409 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 409 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 409 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 409 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 409 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 409 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 409 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 410 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_14:
# 410 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 410 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 410 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 410 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 410 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 410 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 410 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 410 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 410 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 410 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 410 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 410 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 416 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_15:
# 416 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 416 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 416 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 416 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 416 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 416 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 416 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 416 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 426 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_16:
# 426 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 428 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_17:
# 428 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 428 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 428 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 436 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_18:
# 436 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 436 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 436 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 436 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 438 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_19:
# 438 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 438 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 438 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 438 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 438 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
# 438 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 440 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_20:
# 440 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 440 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 440 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 440 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 440 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 440 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 442 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_21:
# 442 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 442 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 442 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 442 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 442 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 442 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 442 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 442 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 442 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 450 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_22:
# 450 "data/maps/Route101/scripts.pory"
	walk_down
# 450 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 454 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_23:
# 454 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 456 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_24:
# 456 "data/maps/Route101/scripts.pory"
	walk_down
# 456 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 457 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_25:
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 457 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 458 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_26:
# 458 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 461 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_27:
# 461 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 461 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
	step_end

# 465 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_28:
# 465 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 465 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 465 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 465 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 465 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 465 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 469 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_29:
# 469 "data/maps/Route101/scripts.pory"
	walk_down
# 469 "data/maps/Route101/scripts.pory"
	walk_down
# 469 "data/maps/Route101/scripts.pory"
	walk_down
# 469 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 475 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_30:
# 475 "data/maps/Route101/scripts.pory"
	walk_right
# 475 "data/maps/Route101/scripts.pory"
	walk_right
# 475 "data/maps/Route101/scripts.pory"
	walk_down
# 475 "data/maps/Route101/scripts.pory"
	walk_down
# 475 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 479 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_31:
# 479 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 479 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 480 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_32:
# 480 "data/maps/Route101/scripts.pory"
	walk_down
# 480 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 483 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_33:
# 483 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 488 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_34:
# 488 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 488 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 488 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 488 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 488 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 488 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 488 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 488 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

# 494 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_35:
# 494 "data/maps/Route101/scripts.pory"
	walk_right
# 494 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 495 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_36:
# 495 "data/maps/Route101/scripts.pory"
	walk_right
# 495 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 497 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_37:
# 497 "data/maps/Route101/scripts.pory"
	FACE_UP
	step_end

# 499 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_38:
# 499 "data/maps/Route101/scripts.pory"
	walk_right
# 499 "data/maps/Route101/scripts.pory"
	walk_right
# 499 "data/maps/Route101/scripts.pory"
	walk_down
# 499 "data/maps/Route101/scripts.pory"
	walk_down
# 499 "data/maps/Route101/scripts.pory"
	walk_down
# 499 "data/maps/Route101/scripts.pory"
	walk_down
# 499 "data/maps/Route101/scripts.pory"
	walk_down
# 499 "data/maps/Route101/scripts.pory"
	walk_down
# 499 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 500 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_39:
# 500 "data/maps/Route101/scripts.pory"
	walk_right
# 500 "data/maps/Route101/scripts.pory"
	walk_down
# 500 "data/maps/Route101/scripts.pory"
	walk_down
# 500 "data/maps/Route101/scripts.pory"
	walk_down
# 500 "data/maps/Route101/scripts.pory"
	walk_down
# 500 "data/maps/Route101/scripts.pory"
	walk_down
# 500 "data/maps/Route101/scripts.pory"
	walk_down
# 500 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 501 "data/maps/Route101/scripts.pory"
Route101_EventScript_BunearyIntroHelpBuneary_Movement_40:
# 501 "data/maps/Route101/scripts.pory"
	walk_down
# 501 "data/maps/Route101/scripts.pory"
	walk_down
# 501 "data/maps/Route101/scripts.pory"
	walk_down
# 501 "data/maps/Route101/scripts.pory"
	walk_down
# 501 "data/maps/Route101/scripts.pory"
	walk_down
# 501 "data/maps/Route101/scripts.pory"
	walk_down
# 501 "data/maps/Route101/scripts.pory"
	walk_down
# 501 "data/maps/Route101/scripts.pory"
	walk_down
# 501 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

Route101_EventScript_BunearyIntroHelpBuneary_Text_0:
# 344 "data/maps/Route101/scripts.pory"
	.string "That poor BUNEARY seems to be in\n"
	.string "trouble! Do you want to step in?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_1:
# 346 "data/maps/Route101/scripts.pory"
	.string "You can't really plan on not helping\n"
	.string "that poor BUNEARY, right...$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_2:
# 385 "data/maps/Route101/scripts.pory"
	.string "It looks like BUNEARY wants to stay\n"
	.string "with you!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_3:
# 420 "data/maps/Route101/scripts.pory"
	.string "???: Watch out!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_4:
# 431 "data/maps/Route101/scripts.pory"
	.string "???: SPRIGATITO! Let's go!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_5:
# 435 "data/maps/Route101/scripts.pory"
	.string "???: LEAFAGE LEAFAGE LEAFAGE LEAFAGE\n"
	.string "LEAFAGE LEAFAGE LEAFAGE LEAFAGE$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_6:
# 452 "data/maps/Route101/scripts.pory"
	.string "???: Phew, just in time!\n"
	.string "Hey, are you okay?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_7:
# 467 "data/maps/Route101/scripts.pory"
	.string "???: Well it looks like your BUNEARY is\n"
	.string "doing better already!\p"
	.string "I'm glad you are okay!\p"
	.string "My name's KATE! I'm PROFFESOR BIRCH'S\n"
	.string "daughter.\p"
	.string "And I guess you are {PLAYER}? I heard\n"
	.string "your family was going to move here\l"
	.string "today, but I wasn't expecting us to\l"
	.string "meet like this!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_8:
# 471 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: So that's where you ran\n"
	.string "off ahead to KATE...$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_9:
# 477 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Oh, and you must be\n"
	.string "{PLAYER}?$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_10:
# 485 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Is that your BUNEARY?\p"
	.string "I was told you didn't have a POKEMON\n"
	.string "yet!\p"
	.string "Me and KATE were just on our way to give\n"
	.string "you your first POKEMON.$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_11:
# 490 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: So you met this BUNEARY\n"
	.string "just now while protecting it from a wild\l"
	.string "SHROODLE?\p"
	.string "And it trusts you so much already...\n"
	.string "Fascinating!\p"
	.string "Well no point in... what do you kids say?\n"
	.string "Yapping?\l"
	.string "out here. Let's go to my laboratory and\l"
	.string "talk more there!$"

Route101_EventScript_BunearyIntroHelpBuneary_Text_12:
# 498 "data/maps/Route101/scripts.pory"
	.string "KATE: Come on {PLAYER}!$"
