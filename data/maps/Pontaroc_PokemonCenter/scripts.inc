Pontaroc_PokemonCenter_MapScripts::
	.byte 0


Pontaroc_PokemonCenter_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	return

