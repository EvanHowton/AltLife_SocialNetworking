//
//  CateListViewController.h
//  AltLifeProject
//
//  Created by James Talano on 10/26/17.
//  Copyright © 2017 James Talano. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CViewFlowLayout.h"
@import Firebase;
@interface CateListViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
- (IBAction)onBack:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *cateName;
@property (weak, nonatomic) IBOutlet UIButton *onSearch;
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;
@property (strong, nonatomic) FIRDatabaseReference *ref;

@end
