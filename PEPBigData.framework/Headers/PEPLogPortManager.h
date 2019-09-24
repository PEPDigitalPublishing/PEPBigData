//
//  PEPLogPortManager.h
//  PEPBigDataSDK
//
//  Created by liudongsheng on 2018/3/7.
//  Copyright © 2018年 liudongsheng. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface PEPLogPortManager : NSObject 

@property (nonatomic, assign) BOOL logFlag;

+ (instancetype)shareInstance;

/**
 * 适用于暂无状态及结果的动作。
 * @param actionId 动作id
 * @param object 被动者
 */

- (void)onEventWithActionId:(NSString *) actionId andObject:(NSString *) object;


/**
 * 适用于暂无状态及结果的动作。
 * @param actionId 动作id
 * @param object 被动者
 * @param request 接口请求地址
 * @param params 接口请求参数
 */

- (void)onEventWithActionId:(NSString *) actionId andObject:(NSString *) object andRequest:(NSString *) request andParams:(NSString *) params;


/**
 * 适用于有状态及结果的动作。
 * @param actionId 动作id
 * @param object 被动者
 * @param retCode 状态码
 * @param retInfo 状态详细
 */

- (void)onEventWithActionId:(NSString *) actionId andObject:(NSString *) object andRetCode:(NSString *) retCode andRetInfo:(NSString *) retInfo;



/**
 * 适用于全部参数提交。
 * @param actionId 动作id
 * @param object 被动者
 * @param request 接口请求地址
 * @param params 接口请求参数
 * @param retCode 状态码
 * @param retInfo 状态详细
 * @param fromPos 来源位置
 */

- (void)onEventWithActionId:(NSString *) actionId andObject:(NSString *) object andRequest:(NSString *) request andParams:(NSString *) params andRetCode:(NSString *) retCode andRetInfo:(NSString *) retInfo andFromPos:(NSString *) fromPos;


/**
 * 适用于异常状态的全部参数提交。跳过内部的数据累积等待逻辑，立即将数据提交给服务器。
 * @param actionID 动作id
 * @param requestURL 接口请求地址
 * @param params 接口请求参数
 * @param retCode 状态码
 * @param retInfo 状态详细
 * @param begin 请求开始时间戳，单位毫秒
 * @param end 请求响应时间戳，单位毫秒
 * @param fromPos 来源位置
 */

- (void)onEventFromExceptionWithActionID:(NSString *)actionID
                              requestURL:(NSString *)requestURL
                                  params:(NSString *)params
                                 retCode:(NSString *)retCode
                                 retInfo:(NSString *)retInfo
                          beginTimestamp:(NSTimeInterval)begin
                            endTimestamp:(NSTimeInterval)end
                                  object:(NSString *)object
                                 fromPos:(NSString *)fromPos;



@end
