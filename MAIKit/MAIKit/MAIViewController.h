#if TARGET_OS_IPHONE
@import UIKit;
#else
@import AppKit;
#endif

#import "MAIEnums.h"

#import "MAILayoutManagerDelegate.h"
#import "MAITextLayoutOrientationProvider.h"
#import "MAITextStorageDelegate.h"
#import "MAIApplicationDelegate.h"
#import "MAICollectionViewDelegate.h"
#import "MAIGestureRecognizerDelegate.h"
#import "MAITableViewDataSource.h"
#import "MAITableViewDelegate.h"
#import "MAITextFieldDelegate.h"
#import "MAITextInput.h"
#import "MAITextViewDelegate.h"
#import "MAIToolbarDelegate.h"

@class MAILayoutConstraint;
@class MAILayoutManager;
@class MAITextTab;
@class MAIParagraphStyle;
@class MAIMutableParagraphStyle;
@class MAIShadow;
@class MAITextAttachment;
@class MAITextContainer;
@class MAITextStorage;
@class MAIAccessibilityElement;
@class MAIApplication;
@class MAIBezierPath;
@class MAIButton;
@class MAICollectionView;
@class MAIColor;
@class MAIControl;
@class MAIDatePicker;
@class MAIDocument;
@class MAIEvent;
@class MAIFont;
@class MAIFontDescriptor;
@class MAIGestureRecognizer;
@class MAIImage;
@class MAIImageView;
@class MAIMenuItem;
@class MAINib;
@class MAIPanGestureRecognizer;
@class MAIPasteboard;
@class MAIPrinter;
@class MAIPrintInfo;
@class MAIResponder;
@class MAIRotationGestureRecognizer;
@class MAIScreen;
@class MAIScrollView;
@class MAISegmentedControl;
@class MAISlider;
@class MAISplitViewController;
@class MAIStepper;
@class MAIStoryboard;
@class MAIStoryboardSegue;
@class MAITableView;
@class MAITextField;
@class MAITextView;
@class MAIToolbar;
@class MAITouch;
@class MAIView;
@class MAIVisualEffectView;
@class MAIWindow;

@interface MAIViewController : NSObject<NSCoding>
-(instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil;
-(void)loadView;
-(void)viewDidLoad;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
@property(nonatomic, readwrite, retain) MAIView* view;
@property(nonatomic, readonly, copy) NSString* nibName;
@property(nonatomic, readonly, retain) NSBundle* nibBundle;
@property(nonatomic, readwrite, copy) NSString* title;
#if TARGET_OS_IPHONE
-(UIViewController*) ios;
#else
-(NSViewController*) mac;
#endif

@end

#if TARGET_OS_IPHONE
@interface UIViewController (MAIConversion)
#else
@interface NSViewController (MAIConversion)
#endif
-(MAIViewController*) mai;
@end
