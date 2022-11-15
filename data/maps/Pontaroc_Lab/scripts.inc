Pontaroc_Lab_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Pontaroc_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Pontaroc_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_BIRCH_LAB_STATE, 0, Pontaroc_Lab_EventScript_BirchWelcome
	.2byte 0


Pontaroc_Lab_EventScript_BirchWelcome::
	lockall
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_POKEMON_GET
	msgbox Pontaroc_Lab_EventScript_BirchWelcome_Text_0
	waitmessage
	applymovement 1, BirchMovementData
	waitmovement 0
	msgbox Pontaroc_Lab_EventScript_BirchWelcome_Text_1
	waitmessage
	applymovement 1, Pontaroc_Lab_BirchComeToPlayer
	waitmovement 0
	msgbox Pontaroc_Lab_EventScript_BirchWelcome_Text_2
	msgbox Pontaroc_Lab_EventScript_BirchWelcome_Text_3
	waitmessage
	setvar VAR_BIRCH_LAB_STATE, 1
	releaseall
	return


Pontaroc_Lab_EventScript_RangerLocation::
	lockall
	msgbox Pontaroc_Lab_EventScript_RangerLocation_Text_0, MSGBOX_NPC
	releaseall
	return


BirchMovementData:
	emote_question_mark
	delay_16
	jump_in_place_up
	delay_8
	step_end

Pontaroc_Lab_BirchComeToPlayer:
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Pontaroc_Lab_EventScript_Machine::
	lockall
	msgbox Pontaroc_Lab_EventScript_Machine_Text_0
	releaseall
	return


Pontaroc_Lab_EventScript_BirchWelcome_Text_0:
	.string "Peut-être qu'avec ces nouveaux\n"
	.string "réglages ...$"

Pontaroc_Lab_EventScript_BirchWelcome_Text_1:
	.string "Hmm ... ça n'a pas fonctionné comme\n"
	.string "prévu !$"

Pontaroc_Lab_EventScript_BirchWelcome_Text_2:
	.string "Bon très bien {PLAYER}, pour ton\n"
	.string "premier jour nous allons commencer par\l"
	.string "quelques formalités$"

Pontaroc_Lab_EventScript_BirchWelcome_Text_3:
	.string "Il semblerait que les rangers de la\n"
	.string "Route 1 aient remarqués des choses\l"
	.string "étranges. Pourrais-tu aller les voir et\l"
	.string "essayer de tirer ça au clair ?$"

Pontaroc_Lab_EventScript_RangerLocation_Text_0:
	.string "Les rangers sont sur la Route 1, ne\n"
	.string "traîne pas en chemin.$"

Pontaroc_Lab_EventScript_Machine_Text_0:
	.string "C'est une machine très compliquée, je\n"
	.string "ferais mieux de ne pas y toucher$"
