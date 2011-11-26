//
//  AJUtils.h
//  tvmatchen
//
//  Created by Alexander Johansson on 2011-07-28.
//  Copyright 2011 axj.nu. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kGANDAccountID @"UA-12345-6"
@interface AJUtils : NSObject {
	
}


+ (AJUtils*) sharedAJUtils;

#pragma mark - google analytics
+(void)analyticsInit;
+(BOOL)analyticsTrackView : (NSString *)url;
@end
