#include "dik.hpp"

//=========================================
//= Mouse
//=========================================

MB_fnc_MouseDown = {
	private["_key","_return","_status"];
	_key = _this select 1;
	_uX = _this select 2;
	_uY = _this select 3;
	_status = MB_MouseKeys select _key;
	_hasSelected = false;
	MB_MouseKeys set [_key,[true,diag_tickTime,_status select 2]];
	//MB_ClickedObject = [_uX,_uY] call MB_fnc_SelectUnderCursor;
	MB_ClickedPosition = screenToWorld [_uX,_uY];

	["onMouseDown",[_key,[_uX,_uY]]] call MB_fnc_dispatchCallbacks;


	true
};
MB_fnc_MouseUp = {
	private["_key","_return","_status"];
	_key = _this select 1;
	_uX = _this select 2;
	_uY = _this select 3;
	_status = MB_MouseKeys select _key;
	MB_MouseKeys set [_key,[false,_status select 1,diag_tickTime]];

	["onMouseUp",[_key,[_uX,_uY]]] call MB_fnc_dispatchCallbacks;
	
	if(isMultiplayer) then {
		{
			[_x] call MB_fnc_syncObject;
		} foreach MB_Selected;
	};

	true;
};
MB_fnc_MouseClick = {
	_display = (_this select 0);
	_key = (_this select 1);
	_uX = (_this select 2);
	_uY = (_this select 3);
	
};
MB_fnc_MouseDblClick = {
	private["_obj"];
	//["onMouseDblClick",[MB_ClickedPosition]] call MB_fnc_dispatchCallbacks;
	//if((["Object"] call MB_fnc_isMode)) then {
	//	[] call MB_fnc_DeselectAll;
	//	//[[MB_CurClass,MB_ClickedPosition],"MB_fnc_CreateObject",false] call bis_fnc_mp;
	//	[MB_CurClass,MB_ClickedPosition] call MB_fnc_CreateObject;
	//} else {
	//	if((["Polygon"] call MB_fnc_isMode)) then {
	//		[] call MB_fnc_StartPolyline;
	//	};
	//};
};
MB_fnc_MouseMove = {
	private["_viewport","_xp","_yp","_screenDelta","_moveDelta"];
	_viewport = _this select 0;
	_xp = (_this select 1);
	_yp = (_this select 2);
	MB_LastMouseScreenPosition = MB_MouseScreenPosition;
	_screenDelta = [_xp-(MB_MouseScreenPosition select 0),_yp-(MB_MouseScreenPosition select 1)];
	_moveDelta = (screenToWorld [_xp,_yp]) vectorDiff MB_MousePosition;
	MB_MousePosition = screenToWorld [_xp,_yp];
	MB_MouseScreenPosition = [_xp,_yp];
	["MouseMoved",[_screenDelta,_moveDelta]] spawn MB_fnc_dispatchCallbacks;
};

MB_fnc_MouseZ = {
	_z = (_this select 1);
	_camPos = MB_CamPos select 0;
	_camPos set [2,(_camPos select 2)+_z];
	MB_CamPos set [0,_camPos];
	call MB_fnc_updateCam;
};

MB_fnc_isMousePressed = {
	private["_key","_return","_status"];
	_key = _this select 0;
	_status = MB_MouseKeys select _key;
	if(_status select 0) then {
		_return = true;
	} else {
		_return = false;
	};
	_return
};


//=========================================
//= Keys
//=========================================


MB_fnc_keyDown = {
	private["_handled", "_ctrl", "_dikCode", "_shift", "_ctrlKey", "_alt"];
	_ctrl = _this select 0;
	_dikCode = _this select 1;
	_shift = _this select 2;
	_ctrlKey = _this select 3;
	_alt = _this select 4;
	
	if(!MB_RegisterKeys) exitwith {};
	MB_Keys set[_dikCode,true];

	_handled = true;

	//MBCamera camSetPos [(getpos MBCamera select 0),(getpos MBCamera select 1),(getpos MBCamera select 2)+0.1];
	//MBCamera camCommit 0;

	if(_dikCode == DIK_DELETE) exitwith {
		[] call MB_fnc_DeleteSelected;
	};
	if(_dikCode == DIK_ESCAPE) exitwith {
		closeDialog 0;
	};
	//if(_dikCode == DIK_T) exitwith {
		//[] call	MB_fnc_ToggleMode;
	//};
	if([DIK_LCONTROL] call MB_fnc_isPressed && _dikCode == DIK_R) exitwith {
		[] call MB_fnc_resetOrientation;
	};
	if([DIK_LCONTROL] call MB_fnc_isPressed && _dikCode == DIK_C) exitwith {
		[] call MB_fnc_Copy;
	};
	if([DIK_LCONTROL] call MB_fnc_isPressed && _dikCode == DIK_V) exitwith {
		[] call MB_fnc_Paste;
	};
	if(_dikCode == DIK_M) exitwith {
		[3] call MB_fnc_togglePopup;
	};
	
	if([DIK_LCONTROL] call MB_fnc_isPressed && _dikCode == DIK_T) exitwith {
		//[] call MB_fnc_matchSurfaceNormals;
	};
	
	_handled;  

};
MB_fnc_keyUp = {
	private["_handled", "_ctrl", "_dikCode", "_shift", "_ctrlKey", "_alt"];
	_ctrl = _this select 0;
	_dikCode = _this select 1;
	_shift = _this select 2;
	_ctrlKey = _this select 3;
	_alt = _this select 4;
	
	if(!MB_RegisterKeys) exitwith {};
	MB_Keys set[_dikCode,false];
	
	_handled = true;

	//MBCamera camSetPos [(getpos MBCamera select 0),(getpos MBCamera select 1),(getpos MBCamera select 2)+0.1];
	//MBCamera camCommit 0;

	_handled;  
};
MB_fnc_isPressed = {
	private["_key","_return","_status"];
	_key = _this select 0;
	_status = MB_Keys select _key;
	if(_status) then {
		_return = true;
	} else {
		_return = false;
	};
	_return
};
MB_fnc_resetKeys = {
	private["_key","_return","_status"];
	{
		MB_Keys set[_foreachindex,false];
	} foreach MB_Keys;
};


//=========================================
//= Camera
//=========================================

MB_CamSpeed = 1.0;

MB_fnc_updateCam = {
	private["_mod"];
	if([DIK_LSHIFT] call MB_fnc_isPressed) then {
		MB_CamSpeed = MB_CamSpeed + 0.1;
	}
	else {
		MB_CamSpeed = MB_CamSpeed - 1.0;
	};
	MB_CamSpeed = MB_CamSpeed max 0.8 min 10.0;
	_mod = MB_CamSpeed;
	_camPos = MB_CamPos select 0;
	//Move forward
	if([DIK_W] call MB_fnc_isPressed) then {
		_camPos set[0,(_camPos select 0)+_mod*0.1*sin(MB_CamPos select 1)];
		_camPos set[1,(_camPos select 1)+_mod*0.1*cos(MB_CamPos select 1)];
		_camPos set[2,(_camPos select 2)+_mod*0.1*sin(MB_CamPos select 2)];
	};
	//Move backward
	if([DIK_S] call MB_fnc_isPressed) then {
		_camPos set[0,(_camPos select 0)-_mod*0.1*sin(MB_CamPos select 1)];
		_camPos set[1,(_camPos select 1)-_mod*0.1*cos(MB_CamPos select 1)];
		_camPos set[2,(_camPos select 2)-_mod*0.1*sin(MB_CamPos select 2)];
	};
	//Move Left
	if([DIK_A] call MB_fnc_isPressed) then {
		_camPos set[0,(_camPos select 0)-_mod*0.1*cos(MB_CamPos select 1)];
		_camPos set[1,(_camPos select 1)+_mod*0.1*sin(MB_CamPos select 1)];
	};
	//Move Right
	if([DIK_D] call MB_fnc_isPressed) then {
		_camPos set[0,(_camPos select 0)+_mod*0.1*cos(MB_CamPos select 1)];
		_camPos set[1,(_camPos select 1)-_mod*0.1*sin(MB_CamPos select 1)];
	};
	//Move up
	if([DIK_Q] call MB_fnc_isPressed) then {
		_camPos set [2,(_camPos select 2)+_mod*0.1];
	};
	//Move Down
	if([DIK_Z] call MB_fnc_isPressed ) then {
		_camPos set [2,(_camPos select 2)-_mod*0.1];
	};
	
	//Look up
	if([DIK_PGUP] call MB_fnc_isPressed || [DIK_NUMPAD8] call MB_fnc_isPressed) then {
		MB_CamPos set [2,((MB_CamPos select 2) + 0.5)];
	};
	//Look Down
	if([DIK_PGDN] call MB_fnc_isPressed || [DIK_NUMPAD2] call MB_fnc_isPressed) then {
		MB_CamPos set [2,((MB_CamPos select 2) - 0.5)];
	};
	
	//Look left
	if([DIK_NUMPAD4] call MB_fnc_isPressed ) then {
		MB_CamPos set [1,(MB_CamPos select 1)-0.5];
	};
	//Look right
	if([DIK_NUMPAD6] call MB_fnc_isPressed ) then {
		MB_CamPos set [1,(MB_CamPos select 1)+0.5];
	};
	
	//Center
	if([DIK_NUMPAD5] call MB_fnc_isPressed) then {
		MB_CamPos set [1,0];
		MB_CamPos set [2,0];
	};
	if((MB_CamPos select 1)>360) then {
		MB_CamPos set[1,(MB_CamPos select 1)-360];
	};
	
	if((_camPos select 2)<0) then {
		_camPos set[2,0];
	};
	if((MB_CamPos select 2)<-90) then {
		MB_CamPos set[2,-90];
	};
	if((MB_CamPos select 2)>90) then {
		MB_CamPos set[2,90];
	};
	MB_CamPos set [0,_camPos];
	MBCamera setDir (MB_CamPos select 1);
	[MBCamera,(MB_CamPos select 2),0] call bis_fnc_setPitchBank;	
	MBCamera SetPosATL [(_camPos select 0),(_camPos select 1),(_camPos select 2)];
	MBCamera camCommit 0;
};
