//
//  BadgeView.h
//  FineExAPP
//
//  Created by FineexMac on 15/8/26.
//  Copyright (c) 2015年 FineEX-LF. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LPLevelView : UIView

///整星图标，半星和空星尺寸以整星为准
@property (strong, nonatomic) UIImage *iconFull;
///半星图标
@property (strong, nonatomic) UIImage *iconHalf;
///空星图标
@property (strong, nonatomic) UIImage *iconEmpty;
///默认图标颜色，设置了该属性将使用默认图标
@property (strong, nonatomic) UIColor *iconColor;
///图片尺寸，默认为iconFull图标的尺寸，同时自适应self尺寸
@property (assign, nonatomic) CGSize iconSize;

///星级，默认为0
@property (assign, nonatomic) float level;
///星级是否必须为整数，默认为否
@property (assign, nonatomic) BOOL levelInt;
///最大等级，默认为5
@property (assign, nonatomic) int maxLevel;

///是否允许打分，即用户触摸设置星级，默认不允许
@property (assign, nonatomic) BOOL canScore;
///打分是否有动画，默认没有
@property (assign, nonatomic) BOOL animated;
///动画颜色，默认橘色
@property (strong, nonatomic) UIColor *animateColor;
///完成评分后处理
@property (strong, nonatomic) void (^completeScoreBlock)(float level);

@end
