//
//  TimeDisManager.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/25.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TimeDisManager : NSObject
@property (nonatomic, strong)NSMutableDictionary *timeDic;

+(TimeDisManager *)defaultManager;

@end
