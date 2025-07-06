Route5_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route5_OnResume
	.byte 0

Route5_OnResume:
	setstepcallback STEP_CB_ASH
	end
