//
//  ContentIntroductTableViewCell.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/14.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailPayModel.h"
@interface ContentIntroductTableViewCell : UITableViewCell
@property(nonatomic , strong)UILabel *introduceLabel;
@property(nonatomic , strong)UIImageView *imageV;
@property(nonatomic , strong)UILabel *nameLabel;
@property(nonatomic , strong)UILabel *numberLabel;
@property(nonatomic , strong)UILabel *titleLabel;


-(void)creatPayCell:(DetailPayModel *)model;


-(void)creatPinglun:(DetailPayModel *)model;


@end
