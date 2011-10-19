//
//  UniversalAppDelegate.h
//  Universal
//
//  Created by Alexander Johansson on 2011-10-19.
//  Copyright 2011 axj.nu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AJUtils.h"
@interface AppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
