
class RscText;
class MB_RscText : RscText
{
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = GUI_GRID_H;
	w = 0.3;
	style = 0;
	shadow = 1;
	colorShadow[] = {0,0,0,0.5};
	font = MB_TEXT_FONT;
	//SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = MB_TEXT_DEFAULT;
	linespacing = 1;
};
class MB_Static: MB_RscText
{
	type = 0;
	colorBackground[] = {0,0,0,0};
	text = "";
	lineSpacing = 1;
	fixedWidth = 0;
	colorText[] = {1,1,1,1};
	colorShadow[] = {0,0,0,1};
	moving = 0;
	autoplay = 0;
	loops = 0;
	tileW = 1;
	tileH = 1;
	onCanDestroy = "";
	onDestroy = "";
	onMouseEnter = "";
	onMouseExit = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onVideoStopped = "";
};

class RscStructuredText;
class MB_RscStructuredText : RscStructuredText
{
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {1,1,1,1};
	class Attributes
	{
		font = MB_TEXT_FONT;
		color = "#ffffff";
		align = "left";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = GUI_GRID_H;
	w = 0.3;
	text = "";
	//size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	size = MB_TEXT_DEFAULT;
	sizeEx = MB_TEXT_DEFAULT;
	shadow = 1;
};
class RscPicture;
class MB_RscPicture : RscPicture
{
	type = 0;
	idc = -1;
	style = ST_PICTURE;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = MB_TEXT_FONT;
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class RscListBox;
class MB_RscListBox : RscListBox
{
	type = 5;
	w = 0.4;
	h = 0.4;
	rowHeight = 0;
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {1,0,0,0};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorBackground[] = {0,0,0,0.3};
	soundSelect[] =
	{
		"\A3\ui_f\data\sound\RscListbox\soundSelect",
		0.09,
		1
	};
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	class ListScrollBar
	{
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	};
	style = 16;
	font = MB_TEXT_FONT;
	//sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEX = MB_TEXT_DEFAULT;
	shadow = 0;
	colorShadow[] = {0,0,0,0.5};
	color[] = {1,1,1,1};
	period = 1.2;
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};
class RscActiveText;
class MB_RscActiveText : RscActiveText
{
	type = 11;
	style = 0;
	color[] = {1,1,1,1};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,1};
	colorText[] = {1,1,1,0.7};
	soundClick[] = {"",0.1,1};
	soundEnter[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	font = MB_TEXT_FONT;
	x = 0;
	y = 0;
	h = GUI_GRID_H;
	w = 0.3;
	//sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	size = MB_TEXT_DEFAULT;
	sizeEx = MB_TEXT_DEFAULT;
};
class IGUIBack;
class MB_IGUIBack : IGUIBack
{
	type = 0;
	idc = 124;
	style = 128;
	text = "";
	colorText[] = {0,0,0,0};
	font = MB_TEXT_FONT;
	sizeEx = 0;
	shadow = 0;
	x = 0.1;
	y = 0.1;
	w = 0.1;
	h = 0.1;
	colorbackground[] =
	{
		"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
	};
};

class RscButton;
class MB_RscButton : RscButton
{
	idc = -1;
	type = CT_BUTTON;
	style = ST_CENTER + ST_MULTI;
	default = false;
	font = MB_TEXT_FONT;

	sizeEx = MB_TEXT_LARGE;

	colorText[] = { 0.9, 0.9, 0.9, 1 };
	colorFocused[] = { 0.9, 0.9, 0.9, 1 };  // border color for focused state
	colorDisabled[] = {  0.5, 0.5, 0.5, 0.7 };   // text color for disabled state
	colorBackground[] = { 0.1, 0.1, 0.1, 0.8 };
	colorBackgroundDisabled[] = { 0.5, 0.5, 0.5, 0.4 };   // background color for disabled state
	colorBackgroundActive[] = { 0, 0.75, 0, 0.9 };   // background color for active state

	offsetX = 0.005;
	offsetY = 0.005;
	offsetPressedX = 0.005;
	offsetPressedY = 0.005;
	colorShadow[] = { 0, 0, 0, 0.2 };
	colorBorder[] = { 0, 0, 0, 1 };
	borderSize = 0;
	soundEnter[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",
		0.09,
		1
	};
	soundPush[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundPush",
		0.09,
		1
	};
	soundClick[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundClick",
		0.09,
		1
	};
	soundEscape[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",
		0.09,
		1
	};
	x = 0.4;
	y = 0.475;
	w = 0.2;
	h = 0.05;
	text = "";
	action = "";

	tooltip = ""; // Tooltip text
	//tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
	//tooltipColorText[] = {1,1,1,1}; // Tooltip text color
	//tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color
};
class RscEdit;
class MB_RscEdit : RscEdit
{
	idc = -1;
	type = CT_EDIT;
	canModify = 1;
    style = "0x00 + 0x40";
    font = MB_TEXT_FONT;
    //sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = MB_TEXT_DEFAULT;
	shadow = 2;
	x = 0;
	y = 0;
	w = .2;
	h = .4;
	size = 0.2;
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
    colorBackground[] = {0,0,0,1};
    colorText[] = {1,1,1,1};
	colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorDisabled[] = {1,1,1,0.25};
	autocomplete = "";
};
class RscCheckbox;
class MB_RscCheckbox : RscCheckbox
{
	idc = -1;
	style = 0;
	type = 7;
	checked_strings[] = {"CHECKED"};
	color[] = {0,0,0,0};
	colorBackground[] = {0,0,0,1};
	colorDisable[] = {0.4,0.4,0.4,1};
	colorSelect[] = {0,0,0,1};
	colorSelectedBg[] = {0,0,0,0.8};
	colorText[] = {1,0.2,0.2,1};
	colorTextDisable[] = {0.4,0.4,0.4,1};
	colorTextSelect[] = {0.2,1,0.2,1};
	columns = 1;
	font = MB_TEXT_FONT;
	rows = 1;
	//sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeEx = MB_TEXT_DEFAULT;
	strings[] = {"UNCHECKED"};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
	w = 0.2;
	h = 0.029412;
	x = 0;
	y = 0;
};
class RscMap;
class MB_RscMap : RscMap
{
	access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
	idc = -1; // Control identification (without it, the control won't be displayed)
	type = CT_MAP; // Type
	style = ST_PICTURE; // Style
	default = 0; // Control selected by default (only one within a display can be used)
	blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

	x = 29 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X; // Horizontal coordinates
	y = 1 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y; // Vertical coordinates
	w = 10 * GUI_GRID_CENTER_W; // Width
	h = 6 * GUI_GRID_CENTER_H; // Height

	sizeEx = GUI_GRID_CENTER_H; // Text size
	font = MB_TEXT_FONT; // Font from CfgFontFamilies
	colorText[] = {0,0,0,1}; // Text color

	tooltip = ""; // Tooltip text
	tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
	tooltipColorText[] = {1,1,1,1}; // Tooltip text color
	tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

	moveOnEdges = 1; // Move map when cursor is near its edge. Discontinued.

	// Rendering density coefficients
	ptsPerSquareSea =	5;	// seas
	ptsPerSquareTxt =	20;	// textures
	ptsPerSquareCLn =	10;	// count-lines
	ptsPerSquareExp =	10;	// exposure
	ptsPerSquareCost =	10;	// cost

	// Rendering thresholds
	ptsPerSquareFor =	9;	// forests
	ptsPerSquareForEdge =	9;	// forest edges
	ptsPerSquareRoad =	6;	// roads
	ptsPerSquareObj =	9;	// other objects

	scaleMin = 0.001; // Min map scale (i.e., max zoom)
	scaleMax = 1.0; // Max map scale (i.e., min zoom)
	scaleDefault = 0.16; // Default scale

	alphaFadeStartScale = 0.1; // Scale at which satellite map starts appearing
	alphaFadeEndScale = 0.01; // Scale at which satellite map is fully rendered
	maxSatelliteAlpha = 0.85; // Maximum alpha of satellite map

	text = "#(argb,8,8,3)color(1,1,1,1)"; // Fill texture
	colorBackground[] = {1,1,1,1}; // Fill color

	colorOutside[] = {0,0,0,1}; // Color outside of the terrain area (not sued when procedural terrain is enabled)
	colorSea[] = {0.4,0.6,0.8,0.5}; // Sea color
	colorForest[] = {0.6,0.8,0.4,0.5}; // Forest color
	colorForestBorder[] = {0.6,0.8,0.4,1}; // Forest border color
	colorRocks[] = {0,0,0,0.3}; // Rocks color
	colorRocksBorder[] = {0,0,0,1}; // Rocks border color
	colorLevels[] = {0.3,0.2,0.1,0.5}; // Elevation number color
	colorMainCountlines[] = {0.6,0.4,0.2,0.5}; // Main countline color (every 5th)
	colorCountlines[] = {0.6,0.4,0.2,0.3}; // Countline color
	colorMainCountlinesWater[] = {0.5,0.6,0.7,0.6}; // Main water countline color (every 5th)
	colorCountlinesWater[] = {0.5,0.6,0.7,0.3}; // Water countline color
	colorPowerLines[] = {0.1,0.1,0.1,1}; // Power lines color
	colorRailWay[] = {0.8,0.2,0,1}; // Railway color
	colorNames[] = {1.1,0.1,1.1,0.9}; // Unknown?
	colorInactive[] = {1,1,0,0.5}; // Unknown?
	colorTracks[] = {0.8,0.8,0.7,0.2}; // Small road border color
	colorTracksFill[] = {0.8,0.7,0.7,1}; // Small road color
	colorRoads[] = {0.7,0.7,0.7,1}; // Medium road border color
	colorRoadsFill[] = {1,1,1,1}; // Medium road color
	colorMainRoads[] = {0.9,0.5,0.3,1}; // Large road border color
	colorMainRoadsFill[] = {1,0.6,0.4,1}; // Large road color
	colorGrid[] = {0.1,0.1,0.1,0.6}; // Grid coordinate color
	colorGridMap[] = {0.1,0.1,0.1,0.6}; // Grid line color

	fontLabel = MB_TEXT_FONT; // Tooltip font from CfgFontFamilies
	sizeExLabel = GUI_GRID_CENTER_H * 0.5; // Tooltip font size

	fontGrid = MB_TEXT_FONT; // Grid coordinate font from CfgFontFamilies
	sizeExGrid = GUI_GRID_CENTER_H * 0.5; // Grid coordinate font size

	fontUnits = MB_TEXT_FONT; // Selected group member font from CfgFontFamilies
	sizeExUnits = GUI_GRID_CENTER_H * 0.5; // Selected group member font size

	fontNames = MB_TEXT_FONT; // Marker font from CfgFontFamilies
	sizeExNames = GUI_GRID_CENTER_H * 0.5; // Marker font size

	fontInfo = MB_TEXT_FONT; // Unknown?
	sizeExInfo = GUI_GRID_CENTER_H * 0.5; // Unknown?

	fontLevel = MB_TEXT_FONT; // Elevation number font
	sizeExLevel = GUI_GRID_CENTER_H * 0.5; // Elevation number font size

	showCountourInterval = 1; // Show Legend

	class Task
	{
		icon = "#(argb,8,8,3)color(1,1,1,1)";
		color[] = {1,1,0,1};

		iconCreated = "#(argb,8,8,3)color(1,1,1,1)";
		colorCreated[] = {0,0,0,1};

		iconCanceled = "#(argb,8,8,3)color(1,1,1,1)";
		colorCanceled[] = {0,0,0,0.5};

		iconDone = "#(argb,8,8,3)color(1,1,1,1)";
		colorDone[] = {0,1,0,1};

		iconFailed = "#(argb,8,8,3)color(1,1,1,1)";
		colorFailed[] = {1,0,0,1};

		size = 8;
		importance = 1; // Required, but not used
		coefMin = 1; // Required, but not used
		coefMax = 1; // Required, but not used
	};
	class ActiveMarker
	{
		color[] = {0,0,0,1}; // Icon color
		size = 2; // Size in pixels
	};
	class Waypoint
	{
		coefMax = 1; // Minimum size coefficient
		coefMin = 4; // Maximum size coefficient
		color[] = {0,0,0,1}; // Icon color
		icon = "#(argb,8,8,3)color(0,0,0,1)"; // Icon texture
		importance = 1; // Drawing importance (when multiple icons are close together, the one with larger importance is prioritized)
		size = 2; // Size in pixels
	};
	class WaypointCompleted: Waypoint{};
	class CustomMark: Waypoint{};
	class Command: Waypoint{};
	class Bush: Waypoint{};
	class Rock: Waypoint{};
	class SmallTree: Waypoint{};
	class Tree: Waypoint{};
	class BusStop: Waypoint{};
	class FuelStation: Waypoint{};
	class Hospital: Waypoint{};
	class Church: Waypoint{};
	class Lighthouse: Waypoint{};
	class Power: Waypoint{};
	class PowerSolar: Waypoint{};
	class PowerWave: Waypoint{};
	class PowerWind: Waypoint{};
	class Quay: Waypoint{};
	class Transmitter: Waypoint{};
	class Watertower: Waypoint{};
	class Cross: Waypoint{};
	class Chapel: Waypoint{};
	class Shipwreck: Waypoint{};
	class Bunker: Waypoint{};
	class Fortress: Waypoint{};
	class Fountain: Waypoint{};
	class Ruin: Waypoint{};
	class Stack: Waypoint{};
	class Tourism: Waypoint{};
	class ViewTower: Waypoint{};

	onCanDestroy = "";
	onDestroy = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";

	onDraw = "";
};
class MB_RscMapMain: MB_RscMap
{
		access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
		idc = -1; // Control identification (without it, the control won't be displayed)
		type = CT_MAP_MAIN; // Type
		style = ST_PICTURE; // Style
		default = 0; // Control selected by default (only one within a display can be used)
		blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

		x = 29 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X; // Horizontal coordinates
		y = 8 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y; // Vertical coordinates
		w = 10 * GUI_GRID_CENTER_W; // Width
		h = 6 * GUI_GRID_CENTER_H; // Height

		tooltip = ""; // Tooltip text
		tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
		tooltipColorText[] = {1,1,1,1}; // Tooltip text color
		tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

		showCountourInterval = 1; // Show Legend

		class Legend
		{
			x = 30 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X; // Horizontal coordinates
			y = 9 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y; // Vertical coordinates
			w = 8 * GUI_GRID_CENTER_W; // Width
			h = 4 * GUI_GRID_CENTER_H; // Height

			colorBackground[] = {1,1,1,1}; // Fill color

			font = MB_TEXT_FONT; // Font from CfgFontFamilies
			sizeEx = 0.8 * GUI_GRID_CENTER_H; // Text size
			color[] = {0,0,0,1}; // Text color

		};

		onCanDestroy = "";
		onDestroy = "";
		onSetFocus = "";
		onKillFocus = "";
		onKeyDown = "";
		onKeyUp = "";
		onMouseButtonDown = "";
		onMouseButtonUp = "";
		onMouseButtonClick = "";
		onMouseButtonDblClick = "";
		onMouseZChanged = "";
		onMouseMoving = "";
		onMouseHolding = "";

		onDraw = "";
	};

class RscTree;
class MB_RscTree : RscTree {
	access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
	idc = CT_TREE; // Control identification (without it, the control won't be displayed)
	type = CT_TREE; // Type is 12
	style = ST_LEFT; // Style
	default = 0; // Control selected by default (only one within a display can be used)
	blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

	x = 0; // Horizontal coordinates
	y = 0; // Vertical coordinates
	w = 1; // Width
	h = 1; // Height

	colorBorder[] = {0,0,0,1}; // Frame color

	colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
	colorSelect[] = {1,0.5,0,1}; // Selected item fill color (when multiselectEnabled is 0)
	colorMarked[] = {1,0.5,0,0.5}; // Marked item fill color (when multiselectEnabled is 1)
	colorMarkedSelected[] = {1,0.5,0,1}; // Selected item fill color (when multiselectEnabled is 1)

	sizeEx = MB_TEXT_DEFAULT; // Text size
	font = MB_TEXT_FONT; // Font from CfgFontFamilies
	shadow = 1; // Shadow (0 - none, 1 - N/A, 2 - black outline)
	colorText[] = {1,1,1,1}; // Text color
	colorSelectText[] = {1,1,1,1}; // Selected text color (when multiselectEnabled is 0)
	colorMarkedText[] = {1,1,1,1}; // Selected text color (when multiselectEnabled is 1)

	tooltip = "CT_TREE"; // Tooltip text
	tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
	tooltipColorText[] = {1,1,1,1}; // Tooltip text color
	tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

	multiselectEnabled = 1; // Allow selecting multiple items while holding Ctrl or Shift
	expandOnDoubleclick = 1; // Expand/collapse item upon double-click
	hiddenTexture = "A3\ui_f\data\gui\rsccommon\rsctree\hiddenTexture_ca.paa"; // Expand icon
	expandedTexture = "A3\ui_f\data\gui\rsccommon\rsctree\expandedTexture_ca.paa"; // Collapse icon
	maxHistoryDelay = 1; // Time since last keyboard type search to reset it

	// Scrollbar configuration
	class ScrollBar
	{
		width = 0; // width of ScrollBar
		height = 0; // height of ScrollBar
		scrollSpeed = 0.01; // scroll speed of ScrollBar

		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

		color[] = {1,1,1,1}; // Scrollbar color
	};

	colorDisabled[] = {0,0,0,0}; // Does nothing, but must be present, otherwise an error is shown
	colorArrow[] = {0,0,0,0}; // Does nothing, but must be present, otherwise an error is shown

	onCanDestroy = "";
	onDestroy = "";
	onMouseEnter = "";
	onMouseExit = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";

	onTreeSelChanged = "";
	onTreeLButtonDown = "";
	onTreeDblClick = "";
	onTreeExpanded = "";
	onTreeCollapsed = "";
	//onTreeMouseMove = "systemChat str ['onTreeMouseMove',_this]; false"; // Causing CTD
	//onTreeMouseHold = "systemChat str ['onTreeMouseHold',_this]; false"; // Causing CTD
	onTreeMouseExit = "";
};

class _CT_XLISTBOX
{
	access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
	idc = CT_XLISTBOX; // Control identification (without it, the control won't be displayed)
	type = CT_XLISTBOX; // Type is 42
	style = SL_HORZ + ST_CENTER + LB_TEXTURES; // Style
	default = 0; // Control selected by default (only one within a display can be used)
	blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

	x = 0; // Horizontal coordinates
	y = 0; // Vertical coordinates
	w = 0; // Width
	h = 0; // Height

	color[] = {1,1,1,1}; // Arrow color
	colorActive[] = {1,0.5,0,1}; // Selected arrow color

	sizeEx = MB_TEXT_DEFAULT; // Text size
	font = MB_TEXT_FONT; // Font from CfgFontFamilies
	shadow = 0; // Shadow (0 - none, 1 - N/A, 2 - black outline)
	colorText[] = {1,1,1,1}; // Text color
	colorSelect[] = {1,0.5,0,1}; // Selected text color
	colorDisabled[] = {1,1,1,0.5}; // Disabled text color

	tooltip = "CT_XLISTBOX"; // Tooltip text
	tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
	tooltipColorText[] = {1,1,1,1}; // Tooltip text color
	tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

	arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa"; // Arrow
	arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa"; // Arrow when clicked on
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa"; // Fill texture

	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

	onCanDestroy = "true";
	onDestroy = "false";
	onSetFocus = "false";
	onKillFocus = "false";
	onKeyDown = "false";
	onKeyUp = "false";
	onMouseButtonDown = "false";
	onMouseButtonUp = "false";
	onMouseButtonClick = "false";
	onMouseButtonDblClick = "false";
	onMouseZChanged = "false";
	onMouseMoving = "";
	onMouseHolding = "";

	onLBSelChanged = "false";
	onLBDblClick = "false";
};
class _CT_COMBO
{
	access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
	idc = CT_COMBO; // Control identification (without it, the control won't be displayed)
	type = CT_COMBO; // Type is 4
	style = ST_LEFT + LB_TEXTURES; // Style
	default = 0; // Control selected by default (only one within a display can be used)
	blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

	x = 0; // Horizontal coordinates
	y = 0; // Vertical coordinates
	w = 0.1; // Width
	h = 0.1; // Height

	colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
	colorSelectBackground[] = {0,0.8,0,0.8}; // Selected item fill color

	sizeEx = MB_TEXT_DEFAULT; // Text size
	font = MB_TEXT_FONT; // Font from CfgFontFamilies
	shadow = 0; // Shadow (0 - none, 1 - N/A, 2 - black outline)
	colorText[] = {1,1,1,1}; // Text and frame color
	colorDisabled[] = {1,1,1,0.5}; // Disabled text color
	colorSelect[] = {1,1,1,1}; // Text selection color

	pictureColor[] = {1,0.5,0,1}; // Picture color
	pictureColorSelect[] = {1,1,1,1}; // Selected picture color
	pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color

	tooltip = "CT_COMBO"; // Tooltip text
	tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
	tooltipColorText[] = {1,1,1,1}; // Tooltip text color
	tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa"; // Expand arrow
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa"; // Collapse arrow

	wholeHeight = 5 * 0.05; // Maximum height of expanded box (including the control height)
	maxHistoryDelay = 1; // Time since last keyboard type search to reset it

	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1}; // Sound played when the list is expanded
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1}; // Sound played when the list is collapsed
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1}; // Sound played when an item is selected

	// Scrollbar configuration (applied only when LB_TEXTURES style is used)
	class ComboScrollBar
	{
		width = 0; // width of ComboScrollBar
		height = 0; // height of ComboScrollBar
		scrollSpeed = 0.01; // scrollSpeed of ComboScrollBar

		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

		color[] = {1,1,1,1}; // Scrollbar color
	};

	onCanDestroy = "";
	onDestroy = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";

	onLBSelChanged = "false";
};
class MB_RscControlsGroup
{
	type = CT_CONTROLS_GROUP;
	idc = -1;
	style = ST_MULTI;
    x = 0;
	y = 0;
	w = 1;
	h = 1;
	shadow=0;
	class VScrollbar
	{
		width = 0.021;
		autoScrollSpeed = -1;
		autoScrollDelay = 5;
		autoScrollRewind = 0;
                shadow=0;
	};

	class HScrollbar
	{
		height = 0.028;
                shadow=0;
	};

	class ScrollBar
	{
                color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		thumb = "#(argb,8,8,3)color(1,1,1,1)";
		arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
		arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
		border = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class Controls{};// an empty class telling the engine, no custom, additional controls
};
class MB_RscToolbox {
  idc = 200;
  type = CT_TOOLBOX;  //defined constant (6)
  style = ST_LEFT; //defined constant (0)

  x = 0.1;
  y = 0.2;
  w = 0.2;
  h = 0.15;

  colorText[] = {1, 1, 1, 1};
  color[] = {0, 0, 0, 1};    // seems nothing to change, but define it to avoid error!
  colorTextSelect[] = {1, 1, 1, 1};
  colorSelect[] = {0, 0, 1, 1};
  colorTextDisable[] = {0.4, 0.4, 0.4, 1};
  colorDisable[] = {0.4, 0.4, 0.4, 1};
  colorSelectedBg[] = {0.0, 0.8, 0.0, 1};
  font = MB_TEXT_FONT;
  sizeEx = MB_TEXT_DEFAULT;

  rows = 3;
  columns = 2;
  strings[] = {"Entry 1","Entry 2","Entry 3","Entry 4","Entry 5","Entry 6"};
  values[] = {1,1,0,1,0,0};
};

class MB_RscBackground : MB_RscText { //--- Render out.
	idc = -1;
	text = "";
	x = "SafeZoneX + (SafeZoneW * 0.8)";
	y = "SafeZoneY + (SafezoneH * 0)";
	w = "SafeZoneW * 0.20";
	h = "SafeZoneH * 1";
	colorBackground[] = {0, 0, 0, 0.3};
};

class MB_Menu: MB_RscText
{
	type = 46;
	font = MB_TEXT_FONT_TITLE;
	colorBorder[] = {0,0,0,0};
	colorBackground[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorSelect[] = {0,0,0,1};
	colorSelectBackground[] = {1,0.5,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureSelect[] = {0,0,0,1};
	colorPictureDisabled[] = {1,1,1,0.5};
	arrow = "\a3\3DEN\Data\Controls\ctrlMenu\arrow_ca.paa";
	rowHeight = 0;
	itemSpacingW = 0.01;
	itemSpacingH = 0.01;
	pictureCheckboxEnabled = "\a3\3DEN\Data\Controls\CtrlMenu\pictureCheckboxEnabled_ca.paa";
	pictureCheckboxDisabled = "#(argb,8,8,3)color(0,0,0,0)";
	pictureRadioEnabled = "\a3\3DEN\Data\Controls\CtrlMenu\pictureRadioEnabled_ca.paa";
	pictureRadioDisabled = "#(argb,8,8,3)color(0,0,0,0)";
};
class MB_MenuStrip: MB_Menu
{
	type = 47;
	colorStripBackground[] = {0,0,0,1};
	colorStripText[] = {1,1,1,1};
	colorStripSelect[] = {0,0,0,1};
	colorStripSelectBackground[] = {1,0.5,0,1};
	colorStripDisabled[] = {1,1,1,0.25};
};

class MB_RscProgress
{
	x = "SafeZoneX + (SafeZoneW * 0)";
	y = "SafeZoneY + (SafezoneH * 0.95)";
	w = "SafeZoneW * 1.0";
	h = "SafeZoneH * 0.05";
	texture = "#(argb,8,8,3)color(0,1,0,0.75)";
	colorFrame[] = {0,0,0,0};
	colorBar[] = {1,1,1,1};
};

class MB_RscControlsGroupNoScrollbars: MB_RscControlsGroup
{
	class VScrollbar: VScrollBar
	{
		width = 0;
	};
	class HScrollbar: HScrollBar
	{
		height = 0;
	};
};
class MB_RscControlsGroupNoHScrollbars: MB_RscControlsGroup
{
	class HScrollbar: HScrollBar
	{
		height = 0;
	};
};
class MB_RscControlsGroupNoVScrollbars: MB_RscControlsGroup
{
	class VScrollbar: VScrollBar
	{
		width = 0;
	};
};

class MB_RscButtonPictureKeepAspect: MB_RscButton
{
	style = "0x02 + 0x30 + 0x800";
};
class MB_RscButtonToolbar: MB_RscButtonPictureKeepAspect
{
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
};
