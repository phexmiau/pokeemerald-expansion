# 1 "data/maps/BattleArea/scripts.pory"

# 2 "data/maps/BattleArea/scripts.pory"
BattleArea_MapScripts::
# 3 "data/maps/BattleArea/scripts.pory"
	.byte 0

BattleArea_EventScript_Deoxys::
# 15 "data/maps/BattleArea/scripts.pory"
	lock
# 16 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 17 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 18 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Deoxys_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 20 "data/maps/BattleArea/scripts.pory"
	applymovement 6, BattleArea_EventScript_Deoxys_Movement_0
# 21 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 22 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Judge::
# 26 "data/maps/BattleArea/scripts.pory"
	lock
# 27 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 28 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Judge_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 30 "data/maps/BattleArea/scripts.pory"
	applymovement 8, BattleArea_EventScript_Judge_Movement_0
# 31 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 32 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Maid::
# 36 "data/maps/BattleArea/scripts.pory"
	lock
# 37 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Maid_Text_0, MSGBOX_AUTOCLOSE
# 38 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 39 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 40 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_OldWoman::
# 44 "data/maps/BattleArea/scripts.pory"
	lock
# 45 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 46 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_OldWoman_Text_0
# 47 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 48 "data/maps/BattleArea/scripts.pory"
	applymovement 9, BattleArea_EventScript_OldWoman_Movement_0
# 49 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 50 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_OldWoman_Text_1, MSGBOX_AUTOCLOSE
# 51 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 52 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Sidney::
# 56 "data/maps/BattleArea/scripts.pory"
	lock
# 57 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 58 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Sidney_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 60 "data/maps/BattleArea/scripts.pory"
	applymovement 7, BattleArea_EventScript_Deoxys_Movement_0
# 61 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 62 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Phoebe::
# 66 "data/maps/BattleArea/scripts.pory"
	lock
# 67 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Phoebe_Text_0, MSGBOX_AUTOCLOSE
# 68 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 69 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Anabel::
# 73 "data/maps/BattleArea/scripts.pory"
	lock
# 74 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Anabel_Text_0, MSGBOX_AUTOCLOSE
# 75 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 76 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Greta::
# 80 "data/maps/BattleArea/scripts.pory"
	lock
# 81 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 82 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Greta_Text_0, MSGBOX_AUTOCLOSE
# 83 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 84 "data/maps/BattleArea/scripts.pory"
	applymovement 1, BattleArea_EventScript_OldWoman_Movement_0
# 85 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 86 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Spenser::
# 90 "data/maps/BattleArea/scripts.pory"
	lock
# 91 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 92 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Spenser_Text_0, MSGBOX_AUTOCLOSE
# 93 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 94 "data/maps/BattleArea/scripts.pory"
	applymovement 3, BattleArea_EventScript_Judge_Movement_0
# 95 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 96 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Brandon::
# 100 "data/maps/BattleArea/scripts.pory"
	lock
# 101 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 102 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Brandon_Text_0, MSGBOX_AUTOCLOSE
# 103 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 104 "data/maps/BattleArea/scripts.pory"
	applymovement 2, BattleArea_EventScript_Judge_Movement_0
# 105 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 106 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Zoroark::
# 110 "data/maps/BattleArea/scripts.pory"
	lock
# 111 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 112 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_ZOROARK, CRY_MODE_ENCOUNTER
# 113 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Zoroark_Text_0, MSGBOX_AUTOCLOSE
# 114 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 115 "data/maps/BattleArea/scripts.pory"
	applymovement 13, BattleArea_EventScript_Deoxys_Movement_0
# 116 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 117 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Roserade::
# 121 "data/maps/BattleArea/scripts.pory"
	lock
# 122 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_ROSERADE, CRY_MODE_ENCOUNTER
# 123 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Roserade_Text_0, MSGBOX_AUTOCLOSE
# 124 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 125 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Spiritomb::
# 129 "data/maps/BattleArea/scripts.pory"
	lock
# 130 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 131 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, CRY_MODE_ENCOUNTER
# 132 "data/maps/BattleArea/scripts.pory"
	message BattleArea_EventScript_Spiritomb_Text_0
# 133 "data/maps/BattleArea/scripts.pory"
	delay 35
# 134 "data/maps/BattleArea/scripts.pory"
	fadeoutbgm 0
# 135 "data/maps/BattleArea/scripts.pory"
	delay 15
# 136 "data/maps/BattleArea/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, FALSE
# 137 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 138 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, CRY_MODE_ENCOUNTER
# 139 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/BattleArea/scripts.pory"
	removeobject 7
# 141 "data/maps/BattleArea/scripts.pory"
	removeobject 13
# 142 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 143 "data/maps/BattleArea/scripts.pory"
	message BattleArea_EventScript_Spiritomb_Text_1
# 144 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 145 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, CRY_MODE_ENCOUNTER
# 146 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 147 "data/maps/BattleArea/scripts.pory"
	removeobject 4
# 148 "data/maps/BattleArea/scripts.pory"
	removeobject 5
# 149 "data/maps/BattleArea/scripts.pory"
	removeobject 10
# 150 "data/maps/BattleArea/scripts.pory"
	removeobject 11
# 151 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 152 "data/maps/BattleArea/scripts.pory"
	message BattleArea_EventScript_Spiritomb_Text_2
# 153 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 154 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, CRY_MODE_ENCOUNTER
# 155 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 156 "data/maps/BattleArea/scripts.pory"
	removeobject 8
# 157 "data/maps/BattleArea/scripts.pory"
	applymovement 6, BattleArea_EventScript_Judge_Movement_0
# 158 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 159 "data/maps/BattleArea/scripts.pory"
	message BattleArea_EventScript_Spiritomb_Text_2
# 160 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 161 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, CRY_MODE_ENCOUNTER
# 162 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 163 "data/maps/BattleArea/scripts.pory"
	removeobject 16
# 164 "data/maps/BattleArea/scripts.pory"
	removeobject 15
# 165 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 166 "data/maps/BattleArea/scripts.pory"
	message BattleArea_EventScript_Spiritomb_Text_2
# 167 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 168 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, CRY_MODE_ENCOUNTER
# 169 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 170 "data/maps/BattleArea/scripts.pory"
	closemessage
# 171 "data/maps/BattleArea/scripts.pory"
	removeobject 9
# 172 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 173 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Spiritomb_Text_2
# 174 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Spiritomb_Text_2
# 175 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Spiritomb_Text_2, MSGBOX_AUTOCLOSE
# 176 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 177 "data/maps/BattleArea/scripts.pory"
	delay 90
# 178 "data/maps/BattleArea/scripts.pory"
	fadeoutbgm 0
# 191 "data/maps/BattleArea/scripts.pory"
	applymovement 14, BattleArea_EventScript_Spiritomb_Movement_0
# 192 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 193 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 194 "data/maps/BattleArea/scripts.pory"
	addobject 7
# 195 "data/maps/BattleArea/scripts.pory"
	addobject 13
# 196 "data/maps/BattleArea/scripts.pory"
	addobject 4
# 197 "data/maps/BattleArea/scripts.pory"
	addobject 5
# 198 "data/maps/BattleArea/scripts.pory"
	addobject 10
# 199 "data/maps/BattleArea/scripts.pory"
	addobject 11
# 200 "data/maps/BattleArea/scripts.pory"
	addobject 8
# 201 "data/maps/BattleArea/scripts.pory"
	addobject 16
# 202 "data/maps/BattleArea/scripts.pory"
	addobject 15
# 203 "data/maps/BattleArea/scripts.pory"
	addobject 9
# 204 "data/maps/BattleArea/scripts.pory"
	applymovement 6, BattleArea_EventScript_Deoxys_Movement_0
# 205 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 206 "data/maps/BattleArea/scripts.pory"
	playbgm MUS_VICTORY_ROAD, FALSE
# 207 "data/maps/BattleArea/scripts.pory"
	delay 90
# 208 "data/maps/BattleArea/scripts.pory"
	fadeinbgm 1
# 209 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Spiritomb_Text_3, MSGBOX_AUTOCLOSE
# 210 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_UmbreonEspeon::
# 214 "data/maps/BattleArea/scripts.pory"
	lock
# 215 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_UMBREON, CRY_MODE_ENCOUNTER
# 216 "data/maps/BattleArea/scripts.pory"
	waitmoncry
# 217 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_ESPEON, CRY_MODE_ENCOUNTER
# 218 "data/maps/BattleArea/scripts.pory"
	waitmoncry
# 219 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_UmbreonEspeon_Text_0, MSGBOX_AUTOCLOSE
# 220 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 221 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Rapidash::
# 225 "data/maps/BattleArea/scripts.pory"
	lock
# 226 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 227 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_RAPIDASH_GALAR, CRY_MODE_ENCOUNTER
# 228 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Rapidash_Text_0, MSGBOX_AUTOCLOSE
# 229 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 230 "data/maps/BattleArea/scripts.pory"
	applymovement 12, BattleArea_EventScript_OldWoman_Movement_0
# 231 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 232 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round1::
# 236 "data/maps/BattleArea/scripts.pory"
	lock
# 237 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 238 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round1_Text_0, MSGBOX_AUTOCLOSE
# 239 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 240 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND1, BattleArea_EventScript_Round1_Movement_0
# 241 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 242 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round2::
# 246 "data/maps/BattleArea/scripts.pory"
	lock
# 247 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 248 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round2_Text_0, MSGBOX_AUTOCLOSE
# 249 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 250 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND2, BattleArea_EventScript_Round1_Movement_0
# 251 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 252 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round3::
# 256 "data/maps/BattleArea/scripts.pory"
	lock
# 257 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 258 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round3_Text_0, MSGBOX_AUTOCLOSE
# 259 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 260 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND3, BattleArea_EventScript_Round1_Movement_0
# 261 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 262 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round4::
# 266 "data/maps/BattleArea/scripts.pory"
	lock
# 267 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 268 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round4_Text_0, MSGBOX_AUTOCLOSE
# 269 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 270 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND4, BattleArea_EventScript_Round1_Movement_0
# 271 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 272 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round5::
# 276 "data/maps/BattleArea/scripts.pory"
	lock
# 277 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 278 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round5_Text_0
# 279 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round5_Text_1, MSGBOX_AUTOCLOSE
# 280 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 281 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND5, BattleArea_EventScript_Round1_Movement_0
# 282 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 283 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round6::
# 287 "data/maps/BattleArea/scripts.pory"
	lock
# 288 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 289 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round6_Text_0, MSGBOX_AUTOCLOSE
# 290 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 291 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND6, BattleArea_EventScript_Round1_Movement_0
# 292 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 293 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round7::
# 297 "data/maps/BattleArea/scripts.pory"
	lock
# 298 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 299 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round7_Text_0, MSGBOX_AUTOCLOSE
# 300 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 301 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND7, BattleArea_EventScript_Round1_Movement_0
# 302 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 303 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round8::
# 307 "data/maps/BattleArea/scripts.pory"
	lock
# 308 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 309 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round8_Text_0, MSGBOX_AUTOCLOSE
# 310 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 311 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND8, BattleArea_EventScript_Round1_Movement_0
# 312 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 313 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round9::
# 317 "data/maps/BattleArea/scripts.pory"
	lock
# 318 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 319 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round9_Text_0, MSGBOX_AUTOCLOSE
# 320 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 321 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND9, BattleArea_EventScript_Round1_Movement_0
# 322 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 323 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round10::
# 327 "data/maps/BattleArea/scripts.pory"
	lock
# 328 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 329 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round10_Text_0, MSGBOX_AUTOCLOSE
# 330 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 331 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND10, BattleArea_EventScript_Round1_Movement_0
# 332 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 333 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round11::
# 337 "data/maps/BattleArea/scripts.pory"
	lock
# 338 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 339 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round11_Text_0, MSGBOX_AUTOCLOSE
# 340 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 341 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND11, BattleArea_EventScript_Round1_Movement_0
# 342 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 343 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round12::
# 347 "data/maps/BattleArea/scripts.pory"
	lock
# 348 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 349 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round12_Text_0, MSGBOX_AUTOCLOSE
# 350 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 351 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND12, BattleArea_EventScript_Round1_Movement_0
# 352 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 353 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round13::
# 357 "data/maps/BattleArea/scripts.pory"
	lock
# 358 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 359 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round13_Text_0, MSGBOX_AUTOCLOSE
# 360 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 361 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND13, BattleArea_EventScript_Round1_Movement_0
# 362 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 363 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round14::
# 367 "data/maps/BattleArea/scripts.pory"
	lock
# 368 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 369 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round14_Text_0, MSGBOX_AUTOCLOSE
# 370 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 371 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_ROUND14, BattleArea_EventScript_Round1_Movement_0
# 372 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 373 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArena_EventScript_Start_Battle::
# 377 "data/maps/BattleArea/scripts.pory"
	lockall
# 378 "data/maps/BattleArea/scripts.pory"
	compare VAR_CAN_REGIONAL_BATTLE, 1
	goto_if_eq BattleArena_EventScript_Start_Battle_2
BattleArena_EventScript_Start_Battle_1:
# 634 "data/maps/BattleArea/scripts.pory"
	releaseall
	return

BattleArena_EventScript_Start_Battle_2:
# 379 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_PLAYER, BattleArea_EventScript_OldWoman_Movement_0
# 380 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_0, MSGBOX_YESNO
# 381 "data/maps/BattleArea/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleArena_EventScript_Start_Battle_4
# 630 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_PLAYER, BattleArena_EventScript_Start_Battle_Movement_2
# 631 "data/maps/BattleArea/scripts.pory"
	waitmovement
	goto BattleArena_EventScript_Start_Battle_1

BattleArena_EventScript_Start_Battle_4:
# 382 "data/maps/BattleArea/scripts.pory"
	special HealPlayerParty
# 383 "data/maps/BattleArea/scripts.pory"
	switch VAR_REGIONAL_STATE
# 384 "data/maps/BattleArea/scripts.pory"
	case 0, BattleArena_EventScript_Start_Battle_9
# 400 "data/maps/BattleArea/scripts.pory"
	case 1, BattleArena_EventScript_Start_Battle_10
# 416 "data/maps/BattleArea/scripts.pory"
	case 2, BattleArena_EventScript_Start_Battle_11
# 432 "data/maps/BattleArea/scripts.pory"
	case 3, BattleArena_EventScript_Start_Battle_12
# 448 "data/maps/BattleArea/scripts.pory"
	case 4, BattleArena_EventScript_Start_Battle_13
# 464 "data/maps/BattleArea/scripts.pory"
	case 5, BattleArena_EventScript_Start_Battle_14
# 480 "data/maps/BattleArea/scripts.pory"
	case 6, BattleArena_EventScript_Start_Battle_15
# 496 "data/maps/BattleArea/scripts.pory"
	case 7, BattleArena_EventScript_Start_Battle_16
# 512 "data/maps/BattleArea/scripts.pory"
	case 8, BattleArena_EventScript_Start_Battle_17
# 528 "data/maps/BattleArea/scripts.pory"
	case 9, BattleArena_EventScript_Start_Battle_18
# 544 "data/maps/BattleArea/scripts.pory"
	case 10, BattleArena_EventScript_Start_Battle_19
# 560 "data/maps/BattleArea/scripts.pory"
	case 11, BattleArena_EventScript_Start_Battle_20
# 576 "data/maps/BattleArea/scripts.pory"
	case 12, BattleArena_EventScript_Start_Battle_21
# 592 "data/maps/BattleArea/scripts.pory"
	case 13, BattleArena_EventScript_Start_Battle_22
# 608 "data/maps/BattleArea/scripts.pory"
	case 14, BattleArena_EventScript_Start_Battle_23
BattleArena_EventScript_Start_Battle_7:
# 625 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 626 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_1
# 627 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 628 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
	goto BattleArena_EventScript_Start_Battle_1

BattleArena_EventScript_Start_Battle_9:
# 385 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 386 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 387 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 388 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_1
# 389 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 390 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 391 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_YUKI, battleOutroR1
# 392 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_2, MSGBOX_AUTOCLOSE
# 393 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 394 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_1
# 395 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 396 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 2
# 397 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 398 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND1
# 399 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_10:
# 401 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 402 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 403 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 404 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_1
# 405 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 406 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 407 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_YUKI, battleOutroR1
# 408 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_2, MSGBOX_AUTOCLOSE
# 409 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 410 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_1
# 411 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 412 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 2
# 413 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 414 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND1
# 415 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_11:
# 417 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 418 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 419 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 420 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_3
# 421 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 422 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 423 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_ZAC, battleOutroR2
# 424 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_4, MSGBOX_AUTOCLOSE
# 425 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 426 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_2
# 427 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 428 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 3
# 429 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 430 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND2
# 431 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_12:
# 433 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 434 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 435 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 436 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_5
# 437 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 438 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 439 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_JASMINE, battleOutroR3
# 440 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_6, MSGBOX_AUTOCLOSE
# 441 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 442 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_3
# 443 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 444 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 4
# 445 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 446 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND3
# 447 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_13:
# 449 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 450 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 451 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 452 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_7
# 453 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 454 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 455 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_FREAK, battleOutroR4
# 456 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_8, MSGBOX_AUTOCLOSE
# 457 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 458 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_4
# 459 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 460 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 5
# 461 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 462 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND4
# 463 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_14:
# 465 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 466 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 467 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 468 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_9
# 469 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 470 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 471 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_NIKITA, battleOutroR5
# 472 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_10, MSGBOX_AUTOCLOSE
# 473 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 474 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_5
# 475 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 476 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 6
# 477 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 478 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND5
# 479 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_15:
# 481 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 482 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 483 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 484 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_11
# 485 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 486 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 487 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_THOMAS_R, battleOutroR6
# 488 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_12, MSGBOX_AUTOCLOSE
# 489 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 490 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_6
# 491 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 492 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 7
# 493 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 494 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND6
# 495 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_16:
# 497 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 498 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 499 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 500 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_13
# 501 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 502 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 503 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_JORGE, battleOutroR7
# 504 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_14, MSGBOX_AUTOCLOSE
# 505 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 506 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_7
# 507 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 508 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 8
# 509 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 510 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND7
# 511 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_17:
# 513 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 514 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 515 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 516 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_15
# 517 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 518 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 519 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_TYLER, battleOutroR8
# 520 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_16, MSGBOX_AUTOCLOSE
# 521 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 522 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_8
# 523 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 524 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 9
# 525 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 526 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND8
# 527 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_18:
# 529 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 530 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 531 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 532 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_17
# 533 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 534 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 535 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_DANIE, battleOutroR9
# 536 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_18, MSGBOX_AUTOCLOSE
# 537 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 538 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_9
# 539 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 540 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 10
# 541 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 542 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND9
# 543 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_19:
# 545 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 546 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 547 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 548 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_19
# 549 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 550 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 551 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_NOREDIA, battleOutroR10
# 552 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_20, MSGBOX_AUTOCLOSE
# 553 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 554 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_10
# 555 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 556 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 11
# 557 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 558 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND10
# 559 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_20:
# 561 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 562 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 563 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 564 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_21
# 565 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 566 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 567 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_ENRIQUE, battleOutroR11
# 568 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_22, MSGBOX_AUTOCLOSE
# 569 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 570 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_11
# 571 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 572 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 12
# 573 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 574 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND11
# 575 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_21:
# 577 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 578 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 579 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 580 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_23
# 581 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 582 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 583 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_BEHZAD, battleOutroR12
# 584 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_24, MSGBOX_AUTOCLOSE
# 585 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 586 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_12
# 587 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 588 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 13
# 589 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 590 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND12
# 591 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_22:
# 593 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 594 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 595 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 596 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_25
# 597 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 598 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 599 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_DYL, battleOutroR13
# 600 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_26, MSGBOX_AUTOCLOSE
# 601 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 602 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_13
# 603 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 604 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 14
# 605 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 606 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND13
# 607 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7

BattleArena_EventScript_Start_Battle_23:
# 609 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 610 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 611 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 612 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_27
# 613 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 614 "data/maps/BattleArea/scripts.pory"
	special RemoveCameraObject
# 615 "data/maps/BattleArea/scripts.pory"
	trainerbattle_no_intro TRAINER_WOLFEY, battleOutroR14
# 616 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_28, MSGBOX_AUTOCLOSE
# 617 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 618 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_14
# 619 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 620 "data/maps/BattleArea/scripts.pory"
	setvar VAR_REGIONAL_STATE, 15
# 621 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 622 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND14
# 623 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_7


# 20 "data/maps/BattleArea/scripts.pory"
BattleArea_EventScript_Deoxys_Movement_0:
# 20 "data/maps/BattleArea/scripts.pory"
	face_right
	step_end

# 30 "data/maps/BattleArea/scripts.pory"
BattleArea_EventScript_Judge_Movement_0:
# 30 "data/maps/BattleArea/scripts.pory"
	face_left
	step_end

# 48 "data/maps/BattleArea/scripts.pory"
BattleArea_EventScript_OldWoman_Movement_0:
# 48 "data/maps/BattleArea/scripts.pory"
	face_up
	step_end

# 191 "data/maps/BattleArea/scripts.pory"
BattleArea_EventScript_Spiritomb_Movement_0:
# 191 "data/maps/BattleArea/scripts.pory"
	walk_in_place_faster_up
	step_end

# 240 "data/maps/BattleArea/scripts.pory"
BattleArea_EventScript_Round1_Movement_0:
# 240 "data/maps/BattleArea/scripts.pory"
	face_down
	step_end

# 386 "data/maps/BattleArea/scripts.pory"
BattleArena_EventScript_Start_Battle_Movement_0:
# 386 "data/maps/BattleArea/scripts.pory"
	walk_up
# 386 "data/maps/BattleArea/scripts.pory"
	walk_up
	step_end

# 626 "data/maps/BattleArea/scripts.pory"
BattleArena_EventScript_Start_Battle_Movement_1:
# 626 "data/maps/BattleArea/scripts.pory"
	walk_down
# 626 "data/maps/BattleArea/scripts.pory"
	walk_down
	step_end

# 630 "data/maps/BattleArea/scripts.pory"
BattleArena_EventScript_Start_Battle_Movement_2:
# 630 "data/maps/BattleArea/scripts.pory"
	walk_down
	step_end

BattleArea_EventScript_Deoxys_Text_0:
# 18 "data/maps/BattleArea/scripts.pory"
	.string "(Hello Human.)\l"
	.string "(Surprised you can understand me?)\p"
	.string "(I've come to spectate these games.\n"
	.string "Please make it worth my time.)$"

BattleArea_EventScript_Judge_Text_0:
# 28 "data/maps/BattleArea/scripts.pory"
	.string "Please don't interrupt me right now.\n"
	.string "I am the judge for this ongoing match.$"

BattleArea_EventScript_Maid_Text_0:
# 37 "data/maps/BattleArea/scripts.pory"
	.string "ROSERADE!\l"
	.string "USE MAGICAL LEAF OVER AND OVER!$"

BattleArea_EventScript_OldWoman_Text_0:
# 46 "data/maps/BattleArea/scripts.pory"
	.string "It's nice to see the youth go all out\n"
	.string "like this...$"

BattleArea_EventScript_OldWoman_Text_1:
# 50 "data/maps/BattleArea/scripts.pory"
	.string "But I didn't collect these spirits for\n"
	.string "nothing! Go Spiritomb!$"

BattleArea_EventScript_Sidney_Text_0:
# 58 "data/maps/BattleArea/scripts.pory"
	.string "I still don't fully get why this is called\n"
	.string "Regulation R...\l"
	.string "I heard it stands for something like\l"
	.string "Romhack Limitations?\l"
	.string "BUT WHAT DOES THAT EVEN MEAN?$"

BattleArea_EventScript_Phoebe_Text_0:
# 67 "data/maps/BattleArea/scripts.pory"
	.string "Woah this match is getting so close!!!$"

BattleArea_EventScript_Anabel_Text_0:
# 74 "data/maps/BattleArea/scripts.pory"
	.string "Honey, it's still a 5 vs 2...$"

BattleArea_EventScript_Greta_Text_0:
# 82 "data/maps/BattleArea/scripts.pory"
	.string "Having matches both accessible in\n"
	.string "person and on these screens is\l"
	.string "soooooooo faboulos... fabolus...\l"
	.string "fabulus...\p"
	.string "(Developer's Note: HOW THE FUCK DO YOU\n"
	.string "SPELL THIS WORD)$"

BattleArea_EventScript_Spenser_Text_0:
# 92 "data/maps/BattleArea/scripts.pory"
	.string "Watching battles like this really brings\n"
	.string "me back.\l"
	.string "You might not believe it looking at this\l"
	.string "old bag of bones, but I used to be the\l"
	.string "champion myself back in my glory days...$"

BattleArea_EventScript_Brandon_Text_0:
# 102 "data/maps/BattleArea/scripts.pory"
	.string "Don't mind my grampa.\n"
	.string "He loves telling his stories while\l"
	.string "forgetting to mention he has only ever\l"
	.string "competed in a 5 person co-worker\l"
	.string "league...$"

BattleArea_EventScript_Zoroark_Text_0:
# 113 "data/maps/BattleArea/scripts.pory"
	.string "Zoroaaa...$"

BattleArea_EventScript_Roserade_Text_0:
# 123 "data/maps/BattleArea/scripts.pory"
	.string "Raaaadeee.$"

BattleArea_EventScript_Spiritomb_Text_0:
# 132 "data/maps/BattleArea/scripts.pory"
	.string "COLLECT MY SPIRITS COLLECT MY SPIRITS COLLECT MY SPIRITS COLLECT MY SPIÖI  Ä  S COL CT lMY SPäR   IcTS  COLLöCT  l  ÄS     MY  IlRI S$"

BattleArea_EventScript_Spiritomb_Text_1:
# 143 "data/maps/BattleArea/scripts.pory"
	.string "COLLeClMY SPIrÄTS COzL CTl MY SPiR T oLSL S   ScÄR  SPIäIlTs CSL t l   SPI lS ClOLL CsT MY SPs S$"

BattleArea_EventScript_Spiritomb_Text_2:
# 152 "data/maps/BattleArea/scripts.pory"
	.string "COLLECT MY SPIRITS$"

BattleArea_EventScript_Spiritomb_Text_3:
# 209 "data/maps/BattleArea/scripts.pory"
	.string "COLLECT MY SPIRITS :)$"

BattleArea_EventScript_UmbreonEspeon_Text_0:
# 219 "data/maps/BattleArea/scripts.pory"
	.string "Umbreon and Espeon are too distracted\n"
	.string "with each other to notice you.\p"
	.string "This too is yuri.$"

BattleArea_EventScript_Rapidash_Text_0:
# 228 "data/maps/BattleArea/scripts.pory"
	.string "Raaaaaapi!$"

BattleArea_EventScript_Round1_Text_0:
# 238 "data/maps/BattleArea/scripts.pory"
	.string "There is no point in talking... I have\n"
	.string "already seen my victory in the future.\p"
	.string "Please get into position to battle.$"

BattleArea_EventScript_Round2_Text_0:
# 248 "data/maps/BattleArea/scripts.pory"
	.string "I would wish you the best of luck, but\n"
	.string "luck is meaningless compared to the\l"
	.string "wonder of sciene!$"

BattleArea_EventScript_Round3_Text_0:
# 258 "data/maps/BattleArea/scripts.pory"
	.string "Do you believe in ghosts?\p"
	.string "If not, how do you explain that white\n"
	.string "hand on your shoulder?$"

BattleArea_EventScript_Round4_Text_0:
# 268 "data/maps/BattleArea/scripts.pory"
	.string "I got beaten up on my way here for some\n"
	.string "reason...\p"
	.string "But I've finally managed to settle in at\n"
	.string "this regional.$"

BattleArea_EventScript_Round5_Text_0:
# 278 "data/maps/BattleArea/scripts.pory"
	.string "I've always loved rainbows, and now I\n"
	.string "will win alongside the Rainbow Pokemon!\p"
	.string "Also I'm gay.$"

BattleArea_EventScript_Round5_Text_1:
# 279 "data/maps/BattleArea/scripts.pory"
	.string "(Developer's Note: I do not actually\n"
	.string "know the sexuality of the player this\l"
	.string "team is based on.\p"
	.string "I think it originally wasn't even a\n"
	.string "woman.$"

BattleArea_EventScript_Round6_Text_0:
# 289 "data/maps/BattleArea/scripts.pory"
	.string "Being this old comes with benefits...\n"
	.string "Mainly meeting overpowered ghost\l"
	.string "horses.$"

BattleArea_EventScript_Round7_Text_0:
# 299 "data/maps/BattleArea/scripts.pory"
	.string "I found this CRAZY fish while out on\n"
	.string "vacation in Hoenn, and omg I just\l"
	.string "couldn't wait to use it competitively.$"

BattleArea_EventScript_Round8_Text_0:
# 309 "data/maps/BattleArea/scripts.pory"
	.string "I'm gonna throw you a bone here......\n"
	.string "And laugh as my dog lunges at you!$"

BattleArea_EventScript_Round9_Text_0:
# 319 "data/maps/BattleArea/scripts.pory"
	.string "Can you believe they didn't have any\n"
	.string "rules about bikes in this building?$"

BattleArea_EventScript_Round10_Text_0:
# 329 "data/maps/BattleArea/scripts.pory"
	.string "This place is...\n"
	.string "so much more lively than Laqua...\p"
	.string "Oh I'm sorry, I was lost in thoughts a\n"
	.string "bit there.\p"
	.string "Good luck and may we play a great game!$"

BattleArea_EventScript_Round11_Text_0:
# 339 "data/maps/BattleArea/scripts.pory"
	.string "Apparently I am the youngest player to\n"
	.string "ever play in this division?\p"
	.string "These Regulation R rules really don't\n"
	.string "make much sense to me...$"

BattleArea_EventScript_Round12_Text_0:
# 349 "data/maps/BattleArea/scripts.pory"
	.string "Lunala... I'm going to take you all the\n"
	.string "way!$"

BattleArea_EventScript_Round13_Text_0:
# 359 "data/maps/BattleArea/scripts.pory"
	.string "What a great day to be nonbinary and\n"
	.string "peak at Pokémon, I sure hope no perish\l"
	.string "trapping world champion is attending\l"
	.string "this tourney :)$"

BattleArea_EventScript_Round14_Text_0:
# 369 "data/maps/BattleArea/scripts.pory"
	.string "Watashi wa kono neko ga kiraidesu.\p"
	.string "Oh I'm sorry, I forgot to switch back\n"
	.string "from my secret japanese practice\l"
	.string "persona!\p"
	.string "Good luck.$"

BattleArena_EventScript_Start_Battle_Text_0:
# 380 "data/maps/BattleArea/scripts.pory"
	.string "Do you want to start the battle?$"

BattleArena_EventScript_Start_Battle_Text_1:
# 388 "data/maps/BattleArea/scripts.pory"
	.string "Let's end this quickly just as Mewtwo\n"
	.string "foresaw.$"

BattleArena_EventScript_Start_Battle_Text_2:
# 392 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER IS {PLAYER}{KUN}!\p"
	.string "Please head back into the main hall to\n"
	.string "prepare for round 2 of Swiss.$"

BattleArena_EventScript_Start_Battle_Text_3:
# 420 "data/maps/BattleArea/scripts.pory"
	.string "I've already calculated your\n"
	.string "probability of winning the second the\l"
	.string "matchups got announced:\l"
	.string "01.0593%$"

BattleArena_EventScript_Start_Battle_Text_4:
# 424 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER IS {PLAYER}{KUN}!\p"
	.string "Please head back into the main hall to\n"
	.string "prepare for round 3 of Swiss.$"

BattleArena_EventScript_Start_Battle_Text_5:
# 436 "data/maps/BattleArea/scripts.pory"
	.string "Hehehe... I hear the shadows calling for\n"
	.string "you...$"

BattleArena_EventScript_Start_Battle_Text_6:
# 440 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER IS {PLAYER}{KUN}!\p"
	.string "Please head back into the main hall to\n"
	.string "prepare for round 4 of Swiss.$"

BattleArena_EventScript_Start_Battle_Text_7:
# 452 "data/maps/BattleArea/scripts.pory"
	.string "I'm a player from Israel and this is my\n"
	.string "team:$"

BattleArena_EventScript_Start_Battle_Text_8:
# 456 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER IS {PLAYER}{KUN}!\p"
	.string "Please head back into the main hall to\n"
	.string "prepare for round 5 of Swiss.$"

BattleArena_EventScript_Start_Battle_Text_9:
# 468 "data/maps/BattleArea/scripts.pory"
	.string "HAPPY PRIDE MONTH!$"

BattleArena_EventScript_Start_Battle_Text_10:
# 472 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER IS {PLAYER}{KUN}!\p"
	.string "Please head back into the main hall to\n"
	.string "prepare for round 6 of Swiss.$"

BattleArena_EventScript_Start_Battle_Text_11:
# 484 "data/maps/BattleArea/scripts.pory"
	.string "Neigh!$"

BattleArena_EventScript_Start_Battle_Text_12:
# 488 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER IS {PLAYER}{KUN}!\p"
	.string "Please head back into the main hall to\n"
	.string "prepare for round 7 of Swiss.$"

BattleArena_EventScript_Start_Battle_Text_13:
# 500 "data/maps/BattleArea/scripts.pory"
	.string "Prepare to drown.\p"
	.string "...sorry, not really.\l"
	.string "I just wanted to sound cool.$"

BattleArena_EventScript_Start_Battle_Text_14:
# 504 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER IS {PLAYER}{KUN}!\p"
	.string "Please head back into the main hall to\n"
	.string "prepare for round 8 of Swiss.$"

BattleArena_EventScript_Start_Battle_Text_15:
# 516 "data/maps/BattleArea/scripts.pory"
	.string "My team is all bark and all bite!$"

BattleArena_EventScript_Start_Battle_Text_16:
# 520 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER IS {PLAYER}{KUN}!\p"
	.string "Please head back into the main hall to\n"
	.string "prepare for round 9 of Swiss.$"

BattleArena_EventScript_Start_Battle_Text_17:
# 532 "data/maps/BattleArea/scripts.pory"
	.string "Let's hope the budget option is good\n"
	.string "enough...$"

BattleArena_EventScript_Start_Battle_Text_18:
# 536 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER IS {PLAYER}{KUN}!\p"
	.string "Please head back into the main hall to\n"
	.string "prepare for the last round of Swiss.$"

BattleArena_EventScript_Start_Battle_Text_19:
# 548 "data/maps/BattleArea/scripts.pory"
	.string "For Lucius!$"

BattleArena_EventScript_Start_Battle_Text_20:
# 552 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER IS {PLAYER}{KUN}!\p"
	.string "Please head back into the main hall to\n"
	.string "prepare for Top Cut.$"

BattleArena_EventScript_Start_Battle_Text_21:
# 564 "data/maps/BattleArea/scripts.pory"
	.string "I hope you're excited to meet Mr.\n"
	.string "Snuggles...$"

BattleArena_EventScript_Start_Battle_Text_22:
# 568 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER IS {PLAYER}{KUN}!\p"
	.string "Please head back into the main hall to\n"
	.string "prepare for the Top 8 match.$"

BattleArena_EventScript_Start_Battle_Text_23:
# 580 "data/maps/BattleArea/scripts.pory"
	.string "Giant Bat Attack!$"

BattleArena_EventScript_Start_Battle_Text_24:
# 584 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER IS {PLAYER}{KUN}!\p"
	.string "Please head back into the main hall to\n"
	.string "prepare for the Semifinals match.$"

BattleArena_EventScript_Start_Battle_Text_25:
# 596 "data/maps/BattleArea/scripts.pory"
	.string ":3$"

BattleArena_EventScript_Start_Battle_Text_26:
# 600 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER IS {PLAYER}{KUN}!\p"
	.string "Please head back into the main hall to\n"
	.string "prepare for the Grand Finals match.$"

BattleArena_EventScript_Start_Battle_Text_27:
# 612 "data/maps/BattleArea/scripts.pory"
	.string "You've made it quite far...\p"
	.string "BUT IT'S NOT GONNA BE ENOUGH!$"

BattleArena_EventScript_Start_Battle_Text_28:
# 616 "data/maps/BattleArea/scripts.pory"
	.string "THE WINNER OF THE GRAND FINALS IS\n"
	.string "{PLAYER}{KUN}!$"

battleOutroR1::
# 637 "data/maps/BattleArea/scripts.pory"
	.string "This wasn't meant to happen!$"

battleOutroR2::
# 641 "data/maps/BattleArea/scripts.pory"
	.string "Result unexpected.$"

battleOutroR3::
# 645 "data/maps/BattleArea/scripts.pory"
	.string "Shriek!$"

battleOutroR4::
# 649 "data/maps/BattleArea/scripts.pory"
	.string "PLEASE RESPECT MY RIGHT TO SELF\n"
	.string "DEFENSE.$"

battleOutroR5::
# 653 "data/maps/BattleArea/scripts.pory"
	.string "Fly high...$"

battleOutroR6::
# 657 "data/maps/BattleArea/scripts.pory"
	.string "Hold your horses... my horses...? Damnit.$"

battleOutroR7::
# 661 "data/maps/BattleArea/scripts.pory"
	.string "I knew I should have used Magikarp\n"
	.string "instead...$"

battleOutroR8::
# 665 "data/maps/BattleArea/scripts.pory"
	.string "Bad dog! Bad dog!!!$"

battleOutroR9::
# 669 "data/maps/BattleArea/scripts.pory"
	.string "I knew it was cooked when I couldn't\n"
	.string "catch Miraidon or Koraidon in time for\l"
	.string "this :($"

battleOutroR10::
# 673 "data/maps/BattleArea/scripts.pory"
	.string "Thank you for your service, Pagogo.$"

battleOutroR11::
# 677 "data/maps/BattleArea/scripts.pory"
	.string "My bear is so scary...\p"
	.string "I should make a horror game about this!$"

battleOutroR12::
# 681 "data/maps/BattleArea/scripts.pory"
	.string "Maybe Lunala just wasn't meant to win a\n"
	.string "regional in this format...$"

battleOutroR13::
# 685 "data/maps/BattleArea/scripts.pory"
	.string "At least it wasn't perish trap this time.$"

battleOutroR14::
# 689 "data/maps/BattleArea/scripts.pory"
	.string "It... it was enough?$"
