//
//  AllHotModel.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/15.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AllHotModel : NSObject
@property (nonatomic, strong)NSString *coverSmall;
@property (nonatomic, strong)NSString *title;
@property (nonatomic, strong)NSString *tags;
@property (nonatomic, strong)NSString *intro;
@property (nonatomic, strong)NSString *tracks;
@property (nonatomic, strong)NSString *nickname;
@property (nonatomic, strong)NSString *followersCounts;
@property (nonatomic, strong)NSString *personDescribe;
@property (nonatomic, strong)NSString *largeLogo;
@property(nonatomic , strong)NSString *uid;

@property(nonatomic , strong)NSString *albumId;
@property(nonatomic , strong)NSString *isPaid;
@property(nonatomic , strong)NSString *playsCounts;
@property(nonatomic , strong)NSString *tracksCounts;


+ (NSMutableArray *)modelConfigureWithDic:(NSDictionary *)jsonDic;
@end
