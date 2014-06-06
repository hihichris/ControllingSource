//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Chris on 6/6/14.
//  Copyright (c) 2014 Chris. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
