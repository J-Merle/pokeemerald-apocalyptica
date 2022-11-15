PontarocTown_MapScripts::
	.byte 0


Pontaroc_EventScript_Boy::
	lockall
	msgbox Pontaroc_EventScript_Boy_Text_0, MSGBOX_NPC
	releaseall
	return


Pontaroc_EventScript_LabSign::
	lockall
	msgbox Pontaroc_EventScript_LabSign_Text_0, MSGBOX_SIGN
	releaseall
	return


Pontaroc_EventScript_Boy_Text_0:
	.string "Pontaroc est une ville très ancienne$"

Pontaroc_EventScript_LabSign_Text_0:
	.string "Laboratoire du Proffeseur Sorbiers$"
