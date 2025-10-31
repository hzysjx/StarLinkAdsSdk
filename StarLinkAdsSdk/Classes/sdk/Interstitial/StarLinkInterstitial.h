//
//  StarLinkInterstitial.h
//  StarLinkAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class StarLinkRequest;
@protocol StarLinkInterstitialAdDelegate <NSObject>
@optional
-(void) onInterstitialLoadSuccess:(NSString *) pid;
-(void) onInterstitialLoadError:(NSString *) pid error:(NSError *)error;
-(void) onInterstitialPlayStart;
-(void) onInterstitialPlayEnd;
-(void) onInterstitialClicked;
-(void) onInterstitialClosed;
-(void) onInterstitialSkiped;

@end

@interface StarLinkInterstitial : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<StarLinkInterstitialAdDelegate> delegate;

- (instancetype)initWithRequest:(StarLinkRequest *)request;
- (BOOL)isReady;
- (void)loadInterstitialAd;
- (void)show:(UIViewController *)rootViewController;
@end

