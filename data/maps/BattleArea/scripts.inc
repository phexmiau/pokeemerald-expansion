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
	msgbox BattleArea_EventScript_Spiritomb_Text_0
# 133 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 134 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, CRY_MODE_ENCOUNTER
# 135 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Spiritomb_Text_0
# 136 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 137 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, CRY_MODE_ENCOUNTER
# 138 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Spiritomb_Text_0
# 139 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 140 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, CRY_MODE_ENCOUNTER
# 141 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Spiritomb_Text_0
# 142 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 143 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, CRY_MODE_ENCOUNTER
# 144 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Spiritomb_Text_0, MSGBOX_AUTOCLOSE
# 145 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 146 "data/maps/BattleArea/scripts.pory"
	applymovement 14, BattleArea_EventScript_Spiritomb_Movement_0
# 147 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 148 "data/maps/BattleArea/scripts.pory"
	delay 30
# 149 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Spiritomb_Text_1, MSGBOX_AUTOCLOSE
# 150 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_UmbreonEspeon::
# 154 "data/maps/BattleArea/scripts.pory"
	lock
# 155 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_UMBREON, CRY_MODE_ENCOUNTER
# 156 "data/maps/BattleArea/scripts.pory"
	waitmoncry
# 157 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_ESPEON, CRY_MODE_ENCOUNTER
# 158 "data/maps/BattleArea/scripts.pory"
	waitmoncry
# 159 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_UmbreonEspeon_Text_0, MSGBOX_AUTOCLOSE
# 160 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 161 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Rapidash::
# 165 "data/maps/BattleArea/scripts.pory"
	lock
# 166 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 167 "data/maps/BattleArea/scripts.pory"
	playmoncry SPECIES_RAPIDASH_GALAR, CRY_MODE_ENCOUNTER
# 168 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Rapidash_Text_0, MSGBOX_AUTOCLOSE
# 169 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 170 "data/maps/BattleArea/scripts.pory"
	applymovement 12, BattleArea_EventScript_OldWoman_Movement_0
# 171 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 172 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArea_EventScript_Round1::
# 176 "data/maps/BattleArea/scripts.pory"
	lock
# 177 "data/maps/BattleArea/scripts.pory"
	faceplayer
# 178 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArea_EventScript_Round1_Text_0, MSGBOX_AUTOCLOSE
# 179 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 180 "data/maps/BattleArea/scripts.pory"
	applymovement 17, BattleArea_EventScript_Round1_Movement_0
# 181 "data/maps/BattleArea/scripts.pory"
	waitmovement
# 182 "data/maps/BattleArea/scripts.pory"
	release
	return


BattleArena_EventScript_Start_Battle::
# 186 "data/maps/BattleArea/scripts.pory"
	lock
# 187 "data/maps/BattleArea/scripts.pory"
	compare VAR_CAN_REGIONAL_BATTLE, 1
	goto_if_eq BattleArena_EventScript_Start_Battle_2
BattleArena_EventScript_Start_Battle_1:
# 207 "data/maps/BattleArea/scripts.pory"
	release
	return

BattleArena_EventScript_Start_Battle_2:
# 188 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_PLAYER, BattleArea_EventScript_OldWoman_Movement_0
# 189 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_0, MSGBOX_YESNO
# 190 "data/maps/BattleArea/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleArena_EventScript_Start_Battle_4
# 203 "data/maps/BattleArea/scripts.pory"
	applymovement LOCALID_PLAYER, BattleArena_EventScript_Start_Battle_Movement_1
# 204 "data/maps/BattleArea/scripts.pory"
	waitmovement
	goto BattleArena_EventScript_Start_Battle_1

BattleArena_EventScript_Start_Battle_4:
# 191 "data/maps/BattleArea/scripts.pory"
	special SpawnCameraObject
# 192 "data/maps/BattleArea/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleArena_EventScript_Start_Battle_Movement_0
# 193 "data/maps/BattleArea/scripts.pory"
	waitmovement 0
# 194 "data/maps/BattleArea/scripts.pory"
	msgbox BattleArena_EventScript_Start_Battle_Text_1
# 195 "data/maps/BattleArea/scripts.pory"
	waitmessage
# 196 "data/maps/BattleArea/scripts.pory"
	trainerbattle_double TRAINER_YUKI, battleIntro, battleOutro, battleNE
# 197 "data/maps/BattleArea/scripts.pory"
	setflag FLAG_ROUND_1
# 198 "data/maps/BattleArea/scripts.pory"
	setvar VAR_CAN_REGIONAL_BATTLE, 0
# 199 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_TO_BLACK
# 200 "data/maps/BattleArea/scripts.pory"
	removeobject LOCALID_ROUND1
# 201 "data/maps/BattleArea/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BattleArena_EventScript_Start_Battle_1


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

# 146 "data/maps/BattleArea/scripts.pory"
BattleArea_EventScript_Spiritomb_Movement_0:
# 146 "data/maps/BattleArea/scripts.pory"
	walk_in_place_faster_up
	step_end

# 180 "data/maps/BattleArea/scripts.pory"
BattleArea_EventScript_Round1_Movement_0:
# 180 "data/maps/BattleArea/scripts.pory"
	face_down
	step_end

# 192 "data/maps/BattleArea/scripts.pory"
BattleArena_EventScript_Start_Battle_Movement_0:
# 192 "data/maps/BattleArea/scripts.pory"
	walk_up
# 192 "data/maps/BattleArea/scripts.pory"
	walk_up
# 192 "data/maps/BattleArea/scripts.pory"
	walk_up
# 192 "data/maps/BattleArea/scripts.pory"
	walk_up
# 192 "data/maps/BattleArea/scripts.pory"
	walk_up
# 192 "data/maps/BattleArea/scripts.pory"
	walk_up
	step_end

# 203 "data/maps/BattleArea/scripts.pory"
BattleArena_EventScript_Start_Battle_Movement_1:
# 203 "data/maps/BattleArea/scripts.pory"
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
	.string "Please don't interrupt me right now!\n"
	.string "I am the judge for this ongoing match.$"

BattleArea_EventScript_Maid_Text_0:
# 37 "data/maps/BattleArea/scripts.pory"
	.string "MAGICAL LEAF MAGICAL LEAF MAGICAL\n"
	.string "LEAF MAGICAL LEAF!$"

BattleArea_EventScript_OldWoman_Text_0:
# 46 "data/maps/BattleArea/scripts.pory"
	.string "It's nice to see the youth go all out\n"
	.string "like this...$"

BattleArea_EventScript_OldWoman_Text_1:
# 50 "data/maps/BattleArea/scripts.pory"
	.string "But I didn't collect these spirits for\n"
	.string "nothing!!$"

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
	.string "WRITE THIS WORD)$"

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
	.string "Zoroaaa$"

BattleArea_EventScript_Roserade_Text_0:
# 123 "data/maps/BattleArea/scripts.pory"
	.string "Raaaadeee$"

BattleArea_EventScript_Spiritomb_Text_0:
# 132 "data/maps/BattleArea/scripts.pory"
	.string "COLLECT MY SPIRITS$"

BattleArea_EventScript_Spiritomb_Text_1:
# 149 "data/maps/BattleArea/scripts.pory"
	.string "What the fuck was that.$"

BattleArea_EventScript_UmbreonEspeon_Text_0:
# 159 "data/maps/BattleArea/scripts.pory"
	.string "Umbreon and Espeon are too distracted\n"
	.string "with each other to notice you.\p"
	.string "This too is yuri.$"

BattleArea_EventScript_Rapidash_Text_0:
# 168 "data/maps/BattleArea/scripts.pory"
	.string "Raaaaaapi$"

BattleArea_EventScript_Round1_Text_0:
# 178 "data/maps/BattleArea/scripts.pory"
	.string "There is no point in talking... I have\n"
	.string "already seen my victory in the future.\p"
	.string "Please get into position to battle.$"

BattleArena_EventScript_Start_Battle_Text_0:
# 189 "data/maps/BattleArea/scripts.pory"
	.string "Do you want to start the battle?$"

BattleArena_EventScript_Start_Battle_Text_1:
# 194 "data/maps/BattleArea/scripts.pory"
	.string "Let's end this quickly just as Mewtwo\n"
	.string "foresaw.$"

battleIntro::
# 210 "data/maps/BattleArea/scripts.pory"
	.string "test1$"

battleOutro::
# 214 "data/maps/BattleArea/scripts.pory"
	.string "test2$"

battleNE::
# 218 "data/maps/BattleArea/scripts.pory"
	.string "nuh uh$"
