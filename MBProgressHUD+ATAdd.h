//
//  MBProgressHUD+ATAdd.h
//  Postre
//
//  Created by 王炜圣 on 2017/4/6.
//  Copyright © 2017年 王炜圣. All rights reserved.
//

#import "MBProgressHUD.h"

#define MBHudShowMaxDuration (30)
#define MBHudHideDelay       (2.50f)
#define MBHudGraceTime       (0.8)

@interface MBProgressHUD (ATAdd)
+ (UIView *)defaultView;
+ (UIImage *)defaultSuccessImage;
+ (UIImage *)defaultFailureImage;


/**
 显示Loding加载提示Hud, 禁用用户交可使用 hud.userInteractionEnabled = YES;
 */
+ (instancetype)showToast:(NSString *)message;
+ (instancetype)showToast:(NSString *)message toView:(UIView *)view;


+ (instancetype)showWithCompletion:(void (^)(MBProgressHUD *hud))completion;
+ (instancetype)showToView:(UIView *)view completion:(void (^)(MBProgressHUD *hud))completion;

+ (instancetype)showMessage:(NSString *)message completion:(void (^)(MBProgressHUD *hud))completion;
+ (instancetype)showMessage:(NSString *)message toView:(UIView *)view completion:(void (^)(MBProgressHUD *hud))completion;
+ (instancetype)graceShowMessage:(NSString *)message toView:(UIView *)view completion:(void (^)(MBProgressHUD *hud))completion;
+ (instancetype)showMessage:(NSString *)message toView:(UIView *)view graceTime:(NSTimeInterval)gractTime hideAfterDelay:(NSTimeInterval)delay completion:(void (^)(MBProgressHUD *hud))completion;

/**
 隐藏HUd
 */
+ (instancetype)hudForView:(UIView *)view;

- (void)hideWithAnimated:(BOOL)animated;
- (void)hideWithMessage:(NSString *)message;
- (void)hideWithSuccess:(NSString *)message;
- (void)hideWithFailure:(NSString *)message;
- (void)hideWithMessage:(NSString *)message
                  image:(UIImage *)image
               animated:(BOOL)animated
                  delay:(NSTimeInterval)delay
             completion:(MBProgressHUDCompletionBlock)completion;
@end
