//
//  do_SeekBar_UI.h
//  DoExt_UI
//
//  Created by @userName on @time.
//  Copyright (c) 2015年 DoExt. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol do_SeekBar_IView <NSObject>

@required
//属性方法
- (void)change_progress:(NSString *)newValue;
- (void)change_secondaryProgress:(NSString *)newValue;

//同步或异步方法


@end