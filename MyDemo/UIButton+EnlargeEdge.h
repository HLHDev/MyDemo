//
//  UIButton+EnlargeEdge.h
//  ZhengJinApp
//
//  Created by ZhengJin on 15/5/6.
//  Copyright (c) 2015年 ZhengJin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (EnlargeEdge)

- (void)setEnlargeEdge:(CGFloat)size;


- (void)setEnlargeEdgeWithTop:(CGFloat)top
                        right:(CGFloat)right
                       bottom:(CGFloat)bottom
                         left:(CGFloat)left;

@end
