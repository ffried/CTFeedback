//
//  CTFeedbackAttachment.h
//  CTFeedbackDemo
//
//  Created by Florian Friedrich on 10.9.14.
//  Copyright (c) 2014 Florian Friedrich. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MFMailComposeViewController;
@interface CTFeedbackAttachment : NSObject

@property (nonatomic, strong) NSData *data;
@property (nonatomic, strong) NSString *mimeType;
@property (nonatomic, strong) NSString *fileName;

+ (instancetype)attachmentWithData:(NSData *)data mimeType:(NSString *)mimeType fileName:(NSString *)fileName;
- (instancetype)initWithData:(NSData *)data mimeType:(NSString *)mimeType fileName:(NSString *)fileName;

- (void)addToMailComposeViewController:(MFMailComposeViewController *)mailController;

@end
