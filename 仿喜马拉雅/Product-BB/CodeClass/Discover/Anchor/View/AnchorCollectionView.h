//
//  AnchorCollectionView.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/16.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AnchorCollectionViewCell.h"
@interface AnchorCollectionView : UIView



@property(nonatomic , copy)void(^imageClick)(NSInteger index);


-(instancetype)initWithFrame:(CGRect)frame imageURLs:(NSMutableArray *)arrURLs;


@end
