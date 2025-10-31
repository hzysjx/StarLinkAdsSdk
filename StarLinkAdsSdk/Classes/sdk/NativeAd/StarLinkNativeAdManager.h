//
//  StarLinkNativeAdManager.h
//  StarLinkAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class StarLinkRequest;
@class StarLinkNativeAd;
@class StarLinkNativeAdManager;

NS_ASSUME_NONNULL_BEGIN
@protocol StarLinkNativeAdManagerDelegate <NSObject>

@optional
- (void)nativeAdsManagerSuccessToLoad:(StarLinkNativeAdManager *)nativeAdsManager;
- (void)nativeAdsManagerdidFailWithError:(NSError *)error;

@end


@interface StarLinkNativeAdManager : NSObject

@property (nonatomic, weak) id<StarLinkNativeAdManagerDelegate> delegate;

@property (nonatomic, assign, readwrite) CGSize adSize;

- (instancetype)initWithRequest:(StarLinkRequest *)request;

- (void)loadAdDataWithCount:(NSInteger)count;

- (NSArray<StarLinkNativeAd *> * _Nullable)getAllNativeAds;

@end

NS_ASSUME_NONNULL_END
