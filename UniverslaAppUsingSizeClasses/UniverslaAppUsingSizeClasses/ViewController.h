//
//  ViewController.h
//  UniverslaAppUsingSizeClasses
//
//  Created by Venkat on 7/23/16.
//  Copyright © 2016 Ensis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *userName;

@property (strong, nonatomic) IBOutlet UITextField *passWord;

- (IBAction)submitAction:(id)sender;


@end

