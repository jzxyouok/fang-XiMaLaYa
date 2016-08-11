//
//  VeryBigTabView.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/13.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VeryBigTabView : UIView


@property(nonatomic , strong)UIScrollView *scr;
@property(nonatomic , strong)UITableView *table;
@property(nonatomic , strong)UIView *view1;
@property (nonatomic , strong)UISegmentedControl *seg;
@property (nonatomic , strong)UIView *lineView;

-(instancetype)initWithFrame:(CGRect)frame;

@end
