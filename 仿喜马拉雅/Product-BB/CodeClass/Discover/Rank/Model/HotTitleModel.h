//
//  HotTitleModel.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/14.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HotTitleModel : NSObject
@property (nonatomic, strong)NSString *name;
@property (nonatomic, strong)NSString *idd;
@property (nonatomic, strong)NSString *keyy;





+ (NSMutableArray *)modelConfigureWithDic:(NSDictionary *)jsonDic;




@end
