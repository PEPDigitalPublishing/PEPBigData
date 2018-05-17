//
//  PEPExceptionHandler.h
//  PEPBigDataSDK
//
//  Created by liudongsheng on 2018/3/15.
//  Copyright © 2018年 liudongsheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PEPExceptionHandler : NSObject
+ (void)setDefaultHandler;
+ (NSUncaughtExceptionHandler *)getHandler;

@end
