//
//  MobileVerification1.h
//  AltLife
//
//  Created by James Talano on 10/17/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MobileVerification1 : UIViewController
- (IBAction)onRegister:(id)sender;
- (IBAction)onBack:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *verificationCode;

@end
