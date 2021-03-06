#import <Foundation/Foundation.h>

extern NSString * const BuildStatusFailure;
extern NSString * const BuildStatusSuccess;
extern NSString * const BuildStatusUnknown;

@interface Build : NSObject

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSString *status;
@property (nonatomic, copy, readonly) NSURL *url;

- (id)initWithName:(NSString *)aName status:(NSString *)aStatus url:(NSURL *)aUrl;
- (id)initFromNode:(NSXMLElement *)node;

- (BOOL)isSuccess;
- (BOOL)isFailure;
- (BOOL)isUnknown;

- (BOOL)isPresent;

@end
