//
//  ABHudViewController.h
//  AppBox
//
//  Created by Vineet Choudhary on 29/12/17.
//  Copyright © 2017 Developer Insider. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>

typedef enum : NSUInteger {
    HudTypeProgress,
    HudTypeStatus,
    HudTypeResult,
} HudType;

@interface ABHudViewController : NSViewController {
    __weak IBOutlet NSProgressIndicator *progressIndicator;
    __weak IBOutlet NSTextField *progressLabel;
    __weak IBOutlet NSTextField *adTitleLabel;
    __weak IBOutlet NSTextField *adSubtitleLabel;
    __weak IBOutlet NSImageView *resultImageView;
}

@property(nonatomic, weak) NSView *hudSuperView;
@property(nonatomic, strong) NSString *status;
@property(nonatomic, strong) NSString *adTitle;
@property(nonatomic, strong) NSString *adSubtitle;
@property(nonatomic, strong) NSString *adURL;
@property(nonatomic, strong) NSNumber *progress;
@property(nonatomic, assign) HudType hudType;
@property(nonatomic, assign) BOOL result;

+ (ABHudViewController *)hudForView:(NSView *)view hide:(BOOL)hide;
- (IBAction)adViewClickGestureRecognized:(NSClickGestureRecognizer *)sender;
@end
