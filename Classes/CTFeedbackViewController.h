//
//  CTFeedbackViewController.h
//  CTFeedbackDemo
//
//  Created by 和泉田 領一 on 2013/10/31.
//  Copyright (c) 2013年 CAPH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@class CTFeedbackViewController;
typedef void(^CTFeedbackPreparationHandler)(CTFeedbackViewController *feedbackVC, NSUInteger selectedTopicIndex);

@class CTFeedbackTopicCellItem;
@class CTFeedbackContentCellItem;
@class CTFeedbackAttachment;

@interface CTFeedbackViewController : UITableViewController <MFMailComposeViewControllerDelegate>

@property (nonatomic, strong) NSArray *topics;
@property (nonatomic, strong) NSArray *localizedTopics;

/*
 * selectedTopic's default value is first item of topics.
 */
@property (nonatomic, strong) NSString *selectedTopic;


@property (nonatomic, readonly) NSString *platformString;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSString *appVersion;
@property (nonatomic, readonly) NSString *appBuild;

@property (nonatomic, strong) NSArray *toRecipients;

@property (nonatomic, strong) NSArray *ccRecipients;

@property (nonatomic, strong) NSArray *bccRecipients;

@property (assign) BOOL useHTML;
@property (nonatomic, strong) NSString *additionalDiagnosticContent;
@property (nonatomic, strong) NSArray */* CTFeedbackAttachment */attachments;

@property (nonatomic) UIStatusBarStyle preferredStatusBarStyle;
@property (nonatomic) UIStatusBarAnimation preferredStatusBarUpdateAnimation;

@property (nonatomic, copy) CTFeedbackPreparationHandler preparationHandler;

+ (instancetype)controllerWithTopics:(NSArray *)topics localizedTopics:(NSArray *)localizedTopics;

+ (NSArray *)defaultTopics;

+ (NSArray *)defaultLocalizedTopics;

- (instancetype)initWithTopics:(NSArray *)topics localizedTopics:(NSArray *)localizedTopics;

@end
