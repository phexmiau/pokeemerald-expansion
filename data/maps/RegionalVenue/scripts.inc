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
	end
# 9 "data/maps/RegionalVenue/scripts.pory"

# 10 "data/maps/RegionalVenue/scripts.pory"
RegionalVenue_EventScript_Nurse::
# 11 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_0x800B, LOCALID_VENUE_NURSE
# 12 "data/maps/RegionalVenue/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 14 "data/maps/RegionalVenue/scripts.pory"
	waitbuttonpress
# 15 "data/maps/RegionalVenue/scripts.pory"
	release
# 16 "data/maps/RegionalVenue/scripts.pory"
	end

RegionalVenue_EventScript_Clerk_Common::
# 20 "data/maps/RegionalVenue/scripts.pory"
	lock
# 21 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_0
# 22 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 23 "data/maps/RegionalVenue/scripts.pory"
	pokemart CommonMart
# 24 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 25 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Clerk_Uncommon::
# 29 "data/maps/RegionalVenue/scripts.pory"
	lock
# 30 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Uncommon_Text_0
# 31 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 32 "data/maps/RegionalVenue/scripts.pory"
	pokemart UncommonMart
# 33 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 34 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Clerk_Typeboost::
# 38 "data/maps/RegionalVenue/scripts.pory"
	lock
# 39 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Typeboost_Text_0
# 40 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 41 "data/maps/RegionalVenue/scripts.pory"
	pokemart TypeMart
# 42 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 43 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Clerk_Berries::
# 47 "data/maps/RegionalVenue/scripts.pory"
	lock
# 48 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Berries_Text_0
# 49 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 50 "data/maps/RegionalVenue/scripts.pory"
	pokemart BerryMart
# 51 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 52 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Clerk_Mints::
# 56 "data/maps/RegionalVenue/scripts.pory"
	lock
# 57 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Mints_Text_0
# 58 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 59 "data/maps/RegionalVenue/scripts.pory"
	pokemart MintMart
# 60 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 61 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Clerk_EVIVAbility::
# 65 "data/maps/RegionalVenue/scripts.pory"
	lock
# 66 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_EVIVAbility_Text_0
# 67 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 68 "data/maps/RegionalVenue/scripts.pory"
	pokemart StatMart
# 69 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 70 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Clerk_Tera::
# 74 "data/maps/RegionalVenue/scripts.pory"
	lock
# 75 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Tera_Text_0
# 76 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 77 "data/maps/RegionalVenue/scripts.pory"
	pokemart TeraMart
# 78 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Clerk_Common_Text_1
# 79 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Kartana::
# 83 "data/maps/RegionalVenue/scripts.pory"
	lock
# 84 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 85 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_KARTANA, CRY_MODE_ENCOUNTER
# 86 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kartana_Text_0, MSGBOX_AUTOCLOSE
# 87 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 88 "data/maps/RegionalVenue/scripts.pory"
	applymovement 14, RegionalVenue_EventScript_Kartana_Movement_0
# 89 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 90 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Mismagius::
# 94 "data/maps/RegionalVenue/scripts.pory"
	lock
# 95 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 96 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_MISMAGIUS, CRY_MODE_ENCOUNTER
# 97 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Mismagius_Text_0, MSGBOX_AUTOCLOSE
# 98 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 99 "data/maps/RegionalVenue/scripts.pory"
	applymovement 11, RegionalVenue_EventScript_Mismagius_Movement_0
# 100 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 101 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Altaria::
# 105 "data/maps/RegionalVenue/scripts.pory"
	lock
# 106 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 107 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_ALTARIA, CRY_MODE_ENCOUNTER
# 108 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Altaria_Text_0, MSGBOX_AUTOCLOSE
# 109 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 110 "data/maps/RegionalVenue/scripts.pory"
	applymovement 16, RegionalVenue_EventScript_Altaria_Movement_0
# 111 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 112 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Palafin::
# 116 "data/maps/RegionalVenue/scripts.pory"
	lock
# 117 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 118 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_PALAFIN_HERO, CRY_MODE_ENCOUNTER
# 119 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Palafin_Text_0, MSGBOX_AUTOCLOSE
# 120 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 121 "data/maps/RegionalVenue/scripts.pory"
	applymovement 18, RegionalVenue_EventScript_Altaria_Movement_0
# 122 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 123 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Charizard::
# 127 "data/maps/RegionalVenue/scripts.pory"
	lock
# 128 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 129 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 130 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Charizard_Text_0, MSGBOX_AUTOCLOSE
# 131 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 132 "data/maps/RegionalVenue/scripts.pory"
	applymovement 10, RegionalVenue_EventScript_Mismagius_Movement_0
# 133 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 134 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Meganium::
# 138 "data/maps/RegionalVenue/scripts.pory"
	lock
# 139 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 140 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_MEGANIUM, CRY_MODE_ENCOUNTER
# 141 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Meganium_Text_0, MSGBOX_AUTOCLOSE
# 142 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 143 "data/maps/RegionalVenue/scripts.pory"
	applymovement 15, RegionalVenue_EventScript_Mismagius_Movement_0
# 144 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 145 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Scolipede::
# 149 "data/maps/RegionalVenue/scripts.pory"
	lock
# 150 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 151 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_SCOLIPEDE, CRY_MODE_ENCOUNTER
# 152 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Scolipede_Text_0, MSGBOX_AUTOCLOSE
# 153 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 154 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Beedrill::
# 158 "data/maps/RegionalVenue/scripts.pory"
	lock
# 159 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 160 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_BEEDRILL, CRY_MODE_ENCOUNTER
# 161 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Beedrill_Text_0, MSGBOX_AUTOCLOSE
# 162 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 163 "data/maps/RegionalVenue/scripts.pory"
	applymovement 12, RegionalVenue_EventScript_Kartana_Movement_0
# 164 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 165 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Turtonator::
# 169 "data/maps/RegionalVenue/scripts.pory"
	lock
# 170 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 171 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_TURTONATOR, CRY_MODE_ENCOUNTER
# 172 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Turtonator_Text_0, MSGBOX_AUTOCLOSE
# 173 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 174 "data/maps/RegionalVenue/scripts.pory"
	applymovement 13, RegionalVenue_EventScript_Mismagius_Movement_0
# 175 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 176 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Painter::
# 180 "data/maps/RegionalVenue/scripts.pory"
	lock
# 181 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 182 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Painter_Text_0, MSGBOX_AUTOCLOSE
# 183 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 184 "data/maps/RegionalVenue/scripts.pory"
	applymovement 19, RegionalVenue_EventScript_Kartana_Movement_0
# 185 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 186 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Tucker::
# 190 "data/maps/RegionalVenue/scripts.pory"
	lock
# 191 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 192 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Tucker_Text_0
# 193 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 194 "data/maps/RegionalVenue/scripts.pory"
	pokemart SpecialMart
# 195 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Tucker_Text_1
# 196 "data/maps/RegionalVenue/scripts.pory"
	applymovement 21, RegionalVenue_EventScript_Mismagius_Movement_0
# 197 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 198 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Green::
# 202 "data/maps/RegionalVenue/scripts.pory"
	lock
# 203 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 204 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Green_Text_0, MSGBOX_AUTOCLOSE
# 205 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 206 "data/maps/RegionalVenue/scripts.pory"
	applymovement 20, RegionalVenue_EventScript_Mismagius_Movement_0
# 207 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 208 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Grunt::
# 212 "data/maps/RegionalVenue/scripts.pory"
	lock
# 213 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 214 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Grunt_Text_0, MSGBOX_AUTOCLOSE
# 215 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 216 "data/maps/RegionalVenue/scripts.pory"
	applymovement 23, RegionalVenue_EventScript_Altaria_Movement_0
# 217 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 218 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Red::
# 222 "data/maps/RegionalVenue/scripts.pory"
	lock
# 223 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 224 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Red_Text_0, MSGBOX_AUTOCLOSE
# 225 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 226 "data/maps/RegionalVenue/scripts.pory"
	applymovement 22, RegionalVenue_EventScript_Mismagius_Movement_0
# 227 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 228 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Beauty::
# 232 "data/maps/RegionalVenue/scripts.pory"
	lock
# 233 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 234 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Beauty_Text_0, MSGBOX_AUTOCLOSE
# 235 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 236 "data/maps/RegionalVenue/scripts.pory"
	applymovement 26, RegionalVenue_EventScript_Kartana_Movement_0
# 237 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 238 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Bugcatcher::
# 242 "data/maps/RegionalVenue/scripts.pory"
	lock
# 243 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 244 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Bugcatcher_Text_0, MSGBOX_AUTOCLOSE
# 245 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 246 "data/maps/RegionalVenue/scripts.pory"
	applymovement 24, RegionalVenue_EventScript_Bugcatcher_Movement_0
# 247 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 248 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Lucy::
# 252 "data/maps/RegionalVenue/scripts.pory"
	lock
# 253 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 254 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Lucy_Text_0, MSGBOX_AUTOCLOSE
# 255 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 256 "data/maps/RegionalVenue/scripts.pory"
	applymovement 25, RegionalVenue_EventScript_Mismagius_Movement_0
# 257 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 258 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Noland::
# 262 "data/maps/RegionalVenue/scripts.pory"
	lock
# 263 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 264 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Noland_Text_0, MSGBOX_AUTOCLOSE
# 265 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 266 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Noland_Text_1, MSGBOX_AUTOCLOSE
# 267 "data/maps/RegionalVenue/scripts.pory"
	applymovement 27, RegionalVenue_EventScript_Mismagius_Movement_0
# 268 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 269 "data/maps/RegionalVenue/scripts.pory"
	release
	return


RegionalVenue_EventScript_Kate::
# 273 "data/maps/RegionalVenue/scripts.pory"
	lock
# 274 "data/maps/RegionalVenue/scripts.pory"
	faceplayer
# 275 "data/maps/RegionalVenue/scripts.pory"
	playmoncry SPECIES_SPRIGATITO, CRY_MODE_ENCOUNTER
# 276 "data/maps/RegionalVenue/scripts.pory"
	switch VAR_REGIONAL_STATE
# 277 "data/maps/RegionalVenue/scripts.pory"
	case 0, RegionalVenue_EventScript_Kate_3
# 281 "data/maps/RegionalVenue/scripts.pory"
	case 1, RegionalVenue_EventScript_Kate_4
RegionalVenue_EventScript_Kate_1:
# 288 "data/maps/RegionalVenue/scripts.pory"
	applymovement 28, RegionalVenue_EventScript_Bugcatcher_Movement_0
# 289 "data/maps/RegionalVenue/scripts.pory"
	waitmovement
# 290 "data/maps/RegionalVenue/scripts.pory"
	release
	return

RegionalVenue_EventScript_Kate_3:
# 278 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_0
# 279 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 280 "data/maps/RegionalVenue/scripts.pory"
	setvar VAR_REGIONAL_STATE, 1
	goto RegionalVenue_EventScript_Kate_1

RegionalVenue_EventScript_Kate_4:
# 282 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_1
# 283 "data/maps/RegionalVenue/scripts.pory"
	showmonpic SPECIES_MEWTWO, 10, 3
# 284 "data/maps/RegionalVenue/scripts.pory"
	msgbox RegionalVenue_EventScript_Kate_Text_2, MSGBOX_AUTOCLOSE
# 285 "data/maps/RegionalVenue/scripts.pory"
	waitmessage
# 286 "data/maps/RegionalVenue/scripts.pory"
	hidemonpic
	goto RegionalVenue_EventScript_Kate_1


	.align 2
# 293 "data/maps/RegionalVenue/scripts.pory"
CommonMart:
# 294 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ABILITY_SHIELD
# 295 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 296 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 297 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 298 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 299 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 300 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 301 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 302 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 303 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_EVIOLITE
# 304 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 305 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 306 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 307 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 308 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 309 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 310 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 311 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 312 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 313 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 314 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_POWER_HERB
# 315 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 316 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 317 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 318 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_NONE

	.align 2
# 321 "data/maps/RegionalVenue/scripts.pory"
UncommonMart:
# 322 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 323 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 324 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 325 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 326 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 327 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 328 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 329 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 330 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 331 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 332 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 333 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 334 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 335 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 336 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 337 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 338 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_IRON_BALL
# 339 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 340 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 341 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 342 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_METRONOME
# 343 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 344 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 345 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 346 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 347 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 348 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 349 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 350 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RED_CARD
# 351 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RING_TARGET
# 352 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 353 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 354 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 355 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 356 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SNOWBALL
# 357 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 358 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 359 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 360 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 361 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 362 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 363 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 364 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

	.align 2
# 367 "data/maps/RegionalVenue/scripts.pory"
TypeMart:
# 368 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 369 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHARCOAL
# 370 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 371 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MAGNET
# 372 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 373 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 374 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 375 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_POISON_BARB
# 376 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 377 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 378 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 379 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 380 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HARD_STONE
# 381 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 382 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 383 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 384 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_METAL_COAT
# 385 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

	.align 2
# 388 "data/maps/RegionalVenue/scripts.pory"
BerryMart:
# 389 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 390 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 391 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 392 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 393 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 394 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 395 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 396 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 397 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 398 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 399 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 400 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 401 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 402 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 403 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 404 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 405 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 406 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 407 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 408 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 409 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 410 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 411 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 412 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 413 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 414 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 415 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 416 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 417 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 418 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 419 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 420 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
# 421 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 422 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 423 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 424 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 425 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 426 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 427 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 428 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 429 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 430 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 431 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 432 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 433 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 434 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 435 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_NONE

	.align 2
# 438 "data/maps/RegionalVenue/scripts.pory"
MintMart:
# 439 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 440 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 441 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 442 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 443 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 444 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 445 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_LAX_MINT
# 446 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 447 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 448 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MILD_MINT
# 449 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RASH_MINT
# 450 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 451 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CALM_MINT
# 452 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 453 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 454 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 455 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 456 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 457 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 458 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 459 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

	.align 2
# 462 "data/maps/RegionalVenue/scripts.pory"
StatMart:
# 463 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 464 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 465 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PP_MAX
# 466 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 467 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 468 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 469 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 470 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 471 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 472 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HP_UP
# 473 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PROTEIN
# 474 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_IRON
# 475 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CALCIUM
# 476 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ZINC
# 477 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CARBOS
# 478 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HP_MAX
# 479 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ATK_MAX
# 480 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_DEF_MAX
# 481 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SPATK_MAX
# 482 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SPDEF_MAX
# 483 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SPEED_MAX
# 484 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 485 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GOLD_BOTTLE_CAP
# 486 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_0_HP_BOTTLE_CAP
# 487 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_0_ATK_BOTTLE_CAP
# 488 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_0_DEF_BOTTLE_CAP
# 489 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_0_SPATK_BOTTLE_CAP
# 490 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_0_SPDEF_BOTTLE_CAP
# 491 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_0_SPEED_BOTTLE_CAP
# 492 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_P1_HP_BOTTLE_CAP
# 493 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_P1_ATK_BOTTLE_CAP
# 494 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_P1_DEF_BOTTLE_CAP
# 495 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_P1_SPATK_BOTTLE_CAP
# 496 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_P1_SPDEF_BOTTLE_CAP
# 497 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_P1_SPEED_BOTTLE_CAP
	.2byte ITEM_NONE

	.align 2
# 500 "data/maps/RegionalVenue/scripts.pory"
TeraMart:
# 501 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_BUG_TERA_SHARD
# 502 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_DARK_TERA_SHARD
# 503 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_DRAGON_TERA_SHARD
# 504 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ELECTRIC_TERA_SHARD
# 505 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FAIRY_TERA_SHARD
# 506 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FIGHTING_TERA_SHARD
# 507 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FIRE_TERA_SHARD
# 508 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_FLYING_TERA_SHARD
# 509 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GHOST_TERA_SHARD
# 510 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GRASS_TERA_SHARD
# 511 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_GROUND_TERA_SHARD
# 512 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ICE_TERA_SHARD
# 513 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 514 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_POISON_TERA_SHARD
# 515 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_PSYCHIC_TERA_SHARD
# 516 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_ROCK_TERA_SHARD
# 517 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_STEEL_TERA_SHARD
# 518 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WATER_TERA_SHARD
# 519 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_STELLAR_TERA_SHARD
	.2byte ITEM_NONE

	.align 2
# 522 "data/maps/RegionalVenue/scripts.pory"
SpecialMart:
# 523 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_MEGA_RING
# 524 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 525 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 526 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 527 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 528 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_CORNERSTONE_MASK
# 529 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_HEARTHFLAME_MASK
# 530 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_WELLSPRING_MASK
# 531 "data/maps/RegionalVenue/scripts.pory"
	.2byte ITEM_REVEAL_GLASS
	.2byte ITEM_NONE

# 88 "data/maps/RegionalVenue/scripts.pory"
RegionalVenue_EventScript_Kartana_Movement_0:
# 88 "data/maps/RegionalVenue/scripts.pory"
	face_down
	step_end

# 99 "data/maps/RegionalVenue/scripts.pory"
RegionalVenue_EventScript_Mismagius_Movement_0:
# 99 "data/maps/RegionalVenue/scripts.pory"
	face_left
	step_end

# 110 "data/maps/RegionalVenue/scripts.pory"
RegionalVenue_EventScript_Altaria_Movement_0:
# 110 "data/maps/RegionalVenue/scripts.pory"
	face_right
	step_end

# 246 "data/maps/RegionalVenue/scripts.pory"
RegionalVenue_EventScript_Bugcatcher_Movement_0:
# 246 "data/maps/RegionalVenue/scripts.pory"
	face_up
	step_end

RegionalVenue_EventScript_Clerk_Common_Text_0:
# 21 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy COMMONLY HELD items here!$"

RegionalVenue_EventScript_Clerk_Common_Text_1:
# 24 "data/maps/RegionalVenue/scripts.pory"
	.string "Come again soon.$"

RegionalVenue_EventScript_Clerk_Uncommon_Text_0:
# 30 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy UNCOMMONLY HELD items\n"
	.string "here!$"

RegionalVenue_EventScript_Clerk_Typeboost_Text_0:
# 39 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy TYPE-BOOSTING items here!$"

RegionalVenue_EventScript_Clerk_Berries_Text_0:
# 48 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy BERRIES here!$"

RegionalVenue_EventScript_Clerk_Mints_Text_0:
# 57 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy MINTS here!$"

RegionalVenue_EventScript_Clerk_EVIVAbility_Text_0:
# 66 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy STAT ITEMS here!$"

RegionalVenue_EventScript_Clerk_Tera_Text_0:
# 75 "data/maps/RegionalVenue/scripts.pory"
	.string "You can buy TERA SHARDS here!$"

RegionalVenue_EventScript_Kartana_Text_0:
# 86 "data/maps/RegionalVenue/scripts.pory"
	.string "Tana-tana!$"

RegionalVenue_EventScript_Mismagius_Text_0:
# 97 "data/maps/RegionalVenue/scripts.pory"
	.string "Magius...$"

RegionalVenue_EventScript_Altaria_Text_0:
# 108 "data/maps/RegionalVenue/scripts.pory"
	.string "Laaaaa!$"

RegionalVenue_EventScript_Palafin_Text_0:
# 119 "data/maps/RegionalVenue/scripts.pory"
	.string "Pala.$"

RegionalVenue_EventScript_Charizard_Text_0:
# 130 "data/maps/RegionalVenue/scripts.pory"
	.string "Zrrrrd...$"

RegionalVenue_EventScript_Meganium_Text_0:
# 141 "data/maps/RegionalVenue/scripts.pory"
	.string "Mgaaa!$"

RegionalVenue_EventScript_Scolipede_Text_0:
# 152 "data/maps/RegionalVenue/scripts.pory"
	.string "Scoliiii...$"

RegionalVenue_EventScript_Beedrill_Text_0:
# 161 "data/maps/RegionalVenue/scripts.pory"
	.string "Bzzzzzz.$"

RegionalVenue_EventScript_Turtonator_Text_0:
# 172 "data/maps/RegionalVenue/scripts.pory"
	.string "Naatrrr...$"

RegionalVenue_EventScript_Painter_Text_0:
# 182 "data/maps/RegionalVenue/scripts.pory"
	.string "I've traveled to distant dimensions to\n"
	.string "search for the best competitive team...\l"
	.string "And then I learned some Ultra Beast\l"
	.string "just resides on the routes before this\l"
	.string "venue???$"

RegionalVenue_EventScript_Tucker_Text_0:
# 192 "data/maps/RegionalVenue/scripts.pory"
	.string "Hehehe I'm such a mysterious person...$"

RegionalVenue_EventScript_Tucker_Text_1:
# 195 "data/maps/RegionalVenue/scripts.pory"
	.string "Bet you didn't expect me to own all of\n"
	.string "these >:)$"

RegionalVenue_EventScript_Green_Text_0:
# 204 "data/maps/RegionalVenue/scripts.pory"
	.string "Altaria and I flew here all the way from\n"
	.string "Hoenn.\p"
	.string "We have won a bunch of Pokémon\n"
	.string "contests back home, but this is our\l"
	.string "first VGC regional!$"

RegionalVenue_EventScript_Grunt_Text_0:
# 214 "data/maps/RegionalVenue/scripts.pory"
	.string "Argh... I thought this Charizard would\n"
	.string "be easy pickings with my type\l"
	.string "advantage, but it just pulled out a\l"
	.string "Thunder Punch!?$"

RegionalVenue_EventScript_Red_Text_0:
# 224 "data/maps/RegionalVenue/scripts.pory"
	.string "...$"

RegionalVenue_EventScript_Beauty_Text_0:
# 234 "data/maps/RegionalVenue/scripts.pory"
	.string "Meganium is such a kind Pokémon, that\n"
	.string "it's more focused on the flowers here\l"
	.string "than getting ready for battle.\l"
	.string "It kind of reminds me of a fairy in that\l"
	.string "way...$"

RegionalVenue_EventScript_Bugcatcher_Text_0:
# 244 "data/maps/RegionalVenue/scripts.pory"
	.string "I'm so excited to compete here with my\n"
	.string "Beedrill!\p"
	.string "I met it as a Weedle back when I was a\n"
	.string "child, and it's been my best friend\l"
	.string "since.$"

RegionalVenue_EventScript_Lucy_Text_0:
# 254 "data/maps/RegionalVenue/scripts.pory"
	.string "Phew... barely made it here in time for\n"
	.string "the regional's start time.\l"
	.string "Me and Scolipede got caught up setting\l"
	.string "fire to police cars on the way here.$"

RegionalVenue_EventScript_Noland_Text_0:
# 264 "data/maps/RegionalVenue/scripts.pory"
	.string "Yawnnnnnnnn. Not a single strong\n"
	.string "trainer in sight here, this is gonna be\l"
	.string "so easy for a pro like me!$"

RegionalVenue_EventScript_Noland_Text_1:
# 266 "data/maps/RegionalVenue/scripts.pory"
	.string "(Developer's Note: He is about to exit\n"
	.string "0-2)$"

RegionalVenue_EventScript_Kate_Text_0:
# 278 "data/maps/RegionalVenue/scripts.pory"
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
# 282 "data/maps/RegionalVenue/scripts.pory"
	.string "KATE: Okok so I looked at the first\n"
	.string "round draw and it seems your opponent\l"
	.string "is running a... MEWTWO???$"

RegionalVenue_EventScript_Kate_Text_2:
# 284 "data/maps/RegionalVenue/scripts.pory"
	.string "You're definitely going to have to be on\n"
	.string "the lookout for a bit of Psyspam it\l"
	.string "seems...$"
