//
//  AnchorTableViewController.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/16.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AnchorTableViewController : UIViewController

@property(nonatomic , strong)UITableView *table;

+(AnchorTableViewController *)shareManager;

-(void)creatTableView:(CGRect)frame;


@end
