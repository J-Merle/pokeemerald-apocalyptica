Pontaroc_Lab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Pontaroc_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Pontaroc_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Pontaroc_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_TEMP_0, 1
	return

Pontaroc_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 1, Pontaroc_Lab_EventScript_init
	.2byte 0


Pontaroc_Lab_EventScript_init::
	lockall
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_BELDUM, 5, ITEM_POKE_BALL
	msgbox Pontaroc_Lab_EventScript_init_Text_0
	waitmessage
	applymovement 1, BirchMovementData
	waitmovement 0
	applymovement 1, Pontaroc_Lab_BirchComeToPlayer
	waitmovement 0
	msgbox Pontaroc_Lab_EventScript_init_Text_1
	waitmessage
	msgbox Pontaroc_Lab_EventScript_init_Text_2
	waitmessage
	showmonpic SPECIES_BELDUM, 10, 3
	msgbox Pontaroc_Lab_EventScript_init_Text_3
	waitmessage
	hidemonpic
	setvar VAR_TEMP_0, 2
	releaseall
	return


BirchMovementData:
	emote_question_mark
	delay_8
	jump_in_place_up
	step_end

Pontaroc_Lab_PlayerFaceBirch:
	face_right
	step_end

Pontaroc_Lab_BirchComeToPlayer:
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

Pontaroc_Lab_EventScript_init_Text_0:
	.string "Peut-être qu'avec ces nouveaux\n"
	.string "réglages ...$"

Pontaroc_Lab_EventScript_init_Text_1:
	.string "Bon très bien {PLAYER}, pour ton\n"
	.string "premier jour nous allons commencer par\l"
	.string "quelques formalités$"

Pontaroc_Lab_EventScript_init_Text_2:
	.string "Tu as un pokémon n'est ce pas ?\n"
	.string "Pourrais-tu me le montrer ?$"

Pontaroc_Lab_EventScript_init_Text_3:
	.string "Hmmm je vois ...$"
