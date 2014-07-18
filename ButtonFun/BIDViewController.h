//
//  BIDViewController.h
//  ButtonFun
//
//  Created by Steven Warner on 9/4/12.
//  Copyright (c) 2012 edu.creighton.cs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDViewController : UIViewController
- (IBAction)buttonPressed:(id)sender;
@property (strong, nonatomic) IBOutlet UILabel *statusText;

@end
