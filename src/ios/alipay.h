#import <Cordova/CDV.h>

@interface alipay : CDVPlugin 
    @property NSString *appId;
    @property NSString *callbackId;

    - (void)pay:(CDVInvokedUrlCommand*)command;
@end