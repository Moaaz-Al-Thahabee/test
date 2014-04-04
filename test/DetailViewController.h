//
//  DetailViewController.h
//  test
//
//  Created by BARON on 4/4/14.
//  Copyright (c) 2014 Al-Kamal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
