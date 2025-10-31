//
//  StarLinkStorage.h
//  StarLinkAdsSdk-iOS
//
//
#import "StarLinkDto.h"
#import <Foundation/Foundation.h>

@interface StarLinkStorage : NSObject
@property (nonatomic) int cps;
+(instancetype) shareInstance;
-(void) addStrategyDtos:(NSString *)adsId adDto:(StarLinkDto *) starLinkDto;
-(StarLinkDto *) getStrategy: (NSString *)adsId;
@end
