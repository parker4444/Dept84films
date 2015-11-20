//
//  DetailViewController.h
//  Dept84films
//
//  Created by Parker Amadril on 11/20/15.
//  Copyright © 2015 Parker Amadril. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

