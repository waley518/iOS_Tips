//
//  SLWebTableViewController.h
//  DarkMode
//
//  Created by wsl on 2020/5/22.
//  Copyright © 2020 https://github.com/wsl2ls   ----- . All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/*
   WKWebView + UITableView
   方案一：WebView作为TableView的Header, 撑开webView，显示渲染全部内容，容易造成内存暴涨
 */
@interface SLWebTableViewController : UIViewController

@end

NS_ASSUME_NONNULL_END
