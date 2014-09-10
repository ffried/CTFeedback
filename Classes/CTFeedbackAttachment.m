//
//  CTFeedbackAttachment.m
//  CTFeedbackDemo
//
//  Created by Florian Friedrich on 10.9.14.
//  Copyright (c) 2014 Florian Friedrich. All rights reserved.
//

#import "CTFeedbackAttachment.h"
#import <MessageUI/MessageUI.h>

@implementation CTFeedbackAttachment

+ (instancetype)attachmentWithData:(NSData *)data mimeType:(NSString *)mimeType fileName:(NSString *)fileName {
    return [[self alloc] initWithData:data mimeType:mimeType fileName:fileName];
}

- (instancetype)initWithData:(NSData *)data mimeType:(NSString *)mimeType fileName:(NSString *)fileName {
    self = [super init];
    if (self) {
        self.data = data;
        self.mimeType = mimeType;
        self.fileName = fileName;
    }
    return self;
}

- (instancetype)init {
    return [self initWithData:nil mimeType:nil fileName:nil];
}

- (void)addToMailComposeViewController:(MFMailComposeViewController *)mailController {
    NSAssert(self.data != nil, @"Data of attachment must not be nil!");
    NSAssert(self.mimeType != nil, @"Mimetype of attachment must not be nil!");
    NSAssert(self.fileName != nil, @"Filename of attachment must not be nil!");
    [mailController addAttachmentData:self.data mimeType:self.mimeType fileName:self.fileName];
}

@end
