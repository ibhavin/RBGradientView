//
//  RBTwoLayerGradientView.h
//  RBGradientView
//
//  Created by My Mac on 04/01/16.
//  Copyright (c) 2016 My Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface RBTwoLayerGradientView : UIView

@property (nonatomic) IBInspectable NSInteger borderWidth;
@property (nonatomic) IBInspectable CGFloat cornerRadious;
@property (nonatomic) IBInspectable BOOL isHorizontal;

@end
