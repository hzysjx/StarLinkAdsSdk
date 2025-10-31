//
//  StarLinkSplash.h
//  StarLinkAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class StarLinkRequest;
@protocol StarLinkSplashAdDelegate <NSObject>
@optional
-(void) onSplashShow;
-(void) onSplashFailToShow:(NSString *) pid error:(NSError *)error;
-(void) onSplashLoadSuccess:(NSString *) pid;
-(void) onSplashLoadError:(NSString *) pid error:(NSError *)error;
-(void) onSplashClicked;
-(void) onSplashClosed;
-(void) onSplashSkiped;

@end

@interface StarLinkSplash : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<StarLinkSplashAdDelegate> delegate;
@property (nonatomic, weak) UIViewController *rootViewController;

- (instancetype)initWithRequest:(StarLinkRequest *)request
                              extra:(NSDictionary * _Nullable)extra;
- (instancetype)initWithRequest:(StarLinkRequest *)request;
- (BOOL)isReady;
-(void)loadAdAndShow;
- (void)loadAd;
- (void)showAd:(UIWindow *)window;
@end
