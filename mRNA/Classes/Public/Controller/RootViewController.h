//
//  RootViewController.h
//  mRNA
//
//  Created by zhangys on 2017/6/19.
//  Copyright © 2017年 上海永同资产管理有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController

- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animate;
- (void)showHUDWithMsg:(NSString *)msg;

@end
