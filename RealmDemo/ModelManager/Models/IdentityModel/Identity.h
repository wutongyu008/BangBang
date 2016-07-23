//
//  Identity.h
//  RealmDemo
//
//  Created by haigui on 16/7/2.
//  Copyright © 2016年 com.luohaifang. All rights reserved.
//

//用来判断是否登录的 不存在数据库 归档处理
@interface Identity : NSObject
//当前登录的用户guid
@property (nonatomic, copy) NSString *user_guid;
//是不是第一次使用软件
@property (nonatomic, assign) BOOL firstUseSoft;
//请求接口的token
@property (nonatomic, copy) NSString *accessToken;
//连接融云的token
@property (nonatomic, copy) NSString *RYToken;
//七牛SDK连接的token
@property (nonatomic, copy) NSString *QNToken;
//应用的Guid 上传图片时候用
@property (nonatomic, copy) NSString *appGuid;
//新消息来了是否播放声音
@property (nonatomic, assign) BOOL canPlayVoice;
//新消息来了是否震动
@property (nonatomic, assign) BOOL canPlayShake;
//是否显示Bugtags的图标
@property (nonatomic, assign) BOOL showBugTags;
//是不是第一次加载日程
@property (nonatomic, assign) BOOL firstLoadCalendar;
//融云免打扰功能
@property (nonatomic, assign) BOOL ryDisturb;
//融云免打扰开始时间
@property (nonatomic, strong) NSDate *ryDisturbBeginTime;
//融云免打扰结束时间
@property (nonatomic, strong) NSDate *ryDisturbEndTime;

@end
