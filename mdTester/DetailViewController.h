//
//  DetailViewController.h
//  mdTester
//
//  Created by Alan Glasby on 04/10/2016.
//  Copyright © 2016 Alan Glasby. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "mdTester+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

