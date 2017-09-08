
class MB_MissingPane: ctrlControlsGroupNoHScrollbars {
  idc = __IDC_PANE_CONTENT;
  x = 0;
  y = __GUI_PANE_HEADER_H;
  w = __GUI_PANE_W;
  h = 15 * GRID_H;
  MB_hAdjust = 1;

  class controls {
    class Background: MB_CtrlPaneBackground { };

    class Text: RscText {
      idc = __IDC_PANE_CONTENT_DEFAULT;
      x = 0;
      y = 0;
      h = 15 * GRID_H;
      w = 20 * __GUI_PANE_W;
      text = "This window has a non-existant 'type' entry within Mapbuilder>>Panes config";
      MB_hAdjust = 1;
    };

    class Resizer: MB_CtrlResizer { };
  };
};
