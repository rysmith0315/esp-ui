// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: Smart_Gadget

#include "../ui.h"

void ui_SmartGadgetChat_screen_init(void)
{
    ui_SmartGadgetChat = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_SmartGadgetChat, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_SmartGadgetChat, &ui_img_pattern_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_tiled(ui_SmartGadgetChat, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Panel_Chat_container = lv_obj_create(ui_SmartGadgetChat);
    lv_obj_set_width(ui_SmartGadgetChat_Panel_Chat_container, lv_pct(100));
    lv_obj_set_height(ui_SmartGadgetChat_Panel_Chat_container, lv_pct(100));
    lv_obj_set_align(ui_SmartGadgetChat_Panel_Chat_container, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_SmartGadgetChat_Panel_Chat_container, lv_color_hex(0xFFFFFF),
                              LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SmartGadgetChat_Panel_Chat_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Small_label_Chat_date = ui_Label_Small_Label_create(ui_SmartGadgetChat_Panel_Chat_container);
    lv_obj_set_x(ui_SmartGadgetChat_Small_label_Chat_date, 0);
    lv_obj_set_y(ui_SmartGadgetChat_Small_label_Chat_date, 17);
    lv_obj_set_align(ui_SmartGadgetChat_Small_label_Chat_date, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_SmartGadgetChat_Small_label_Chat_date, "Yesterday 07:25 PM");
    lv_obj_set_style_text_color(ui_SmartGadgetChat_Small_label_Chat_date, lv_color_hex(0x000746),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SmartGadgetChat_Small_label_Chat_date, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Panel_C1 = lv_obj_create(ui_SmartGadgetChat_Panel_Chat_container);
    lv_obj_set_height(ui_SmartGadgetChat_Panel_C1, 100);
    lv_obj_set_width(ui_SmartGadgetChat_Panel_C1, lv_pct(100));
    lv_obj_set_x(ui_SmartGadgetChat_Panel_C1, 0);
    lv_obj_set_y(ui_SmartGadgetChat_Panel_C1, 60);
    lv_obj_clear_flag(ui_SmartGadgetChat_Panel_C1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SmartGadgetChat_Panel_C1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SmartGadgetChat_Panel_C1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_SmartGadgetChat_Panel_C1, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_SmartGadgetChat_Panel_C1, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_SmartGadgetChat_Panel_C1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_SmartGadgetChat_Panel_C1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Panel_Chat_Panel1 = lv_obj_create(ui_SmartGadgetChat_Panel_C1);
    lv_obj_set_width(ui_SmartGadgetChat_Panel_Chat_Panel1, 169);
    lv_obj_set_height(ui_SmartGadgetChat_Panel_Chat_Panel1, 81);
    lv_obj_clear_flag(ui_SmartGadgetChat_Panel_Chat_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_SmartGadgetChat_Panel_Chat_Panel1, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SmartGadgetChat_Panel_Chat_Panel1, lv_color_hex(0x9C9CD9),
                              LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SmartGadgetChat_Panel_Chat_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_SmartGadgetChat_Panel_Chat_Panel1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_SmartGadgetChat_Panel_Chat_Panel1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_SmartGadgetChat_Panel_Chat_Panel1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_SmartGadgetChat_Panel_Chat_Panel1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Small_label_Chat1 = ui_Label_Small_Label_create(ui_SmartGadgetChat_Panel_Chat_Panel1);
    lv_obj_set_width(ui_SmartGadgetChat_Small_label_Chat1, lv_pct(100));
    lv_obj_set_height(ui_SmartGadgetChat_Small_label_Chat1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SmartGadgetChat_Small_label_Chat1, 0);
    lv_obj_set_y(ui_SmartGadgetChat_Small_label_Chat1, 0);
    lv_obj_set_align(ui_SmartGadgetChat_Small_label_Chat1, LV_ALIGN_TOP_LEFT);
    lv_label_set_text(ui_SmartGadgetChat_Small_label_Chat1, "Let's get some dinner, how about pizza?");
    lv_obj_set_style_text_color(ui_SmartGadgetChat_Small_label_Chat1, lv_color_hex(0xFFFFFF),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SmartGadgetChat_Small_label_Chat1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Image_Chat_Icon1 = lv_img_create(ui_SmartGadgetChat_Panel_C1);
    lv_img_set_src(ui_SmartGadgetChat_Image_Chat_Icon1, &ui_img_chatbox_png);
    lv_obj_set_width(ui_SmartGadgetChat_Image_Chat_Icon1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SmartGadgetChat_Image_Chat_Icon1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SmartGadgetChat_Image_Chat_Icon1, 0);
    lv_obj_set_y(ui_SmartGadgetChat_Image_Chat_Icon1, 80);
    lv_obj_add_flag(ui_SmartGadgetChat_Image_Chat_Icon1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SmartGadgetChat_Image_Chat_Icon1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_SmartGadgetChat_Image_Chat_Icon1, lv_color_hex(0x9C9CD9),
                                 LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_SmartGadgetChat_Image_Chat_Icon1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Panel_C2 = lv_obj_create(ui_SmartGadgetChat_Panel_Chat_container);
    lv_obj_set_height(ui_SmartGadgetChat_Panel_C2, 100);
    lv_obj_set_width(ui_SmartGadgetChat_Panel_C2, lv_pct(100));
    lv_obj_set_x(ui_SmartGadgetChat_Panel_C2, 0);
    lv_obj_set_y(ui_SmartGadgetChat_Panel_C2, 160);
    lv_obj_clear_flag(ui_SmartGadgetChat_Panel_C2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SmartGadgetChat_Panel_C2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SmartGadgetChat_Panel_C2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_SmartGadgetChat_Panel_C2, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_SmartGadgetChat_Panel_C2, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_SmartGadgetChat_Panel_C2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_SmartGadgetChat_Panel_C2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Panel_Chat_Panel2 = lv_obj_create(ui_SmartGadgetChat_Panel_C2);
    lv_obj_set_width(ui_SmartGadgetChat_Panel_Chat_Panel2, 169);
    lv_obj_set_height(ui_SmartGadgetChat_Panel_Chat_Panel2, 81);
    lv_obj_set_align(ui_SmartGadgetChat_Panel_Chat_Panel2, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_SmartGadgetChat_Panel_Chat_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_SmartGadgetChat_Panel_Chat_Panel2, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SmartGadgetChat_Panel_Chat_Panel2, lv_color_hex(0x293062),
                              LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SmartGadgetChat_Panel_Chat_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_SmartGadgetChat_Panel_Chat_Panel2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_SmartGadgetChat_Panel_Chat_Panel2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_SmartGadgetChat_Panel_Chat_Panel2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_SmartGadgetChat_Panel_Chat_Panel2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Small_label_Chat2 = ui_Label_Small_Label_create(ui_SmartGadgetChat_Panel_Chat_Panel2);
    lv_obj_set_width(ui_SmartGadgetChat_Small_label_Chat2, lv_pct(100));
    lv_obj_set_height(ui_SmartGadgetChat_Small_label_Chat2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SmartGadgetChat_Small_label_Chat2, 0);
    lv_obj_set_y(ui_SmartGadgetChat_Small_label_Chat2, 0);
    lv_obj_set_align(ui_SmartGadgetChat_Small_label_Chat2, LV_ALIGN_TOP_LEFT);
    lv_label_set_text(ui_SmartGadgetChat_Small_label_Chat2, "Sounds good! What about James?");
    lv_obj_set_style_text_color(ui_SmartGadgetChat_Small_label_Chat2, lv_color_hex(0xFFFFFF),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SmartGadgetChat_Small_label_Chat2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Image_Chat_Icon2 = lv_img_create(ui_SmartGadgetChat_Panel_C2);
    lv_img_set_src(ui_SmartGadgetChat_Image_Chat_Icon2, &ui_img_chatbox2_png);
    lv_obj_set_width(ui_SmartGadgetChat_Image_Chat_Icon2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SmartGadgetChat_Image_Chat_Icon2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SmartGadgetChat_Image_Chat_Icon2, 0);
    lv_obj_set_y(ui_SmartGadgetChat_Image_Chat_Icon2, 80);
    lv_obj_set_align(ui_SmartGadgetChat_Image_Chat_Icon2, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_SmartGadgetChat_Image_Chat_Icon2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SmartGadgetChat_Image_Chat_Icon2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_SmartGadgetChat_Image_Chat_Icon2, lv_color_hex(0x293062),
                                 LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_SmartGadgetChat_Image_Chat_Icon2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Small_label_Delifered = ui_Label_Small_Label_create(ui_SmartGadgetChat_Panel_C2);
    lv_obj_set_x(ui_SmartGadgetChat_Small_label_Delifered, 47);
    lv_obj_set_y(ui_SmartGadgetChat_Small_label_Delifered, 83);
    lv_obj_set_align(ui_SmartGadgetChat_Small_label_Delifered, LV_ALIGN_TOP_LEFT);
    lv_label_set_text(ui_SmartGadgetChat_Small_label_Delifered, "Delivered");
    lv_obj_set_style_text_color(ui_SmartGadgetChat_Small_label_Delifered, lv_color_hex(0x9C9CD9),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SmartGadgetChat_Small_label_Delifered, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Panel_C3 = lv_obj_create(ui_SmartGadgetChat_Panel_Chat_container);
    lv_obj_set_height(ui_SmartGadgetChat_Panel_C3, 100);
    lv_obj_set_width(ui_SmartGadgetChat_Panel_C3, lv_pct(100));
    lv_obj_set_x(ui_SmartGadgetChat_Panel_C3, 0);
    lv_obj_set_y(ui_SmartGadgetChat_Panel_C3, 270);
    lv_obj_clear_flag(ui_SmartGadgetChat_Panel_C3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SmartGadgetChat_Panel_C3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SmartGadgetChat_Panel_C3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_SmartGadgetChat_Panel_C3, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_SmartGadgetChat_Panel_C3, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_SmartGadgetChat_Panel_C3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_SmartGadgetChat_Panel_C3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Panel_Chat_Panel3 = lv_obj_create(ui_SmartGadgetChat_Panel_C3);
    lv_obj_set_width(ui_SmartGadgetChat_Panel_Chat_Panel3, 169);
    lv_obj_set_height(ui_SmartGadgetChat_Panel_Chat_Panel3, 81);
    lv_obj_clear_flag(ui_SmartGadgetChat_Panel_Chat_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_SmartGadgetChat_Panel_Chat_Panel3, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SmartGadgetChat_Panel_Chat_Panel3, lv_color_hex(0x9C9CD9),
                              LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SmartGadgetChat_Panel_Chat_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_SmartGadgetChat_Panel_Chat_Panel3, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_SmartGadgetChat_Panel_Chat_Panel3, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_SmartGadgetChat_Panel_Chat_Panel3, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_SmartGadgetChat_Panel_Chat_Panel3, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Small_label_Chat3 = ui_Label_Small_Label_create(ui_SmartGadgetChat_Panel_Chat_Panel3);
    lv_obj_set_width(ui_SmartGadgetChat_Small_label_Chat3, lv_pct(100));
    lv_obj_set_height(ui_SmartGadgetChat_Small_label_Chat3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SmartGadgetChat_Small_label_Chat3, 0);
    lv_obj_set_y(ui_SmartGadgetChat_Small_label_Chat3, 0);
    lv_obj_set_align(ui_SmartGadgetChat_Small_label_Chat3, LV_ALIGN_TOP_LEFT);
    lv_label_set_text(ui_SmartGadgetChat_Small_label_Chat3, "He likes it too! Where do we meet?");
    lv_obj_set_style_text_color(ui_SmartGadgetChat_Small_label_Chat3, lv_color_hex(0xFFFFFF),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SmartGadgetChat_Small_label_Chat3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Image_Chat_Icon3 = lv_img_create(ui_SmartGadgetChat_Panel_C3);
    lv_img_set_src(ui_SmartGadgetChat_Image_Chat_Icon3, &ui_img_chatbox_png);
    lv_obj_set_width(ui_SmartGadgetChat_Image_Chat_Icon3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SmartGadgetChat_Image_Chat_Icon3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SmartGadgetChat_Image_Chat_Icon3, 0);
    lv_obj_set_y(ui_SmartGadgetChat_Image_Chat_Icon3, 80);
    lv_obj_add_flag(ui_SmartGadgetChat_Image_Chat_Icon3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SmartGadgetChat_Image_Chat_Icon3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_SmartGadgetChat_Image_Chat_Icon3, lv_color_hex(0x9C9CD9),
                                 LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_SmartGadgetChat_Image_Chat_Icon3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SmartGadgetChat_Scrolldots_Scrolldots2 = ui_Panel_Scrolldots_create(ui_SmartGadgetChat);
    lv_obj_set_x(ui_SmartGadgetChat_Scrolldots_Scrolldots2, 0);
    lv_obj_set_y(ui_SmartGadgetChat_Scrolldots_Scrolldots2, -8);

    lv_obj_set_width(ui_comp_get_child(ui_SmartGadgetChat_Scrolldots_Scrolldots2, UI_COMP_PANEL_SCROLLDOTS_PANEL_D1), 4);
    lv_obj_set_height(ui_comp_get_child(ui_SmartGadgetChat_Scrolldots_Scrolldots2, UI_COMP_PANEL_SCROLLDOTS_PANEL_D1), 4);

    lv_obj_set_x(ui_comp_get_child(ui_SmartGadgetChat_Scrolldots_Scrolldots2, UI_COMP_PANEL_SCROLLDOTS_PANEL_D2), 10);
    lv_obj_set_y(ui_comp_get_child(ui_SmartGadgetChat_Scrolldots_Scrolldots2, UI_COMP_PANEL_SCROLLDOTS_PANEL_D2), 0);

    lv_obj_set_width(ui_comp_get_child(ui_SmartGadgetChat_Scrolldots_Scrolldots2, UI_COMP_PANEL_SCROLLDOTS_PANEL_D3), 8);
    lv_obj_set_height(ui_comp_get_child(ui_SmartGadgetChat_Scrolldots_Scrolldots2, UI_COMP_PANEL_SCROLLDOTS_PANEL_D3), 8);
    lv_obj_set_x(ui_comp_get_child(ui_SmartGadgetChat_Scrolldots_Scrolldots2, UI_COMP_PANEL_SCROLLDOTS_PANEL_D3), 21);
    lv_obj_set_y(ui_comp_get_child(ui_SmartGadgetChat_Scrolldots_Scrolldots2, UI_COMP_PANEL_SCROLLDOTS_PANEL_D3), 0);
    lv_obj_set_style_bg_color(ui_comp_get_child(ui_SmartGadgetChat_Scrolldots_Scrolldots2,
                                                UI_COMP_PANEL_SCROLLDOTS_PANEL_D3), lv_color_hex(0x101C52), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_comp_get_child(ui_SmartGadgetChat_Scrolldots_Scrolldots2, UI_COMP_PANEL_SCROLLDOTS_PANEL_D3),
                            255, LV_PART_MAIN | LV_STATE_DEFAULT);





    lv_obj_add_event_cb(ui_SmartGadgetChat, ui_event_SmartGadgetChat, LV_EVENT_ALL, NULL);

}
