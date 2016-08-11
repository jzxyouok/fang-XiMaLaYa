//
//  RankListModel.m
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/14.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import "RankListModel.h"

@implementation RankListModel
-(void)setValue:(id)value forUndefinedKey:(NSString *)key{
    
}

+(NSMutableArray *)ModelConfigureWithJsonDic:(NSDictionary *)jsonDic{
    NSMutableArray *Arr = [NSMutableArray array];
    NSArray *datas = jsonDic[@"datas"];
    NSDictionary *Dic = datas[0];
    NSArray *arr = Dic[@"list"];
    for (NSDictionary *dic in arr) {
        RankListModel *model = [[RankListModel alloc]init];
        NSArray *first = dic[@"firstKResults"];
        NSDictionary *fd1 = first[0];
        model.title1 = fd1[@"title"];
        NSDictionary *fd2 = first[1];
        model.title2 = fd2[@"title"];
        [model setValuesForKeysWithDictionary:dic];
        [Arr addObject:model];
    }
    
    return Arr;
}
@end
