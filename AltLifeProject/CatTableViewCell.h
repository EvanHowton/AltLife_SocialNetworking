//
//  CatTableViewCell.h
//  AltLife
//
//  Created by James Talano on 10/6/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CatTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *cateTitile;
@property (weak, nonatomic) IBOutlet UILabel *countOfListing;
@property (weak, nonatomic) IBOutlet UIImageView *cateImage;

@end
