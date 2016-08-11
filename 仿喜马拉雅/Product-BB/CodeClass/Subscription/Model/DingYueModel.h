//
//  DingYueModel.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/23.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DingYueModel : NSObject
@property (nonatomic, strong)NSString *albumid;
@property (nonatomic, strong)NSString *inter;
@property (nonatomic, strong)NSString *isPaid;
@property (nonatomic, strong)NSString *row;
@property (nonatomic, strong)NSString *uid;
@property (nonatomic, strong)NSString *nickName;
@property (nonatomic, strong)NSString *score;
@property (nonatomic, strong)NSString *displayPrice;
@property (nonatomic, strong)NSString *image;
@property (nonatomic, strong)NSString *bigTitle;
@property (nonatomic, strong)NSString *smallTitle;

+(NSMutableArray *)modelConfigureWithArray:(NSArray *)array;
@end
