// LimeChat is copyrighted free software by Satoshi Nakagawa <psychs AT limechat DOT net>.
// You can redistribute it and/or modify it under the terms of the GPL version 2 (see the file GPL.txt).

#import <Foundation/Foundation.h>
#import <Carbon/Carbon.h>


@interface KeyCodeTranslator : NSObject
{
	TISInputSourceRef	layout;
	const UCKeyboardLayout* layoutData;
}

+ (id)sharedInstance;
- (TISInputSourceRef)keyboardLayout;

- (NSString *)translateKeyCode:(short)keyCode;

@end
