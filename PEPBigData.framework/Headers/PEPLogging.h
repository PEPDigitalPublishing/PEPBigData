//
//  PEPLogging.h
//  AspectsDemo
//
//  Created by liudongsheng on 2018/3/1.
//  Copyright © 2018年 Peng Gu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEPLogPortManager.h"

//对类的说明
#define PEPLoggingPageImpression @"PEPLoggingPageImpression"
#define PEPLoggingTrackedEvents @"PEPLoggingTrackedEvents"
//#define PEPLoggingEventName @"PEPLoggingEventName"
#define PEPLoggingEventSelectorName @"PEPLoggingEventSelectorName"
#define PEPLoggingEventHandlerBlock @"PEPLoggingEventHandlerBlock"

#define PEPLoggingInstance [PEPLogging shareInstance]


@interface PEPLogging : NSObject

//产品标识
@property(nonatomic, copy) NSString *appId;
//授权key
@property(nonatomic, copy) NSString *accessKey;
//登录用户Id
@property(nonatomic, copy) NSString *userId;
//登录用户所属组织Id
@property(nonatomic, copy) NSString *userOrganizationId;


+ (instancetype)shareInstance;
/**
 日志初始化

 @param configs 配置 点击某个方法的时候写日志,手动埋点此参数传nil
 @param appId 产品id
 @param accessKey 授权key
 @param writeFlag 日志写入开关
 */
- (void)setupWithConfiguration:(NSDictionary *)configs appId:(NSString *)appId accessKey:(NSString *)accessKey writeFlag:(BOOL)writeFlag;

@end
