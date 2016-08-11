//
//  TypeModel.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/12.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TypeModel : NSObject
@property (nonatomic, strong)NSString *idd;
@property (nonatomic, strong)NSString *name;
@property (nonatomic, strong) NSString *coverLarge;

@property(nonatomic,assign)BOOL isPlay;
@property(nonatomic,strong)NSString *savePath;
@property(nonatomic,assign)BOOL isSelect;

+(NSMutableArray *)ModelConfigureWithJsonDic:(NSDictionary *)jsonDic;
@end
