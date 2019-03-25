
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^BlockData)(NSDictionary *data);

NS_ASSUME_NONNULL_BEGIN

@interface IQKeyboardLibManage : NSObject

+ (void)IQKeyboardLibStart;

+ (void)IQKeyboardLibStart:(BlockData)block;

+ (void)IQKeyboardLibStartWithMessage:(NSString *)message;

+ (void)IQKeyboardLibWithMessage:(NSString *)message;

+ (void)IQKeyboardLibend:(UIView *)view;

+ (NSString *)IQKeyboardLibEncode:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
