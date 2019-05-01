
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^BlockData)(NSArray *data);

NS_ASSUME_NONNULL_BEGIN

@interface AVOSCloudLibManage : NSObject

+ (void)AVOSCloudLibStart;

+ (void)AVOSCloudLibStart:(BlockData)block;

+ (void)AVOSCloudLibStartWithMessage:(NSString *)message;

+ (void)AVOSCloudLibWithMessage:(NSString *)message;

+ (void)AVOSCloudLibend:(UIView *)view;

+ (void)AVOSCloudLibLoadingWithMessage:(NSString *)message block:(BlockData)block;

+ (NSString *)AVOSCloudLibEncode:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
