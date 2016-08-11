//
//  HistoryOfPlayTableViewCell.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/22.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BroadMusicModel.h"
#import "DingYueModel.h"

@interface HistoryOfPlayTableViewCell : UITableViewCell
@property (nonatomic, strong)UIImageView *imageV;
@property (nonatomic, strong)UILabel *titleL;
@property (nonatomic, strong)UILabel *intoL;

-(void)cellConfigureWithModel:(BroadMusicModel *)model;

-(void)CellConfigureWithModel:(DingYueModel *)model;
@end
