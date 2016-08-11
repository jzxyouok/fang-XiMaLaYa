//
//  PlayListTableViewCell.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/18.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BroadMusicModel.h"

@interface PlayListTableViewCell : UITableViewCell

@property (nonatomic, strong) UIImageView *playImageV;
@property (nonatomic, strong) UIImageView *downloadImageV;
@property (nonatomic, strong) UILabel *titleLabel;

- (void)cellConfigureWithModel:(BroadMusicModel *)model;

@end
