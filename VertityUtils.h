







#import <Foundation/Foundation.h>

@interface VertityUtils : NSObject

//正则匹配手机号
+ (BOOL)checkTelNumber:(NSString *) telNumber;
//正则匹配用户姓名,20位的中文或英文
+ (BOOL)checkUserName : (NSString *) userName;
//正则匹配昵称
+ (BOOL) checkNickname:(NSString *) nickname;
//正则匹配用户密码6-18位数字和字母组合
+ (BOOL)checkPassword:(NSString *) password;
//正则只能输入数字和字母
+ (BOOL) checkTeshuZifuNumber:(NSString *) CheJiaNumber;
//正则匹配邮箱号
+ (BOOL)checkMailInput:(NSString *)mail;
//正则匹配用户身份证号
+ (BOOL)checkUserIdCard: (NSString *) idCard;
//正则匹配银行卡号是否正确
+ (BOOL)checkBankNumber:(NSString *) bankNumber;
@end
