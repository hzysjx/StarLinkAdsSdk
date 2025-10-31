//
//  StarLinkAdSdk.h
//  StarLinkAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, StarLinkAcceptStatus) {
    StarLinkUnknown = 0,
    StarLinkAccepted,
    StarLinkDenied,
};

@interface StarLinkAdSdk : NSObject
+(instancetype) shareInstance;
-(void)initWithAppId:(NSString *)appId;
-(void)setDebugMode:(BOOL)enable;
-(void)setGDPRStatus:(StarLinkAcceptStatus)status;
-(void) startAdPrev:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
@end
