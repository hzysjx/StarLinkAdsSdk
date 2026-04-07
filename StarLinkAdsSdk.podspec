#
# Be sure to run `pod lib lint StarLinkAdsSdk.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'StarLinkAdsSdk'
  s.version          = '1.7.0.2'
  s.summary          = 'StarLink iOS sdk'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/hzysjx/StarLinkAdsSdk'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'jinwanhuijiama@foxmail.com' => 'jinwanhuijiama@foxmail.com' }
  s.source           = { :git => 'https://github.com/hzysjx/StarLinkAdsSdk', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'

    s.source_files = 'StarLinkAdsSdk/Classes/**/*'
  
    s.public_header_files = ['StarLinkAdsSdk/Classes/**/StarLinkAdsSDK.h', 'StarLinkAdsSdk/Classes/**/StarLinkRequest.h', 'StarLinkAdsSdk/Classes/**/StarLinkSplash.h', 'StarLinkAdsSdk/Classes/**/StarLinkInterstitial.h', 'StarLinkAdsSdk/Classes/**/StarLinkReward.h', 'StarLinkAdsSdk/Classes/**/StarLinkAdSdk.h', 'StarLinkAdsSdk/Classes/**/StarLinkBanner.h', 'StarLinkAdsSdk/Classes/**/StarLinkNativeAdView.h', 'StarLinkAdsSdk/Classes/**/StarLinkNativeAd.h', 'StarLinkAdsSdk/Classes/**/StarLinkNativeAdManager.h']
    s.vendored_libraries = 'StarLinkAdsSdk/Libraries/libStarLinkAdsSdk-iOS.a'
  
   s.frameworks = "Foundation","UIKit","MobileCoreServices","CoreGraphics","Security","SystemConfiguration","CoreTelephony","AdSupport","CoreData","StoreKit","AVFoundation","MediaPlayer","CoreMedia","WebKit","Accelerate","CoreLocation","AVKit","MessageUI","QuickLook","AudioToolBox","JavaScriptCore","CoreMotion","Photos"
  s.libraries = "z","resolv.9","sqlite3","c++","c++abi"
  s.dependency 'ToBid-iOS/GDTAdapter','4.7.2'
  s.dependency 'ToBid-iOS/BaiduAdapter','4.7.2'
  s.dependency 'ToBid-iOS/KSAdapter','4.7.2'
  s.dependency 'ToBid-iOS/AdScopeAdapter','4.7.2'
  s.static_framework = true
end
