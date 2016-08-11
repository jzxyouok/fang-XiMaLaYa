//
//  LocationTableViewCell.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/12.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LocationModel.h"
#import "RankModel.h"
#import "BroadListModel.h"
@interface LocationTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageV;
@property (weak, nonatomic) IBOutlet UILabel *titleL;
@property (weak, nonatomic) IBOutlet UILabel *programL;
@property (weak, nonatomic) IBOutlet UILabel *playCountL;
@property (weak, nonatomic) IBOutlet UIButton *playB;

-(void)cellConfigureWithModel:(LocationModel *)model;

-(void)CellConfigureWithModel:(RankModel *)model;

- (void)CellConfigureWithBroadListModel:(BroadListModel *)model;

@end
