//
//  ArrayManager.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/21.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ArrayManager : NSObject


@property(nonatomic , strong)NSMutableArray *Array;
@property(nonatomic , strong)NSMutableArray *oneArray;
@property(nonatomic , assign)CGFloat progress;



+(ArrayManager *)shareManager;


@end
