// isIPad() -> true OR false
#define isIPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

// DEVICE_STRING -> iPad OR iPhone
#define DEVICE_STRING (isIPad ? @"iPad" : @"iPhone")

// NIB(@"RootViewController") -> @"RootViewController_iPad"
#define NIB(nibName) [NSString stringWithFormat:@"%@_%@", nibName, DEVICE_STRING]

// alloc new UIViewControllers
#define ViewController(class, nibName) [[[class alloc] initWithNibName:NIB(nibName) bundle:[NSBundle mainBundle]] autorelease];

// Shortcut to translate strings.
#define _(localizedString) NSLocalizedString(localizedString, nil) 


#import "AJUtils.h"