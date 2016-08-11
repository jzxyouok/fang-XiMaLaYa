//
//  RankModel.m
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/12.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import "RankModel.h"

@implementation RankModel
-(void)setValue:(id)value forUndefinedKey:(NSString *)key{

}

+(NSMutableArray *)ModelConfigureWithJsonDic:(NSDictionary *)jsonDic{
    NSMutableArray *Arr = [NSMutableArray array];
    NSDictionary *data = jsonDic[@"data"];
    NSArray *arr = data[@"topRadios"];
    NSInteger count = 0;
    for (NSDictionary *dic in arr) {
        
        if (count == 3) {
            return Arr;
        }
        RankModel *model = [[RankModel alloc]init];
        model.idd = dic[@"id"];
        model.playUrl1 = dic[@"playUrl"][@"aac24"];
        [model setValuesForKeysWithDictionary:dic];
        [Arr addObject:model];
        count++;
    }
    return Arr;
}
@end
