//
//  AboutUs.h
//  GUPver 1.0
//
//  Created by Milind Prabhu on 11/6/13.
//  Copyright (c) 2013 genora. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AboutUs : UIViewController
{IBOutlet UITextView *TEXTview;
    
}

-(IBAction)openTerms:(id)sender;
-(IBAction)openPrivacyPolicy:(id)sender;

@end
