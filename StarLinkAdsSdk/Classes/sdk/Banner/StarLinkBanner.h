//
//  StarLinkBanner.h
//  StarLinkAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class StarLinkRequest;
@class StarLinkBanner;

NS_ASSUME_NONNULL_BEGIN

@protocol StarLinkBannerDelegate <NSObject>

@optional

- (void)onAutoRefreshed:(StarLinkBanner *)bannerAdView;

- (void)onAutoRefreshFail:(NSError *)error;

- (void)onBannerLoadSuccess:(StarLinkBanner *)bannerAdView;

- (void)onBannerLoadError:(NSError *)error;

- (void)onBannerShown;

- (void)onBannerClicked;

- (void)onWillLeaveApplication;

- (void)onWillOpenFullScreen;
- (void)onCloseFullScreen;
- (void)onDidRemoved;
@end

@interface StarLinkBanner : NSObject

@property (nonatomic, weak) id<StarLinkBannerDelegate> delegate;

@property (nonatomic, weak) UIViewController *viewController;

@property (nonatomic) BOOL animated;

@property (nonatomic, assign) CGSize adSize;
@property(nullable, nonatomic,copy) UIColor *backgroundColor;

- (instancetype)initWithRequest:(StarLinkRequest *)request;

- (instancetype)initWithRequest:(StarLinkRequest *)request
                     expectSize:(CGSize)expectSize;

- (void)loadBannerAd;
- (BOOL)isReady;
- (UIView *)getView;
@end
NS_ASSUME_NONNULL_END

