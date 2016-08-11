//
//  OtherAnchorTableViewCell.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/16.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AnchorCollectionView.h"
@interface OtherAnchorTableViewCell : UITableViewCell

@property(nonatomic , strong)UIButton *more1Btn;
@property(nonatomic , strong)UIButton *more2Btn;
@property(nonatomic , strong)AnchorCollectionView *disc;

-(void)creatCell:(NSMutableArray *)arr;

@end
