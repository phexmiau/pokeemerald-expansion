# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 6 "data/maps/LittlerootTown/scripts.pory"

# 7 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 8 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 11 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 12 "data/maps/LittlerootTown/scripts.pory"

# 13 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 14 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 18 "data/maps/LittlerootTown/scripts.pory"

# 19 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 27 "data/maps/LittlerootTown/scripts.pory"

# 28 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 29 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 35 "data/maps/LittlerootTown/scripts.pory"

# 36 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 37 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 41 "data/maps/LittlerootTown/scripts.pory"

# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 44 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 45 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 46 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 55 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_LITTLEROOT_TOWN_CATERPIE
# 56 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_LITTLEROOT_TOWN_PIDOVE
# 57 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_LITTLEROOT_TOWN_TYMPOLE
# 58 "data/maps/LittlerootTown/scripts.pory"
	end
# 59 "data/maps/LittlerootTown/scripts.pory"

# 60 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 61 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 62 "data/maps/LittlerootTown/scripts.pory"
	return
# 63 "data/maps/LittlerootTown/scripts.pory"

# 64 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 65 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 66 "data/maps/LittlerootTown/scripts.pory"
	return
# 67 "data/maps/LittlerootTown/scripts.pory"

# 68 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 69 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 70 "data/maps/LittlerootTown/scripts.pory"
	return
# 71 "data/maps/LittlerootTown/scripts.pory"

# 72 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 73 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 74 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 75 "data/maps/LittlerootTown/scripts.pory"
	return
# 76 "data/maps/LittlerootTown/scripts.pory"

# 77 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 78 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 79 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 80 "data/maps/LittlerootTown/scripts.pory"
	return
# 81 "data/maps/LittlerootTown/scripts.pory"

# 82 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 83 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 84 "data/maps/LittlerootTown/scripts.pory"
	return
# 85 "data/maps/LittlerootTown/scripts.pory"

# 86 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 87 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 88 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 89 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 90 "data/maps/LittlerootTown/scripts.pory"
	return
# 91 "data/maps/LittlerootTown/scripts.pory"

# 92 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 93 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 94 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 95 "data/maps/LittlerootTown/scripts.pory"
	return
# 96 "data/maps/LittlerootTown/scripts.pory"

# 97 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 98 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 99 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 100 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 101 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 102 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 103 "data/maps/LittlerootTown/scripts.pory"
	return
# 104 "data/maps/LittlerootTown/scripts.pory"

# 105 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 106 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 107 "data/maps/LittlerootTown/scripts.pory"
	return
# 108 "data/maps/LittlerootTown/scripts.pory"

# 109 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 110 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 111 "data/maps/LittlerootTown/scripts.pory"
	return
# 112 "data/maps/LittlerootTown/scripts.pory"

# 113 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 114 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 115 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 116 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 117 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 118 "data/maps/LittlerootTown/scripts.pory"

# 119 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 120 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 121 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 122 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 123 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 124 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 125 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 126 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 127 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 128 "data/maps/LittlerootTown/scripts.pory"
	end
# 129 "data/maps/LittlerootTown/scripts.pory"

# 130 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 131 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 132 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 133 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 134 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 135 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 136 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 137 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 138 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 139 "data/maps/LittlerootTown/scripts.pory"
	end
# 140 "data/maps/LittlerootTown/scripts.pory"

# 141 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 142 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 143 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 144 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 145 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 146 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 147 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 148 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 149 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 150 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 151 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 152 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 153 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 154 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 155 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 156 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 157 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 158 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 159 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 160 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 161 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 162 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 163 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 164 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 165 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 167 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 168 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 169 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 170 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 171 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 172 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 173 "data/maps/LittlerootTown/scripts.pory"
	return
# 174 "data/maps/LittlerootTown/scripts.pory"

# 175 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 176 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 177 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 178 "data/maps/LittlerootTown/scripts.pory"

# 179 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 180 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 181 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 182 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 183 "data/maps/LittlerootTown/scripts.pory"

# 184 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 185 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 186 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 187 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 188 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 189 "data/maps/LittlerootTown/scripts.pory"

# 190 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 191 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 192 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 193 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 194 "data/maps/LittlerootTown/scripts.pory"

# 195 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 196 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 197 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 198 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 199 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 200 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 201 "data/maps/LittlerootTown/scripts.pory"

# 202 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 203 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 204 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 205 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 206 "data/maps/LittlerootTown/scripts.pory"

# 207 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 208 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 209 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 210 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 211 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 212 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 213 "data/maps/LittlerootTown/scripts.pory"

# 214 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 215 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 216 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 217 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 218 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 219 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 220 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 221 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 222 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 223 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 224 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 225 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 226 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 227 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 228 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 229 "data/maps/LittlerootTown/scripts.pory"
	end
# 230 "data/maps/LittlerootTown/scripts.pory"

# 231 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 232 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 233 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 234 "data/maps/LittlerootTown/scripts.pory"

# 235 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 236 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 237 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 238 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 239 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 240 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 241 "data/maps/LittlerootTown/scripts.pory"
	end
# 242 "data/maps/LittlerootTown/scripts.pory"

# 243 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 244 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 245 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 246 "data/maps/LittlerootTown/scripts.pory"
	end
# 247 "data/maps/LittlerootTown/scripts.pory"

# 248 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 249 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 250 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 251 "data/maps/LittlerootTown/scripts.pory"
	end
# 252 "data/maps/LittlerootTown/scripts.pory"

# 253 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 254 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 255 "data/maps/LittlerootTown/scripts.pory"
	end
# 256 "data/maps/LittlerootTown/scripts.pory"

# 257 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 258 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 259 "data/maps/LittlerootTown/scripts.pory"
	end
# 260 "data/maps/LittlerootTown/scripts.pory"

# 261 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 262 "data/maps/LittlerootTown/scripts.pory"
	lock
# 263 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 264 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 265 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 266 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 267 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 268 "data/maps/LittlerootTown/scripts.pory"
	release
# 269 "data/maps/LittlerootTown/scripts.pory"
	end
# 270 "data/maps/LittlerootTown/scripts.pory"

# 271 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 272 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 273 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 274 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 275 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 276 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 277 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 278 "data/maps/LittlerootTown/scripts.pory"
	release
# 279 "data/maps/LittlerootTown/scripts.pory"
	end
# 280 "data/maps/LittlerootTown/scripts.pory"

# 281 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 282 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 283 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 284 "data/maps/LittlerootTown/scripts.pory"
	release
# 285 "data/maps/LittlerootTown/scripts.pory"
	end
# 286 "data/maps/LittlerootTown/scripts.pory"

# 287 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 288 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 289 "data/maps/LittlerootTown/scripts.pory"
	release
# 290 "data/maps/LittlerootTown/scripts.pory"
	end
# 291 "data/maps/LittlerootTown/scripts.pory"

# 292 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 293 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 294 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 295 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 296 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 297 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 298 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 299 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 300 "data/maps/LittlerootTown/scripts.pory"
	end
# 301 "data/maps/LittlerootTown/scripts.pory"

# 302 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 303 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 304 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 305 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 306 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 307 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 308 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 309 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 310 "data/maps/LittlerootTown/scripts.pory"
	return
# 311 "data/maps/LittlerootTown/scripts.pory"

# 312 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 313 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 314 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 315 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 316 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 317 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 318 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 319 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 320 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 321 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 322 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 323 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 324 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 325 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 326 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 327 "data/maps/LittlerootTown/scripts.pory"

# 328 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 330 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 331 "data/maps/LittlerootTown/scripts.pory"

# 332 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 340 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 341 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 342 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 343 "data/maps/LittlerootTown/scripts.pory"

# 344 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 345 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 347 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 348 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 349 "data/maps/LittlerootTown/scripts.pory"

# 350 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 351 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 352 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 353 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 354 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 355 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 356 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 357 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 358 "data/maps/LittlerootTown/scripts.pory"
	end
# 359 "data/maps/LittlerootTown/scripts.pory"

# 360 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 361 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 362 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 363 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 364 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 365 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 371 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 372 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 373 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 374 "data/maps/LittlerootTown/scripts.pory"

# 375 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 381 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 382 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 383 "data/maps/LittlerootTown/scripts.pory"

# 384 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 385 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 386 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 387 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 388 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 389 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 390 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 391 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 392 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 393 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 394 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 395 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 396 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 397 "data/maps/LittlerootTown/scripts.pory"
	end
# 398 "data/maps/LittlerootTown/scripts.pory"

# 399 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 400 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 401 "data/maps/LittlerootTown/scripts.pory"
	end
# 402 "data/maps/LittlerootTown/scripts.pory"

# 403 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 404 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 405 "data/maps/LittlerootTown/scripts.pory"
	end
# 406 "data/maps/LittlerootTown/scripts.pory"

# 407 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 408 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 409 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 410 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 411 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 412 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 413 "data/maps/LittlerootTown/scripts.pory"
	end
# 414 "data/maps/LittlerootTown/scripts.pory"

# 415 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 416 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 417 "data/maps/LittlerootTown/scripts.pory"
	return
# 418 "data/maps/LittlerootTown/scripts.pory"

# 419 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 420 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 421 "data/maps/LittlerootTown/scripts.pory"
	return
# 422 "data/maps/LittlerootTown/scripts.pory"

# 423 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 424 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 425 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 426 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 427 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 428 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 429 "data/maps/LittlerootTown/scripts.pory"
	end
# 430 "data/maps/LittlerootTown/scripts.pory"

# 431 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 432 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 433 "data/maps/LittlerootTown/scripts.pory"
	return
# 434 "data/maps/LittlerootTown/scripts.pory"

# 435 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 436 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 437 "data/maps/LittlerootTown/scripts.pory"
	return
# 438 "data/maps/LittlerootTown/scripts.pory"

# 439 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 440 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 441 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 442 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 443 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 444 "data/maps/LittlerootTown/scripts.pory"
	end
# 445 "data/maps/LittlerootTown/scripts.pory"

# 446 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 447 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 448 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 449 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 450 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 451 "data/maps/LittlerootTown/scripts.pory"
	end
# 452 "data/maps/LittlerootTown/scripts.pory"

# 453 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 454 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 455 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 456 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 457 "data/maps/LittlerootTown/scripts.pory"
	end
# 458 "data/maps/LittlerootTown/scripts.pory"

# 459 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 460 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 461 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 462 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 463 "data/maps/LittlerootTown/scripts.pory"
	end
# 464 "data/maps/LittlerootTown/scripts.pory"

# 465 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 466 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 467 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 468 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 469 "data/maps/LittlerootTown/scripts.pory"
	end
# 470 "data/maps/LittlerootTown/scripts.pory"

# 471 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 472 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 473 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 474 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 475 "data/maps/LittlerootTown/scripts.pory"
	end
# 476 "data/maps/LittlerootTown/scripts.pory"

# 477 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 478 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 479 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 480 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 481 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 482 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 483 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 484 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 485 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 486 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 487 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 488 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 489 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 490 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 491 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 492 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 493 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 494 "data/maps/LittlerootTown/scripts.pory"
	end
# 495 "data/maps/LittlerootTown/scripts.pory"

# 496 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 497 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 498 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 499 "data/maps/LittlerootTown/scripts.pory"
	return
# 500 "data/maps/LittlerootTown/scripts.pory"

# 501 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 502 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 503 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 504 "data/maps/LittlerootTown/scripts.pory"
	return
# 505 "data/maps/LittlerootTown/scripts.pory"

# 506 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 507 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 508 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 509 "data/maps/LittlerootTown/scripts.pory"
	return
# 510 "data/maps/LittlerootTown/scripts.pory"

# 511 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 512 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 513 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 514 "data/maps/LittlerootTown/scripts.pory"
	return
# 515 "data/maps/LittlerootTown/scripts.pory"

# 516 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 517 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 518 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 519 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 520 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 521 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 522 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 523 "data/maps/LittlerootTown/scripts.pory"
	return
# 524 "data/maps/LittlerootTown/scripts.pory"

# 525 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 526 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 527 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 528 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 529 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 530 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 531 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 532 "data/maps/LittlerootTown/scripts.pory"
	return
# 533 "data/maps/LittlerootTown/scripts.pory"

# 534 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 535 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 536 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 537 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 538 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 539 "data/maps/LittlerootTown/scripts.pory"
	return
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 542 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 543 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 544 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 545 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 546 "data/maps/LittlerootTown/scripts.pory"
	return
# 547 "data/maps/LittlerootTown/scripts.pory"

# 548 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 549 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 550 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 551 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 552 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 553 "data/maps/LittlerootTown/scripts.pory"
	return
# 554 "data/maps/LittlerootTown/scripts.pory"

# 555 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 556 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 557 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 558 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 559 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 560 "data/maps/LittlerootTown/scripts.pory"
	return
# 561 "data/maps/LittlerootTown/scripts.pory"

# 562 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 563 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 564 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 565 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 566 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 567 "data/maps/LittlerootTown/scripts.pory"
	return
# 568 "data/maps/LittlerootTown/scripts.pory"

# 569 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 570 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 571 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 572 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 573 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 574 "data/maps/LittlerootTown/scripts.pory"
	return
# 575 "data/maps/LittlerootTown/scripts.pory"

# 576 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 577 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 578 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 579 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 580 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 581 "data/maps/LittlerootTown/scripts.pory"
	return
# 582 "data/maps/LittlerootTown/scripts.pory"

# 583 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 584 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 585 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 586 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 587 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 588 "data/maps/LittlerootTown/scripts.pory"
	return
# 589 "data/maps/LittlerootTown/scripts.pory"

# 590 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 591 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 592 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 593 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 594 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 595 "data/maps/LittlerootTown/scripts.pory"
	return
# 596 "data/maps/LittlerootTown/scripts.pory"

# 597 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 598 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 599 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 600 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 601 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 602 "data/maps/LittlerootTown/scripts.pory"
	return
# 603 "data/maps/LittlerootTown/scripts.pory"

# 604 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 605 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 606 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 607 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 608 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 609 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 610 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 611 "data/maps/LittlerootTown/scripts.pory"
	return
# 612 "data/maps/LittlerootTown/scripts.pory"

# 613 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 614 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 615 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 616 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 618 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 619 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 620 "data/maps/LittlerootTown/scripts.pory"
	return
# 621 "data/maps/LittlerootTown/scripts.pory"

# 622 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 623 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 624 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 625 "data/maps/LittlerootTown/scripts.pory"
	return
# 626 "data/maps/LittlerootTown/scripts.pory"

# 627 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 628 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 629 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 630 "data/maps/LittlerootTown/scripts.pory"
	return
# 631 "data/maps/LittlerootTown/scripts.pory"

# 632 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 633 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 634 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 635 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 636 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 637 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 638 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 639 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 640 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 641 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 642 "data/maps/LittlerootTown/scripts.pory"
	return
# 643 "data/maps/LittlerootTown/scripts.pory"

# 644 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 645 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 646 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 647 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 648 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 649 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 650 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 651 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 652 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 653 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 654 "data/maps/LittlerootTown/scripts.pory"
	return
# 655 "data/maps/LittlerootTown/scripts.pory"

# 656 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 657 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 658 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 659 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 660 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 661 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 662 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 663 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 664 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 665 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 666 "data/maps/LittlerootTown/scripts.pory"
	return
# 667 "data/maps/LittlerootTown/scripts.pory"

# 668 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 669 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 670 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 671 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 672 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 673 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 674 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 675 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 676 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 677 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 678 "data/maps/LittlerootTown/scripts.pory"
	return
# 679 "data/maps/LittlerootTown/scripts.pory"

# 680 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 681 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 682 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 683 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 684 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 685 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 686 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 687 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 688 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 689 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 690 "data/maps/LittlerootTown/scripts.pory"
	return
# 691 "data/maps/LittlerootTown/scripts.pory"

# 692 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 693 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 694 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 695 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 696 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 697 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 698 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 699 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 700 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 701 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 702 "data/maps/LittlerootTown/scripts.pory"
	return
# 703 "data/maps/LittlerootTown/scripts.pory"

# 704 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 705 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 706 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 707 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 708 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 709 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 710 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 711 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 712 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 713 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 714 "data/maps/LittlerootTown/scripts.pory"
	return
# 715 "data/maps/LittlerootTown/scripts.pory"

# 716 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 717 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 718 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 719 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 720 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 721 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 722 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 723 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 724 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 726 "data/maps/LittlerootTown/scripts.pory"
	return
# 727 "data/maps/LittlerootTown/scripts.pory"

# 728 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 729 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 730 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 731 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 732 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 735 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 736 "data/maps/LittlerootTown/scripts.pory"

# 737 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 738 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 743 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 744 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 745 "data/maps/LittlerootTown/scripts.pory"

# 746 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 751 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 752 "data/maps/LittlerootTown/scripts.pory"

# 753 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 754 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 755 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 759 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 760 "data/maps/LittlerootTown/scripts.pory"

# 761 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 762 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 764 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 765 "data/maps/LittlerootTown/scripts.pory"

# 766 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 767 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 768 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 770 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 771 "data/maps/LittlerootTown/scripts.pory"

# 772 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 773 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 774 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 775 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 776 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 777 "data/maps/LittlerootTown/scripts.pory"

# 778 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 781 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 782 "data/maps/LittlerootTown/scripts.pory"

# 783 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 789 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 790 "data/maps/LittlerootTown/scripts.pory"

# 791 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 792 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 793 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 794 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 796 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 797 "data/maps/LittlerootTown/scripts.pory"

# 798 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 799 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 800 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 804 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 805 "data/maps/LittlerootTown/scripts.pory"

# 806 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 807 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 808 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 809 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 810 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 811 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 812 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 813 "data/maps/LittlerootTown/scripts.pory"

# 814 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 815 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 816 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 817 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 820 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 821 "data/maps/LittlerootTown/scripts.pory"

# 822 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 823 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 824 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 825 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 826 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 827 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 828 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 829 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 830 "data/maps/LittlerootTown/scripts.pory"

# 831 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 832 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 833 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 835 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 836 "data/maps/LittlerootTown/scripts.pory"

# 837 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 838 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 839 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 840 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 842 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 843 "data/maps/LittlerootTown/scripts.pory"

# 844 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 845 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 846 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 849 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 850 "data/maps/LittlerootTown/scripts.pory"

# 851 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 852 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 855 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 856 "data/maps/LittlerootTown/scripts.pory"

# 857 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 858 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 859 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 860 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 864 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 865 "data/maps/LittlerootTown/scripts.pory"

# 866 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 867 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 872 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 873 "data/maps/LittlerootTown/scripts.pory"

# 874 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 875 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 876 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 877 "data/maps/LittlerootTown/scripts.pory"

# 878 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 879 "data/maps/LittlerootTown/scripts.pory"
	lock
# 880 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 881 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 882 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 883 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 884 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 885 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 886 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 887 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 888 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 889 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 890 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 891 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 892 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 893 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 894 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 895 "data/maps/LittlerootTown/scripts.pory"
	end
# 896 "data/maps/LittlerootTown/scripts.pory"

# 897 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 898 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 899 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 900 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 901 "data/maps/LittlerootTown/scripts.pory"
	release
# 902 "data/maps/LittlerootTown/scripts.pory"
	end
# 903 "data/maps/LittlerootTown/scripts.pory"

# 904 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 905 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 906 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 907 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 908 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 909 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 910 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 911 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 912 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 913 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 914 "data/maps/LittlerootTown/scripts.pory"
	return
# 915 "data/maps/LittlerootTown/scripts.pory"

# 916 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 917 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 918 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 919 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 920 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 921 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 922 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 923 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 924 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 925 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 926 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 927 "data/maps/LittlerootTown/scripts.pory"

# 928 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 929 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 930 "data/maps/LittlerootTown/scripts.pory"

# 931 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 932 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 933 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 934 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 935 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 936 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 937 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 938 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 939 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 940 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 941 "data/maps/LittlerootTown/scripts.pory"

# 942 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 943 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 944 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 945 "data/maps/LittlerootTown/scripts.pory"

# 946 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 947 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 948 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 949 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 952 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 953 "data/maps/LittlerootTown/scripts.pory"

# 954 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 955 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 956 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 957 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 958 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 959 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 960 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 963 "data/maps/LittlerootTown/scripts.pory"

# 964 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 965 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 968 "data/maps/LittlerootTown/scripts.pory"

# 969 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 970 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 971 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 972 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 973 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 974 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 975 "data/maps/LittlerootTown/scripts.pory"

# 976 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 977 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 979 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 980 "data/maps/LittlerootTown/scripts.pory"

# 981 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 982 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 983 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 984 "data/maps/LittlerootTown/scripts.pory"

# 985 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 986 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 987 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 988 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 989 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 990 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 991 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 992 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 993 "data/maps/LittlerootTown/scripts.pory"

# 994 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 995 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 996 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 997 "data/maps/LittlerootTown/scripts.pory"

# 998 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 999 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1000 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1001 "data/maps/LittlerootTown/scripts.pory"

# 1002 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1003 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1004 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1005 "data/maps/LittlerootTown/scripts.pory"

# 1006 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1007 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1008 "data/maps/LittlerootTown/scripts.pory"

# 1009 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1010 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1011 "data/maps/LittlerootTown/scripts.pory"

# 1012 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1013 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1014 "data/maps/LittlerootTown/scripts.pory"

# 1015 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1016 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1017 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1018 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1019 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1020 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1021 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1022 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1023 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1024 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

LittlerootTown_EventScript_GroveSign::
# 1029 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1030 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_GroveSign_Text_0
# 1031 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1032 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_Caterpie::
# 1036 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1037 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, LittlerootTown_EventScript_Caterpie_2
# 1049 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Caterpie_Text_0
# 1050 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
LittlerootTown_EventScript_Caterpie_1:
# 1052 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return

LittlerootTown_EventScript_Caterpie_2:
# 1038 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_LITTLEROOT_TOWN_CATERPIE
# 1039 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_CATERPIE, CRY_MODE_ENCOUNTER
# 1040 "data/maps/LittlerootTown/scripts.pory"
	delay 40
# 1041 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 1042 "data/maps/LittlerootTown/scripts.pory"
	setwildbattle SPECIES_CATERPIE, 3, ITEM_NONE
# 1043 "data/maps/LittlerootTown/scripts.pory"
	dowildbattle
# 1044 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1045 "data/maps/LittlerootTown/scripts.pory"
	removeobject 9
# 1046 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1047 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
	goto LittlerootTown_EventScript_Caterpie_1


LittlerootTown_EventScript_Pidove::
# 1056 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1057 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, LittlerootTown_EventScript_Pidove_2
# 1070 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Caterpie_Text_0
# 1071 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
LittlerootTown_EventScript_Pidove_1:
# 1073 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return

LittlerootTown_EventScript_Pidove_2:
# 1058 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_LITTLEROOT_TOWN_PIDOVE
# 1059 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_PIDOVE, CRY_MODE_ENCOUNTER
# 1060 "data/maps/LittlerootTown/scripts.pory"
	delay 40
# 1061 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 1062 "data/maps/LittlerootTown/scripts.pory"
	setwildbattle SPECIES_PIDOVE, 3, ITEM_NONE
# 1063 "data/maps/LittlerootTown/scripts.pory"
	dowildbattle
# 1064 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1065 "data/maps/LittlerootTown/scripts.pory"
	removeobject 10
# 1066 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1067 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1068 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	goto LittlerootTown_EventScript_Pidove_1


LittlerootTown_EventScript_Tympole::
# 1077 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1078 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, LittlerootTown_EventScript_Tympole_2
# 1089 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Caterpie_Text_0
# 1090 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
LittlerootTown_EventScript_Tympole_1:
# 1092 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return

LittlerootTown_EventScript_Tympole_2:
# 1079 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_LITTLEROOT_TOWN_TYMPOLE
# 1080 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_TYMPOLE, CRY_MODE_ENCOUNTER
# 1081 "data/maps/LittlerootTown/scripts.pory"
	delay 40
# 1082 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 1083 "data/maps/LittlerootTown/scripts.pory"
	setwildbattle SPECIES_TYMPOLE, 3, ITEM_NONE
# 1084 "data/maps/LittlerootTown/scripts.pory"
	dowildbattle
# 1085 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1086 "data/maps/LittlerootTown/scripts.pory"
	removeobject 11
# 1087 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto LittlerootTown_EventScript_Tympole_1


LittlerootTown_EventScript_GroveSign_Text_0:
# 1030 "data/maps/LittlerootTown/scripts.pory"
	.string "Path through Littleroot Grove ->$"

LittlerootTown_EventScript_Caterpie_Text_0:
# 1049 "data/maps/LittlerootTown/scripts.pory"
	.string "You shouldn't challenge a wild Pokemon\n"
	.string "without having one of your own!$"
