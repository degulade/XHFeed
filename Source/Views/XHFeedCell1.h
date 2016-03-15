//
//  XHFeedCell1.h
//  XHFeed
//
//  Created by 曾 宪华 on 13-12-12.
//  Copyright (c) 2013年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XHFeedCell1 : UITableViewCell

@property (nonatomic, strong) UIImageView* picImageView;

@property (nonatomic, strong) UIView* feedContainer;

@property (nonatomic, strong) UILabel* nameLabel;

@property (nonatomic, strong) UILabel* updateLabel;

@property (nonatomic, strong) UILabel* dateLabel;

@property (nonatomic, strong) UILabel* commentCountLabel;

@property (nonatomic, strong) UILabel* likeCountLabel;

@property (nonatomic, strong) UIImageView* commentIconImageView;

@property (nonatomic, strong) UIImageView* likeIconImageView;

@property (nonatomic, strong) UIColor *contentColor;

@end
