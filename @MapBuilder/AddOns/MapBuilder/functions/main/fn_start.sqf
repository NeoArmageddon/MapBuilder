//***************************************
//* Start Function
//* Starts MB dialog and camera
//***************************************
	//Disable DevInfo:


	if ((productVersion select 4) != "Stable") then
	{
		disableSerialization;
		private["_display","_control"];
		_display = findDisplay 46;
		_control = _display displayctrl 11400;
		_control ctrlsetfade 1;
		_control ctrlcommit 0;
	};

	diag_mergeConfigFile ["B:\Arma\Frontline\MapBuilder\@MapBuilder\AddOns\MapBuilder\config.cpp"];
	startLoadingScreen ["Starting MapBuilder...","MB_LoadingScreen"];
	//(findDisplay 46) createDisplay "MB_Main";
	createDialog "MB_Main";

	"MB_fnc_uiCreateUI" call bis_fnc_recompile;
	[] call MB_fnc_uiCreateUI;
	["init"] call MB_fnc_uiToolbar;

	MB_CameraSpeedModifier = ["camera.speedmodifier", 1] call MB_fnc_uiGetSetting;
	MB_CameraEasing = ["camera.easing", true] call MB_fnc_uiGetSetting;
	MB_CameraFollowTerrain = ["camera.terrainfollow", true] call MB_fnc_uiGetSetting;

	MBCamera = "camera" camCreate (MB_CamPos select 0);
	MBCamera switchCamera "Internal";
	[] call MB_fnc_updateCam;
	//MBCamera cameraEffect ["internal", "BACK"];
	//showcinemaborder false;
	//cameraEffectEnableHUD true;
	//MBCamera cameraEffect ["internal", "BACK"];
	//player enableSimulation false;
	//["MB_MapClick", "onMapSingleClick", {MBCamera camSetPos [_pos select 0, _pos select 1,getpos MBCamera select 2];}, []] call BIS_fnc_addStackedEventHandler;
	//((findDisplay 123) displayCtrl 170301) onDoubleClick "MBCamera camSetPos [_pos select 0, _pos select 1,getpos MBCamera select 2];";

	//Middle Mouse works only in Display 46...
	(findDisplay 46) displayAddEventHandler  ["MouseButtonDown","if(MB_ViewportHasFocus && (_this select 1)==2) then {_nil=_this call MB_fnc_MouseButtonDownInView;};"];
	(findDisplay 46) displayAddEventHandler  ["MouseButtonUp","if((_this select 1)==2) then {_nil=_this call MB_fnc_MouseButtonUpInView;};"];
	//(findDisplay 123) displayAddEventHandler ["MouseMoving","_nil=_this call MB_fnc_MouseMove"];
	//(findDisplay 123) displayAddEventHandler ["MouseButtonDown","systemchat format[""MB Down: %1"",_this];"];
	//(findDisplay 123) displayAddEventHandler ["MouseButtonUp","systemchat format[""MB Up: %1"",_this];"];
	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseMoving","_this call MB_fnc_MouseMove;"];
	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseEnter","[true] call MB_fnc_MouseInView;"];
    ((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseExit","[false] call MB_fnc_MouseInView;"];
	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseZChanged","_nil=_this call MB_fnc_MouseWheelMoveInView;"];

	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseButtonDown","_this call MB_fnc_MouseButtonDownInView;"];
	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseButtonUp","_this call MB_fnc_MouseButtonUpInView;"];
	//(findDisplay 123) displayAddEventHandler ["MouseZChanged","_nil=_this call MB_fnc_MouseZ"];
	//findDisplay 123) displayAddEventHandler ["KeyDown","systemchat format[""%1"",_this];"];
	//(findDisplay 123) displayAddEventHandler ["KeyUp","_nil=_this call MB_fnc_KeyUp"];

	["MB_Draw3D", "onEachFrame", {call MB_fnc_Draw3D;}] call BIS_fnc_addStackedEventHandler;
	//addMissionEventHandler ['Draw3D',{call MB_fnc_Draw3D;}];
	MB_RegisterKeys = true;
	//[] call MB_fnc_refreshFilters;
	[] call MB_fnc_SetEditorFocus;
	[666] spawn MB_fnc_closeWindow;

	//[false] call MB_fnc_toggleMap;
	[0] call MB_fnc_switchMode;
	[] call MB_fnc_checkVersion;
	//["What?"] spawn MB_fnc_showPopupDialog;
	[] call MB_FNC_ChatToggle;
	endLoadingScreen;

	/*private["_toolbar"];
	_toolbar = [];
	_toolbar pushBack ["Test",[["Blah"],["Blub"],["MB rulez"],["Gold"]]];
	_toolbar pushBack ["Test2",[["Blah2"],["Blub2"],["MB rulez2"],["Gold2"]]];
	_toolbar pushBack ["Numbers",[["1"],["2"],["3"],["4"],["5"],["6"],["7"],["8"],["9"]]];
	_toolbar call MBGUI_FNC_CreateTopbar;*/

	//[] call MB_Listbox_Categories_Refresh;
	[] spawn {
		while{dialog} do {
			[] call MB_fnc_updateCam;
			["camUpdate"] call MB_fnc_dispatchCallbacks;
			sleep 0.01;
		};
	};
	[] spawn {
		while{dialog} do {
			//[screenToWorld MB_MousePosition] spawn MB_fnc_colorVertices;
			["loop"] call MB_fnc_dispatchCallbacks;
			sleep 1;
		};
	};
	[] spawn {
		while{dialog} do {
			//[screenToWorld MB_MousePosition] spawn MB_fnc_colorVertices;
			["fastloop"] call MB_fnc_dispatchCallbacks;

			sleep 0.1;
		};
	};
