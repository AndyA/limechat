#import <Foundation/Foundation.h>
#import "IRCPrefix.h"


@interface IRCMessage : NSObject
{
	IRCPrefix* sender;
	NSString* command;
	int numericReply;
	NSMutableArray* params;
}

@property (nonatomic, retain) IRCPrefix* sender;
@property (nonatomic, retain) NSString* command;
@property (nonatomic, assign) int numericReply;
@property (nonatomic, retain) NSMutableArray* params;

- (id)initWithLine:(NSString*)line;
- (NSString*)paramAt:(int)index;
- (NSString*)sequence:(int)index;

@end
