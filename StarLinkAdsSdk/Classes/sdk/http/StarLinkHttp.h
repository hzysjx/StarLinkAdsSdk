//
//  StarLinkHttp.h
//  StarLinkAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>

typedef void(^NetworkManagerCompletionBlock)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error);

@interface StarLinkHttp : NSObject

+ (void)postWithURLString:(NSString *)urlString
                  jsonData:(NSDictionary *)jsonData
                completion:(NetworkManagerCompletionBlock)completion;

+ (void)queryConfig:(NSString *) appId;

@end
