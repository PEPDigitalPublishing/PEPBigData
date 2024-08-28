//
//  PEPLogData.h
//  PEPBigDataSDK
//
//  Created by liudongsheng on 2018/3/7.
//  Copyright © 2018年 liudongsheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PEPLogData : NSObject

/****************************************************智慧平台必填项*******************************************************/
/**起因：所属合作公司(必填)*/
@property (nonatomic, copy) NSString *company;
/**经过：事件名(必填)*/
@property (nonatomic, copy) NSString *actionTitle;
/**新版本事件ID(必填)*/
@property (nonatomic, copy) NSString *actionType;
/**经过：group批次编号，如果没有就写sessionid、token(必填)*/
@property (nonatomic, copy) NSString *group;

/****************************************************非必填*******************************************************/
//被动方标识信息
@property (nonatomic, copy) NSString *passiveObject;
//被动方类别      无效
@property (nonatomic, copy) NSString *passiveType;
//来源模块标识  项目版本号
@property (nonatomic, copy) NSString *fromProduct;
//来源位置标识
@property (nonatomic, copy) NSString *fromPos;
//10-人|20-程序及其他
@property (nonatomic, copy) NSString *activeType;
//接口请求地址
@property (nonatomic, copy) NSString *request;
//接口请求参数
@property (nonatomic, copy) NSString *requestParam;
//动作组类别      无效
@property (nonatomic, copy) NSString *groupType;
//结果标识
@property (nonatomic, copy) NSString *resultFlag;
//结果信息
@property (nonatomic, copy) NSString *result;
//版本号
@property (nonatomic, copy) NSString *version;
//开始时间
@property (nonatomic, copy) NSString *startTime;
//结束时间      无效
@property (nonatomic, copy) NSString *endTime;
//终端位置
@property (nonatomic, copy) NSString *region;
//产品标识
@property (nonatomic, copy) NSString *productId;
//硬件
@property (nonatomic, copy) NSString *hardware;
//操作系统
@property (nonatomic, copy) NSString *os;
//软件
@property (nonatomic, copy) NSString *soft;
//主动方标识信息
@property (nonatomic, copy) NSString *activeUser;
//主动方所属组织
@property (nonatomic, copy) NSString *activeOrganization;
//授权key
@property (nonatomic, copy) NSString *accreditKey;
//事件标识
@property (nonatomic, copy) NSString *actionId;
//动作组标识,每次app进入前台的时间戳
@property (nonatomic, copy) NSString *groupId;



@end
