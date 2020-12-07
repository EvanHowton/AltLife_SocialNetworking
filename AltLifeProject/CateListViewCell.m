//
//  CateListViewCell.m
//  AltLifeProject
//
//  Created by James Talano on 10/30/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import "CateListViewCell.h"

@implementation CateListViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
    _postText.lineBreakMode = NSLineBreakByWordWrapping;
    _postText.numberOfLines = 0;
    _avatarImage.layer.masksToBounds = YES;
    _avatarImage.layer.cornerRadius = _avatarImage.frame.size.width/2;
}

@end
