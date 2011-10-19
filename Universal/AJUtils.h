//
//  AJUtils.h
//  tvmatchen
//
//  Created by Alexander Johansson on 2011-07-28.
//  Copyright 2011 axj.nu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AJUtils : NSObject {
	
}


#pragma mark - google analytics
+(void)analyticsInit;
+(BOOL)analyticsTrackView : (NSString *)url;
@end
