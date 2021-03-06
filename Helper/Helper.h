// --------------------------------------------------------------------------
//! @author Sam Deane
//! @date 15/12/2011
//
//  Copyright 2011 Sam Deane, Elegant Chaos. All rights reserved.
//  This source code is distributed under the terms of Elegant Chaos's 
//  liberal license: http://www.elegantchaos.com/license/liberal
// --------------------------------------------------------------------------

#import <Foundation/Foundation.h>

@class ECASLClient;

@interface Helper : NSObject<NSConnectionDelegate>

@property (nonatomic, assign) pid_t pid;
@property (nonatomic, assign) uid_t uid;
@property (nonatomic, assign) uid_t euid;
@property (nonatomic, assign) BOOL timeToQuit;

- (id)initWithASL:(ECASLClient*)asl;
- (NSString*)doCommand:(NSString*)command;

+ (NSConnection*)startClientConnection:(NSString*)name;
- (void)stopClientConnection:(NSConnection*)connection;

- (NSConnection*)startServerConnection:(NSString*)name;
- (void)stopServerConnection:(NSConnection*)connection name:(NSString*)name;

@end
