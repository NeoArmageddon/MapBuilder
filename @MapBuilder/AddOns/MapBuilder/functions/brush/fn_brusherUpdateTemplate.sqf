/*
    Function:       MB_fnc_brusherUpdateTemplateList
    Author:         NeoArmageddon
    Description:    Updates an object in the brush list
*/

private _brusherCtrl = uiNamespace getVariable ["MB_Brush.contentCtrl", controlNull];
#define __CTRLCONTENT(var1) (_brusherCtrl controlsGroupCtrl var1)


private _path = tvCurSel __CTRLCONTENT(171202);
private _data = [];
private _index = 0;
if(count(_path)>0) then {
	_index = _path select 0;
	if(_index < count(MB_CurBrush)) then {
		_data = MB_CurBrush select _index;
	};
};
//MB_CurBrush pushBack [types,weight,chance,count,relpos,dir,pitch,bank,scale,randompos,randomdir,randompitch,randombank,randomscale];

if(count(_data)>0) then {


	// 171203 Probability
	// 171204 count
	// 171205 Offset X
	// 171206 Offset Y
	// 171207 Offset Z
	// 171208 Rotation
	// 171209 Pitch
	// 171210 Bank
	// 171211 Scale
	// 171212 Random Offset X
	// 171213 Random Offset Y
	// 171214 Random Offset Z
	// 171215 Random Dir
	// 171216 Random Pitch
	// 171217 Random Bank
	// 171218 Random Scale

	// 171203 Probability
	_value = parseNumber ctrlText __CTRLCONTENT(171203);
	if(_value > 1) then {
		_value = 1;
	};
	if(_value < 0) then {
		_value = 0;
	};
	_data set[2,_value];

	// 171204 count
	_value = parseNumber ctrlText __CTRLCONTENT(171204);
	_value = round(_value);
	if(_value < 0) then {
		_value = 0;
	};
	_data set[3,_value];

	// 171205 Offset X
	_value = parseNumber ctrlText __CTRLCONTENT(171205);
	_pos = _data select 4;
	_pos set[0,_value];

	// 171206 Offset Y
	_value = parseNumber ctrlText __CTRLCONTENT(171206);
	_pos = _data select 4;
	_pos set[1,_value];

	// 171207 Offset Z
	_value = parseNumber ctrlText __CTRLCONTENT(171207);
	_pos = _data select 4;
	_pos set[2,_value];

	// 171208 Rotation
	_value = parseNumber ctrlText __CTRLCONTENT(171208);
	if(_value > 360) then {
		_value = _value%360;
	};
	if(_value < 0) then {
		_value = 360-(_value%360);
	};
	_data set[5,_value];

	// 171209 Pitch
	_value = parseNumber ctrlText __CTRLCONTENT(171209);
	if(_value > 90) then {
		_value = _value%90;
	};
	if(_value < 0) then {
		_value = 90-(_value%90);
	};
	_data set[6,_value];

	// 171210 Bank
	_value = parseNumber ctrlText __CTRLCONTENT(171210);
	if(_value > 90) then {
		_value = _value%90;
	};
	if(_value < 0) then {
		_value = 90-(_value%90);
	};
	_data set[7,_value];

	// 171211 Scale
	_value = parseNumber ctrlText __CTRLCONTENT(171211);
	if(_value > 10) then {
		_value = 10;
	};
	if(_value < 0) then {
		_value = 0;
	};
	_data set[8,_value];

	// 171212 Random Offset X

	_value = parseNumber ctrlText __CTRLCONTENT(171212);
	_pos = _data select 9;
	_pos set[0,_value];

		// 171213 Random Offset Y
	_value = parseNumber ctrlText __CTRLCONTENT(171213);
	_pos = _data select 9;
	_pos set[1,_value];

	// 171214 Random Offset Z
	_value = parseNumber ctrlText __CTRLCONTENT(171214);
	_pos = _data select 9;
	_pos set[2,_value];

	// 171215 Random Dir
	_value = parseNumber ctrlText __CTRLCONTENT(171215);
	if(_value > 360) then {
		_value = _value%360;
	};
	if(_value < 0) then {
		_value = 360-(_value%360);
	};
	_data set[10,_value];

	// 171216 Random Pitch
	_value = parseNumber ctrlText __CTRLCONTENT(171216);
	if(_value > 90) then {
		_value = _value%90;
	};
	if(_value < 0) then {
		_value = 90-(_value%90);
	};
	_data set[11,_value];
	// 171217 Random Bank
	_value = parseNumber ctrlText __CTRLCONTENT(171217);
	if(_value > 90) then {
		_value = _value%90;
	};
	if(_value < 0) then {
		_value = 90-(_value%90);
	};
	_data set[12,_value];
	// 171218 Random Scale
	_value = parseNumber ctrlText __CTRLCONTENT(171218);
	if(_value > 10) then {
		_value = 10;
	};
	if(_value < 0) then {
		_value = 0;
	};
	_data set[13,_value];


};
