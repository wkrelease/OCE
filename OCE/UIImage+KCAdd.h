//
//  UIImage+KCAdd.h
//  KCImage
//
//  Created by king on 2017/10/10.
//  Copyright © 2017年 KC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (KCAdd)

+ (UIImage *)imageWithColor:(UIColor *)color;

+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

+ (UIImage *)imageWithSize:(CGSize)size drawBlock:(void (^)(CGContextRef context))drawBlock;

@end
