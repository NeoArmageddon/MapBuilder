private["_data","_path"];
disableSerialization;
_ctrl = _display displayCtrl 171202;
_path = (tvCurSel 171202);
_data = [];
_index = 0;

if(count(_path)>0) then {
	_index = _path select 0;
	if(_index < count(MB_CurBrush)) then {
		MB_CurBrush deleteAt _index;
		[false] call mb_fnc_brusherUpdateObjectList;
	};
};