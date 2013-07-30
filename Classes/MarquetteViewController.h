//
//  MarquetteViewController.h
//  Marquette
//
//  Created by Nicholas Humfrey on 15/01/2012.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MosquittoClient.h"

@interface MarquetteViewController : UIViewController <MosquittoClientDelegate> {
	UISwitch *redLedSwitch;
	UISwitch *greenLedSwitch;

	UITextField *hostField;
	UIButton *connectButton;
}

@property (nonatomic, strong) IBOutlet UISwitch *redLedSwitch;
@property (nonatomic, strong) IBOutlet UISwitch *greenLedSwitch;
@property (nonatomic, strong) IBOutlet UITextField *hostField;
@property (nonatomic, strong) IBOutlet UIButton *connectButton;

- (IBAction) redLedSwitchAction:(id)sender;
- (IBAction) greenLedSwitchAction:(id)sender;
- (IBAction) connectButtonAction:(id)sender;

- (void) didConnect:(NSUInteger)code;

@end

