//
//  DiscoverCollectView.h
//  xiMaLaYa
//
//  Created by shenKaiqiang on 16/7/12.
//  Copyright © 2016年 shenKaiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DiscoverCollectionViewCell.h"
#import "focusImagesModel.h"
@interface DiscoverCollectView : UIView

@property(nonatomic , copy)void(^imageClick)(NSInteger index);


-(instancetype)initWithFrame:(CGRect)frame imageURLs:(NSMutableArray *)arrURLs;


@end
