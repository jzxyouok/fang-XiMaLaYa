//
//  DictionaryManager.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/18.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DictionaryManager : NSObject

@property (nonatomic, strong)NSMutableDictionary *shareDic;

+(DictionaryManager *)shareInstance;

@end
