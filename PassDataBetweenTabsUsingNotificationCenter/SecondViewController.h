//
//  SecondViewController.h
//  PassDataBetweenTabsUsingNotificationCenter
//
//  Created by Hel Galib on 6/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "ViewController.h"

@interface SecondViewController : ViewController
@property (weak, nonatomic) IBOutlet UISlider *mySlider;

- (IBAction)sliderPressed:(id)sender;

@end
