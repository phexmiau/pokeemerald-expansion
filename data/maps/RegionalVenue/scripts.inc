# 1 "data/maps/RegionalVenue/scripts.pory"

# 2 "data/maps/RegionalVenue/scripts.pory"
RegionalVenue_MapScripts::
# 3 "data/maps/RegionalVenue/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RegionalVenue_OnTransition
# 4 "data/maps/RegionalVenue/scripts.pory"
	.byte 0
# 5 "data/maps/RegionalVenue/scripts.pory"

# 6 "data/maps/RegionalVenue/scripts.pory"
RegionalVenue_OnTransition:
# 7 "data/maps/RegionalVenue/scripts.pory"
	setrespawn HEAL_LOCATION_REGIONAL_VENUE
# 8 "data/maps/RegionalVenue/scripts.pory"
    call RegionalVenue_EventSCript_ReadyMatchup
# 9 "data/maps/RegionalVenue/scripts.pory"
	end
# 10 "data/maps/RegionalVenue/scripts.pory"

# 11 "data/maps/RegionalVenue/scripts.pory"
RegionalVenue_EventScript_Nurse::
# 12 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_0x800B, LOCALID_VENUE_NURSE
# 13 "data/maps/RegionalVenue/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 15 "data/maps/RegionalVenue/scripts.pory"
	waitbuttonpress
# 16 "data/maps/RegionalVenue/scripts.pory"
	release
# 17 "data/maps/RegionalVenue/scripts.pory"
	end

RegionalVenue_EventScript_Clerk_Common::
# 21 "data/maps/RegionalVenue/scripts.pory"
	lock
# 22 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_0
# 23 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 24 "data/maps/RegionalVenue/scripts.pory"
	pokemart CommonMart
# 25 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 26 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Clerk_Uncommon::
# 30 "data/maps/RegionalVenue/scripts.pory"
	lock
# 31 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Uncommon_Text_0
# 32 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 33 "data/maps/RegionalVenue/scripts.pory"
	pokemart UncommonMart
# 34 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 35 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Clerk_Typeboost::
# 39 "data/maps/RegionalVenue/scripts.pory"
	lock
# 40 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Typeboost_Text_0
# 41 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 42 "data/maps/RegionalVenue/scripts.pory"
	pokemart TypeMart
# 43 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 44 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Clerk_Berries::
# 48 "data/maps/RegionalVenue/scripts.pory"
	lock
# 49 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Berries_Text_0
# 50 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 51 "data/maps/RegionalVenue/scripts.pory"
	pokemart BerryMart
# 52 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 53 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Clerk_Mints::
# 57 "data/maps/RegionalVenue/scripts.pory"
	lock
# 58 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Mints_Text_0
# 59 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 60 "data/maps/RegionalVenue/scripts.pory"
	pokemart MintMart
# 61 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 62 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Clerk_EVIVAbility::
# 66 "data/maps/RegionalVenue/scripts.pory"
	lock
# 67 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_EVIVAbility_Text_0
# 68 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 69 "data/maps/RegionalVenue/scripts.pory"
	pokemart StatMart
# 70 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 71 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Clerk_Tera::
# 75 "data/maps/RegionalVenue/scripts.pory"
	lock
# 76 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Tera_Text_0
# 77 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 78 "data/maps/RegionalVenue/scripts.pory"
	pokemart TeraMart
# 79 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 80 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Stonjourner::
# 84 "data/maps/RegionalVenue/scripts.pory"
	lock
# 85 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 86 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_STONJOURNER, CRY_MODE_ENCOUNTER
# 87 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Stonjourner_Text_0, MSGBOX_YESNO
# 88 "data/maps/RegionalVenue/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RegionalVenue_EventScript_Stonjourner_2
RegionalVenue_EventScript_Stonjourner_1:
# 97 "data/maps/RegionalVenue/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RegionalVenue_EventScript_Stonjourner_5
RegionalVenue_EventScript_Stonjourner_4:
# 100 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 101 "data/maps/RegionalVenue/scripts.pory"
	release
	return

RegionalVenue_EventScript_Stonjourner_2:
# 89 "data/maps/RegionalVenue/scripts.pory"
	applymovement 9, RegionalVenue_EventScript_Stonjourner_Movement_0
# 90 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 91 "data/maps/RegionalVenue/scripts.pory"
	applymovement 9, RegionalVenue_EventScript_Stonjourner_Movement_0
# 92 "data/maps/RegionalVenue/scripts.pory"
	removeobject 9
# 93 "data/maps/RegionalVenue/scripts.pory"
	setflag FLAG_STARTED_REGIONAL
# 94 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Stonjourner_Text_1, MSGBOX_AUTOCLOSE
# 95 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
	goto RegionalVenue_EventScript_Stonjourner_1

RegionalVenue_EventScript_Stonjourner_5:
# 98 "data/maps/RegionalVenue/scripts.pory"
	applymovement 9, RegionalVenue_EventScript_Stonjourner_Movement_1
	goto RegionalVenue_EventScript_Stonjourner_4


RegionalVenue_EventScript_Kartana::
# 105 "data/maps/RegionalVenue/scripts.pory"
	lock
# 106 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 107 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_KARTANA, CRY_MODE_ENCOUNTER
# 108 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kartana_Text_0, MSGBOX_AUTOCLOSE
# 109 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 110 "data/maps/RegionalVenue/scripts.pory"
	applymovement 14, RegionalVenue_EventScript_Stonjourner_Movement_1
# 111 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 112 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Mismagius::
# 116 "data/maps/RegionalVenue/scripts.pory"
	lock
# 117 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 118 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_MISMAGIUS, CRY_MODE_ENCOUNTER
# 119 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Mismagius_Text_0, MSGBOX_AUTOCLOSE
# 120 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 121 "data/maps/RegionalVenue/scripts.pory"
	applymovement 11, RegionalVenue_EventScript_Mismagius_Movement_0
# 122 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 123 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Altaria::
# 127 "data/maps/RegionalVenue/scripts.pory"
	lock
# 128 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 129 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_ALTARIA, CRY_MODE_ENCOUNTER
# 130 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Altaria_Text_0, MSGBOX_AUTOCLOSE
# 131 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 132 "data/maps/RegionalVenue/scripts.pory"
	applymovement 16, RegionalVenue_EventScript_Altaria_Movement_0
# 133 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 134 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Palafin::
# 138 "data/maps/RegionalVenue/scripts.pory"
	lock
# 139 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 140 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_PALAFIN_HERO, CRY_MODE_ENCOUNTER
# 141 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Palafin_Text_0, MSGBOX_AUTOCLOSE
# 142 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 143 "data/maps/RegionalVenue/scripts.pory"
	applymovement 18, RegionalVenue_EventScript_Altaria_Movement_0
# 144 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 145 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Charizard::
# 149 "data/maps/RegionalVenue/scripts.pory"
	lock
# 150 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 151 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 152 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Charizard_Text_0, MSGBOX_AUTOCLOSE
# 153 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 154 "data/maps/RegionalVenue/scripts.pory"
	applymovement 10, RegionalVenue_EventScript_Mismagius_Movement_0
# 155 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 156 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Meganium::
# 160 "data/maps/RegionalVenue/scripts.pory"
	lock
# 161 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 162 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_MEGANIUM, CRY_MODE_ENCOUNTER
# 163 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Meganium_Text_0, MSGBOX_AUTOCLOSE
# 164 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 165 "data/maps/RegionalVenue/scripts.pory"
	applymovement 15, RegionalVenue_EventScript_Mismagius_Movement_0
# 166 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 167 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Scolipede::
# 171 "data/maps/RegionalVenue/scripts.pory"
	lock
# 172 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 173 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_SCOLIPEDE, CRY_MODE_ENCOUNTER
# 174 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Scolipede_Text_0, MSGBOX_AUTOCLOSE
# 175 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 176 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Beedrill::
# 180 "data/maps/RegionalVenue/scripts.pory"
	lock
# 181 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 182 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_BEEDRILL, CRY_MODE_ENCOUNTER
# 183 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Beedrill_Text_0, MSGBOX_AUTOCLOSE
# 184 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 185 "data/maps/RegionalVenue/scripts.pory"
	applymovement 12, RegionalVenue_EventScript_Stonjourner_Movement_1
# 186 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 187 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Turtonator::
# 191 "data/maps/RegionalVenue/scripts.pory"
	lock
# 192 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 193 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_TURTONATOR, CRY_MODE_ENCOUNTER
# 194 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Turtonator_Text_0, MSGBOX_AUTOCLOSE
# 195 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 196 "data/maps/RegionalVenue/scripts.pory"
	applymovement 13, RegionalVenue_EventScript_Mismagius_Movement_0
# 197 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 198 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Painter::
# 202 "data/maps/RegionalVenue/scripts.pory"
	lock
# 203 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 204 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Painter_Text_0, MSGBOX_AUTOCLOSE
# 205 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 206 "data/maps/RegionalVenue/scripts.pory"
	applymovement 19, RegionalVenue_EventScript_Stonjourner_Movement_1
# 207 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 208 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Tucker::
# 212 "data/maps/RegionalVenue/scripts.pory"
	lock
# 213 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 214 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Tucker_Text_0
# 215 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 216 "data/maps/RegionalVenue/scripts.pory"
	pokemart SpecialMart
# 217 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Tucker_Text_1
# 218 "data/maps/RegionalVenue/scripts.pory"
	applymovement 21, RegionalVenue_EventScript_Mismagius_Movement_0
# 219 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 220 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Green::
# 224 "data/maps/RegionalVenue/scripts.pory"
	lock
# 225 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 226 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Green_Text_0, MSGBOX_AUTOCLOSE
# 227 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 228 "data/maps/RegionalVenue/scripts.pory"
	applymovement 20, RegionalVenue_EventScript_Mismagius_Movement_0
# 229 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 230 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Grunt::
# 234 "data/maps/RegionalVenue/scripts.pory"
	lock
# 235 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 236 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Grunt_Text_0, MSGBOX_AUTOCLOSE
# 237 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 238 "data/maps/RegionalVenue/scripts.pory"
	applymovement 23, RegionalVenue_EventScript_Altaria_Movement_0
# 239 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 240 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Red::
# 244 "data/maps/RegionalVenue/scripts.pory"
	lock
# 245 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 246 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Red_Text_0, MSGBOX_AUTOCLOSE
# 247 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 248 "data/maps/RegionalVenue/scripts.pory"
	applymovement 22, RegionalVenue_EventScript_Mismagius_Movement_0
# 249 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 250 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Beauty::
# 254 "data/maps/RegionalVenue/scripts.pory"
	lock
# 255 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 256 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Beauty_Text_0, MSGBOX_AUTOCLOSE
# 257 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 258 "data/maps/RegionalVenue/scripts.pory"
	applymovement 26, RegionalVenue_EventScript_Stonjourner_Movement_1
# 259 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 260 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Bugcatcher::
# 264 "data/maps/RegionalVenue/scripts.pory"
	lock
# 265 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 266 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Bugcatcher_Text_0, MSGBOX_AUTOCLOSE
# 267 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 268 "data/maps/RegionalVenue/scripts.pory"
	applymovement 24, RegionalVenue_EventScript_Bugcatcher_Movement_0
# 269 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 270 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Lucy::
# 274 "data/maps/RegionalVenue/scripts.pory"
	lock
# 275 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 276 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Lucy_Text_0, MSGBOX_AUTOCLOSE
# 277 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 278 "data/maps/RegionalVenue/scripts.pory"
	applymovement 25, RegionalVenue_EventScript_Mismagius_Movement_0
# 279 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 280 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Noland::
# 284 "data/maps/RegionalVenue/scripts.pory"
	lock
# 285 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 286 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Noland_Text_0, MSGBOX_AUTOCLOSE
# 287 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 288 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Noland_Text_1, MSGBOX_AUTOCLOSE
# 289 "data/maps/RegionalVenue/scripts.pory"
	applymovement 27, RegionalVenue_EventScript_Mismagius_Movement_0
# 290 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 291 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Kate::
# 295 "data/maps/RegionalVenue/scripts.pory"
	lock
# 296 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 297 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_SPRIGATITO, CRY_MODE_ENCOUNTER
# 298 "data/maps/RegionalVenue/scripts.pory"
	switch VAR_REGIONAL_STATE
# 299 "data/maps/RegionalVenue/scripts.pory"
	case 0, RegionalVenue_EventScript_Kate_3
# 303 "data/maps/RegionalVenue/scripts.pory"
	case 1, RegionalVenue_EventScript_Kate_4
# 309 "data/maps/RegionalVenue/scripts.pory"
	case 2, RegionalVenue_EventScript_Kate_5
# 315 "data/maps/RegionalVenue/scripts.pory"
	case 3, RegionalVenue_EventScript_Kate_6
# 321 "data/maps/RegionalVenue/scripts.pory"
	case 4, RegionalVenue_EventScript_Kate_7
# 327 "data/maps/RegionalVenue/scripts.pory"
	case 5, RegionalVenue_EventScript_Kate_8
# 333 "data/maps/RegionalVenue/scripts.pory"
	case 6, RegionalVenue_EventScript_Kate_9
# 339 "data/maps/RegionalVenue/scripts.pory"
	case 7, RegionalVenue_EventScript_Kate_10
# 345 "data/maps/RegionalVenue/scripts.pory"
	case 8, RegionalVenue_EventScript_Kate_11
# 351 "data/maps/RegionalVenue/scripts.pory"
	case 9, RegionalVenue_EventScript_Kate_12
# 357 "data/maps/RegionalVenue/scripts.pory"
	case 10, RegionalVenue_EventScript_Kate_13
# 363 "data/maps/RegionalVenue/scripts.pory"
	case 11, RegionalVenue_EventScript_Kate_14
# 369 "data/maps/RegionalVenue/scripts.pory"
	case 12, RegionalVenue_EventScript_Kate_15
# 375 "data/maps/RegionalVenue/scripts.pory"
	case 13, RegionalVenue_EventScript_Kate_16
# 381 "data/maps/RegionalVenue/scripts.pory"
	case 14, RegionalVenue_EventScript_Kate_17
# 387 "data/maps/RegionalVenue/scripts.pory"
	case 15, RegionalVenue_EventScript_Kate_18
RegionalVenue_EventScript_Kate_1:
# 403 "data/maps/RegionalVenue/scripts.pory"
	applymovement 28, RegionalVenue_EventScript_Bugcatcher_Movement_0
# 404 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 405 "data/maps/RegionalVenue/scripts.pory"
	release
	return

RegionalVenue_EventScript_Kate_3:
# 300 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_0
# 301 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 302 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_REGIONAL_STATE, 1
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_4:
# 304 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_1
# 305 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_MEWTWO, 10, 3
# 306 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_2, MSGBOX_AUTOCLOSE
# 307 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 308 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_5:
# 310 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_3
# 311 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_SOLGALEO, 10, 3
# 312 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_4, MSGBOX_AUTOCLOSE
# 313 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 314 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_6:
# 316 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_5
# 317 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_GIRATINA_ORIGIN, 10, 3
# 318 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_6, MSGBOX_AUTOCLOSE
# 319 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 320 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_7:
# 322 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_7
# 323 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_ZACIAN_CROWNED, 10, 3
# 324 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_8, MSGBOX_AUTOCLOSE
# 325 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 326 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_8:
# 328 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_9
# 329 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_HO_OH, 10, 3
# 330 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_10, MSGBOX_AUTOCLOSE
# 331 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 332 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_9:
# 334 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_11
# 335 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_CALYREX_SHADOW, 10, 3
# 336 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_12, MSGBOX_AUTOCLOSE
# 337 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 338 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_10:
# 340 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_13
# 341 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_KYOGRE, 10, 3
# 342 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_14, MSGBOX_AUTOCLOSE
# 343 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 344 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_11:
# 346 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_15
# 347 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_ZAMAZENTA_CROWNED, 10, 3
# 348 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_16, MSGBOX_AUTOCLOSE
# 349 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 350 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_12:
# 352 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_17
# 353 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_CALYREX_ICE, 10, 3
# 354 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_18, MSGBOX_AUTOCLOSE
# 355 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 356 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_13:
# 358 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_19
# 359 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_TERAPAGOS, 10, 3
# 360 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_20, MSGBOX_AUTOCLOSE
# 361 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 362 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_14:
# 364 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_21
# 365 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_GROUDON, 10, 3
# 366 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_22, MSGBOX_AUTOCLOSE
# 367 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 368 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_15:
# 370 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_23
# 371 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_LUNALA, 10, 3
# 372 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_24, MSGBOX_AUTOCLOSE
# 373 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 374 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_16:
# 376 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_25
# 377 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_MIRAIDON, 10, 3
# 378 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_26, MSGBOX_AUTOCLOSE
# 379 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 380 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_17:
# 382 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_27
# 383 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_KORAIDON, 10, 3
# 384 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_28, MSGBOX_AUTOCLOSE
# 385 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 386 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_18:
# 388 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_29, MSGBOX_AUTOCLOSE
# 389 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 390 "data/maps/RegionalVenue/scripts.pory"
	trainerbattle_no_intro TRAINER_KATE, battleOutroKate
# 391 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_30
# 392 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_31
# 393 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_32
# 394 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_33
# 395 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_34
# 396 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_35
# 397 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_36
# 398 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_37
# 399 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_38
# 400 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_39, MSGBOX_AUTOCLOSE
# 401 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
	goto RegionalVenue_EventScript_Kate_1


RegionalVenue_EventSCript_ReadyMatchup::
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_1, RegionalVenue_EventSCript_ReadyMatchup_3
	return

RegionalVenue_EventSCript_ReadyMatchup_1:
# 415 "data/maps/RegionalVenue/scripts.pory"
	switch VAR_REGIONAL_STATE
# 416 "data/maps/RegionalVenue/scripts.pory"
	case 0, RegionalVenue_EventSCript_ReadyMatchup_30
# 417 "data/maps/RegionalVenue/scripts.pory"
	case 1, RegionalVenue_EventSCript_ReadyMatchup_30
# 418 "data/maps/RegionalVenue/scripts.pory"
	case 2, RegionalVenue_EventSCript_ReadyMatchup_30
# 421 "data/maps/RegionalVenue/scripts.pory"
	case 3, RegionalVenue_EventSCript_ReadyMatchup_31
# 424 "data/maps/RegionalVenue/scripts.pory"
	case 4, RegionalVenue_EventSCript_ReadyMatchup_32
# 427 "data/maps/RegionalVenue/scripts.pory"
	case 5, RegionalVenue_EventSCript_ReadyMatchup_33
# 430 "data/maps/RegionalVenue/scripts.pory"
	case 6, RegionalVenue_EventSCript_ReadyMatchup_34
# 433 "data/maps/RegionalVenue/scripts.pory"
	case 7, RegionalVenue_EventSCript_ReadyMatchup_35
# 436 "data/maps/RegionalVenue/scripts.pory"
	case 8, RegionalVenue_EventSCript_ReadyMatchup_36
# 439 "data/maps/RegionalVenue/scripts.pory"
	case 9, RegionalVenue_EventSCript_ReadyMatchup_37
# 442 "data/maps/RegionalVenue/scripts.pory"
	case 10, RegionalVenue_EventSCript_ReadyMatchup_38
# 445 "data/maps/RegionalVenue/scripts.pory"
	case 11, RegionalVenue_EventSCript_ReadyMatchup_39
# 448 "data/maps/RegionalVenue/scripts.pory"
	case 12, RegionalVenue_EventSCript_ReadyMatchup_40
# 451 "data/maps/RegionalVenue/scripts.pory"
	case 13, RegionalVenue_EventSCript_ReadyMatchup_41
# 454 "data/maps/RegionalVenue/scripts.pory"
	case 14, RegionalVenue_EventSCript_ReadyMatchup_42
	return

RegionalVenue_EventSCript_ReadyMatchup_2:
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_3, RegionalVenue_EventSCript_ReadyMatchup_7
	return

RegionalVenue_EventSCript_ReadyMatchup_3:
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_2, RegionalVenue_EventSCript_ReadyMatchup_2
	return

RegionalVenue_EventSCript_ReadyMatchup_6:
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_5, RegionalVenue_EventSCript_ReadyMatchup_11
	return

RegionalVenue_EventSCript_ReadyMatchup_7:
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_4, RegionalVenue_EventSCript_ReadyMatchup_6
	return

RegionalVenue_EventSCript_ReadyMatchup_10:
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_7, RegionalVenue_EventSCript_ReadyMatchup_15
	return

RegionalVenue_EventSCript_ReadyMatchup_11:
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_6, RegionalVenue_EventSCript_ReadyMatchup_10
	return

RegionalVenue_EventSCript_ReadyMatchup_14:
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_9, RegionalVenue_EventSCript_ReadyMatchup_19
	return

RegionalVenue_EventSCript_ReadyMatchup_15:
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_8, RegionalVenue_EventSCript_ReadyMatchup_14
	return

RegionalVenue_EventSCript_ReadyMatchup_18:
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_11, RegionalVenue_EventSCript_ReadyMatchup_23
	return

RegionalVenue_EventSCript_ReadyMatchup_19:
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_10, RegionalVenue_EventSCript_ReadyMatchup_18
	return

RegionalVenue_EventSCript_ReadyMatchup_22:
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_13, RegionalVenue_EventSCript_ReadyMatchup_26
	return

RegionalVenue_EventSCript_ReadyMatchup_23:
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_12, RegionalVenue_EventSCript_ReadyMatchup_22
	return

RegionalVenue_EventSCript_ReadyMatchup_26:
# 413 "data/maps/RegionalVenue/scripts.pory"
	goto_if_set FLAG_ROUND_14, RegionalVenue_EventSCript_ReadyMatchup_1
	return

RegionalVenue_EventSCript_ReadyMatchup_30:
# 419 "data/maps/RegionalVenue/scripts.pory"
	clearflag FLAG_ROUND_2
# 420 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 1
	return

RegionalVenue_EventSCript_ReadyMatchup_31:
# 422 "data/maps/RegionalVenue/scripts.pory"
	clearflag FLAG_ROUND_3
# 423 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 1
	return

RegionalVenue_EventSCript_ReadyMatchup_32:
# 425 "data/maps/RegionalVenue/scripts.pory"
	clearflag FLAG_ROUND_4
# 426 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 1
	return

RegionalVenue_EventSCript_ReadyMatchup_33:
# 428 "data/maps/RegionalVenue/scripts.pory"
	clearflag FLAG_ROUND_5
# 429 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 1
	return

RegionalVenue_EventSCript_ReadyMatchup_34:
# 431 "data/maps/RegionalVenue/scripts.pory"
	clearflag FLAG_ROUND_6
# 432 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 1
	return

RegionalVenue_EventSCript_ReadyMatchup_35:
# 434 "data/maps/RegionalVenue/scripts.pory"
	clearflag FLAG_ROUND_7
# 435 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 1
	return

RegionalVenue_EventSCript_ReadyMatchup_36:
# 437 "data/maps/RegionalVenue/scripts.pory"
	clearflag FLAG_ROUND_8
# 438 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 1
	return

RegionalVenue_EventSCript_ReadyMatchup_37:
# 440 "data/maps/RegionalVenue/scripts.pory"
	clearflag FLAG_ROUND_9
# 441 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 1
	return

RegionalVenue_EventSCript_ReadyMatchup_38:
# 443 "data/maps/RegionalVenue/scripts.pory"
	clearflag FLAG_ROUND_10
# 444 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 1
	return

RegionalVenue_EventSCript_ReadyMatchup_39:
# 446 "data/maps/RegionalVenue/scripts.pory"
	clearflag FLAG_ROUND_11
# 447 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 1
	return

RegionalVenue_EventSCript_ReadyMatchup_40:
# 449 "data/maps/RegionalVenue/scripts.pory"
	clearflag FLAG_ROUND_12
# 450 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 1
	return

RegionalVenue_EventSCript_ReadyMatchup_41:
# 452 "data/maps/RegionalVenue/scripts.pory"
	clearflag FLAG_ROUND_13
# 453 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 1
	return

RegionalVenue_EventSCript_ReadyMatchup_42:
# 455 "data/maps/RegionalVenue/scripts.pory"
	clearflag FLAG_ROUND_14
# 456 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 1
	return


	.align 2
# 461 "data/maps/RegionalVenue/scripts.pory"
CommonMart:
# 462 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ABILITY_SHIELD
# 463 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 464 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 465 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 466 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 467 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 468 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 469 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 470 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 471 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_EVIOLITE
# 472 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 473 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 474 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 475 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 476 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 477 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 478 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 479 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 480 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 481 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 482 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_POWER_HERB
# 483 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 484 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 485 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 486 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_NONE

	.align 2
# 489 "data/maps/RegionalVenue/scripts.pory"
UncommonMart:
# 490 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 491 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 492 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 493 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 494 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 495 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 496 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 497 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 498 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 499 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 500 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 501 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 502 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 503 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 504 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 505 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 506 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_IRON_BALL
# 507 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 508 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 509 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 510 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_METRONOME
# 511 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 512 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 513 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 514 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 515 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 516 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 517 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 518 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RED_CARD
# 519 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RING_TARGET
# 520 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 521 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 522 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 523 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 524 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SNOWBALL
# 525 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 526 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 527 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 528 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 529 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 530 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 531 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 532 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

	.align 2
# 535 "data/maps/RegionalVenue/scripts.pory"
TypeMart:
# 536 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 537 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHARCOAL
# 538 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 539 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MAGNET
# 540 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 541 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 542 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 543 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_POISON_BARB
# 544 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 545 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 546 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 547 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 548 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HARD_STONE
# 549 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 550 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 551 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 552 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_METAL_COAT
# 553 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

	.align 2
# 556 "data/maps/RegionalVenue/scripts.pory"
BerryMart:
# 557 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 558 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 559 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 560 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 561 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 562 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 563 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 564 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 565 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 566 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 567 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 568 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 569 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 570 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 571 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 572 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 573 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 574 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 575 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 576 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 577 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 578 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 579 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 580 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 581 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 582 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 583 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 584 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 585 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 586 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 587 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 588 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
# 589 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 590 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 591 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 592 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 593 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 594 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 595 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 596 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 597 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 598 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 599 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 600 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 601 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 602 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 603 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_NONE

	.align 2
# 606 "data/maps/RegionalVenue/scripts.pory"
MintMart:
# 607 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 608 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 609 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 610 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 611 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 612 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 613 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LAX_MINT
# 614 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 615 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 616 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MILD_MINT
# 617 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RASH_MINT
# 618 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 619 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CALM_MINT
# 620 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 621 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 622 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 623 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 624 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 625 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 626 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 627 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

	.align 2
# 630 "data/maps/RegionalVenue/scripts.pory"
StatMart:
# 631 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 632 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 633 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PP_MAX
# 634 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 635 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 636 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 637 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 638 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 639 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 640 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HP_UP
# 641 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PROTEIN
# 642 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_IRON
# 643 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CALCIUM
# 644 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ZINC
# 645 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CARBOS
# 646 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HP_MAX
# 647 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ATK_MAX
# 648 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_DEF_MAX
# 649 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SPATK_MAX
# 650 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SPDEF_MAX
# 651 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SPEED_MAX
# 652 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 653 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GOLD_BOTTLE_CAP
# 654 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_0_HP_BOTTLE_CAP
# 655 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_0_ATK_BOTTLE_CAP
# 656 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_0_DEF_BOTTLE_CAP
# 657 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_0_SPATK_BOTTLE_CAP
# 658 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_0_SPDEF_BOTTLE_CAP
# 659 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_0_SPEED_BOTTLE_CAP
# 660 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_P1_HP_BOTTLE_CAP
# 661 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_P1_ATK_BOTTLE_CAP
# 662 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_P1_DEF_BOTTLE_CAP
# 663 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_P1_SPATK_BOTTLE_CAP
# 664 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_P1_SPDEF_BOTTLE_CAP
# 665 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_P1_SPEED_BOTTLE_CAP
	.2byte ITEM_NONE

	.align 2
# 668 "data/maps/RegionalVenue/scripts.pory"
TeraMart:
# 669 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BUG_TERA_SHARD
# 670 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_DARK_TERA_SHARD
# 671 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_DRAGON_TERA_SHARD
# 672 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ELECTRIC_TERA_SHARD
# 673 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FAIRY_TERA_SHARD
# 674 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FIGHTING_TERA_SHARD
# 675 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FIRE_TERA_SHARD
# 676 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FLYING_TERA_SHARD
# 677 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GHOST_TERA_SHARD
# 678 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GRASS_TERA_SHARD
# 679 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GROUND_TERA_SHARD
# 680 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ICE_TERA_SHARD
# 681 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 682 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_POISON_TERA_SHARD
# 683 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PSYCHIC_TERA_SHARD
# 684 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ROCK_TERA_SHARD
# 685 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_STEEL_TERA_SHARD
# 686 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WATER_TERA_SHARD
# 687 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_STELLAR_TERA_SHARD
	.2byte ITEM_NONE

	.align 2
# 690 "data/maps/RegionalVenue/scripts.pory"
SpecialMart:
# 691 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MEGA_RING
# 692 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 693 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 694 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 695 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 696 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CORNERSTONE_MASK
# 697 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HEARTHFLAME_MASK
# 698 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WELLSPRING_MASK
# 699 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_REVEAL_GLASS
	.2byte ITEM_NONE

# 89 "data/maps/RegionalVenue/scripts.pory"
RegionalVenue_EventScript_Stonjourner_Movement_0:
# 89 "data/maps/RegionalVenue/scripts.pory"
	walk_up
	step_end

# 98 "data/maps/RegionalVenue/scripts.pory"
RegionalVenue_EventScript_Stonjourner_Movement_1:
# 98 "data/maps/RegionalVenue/scripts.pory"
	face_down
	step_end

# 121 "data/maps/RegionalVenue/scripts.pory"
RegionalVenue_EventScript_Mismagius_Movement_0:
# 121 "data/maps/RegionalVenue/scripts.pory"
	face_left
	step_end

# 132 "data/maps/RegionalVenue/scripts.pory"
RegionalVenue_EventScript_Altaria_Movement_0:
# 132 "data/maps/RegionalVenue/scripts.pory"
	face_right
	step_end

# 268 "data/maps/RegionalVenue/scripts.pory"
RegionalVenue_EventScript_Bugcatcher_Movement_0:
# 268 "data/maps/RegionalVenue/scripts.pory"
	face_up
	step_end

RegionalVenue_EventScript_Clerk_Common_Text_0:
# 22 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy COMMONLY HELD items here!$"

RegionalVenue_EventScript_Clerk_Common_Text_1:
# 25 "data/maps/RegionalVenue/scripts.pory"
	.string "Come again soon.$"

RegionalVenue_EventScript_Clerk_Uncommon_Text_0:
# 31 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy UNCOMMONLY HELD items\n"
	.string "here!$"

RegionalVenue_EventScript_Clerk_Typeboost_Text_0:
# 40 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy TYPE-BOOSTING items here!$"

RegionalVenue_EventScript_Clerk_Berries_Text_0:
# 49 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy BERRIES here!$"

RegionalVenue_EventScript_Clerk_Mints_Text_0:
# 58 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy MINTS here!$"

RegionalVenue_EventScript_Clerk_EVIVAbility_Text_0:
# 67 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy STAT ITEMS here!$"

RegionalVenue_EventScript_Clerk_Tera_Text_0:
# 76 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy TERA SHARDS here!$"

RegionalVenue_EventScript_Stonjourner_Text_0:
# 87 "data/maps/RegionalVenue/scripts.pory"
	.string "Do you want to start the regional?$"

RegionalVenue_EventScript_Stonjourner_Text_1:
# 94 "data/maps/RegionalVenue/scripts.pory"
	.string "ANNOUNCER: The regional is officially\n"
	.string "starting!\p"
	.string "Please make your way to your first\n"
	.string "game!\p"
	.string "As a reminder we are in the new\n"
	.string "Regulation R, which means you are going\l"
	.string "to play a BO1 with all 6 Pokémon,\l"
	.string "including 1 restricted.\p"
	.string "Best of luck to all the participants!$"

RegionalVenue_EventScript_Kartana_Text_0:
# 108 "data/maps/RegionalVenue/scripts.pory"
	.string "Tana-tana!$"

RegionalVenue_EventScript_Mismagius_Text_0:
# 119 "data/maps/RegionalVenue/scripts.pory"
	.string "Magius...$"

RegionalVenue_EventScript_Altaria_Text_0:
# 130 "data/maps/RegionalVenue/scripts.pory"
	.string "Laaaaa!$"

RegionalVenue_EventScript_Palafin_Text_0:
# 141 "data/maps/RegionalVenue/scripts.pory"
	.string "Pala.$"

RegionalVenue_EventScript_Charizard_Text_0:
# 152 "data/maps/RegionalVenue/scripts.pory"
	.string "Zrrrrd...$"

RegionalVenue_EventScript_Meganium_Text_0:
# 163 "data/maps/RegionalVenue/scripts.pory"
	.string "Mgaaa!$"

RegionalVenue_EventScript_Scolipede_Text_0:
# 174 "data/maps/RegionalVenue/scripts.pory"
	.string "Scoliiii...$"

RegionalVenue_EventScript_Beedrill_Text_0:
# 183 "data/maps/RegionalVenue/scripts.pory"
	.string "Bzzzzzz.$"

RegionalVenue_EventScript_Turtonator_Text_0:
# 194 "data/maps/RegionalVenue/scripts.pory"
	.string "Naatrrr...$"

RegionalVenue_EventScript_Painter_Text_0:
# 204 "data/maps/RegionalVenue/scripts.pory"
	.string "I've traveled to distant dimensions to\n"
	.string "search for the best competitive team...\l"
	.string "And then I learned some Ultra Beast\l"
	.string "just resides on the routes before this\l"
	.string "venue???$"

RegionalVenue_EventScript_Tucker_Text_0:
# 214 "data/maps/RegionalVenue/scripts.pory"
	.string "Hehehe I'm such a mysterious person...$"

RegionalVenue_EventScript_Tucker_Text_1:
# 217 "data/maps/RegionalVenue/scripts.pory"
	.string "Bet you didn't expect me to own all of\n"
	.string "these >:)$"

RegionalVenue_EventScript_Green_Text_0:
# 226 "data/maps/RegionalVenue/scripts.pory"
	.string "Altaria and I flew here all the way from\n"
	.string "Hoenn.\p"
	.string "We have won a bunch of Pokémon\n"
	.string "contests back home, but this is our\l"
	.string "first VGC regional!$"

RegionalVenue_EventScript_Grunt_Text_0:
# 236 "data/maps/RegionalVenue/scripts.pory"
	.string "Argh... I thought this Charizard would\n"
	.string "be easy pickings with my type\l"
	.string "advantage, but it just pulled out a\l"
	.string "Thunder Punch!?$"

RegionalVenue_EventScript_Red_Text_0:
# 246 "data/maps/RegionalVenue/scripts.pory"
	.string "...$"

RegionalVenue_EventScript_Beauty_Text_0:
# 256 "data/maps/RegionalVenue/scripts.pory"
	.string "Meganium is such a kind Pokémon, that\n"
	.string "it's more focused on the flowers here\l"
	.string "than getting ready for battle.\l"
	.string "It kind of reminds me of a fairy in that\l"
	.string "way...$"

RegionalVenue_EventScript_Bugcatcher_Text_0:
# 266 "data/maps/RegionalVenue/scripts.pory"
	.string "I'm so excited to compete here with my\n"
	.string "Beedrill!\p"
	.string "I met it as a Weedle back when I was a\n"
	.string "child, and it's been my best friend\l"
	.string "since.$"

RegionalVenue_EventScript_Lucy_Text_0:
# 276 "data/maps/RegionalVenue/scripts.pory"
	.string "Phew... barely made it here in time for\n"
	.string "the regional's start time.\l"
	.string "Me and Scolipede got caught up setting\l"
	.string "fire to police cars on the way here.$"

RegionalVenue_EventScript_Noland_Text_0:
# 286 "data/maps/RegionalVenue/scripts.pory"
	.string "Yawnnnnnnnn. Not a single strong\n"
	.string "trainer in sight here, this is gonna be\l"
	.string "so easy for a pro like me!$"

RegionalVenue_EventScript_Noland_Text_1:
# 288 "data/maps/RegionalVenue/scripts.pory"
	.string "(Developer's Note: He is about to exit\n"
	.string "0-2)$"

RegionalVenue_EventScript_Kate_Text_0:
# 300 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: omg hiiiiiiiiiiiii!!!\n"
	.string "I'm so glad you made it here :3\p"
	.string "If it's taffel playing ily ily ily, if it's\n"
	.string "someone else just ignore this :P\p"
	.string "The regional is about to start tho!!!\n"
	.string "You should probably prepare your team\l"
	.string "using the items you can get from the\l"
	.string "shops here.\l"
	.string "I've heard the guy with the Mismagius\l"
	.string "on the other side of this room also has\l"
	.string "some interesting stuff to offer...\p"
	.string "With all that said... starting now,\n"
	.string "whenever you talk to me I'm gonna give\l"
	.string "you some advice on your next tourney\l"
	.string "matchup :3\p"
	.string "Good luck in the regional !!!$"

RegionalVenue_EventScript_Kate_Text_1:
# 304 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: Okok so I looked at the first\n"
	.string "round draw and it seems your opponent\l"
	.string "is running a... MEWTWO???$"

RegionalVenue_EventScript_Kate_Text_2:
# 306 "data/maps/RegionalVenue/scripts.pory"
	.string "You're definitely going to have to be on\n"
	.string "the lookout for a bit of Psyspam it\l"
	.string "seems...$"

RegionalVenue_EventScript_Kate_Text_3:
# 310 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: Great work out there!\p"
	.string "It's not gonna get any more standard\n"
	.string "with your next round tho...\l"
	.string "Just look at this.$"

RegionalVenue_EventScript_Kate_Text_4:
# 312 "data/maps/RegionalVenue/scripts.pory"
	.string "Besides the odd restricted choice, the\n"
	.string "only notable thing about your opponent\l"
	.string "seems to be a love for setting up\l"
	.string "screens!$"

RegionalVenue_EventScript_Kate_Text_5:
# 316 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: Next round, next strange\n"
	.string "restricted.\p"
	.string "This almost feels like... early round\n"
	.string "difficulty progression?\l"
	.string "Strange...\p"
	.string "Anyslay! One powercrept gen 4\n"
	.string "legendary coming up:$"

RegionalVenue_EventScript_Kate_Text_6:
# 318 "data/maps/RegionalVenue/scripts.pory"
	.string "A good half of the team overall looks\n"
	.string "similarly out-powercrept, so you should\l"
	.string "have this!$"

RegionalVenue_EventScript_Kate_Text_7:
# 322 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: Finally a real restricted!!!\n"
	.string "At least one gen ago...$"

RegionalVenue_EventScript_Kate_Text_8:
# 324 "data/maps/RegionalVenue/scripts.pory"
	.string "This opponent seems quite disgusting,\n"
	.string "both in regards to their team and\l"
	.string "personality.\p"
	.string "Please send them home.$"

RegionalVenue_EventScript_Kate_Text_9:
# 328 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: Good shit on ridding this regional\n"
	.string "from that freak!\p"
	.string "Unrelated thought but I hate when woke\n"
	.string "developers overtly put their political\l"
	.string "stances in their games.\l"
	.string "ANYWAYS.\p"
	.string "Rainbow bird.$"

RegionalVenue_EventScript_Kate_Text_10:
# 330 "data/maps/RegionalVenue/scripts.pory"
	.string "A bit of an unconventional team all\n"
	.string "around.\p"
	.string "I love what they've done for their\n"
	.string "electric and bug types tho!$"

RegionalVenue_EventScript_Kate_Text_11:
# 334 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: I JUST saw your next matchup and\n"
	.string "oh wow this is quite a jump in\l"
	.string "restricted choices.\p"
	.string "I'll just show you:$"

RegionalVenue_EventScript_Kate_Text_12:
# 336 "data/maps/RegionalVenue/scripts.pory"
	.string "Besides that you might want to watch\n"
	.string "out for weather in this one, their team\l"
	.string "likes it quite sunny.$"

RegionalVenue_EventScript_Kate_Text_13:
# 340 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: ...\p"
	.string "Sorry I was spaced out there for a sec,\n"
	.string "your next opponent is quite bizarre.\l"
	.string "I'm not quite sure how they are like...\l"
	.string "alive?\p"
	.string "You'll get it when you see them.\l"
	.string "Their restricted matches them well tho!$"

RegionalVenue_EventScript_Kate_Text_14:
# 342 "data/maps/RegionalVenue/scripts.pory"
	.string "Not much else to say, they are running a\n"
	.string "fairly standard team for the most part.\p"
	.string "Tornado Warning!!! I guess.$"

RegionalVenue_EventScript_Kate_Text_15:
# 346 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: I. Really. Don't. Like. This. One.\p"
	.string "Meow.\p"
	.string "( meows very scared-ly :( )$"

RegionalVenue_EventScript_Kate_Text_16:
# 348 "data/maps/RegionalVenue/scripts.pory"
	.string "(She appears to be in too much of a\n"
	.string "panic to give more information.)$"

RegionalVenue_EventScript_Kate_Text_17:
# 352 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: Thank you so much for saving me.\p"
	.string "If you're taffel please dm me right now\n"
	.string "so I can flirt in gratitude.\p"
	.string "To the next match tho!\n"
	.string "This guy didn't quite get the\l"
	.string "restricted he wanted, but it's not like\l"
	.string "he can really complain with this...$"

RegionalVenue_EventScript_Kate_Text_18:
# 354 "data/maps/RegionalVenue/scripts.pory"
	.string "Once again I can give a weather warning\n"
	.string "more than anything...\p"
	.string "You better bring an umbrella!\p"
	.string "'ella\p"
	.string "'ella\p"
	.string "'ella\p"
	.string "eh\p"
	.string "...am I being cringefail.$"

RegionalVenue_EventScript_Kate_Text_19:
# 358 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: CALM MIND.\p"
	.string "LEFTOVERS.\p"
	.string "TERA STARSTORM.$"

RegionalVenue_EventScript_Kate_Text_20:
# 360 "data/maps/RegionalVenue/scripts.pory"
	.string "Quite the nice team honestly, but all\n"
	.string "the other dialoge about this fight is\l"
	.string "just references to the Pokémon anime,\l"
	.string "so I don't really want to break that\l"
	.string "trend...\p"
	.string "LEAFAGE LEAFAGE LEAFAGE LEAFAGE\n"
	.string "LEAFAGE LEAFAGE LEAFAGE LEAFAGE$"

RegionalVenue_EventScript_Kate_Text_21:
# 364 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: Congrats on making top cut :3\p"
	.string "I'd say the battles only get more\n"
	.string "serious now...\p"
	.string "...but this next opponent is more silly\n"
	.string "than anything.$"

RegionalVenue_EventScript_Kate_Text_22:
# 366 "data/maps/RegionalVenue/scripts.pory"
	.string "Who let the pensioner into top 16 :sob:$"

RegionalVenue_EventScript_Kate_Text_23:
# 370 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: NOW things are getting more\n"
	.string "serious.\p"
	.string "Enter Nebby:$"

RegionalVenue_EventScript_Kate_Text_24:
# 372 "data/maps/RegionalVenue/scripts.pory"
	.string "I'm sure you will quickly recognize this\n"
	.string "as a regional winning team.\p"
	.string "The biggest advantage you have is\n"
	.string "probably that everyone here is kinda\l"
	.string "playing like... AI?\p"
	.string "So complex speed control between Trick\n"
	.string "Room and Tailwind might be difficult for\l"
	.string "them to manage!$"

RegionalVenue_EventScript_Kate_Text_25:
# 376 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: Let's go!!!\p"
	.string "Not gonna celebrate too soon tho, let's\n"
	.string "get started on the prep instead!$"

RegionalVenue_EventScript_Kate_Text_26:
# 378 "data/maps/RegionalVenue/scripts.pory"
	.string "The trend of teams with proven strong\n"
	.string "tourney performance is keeping up I\l"
	.string "fear.\p"
	.string "This may well be the most difficult\n"
	.string "battle of the regional with how the\l"
	.string "trainers have been playing today...\p"
	.string "You're gonna see what I mean once you\n"
	.string "are in finals.\p"
	.string "So get there!$"

RegionalVenue_EventScript_Kate_Text_27:
# 382 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: One. More. Game.\p"
	.string "You can probably guess this already\n"
	.string "based on what restricted you haven't\l"
	.string "fought yet, but here it is...$"

RegionalVenue_EventScript_Kate_Text_28:
# 384 "data/maps/RegionalVenue/scripts.pory"
	.string "I'd love to give more advice here but...\n"
	.string "I think you should go into this without\l"
	.string "spoilers :P\p"
	.string "Good luck :3$"

RegionalVenue_EventScript_Kate_Text_29:
# 388 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: OMG YOU WON :33333333\p"
	.string "\p"
	.string "\p"
	.string "hi mathea :3\p"
	.string "I'm breaking the fourth wall here, it's\n"
	.string "like fully me out of the game speaking\l"
	.string "now fire emoji.\p"
	.string "I hope you didn't think there'd be this\n"
	.string "entire game, especially as a birthday\l"
	.string "present, without some sappy yapping\l"
	.string "involved tee hee...\p"
	.string "But first you have to defeat me in\n"
	.string "battle meowwwwwwwww!$"

RegionalVenue_EventScript_Kate_Text_30:
# 391 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: waow you are so cool...\p"
	.string "blushes deeply\p"
	.string "meows adoringly\p"
	.string "ANYSLAY.$"

RegionalVenue_EventScript_Kate_Text_31:
# 392 "data/maps/RegionalVenue/scripts.pory"
	.string "Actually typing this out right now\n"
	.string "feels a bit surreal.\p"
	.string "It's been over a month atp that I\n"
	.string "originally started the plans for this\l"
	.string "present, including the whole emotional\l"
	.string "yap at the end here.\p"
	.string "We obviously weren't back to dating yet\n"
	.string "at the time, so I was slightly worried\l"
	.string "about how sappy I could be LOL\p"
	.string "I'm very glad that is no longer a\n"
	.string "concern.\p"
	.string "I love you :3$"

RegionalVenue_EventScript_Kate_Text_32:
# 393 "data/maps/RegionalVenue/scripts.pory"
	.string "It's been a bit over a year now of us\n"
	.string "being close and like... wow. I have never\l"
	.string "met anyone who I vibe with this much;\l"
	.string "who I care about this deeply; who I am\l"
	.string "this comfortable around.\p"
	.string "Whose presence in my life makes me this\n"
	.string "happy :3\p"
	.string "I want to say that I hope there are\n"
	.string "many many more years to come that we\l"
	.string "get to experience together, but a world\l"
	.string "in which that isn't the case feels so\l"
	.string "unimaginable to me to begin with, that\l"
	.string "it's hard to even consider the\l"
	.string "possibility$"

RegionalVenue_EventScript_Kate_Text_33:
# 394 "data/maps/RegionalVenue/scripts.pory"
	.string "We've become a tad inseparable, dare I\n"
	.string "say :3\p"
	.string "I wouldn't have it any other way <3\p"
	.string "I have so many thoughts right now that\n"
	.string "I'm struggling to really express.\p"
	.string "The most important one is, that I adore\n"
	.string "you so much. Love you so much.\p"
	.string "It's why I'm always being so flirty :P\p"
	.string "I'm overflowing with affection for you,\n"
	.string "and need to express it.\p"
	.string "I want to make you happy, and I want\n"
	.string "you to always know that you are loved\l"
	.string "and cared for so deeply :3$"

RegionalVenue_EventScript_Kate_Text_34:
# 395 "data/maps/RegionalVenue/scripts.pory"
	.string "Life can be so scary and difficult\n"
	.string "sometimes, I'm sure you don't need me to\l"
	.string "tell you that.\p"
	.string "But I want to face that scariness with\n"
	.string "you by my side :3\p"
	.string "And I want to always stand by yours\n"
	.string "just the same, in whatever shape or\l"
	.string "form you need me to.\p"
	.string "My thoughts are getting a bit less\n"
	.string "coherent, I suppose writing this in the\l"
	.string "middle of the fluffing night will have\l"
	.string "that effect...$"

RegionalVenue_EventScript_Kate_Text_35:
# 396 "data/maps/RegionalVenue/scripts.pory"
	.string "I kinda just want to express more how\n"
	.string "much I just love having you in my life.\p"
	.string "You kinda just make everything better,\n"
	.string "it's so crazy.\p"
	.string "Everything good becomes even better\n"
	.string "when I get to share it with you, and\l"
	.string "everything bad gets more bearable with\l"
	.string "your support.\p"
	.string "It makes me so fluffing happy.\p"
	.string "It's what I want to have for the rest of\n"
	.string "my life.\p"
	.string "I want you for the rest of my life :P$"

RegionalVenue_EventScript_Kate_Text_36:
# 397 "data/maps/RegionalVenue/scripts.pory"
	.string "Sometimes it's almost scary, to feel\n"
	.string "this strongly about someone.\p"
	.string "But like I said before, I want to face\n"
	.string "that scariness with you by my side :3\p"
	.string "You make my life so much better just by\n"
	.string "being in it, and I want to experience it\l"
	.string "all with you, both the highs and the\l"
	.string "lows.\p"
	.string "I'm kinda just repeating myself at this\n"
	.string "point but like aaaaaaaaaa\p"
	.string "As a sappy yearner, how could I not\n"
	.string "keep rambling about you...$"

RegionalVenue_EventScript_Kate_Text_37:
# 398 "data/maps/RegionalVenue/scripts.pory"
	.string "About this incredible girl that came\n"
	.string "into my life a year ago, who is the\l"
	.string "coolest and most adorable person in the\l"
	.string "world, who makes everything in my life\l"
	.string "better by being a part of it, who I want\l"
	.string "to spend my entire life with <3\p"
	.string "Maybe I can express all this more\n"
	.string "coherently when I'm less tired and not\l"
	.string "writing it in Pokemon dialoge :sob:$"

RegionalVenue_EventScript_Kate_Text_38:
# 399 "data/maps/RegionalVenue/scripts.pory"
	.string "I definitely want to, because I want to\n"
	.string "tell you how much you mean to me and\l"
	.string "how much you are worth to me over and\l"
	.string "over and over and over and over and\l"
	.string "over again :3\p"
	.string "I think that was enough yap for like...\n"
	.string "this very moment of writing.\p"
	.string "Whenever you read this message me tho,\n"
	.string "I'll gladly take more opportunities to\l"
	.string "share my love for you :P\p"
	.string "Happy (very) late birthday again at this\n"
	.string "point btw. :3\p"
	.string "I'm really glad I made this rom hack.$"

RegionalVenue_EventScript_Kate_Text_39:
# 400 "data/maps/RegionalVenue/scripts.pory"
	.string "As much as it's a present for you, it\n"
	.string "also turned into a huge passion project\l"
	.string "of mine myself, that I loved working on.\p"
	.string "And I suppose in that way it is like so\n"
	.string "much else...\p"
	.string "A part of my life that I enjoy even more\n"
	.string "because I got to share it with you <3\p"
	.string "I love you so much, my princess :3$"

battleOutroKate::
# 408 "data/maps/RegionalVenue/scripts.pory"
	.string "I love you :3$"
