#if DEBUG
#import "RCTBridgeModule.h"
#else 
#import <React/RCTBridgeModule.h>
#endif

@interface PasscodeAuth : NSObject <RCTBridgeModule>

@end
