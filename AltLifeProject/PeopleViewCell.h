//
//  PeopleViewCell.h
//  AltLife
//
//  Created by James Talano on 10/12/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PeopleViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *stringName;
@property (weak, nonatomic) IBOutlet UILabel *stringAddress;
@property (weak, nonatomic) IBOutlet UIImageView *imageAvatar;
@property (weak, nonatomic) IBOutlet UILabel *stringText;
- (IBAction)onSeeprofile:(id)sender;

@end
