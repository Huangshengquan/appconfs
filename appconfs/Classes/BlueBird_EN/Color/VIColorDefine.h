//
//  VIColorDefine.h
//  Pods
//
//  Created by Amos on 2021/2/26.
//

#ifndef VIColorDefine_h
#define VIColorDefine_h

///*-----------------------------------  公共模块（common）   ----------------------------------- */

#define color_common_base_custom                     @"#5987FB"                        /// app基准色  禁用 alph .3f
#define color_common_label_text_selected             color_common_base_custom          /// 公共选中文本颜色
#define color_common_btn_globalsolid_bg_normal       color_common_base_custom          /// 公共实心按钮背景色（正常）（基准色）
#define color_common_btn_globalsolid_bg_disabled     color_common_base_custom          /// 公共实心按钮背景色（禁用）（基准色
#define color_common_btn_globalhollow_text_normal    color_common_base_custom          /// 公共空心按钮边框背景色（正常）（基准色）

#define color_common_base_black                      @"#000000"          /// app基础黑色
#define color_common_base_lightblack                 @"#333333"          /// app基础浅黑色
#define color_common_base_white                      @"#FFFFFF"          /// app基础白色 禁用 alph .3f
#define color_common_base_yellow                     @"0xFF9B2E"         /// app基础黄色
#define color_common_base_gray                       @"0x666666"         /// app基础灰色
#define color_common_view_primary_bg                 @"#F0F0F0,#121212"  /// 一级背景色
#define color_common_view_secondary_bg               @"#FFFFFF,#1C1C1C"  /// 二级背景色
#define color_common_view_third_bg                   @"#FFFFFF,#121212"  /// 三级背景色
#define color_common_line_divider_bg                 @"#E5E5E5,#121212"  /// 二级背景上的分割线
#define color_common_label_primary_text              @"#333333,#EEEEEE"  /// 标题和正文
#define color_common_label_secondary_text            @"#999999"          /// 二级标题和说明性文案
#define color_common_line_divider_bg                 @"#E5E5E5,#121212"  /// 二级背景上的分割线
#define color_common_label_describe_text             @"#666666,#EEEEEE"  /// 描述文案
#define color_common_btn_globalhollow_bg_normal      @"#FFFFFF,#121212"  /// 公共空心按钮背景色（正常）
#define color_common_dialog_cicle_frame              @"0xBFBFBF"         /// 弹窗边框
#define color_common_label_baritem_bg                @"#999999,#DDDDDD"  /// bar 上的item底部的文案颜色
#define color_common_view_popview_bg                 @"#FFFFFF,#C1ECFF"  /// 弹窗背景色

///*-----------------------------------  登录注册模块（login） ----------------------------------- */

#define color_login_edit_account_normal color_common_label_primary_text
/// 登录页面输入框文本颜色
#define color_login_label_secondary_text     color_common_base_gray
/// 登录页面“注册”，“忘记密码”文本颜色
#define color_login_label_white_text                 color_common_label_primary_text  /// 登录页面“HI，欢迎使用”，“地区选择”，“注册”，“忘记密码”文本颜色
#define color_login_edit_account_bg                  @"#FFFFFF"  /// 登录页面输入框背景颜色
#define color_login_line_accountdivider_bg           @"#CCCCCC,#666666"  /// 登录页面输入框分割线颜色
#define color_login_line_countrylistdivider_bg       @"#D4D4D4,#2E2E2E"  /// 国家选择页面列表分割线颜色
#define color_login_line_countrydivider_bg           @"#CCCCCC,#999999"  /// 国家选择页面输入框分割线颜色

///*-----------------------------------  设备（device）      ----------------------------------- */

#define color_device_view_card_bg                    @"#FFFFFF,#232323"  /// 设备列表卡片背景色

///*-----------------------------------  媒体库（media）     ----------------------------------- */

///*-----------------------------------  发现（discover）   ----------------------------------- */

#define color_discover_text_appearedtip              @"#AFAFAF"          /// 家庭成员管理-最近有谁出现
#define color_discover_label_tag_text                @"#BBBBBB,#EEEEEE"  /// 家庭成员管理-标签字体、边框
#define color_discover_view_mask_bg                  @"#F4F4F4,#232323"  /// 陌生人合并背景图

///*-----------------------------------  我的（me）         ----------------------------------- */

#define color_me_view_cloudstrorage_bg               @"#E5E5E5,#232323"  /// 云存储进度条
#define color_me_label_album_text                    @"#CCCCCC,#FFFFFF"  /// 收藏页文本

///*-----------------------------------  播放（player）     ----------------------------------- */

#define color_player_view_primary_bg                 @"#1D2127,#121212"  /// 播放一级背景色
#define color_player_view_secondary_bg               @"#23272E,#1C1C1C"  /// 播放二级背景色
#define color_player_text_celltime                   @"#A3A3A3"
#define color_player_label_bartitle_text             @"#5987FB,#FFFFFF"  /// 播放页底部bar文本颜色
#define color_player_view_list_bg                    @"#2B323C,#1C1C1C"  /// 播放事件cell背景色

///*-----------------------------------  通用 （不支持配置）  ----------------------------------- */

#define color_normal_delete_disable                  @"0xCCCCCC"
#define color_normal_delete                          @"0xFF3B30"
#define color_normal_doit_red                        @"0xFF5B4F"  /// 小红点
#define color_normal_purple                          @"0x25B7BC"
#define color_normal_gray                            @"0x999999,0x666666"
#define color_device_view_batterry_bg                @"0x27D363"         /// 设备电量等级背景色
#define color_player_btn_state_frame                 @"0x979797"         /// 播放state状态按钮边框


#endif /* VIColorDefine_h */
