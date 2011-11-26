//
//  AJUtils.m
//  tvmatchen
//
//  Created by Alexander Johansson on 2011-07-28.
//  Copyright 2011 axj.nu. All rights reserved.
//

#import "AJUtils.h"
#import "GANTracker.h"

@implementation AJUtils
static const NSInteger kGANDispatchPeriodSec = 10;

SYNTHESIZE_SINGLETON_FOR_CLASS(AJUtils);
- (id)init
{
    self = [super init];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

#pragma mark - google analytics

+(void)analyticsInit {
    
    [[GANTracker sharedTracker] startTrackerWithAccountID:kGANDAccountID
                                           dispatchPeriod:kGANDispatchPeriodSec
                                                 delegate:nil];
    NSError *error;
    
    if (![[GANTracker sharedTracker] setCustomVariableAtIndex:1
                                                         name:@"iPhone1"
                                                        value:@"iv1"
                                                    withError:&error]) {
        NSLog(@"error in setCustomVariableAtIndex");
    }
    
    if (![[GANTracker sharedTracker] trackEvent:@"Application iPhone"
                                         action:@"Launch iPhone"
                                          label:nil
                                          value:-1
                                      withError:&error]) {
        NSLog(@"error in trackEvent");
    }
}
+(BOOL)analyticsTrackView : (NSString *)url {
    
    
    DLog(@"tracking: %@", url);
    NSError *error;
    if (![[GANTracker sharedTracker] trackPageview:url
                                         withError:&error]) {
        NSLog(@"error in trackPageview");
        return NO;
    }
    return YES;
}
@end
