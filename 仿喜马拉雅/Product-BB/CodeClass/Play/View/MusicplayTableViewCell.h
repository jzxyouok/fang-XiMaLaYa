//
//  BroadcastPlayTableViewCell.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/14.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BroadMusicModel.h"

@interface MusicplayTableViewCell : UITableViewCell

@property (strong, nonatomic) UIImageView *imageV;
@property (strong, nonatomic) UILabel *titleL;
@property (strong, nonatomic) UILabel *programL;
@property (strong, nonatomic) UILabel *playCountL;

-(void)cellConfigureWithModel:(BroadMusicModel *)model;


@end
