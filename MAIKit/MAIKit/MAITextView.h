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
@class MAIToolbar;
@class MAITouch;
@class MAIView;
@class MAIViewController;
@class MAIVisualEffectView;
@class MAIWindow;

@interface MAITextView : NSObject<MAITextInput>
-(void)scrollRangeToVisible:(NSRange)range;
-(instancetype)initWithFrame:(CGRect)frame textContainer:(MAITextContainer *)textContainer;
-(instancetype)initWithFrame:(CGRect)frame;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
@property(nonatomic, readwrite, retain) MAIFont* font;
@property(nonatomic, readwrite, retain) MAIColor* textColor;
@property(nonatomic, readwrite, getter=isEditable) BOOL editable;
@property(nonatomic, readwrite, getter=isSelectable) BOOL selectable;
@property(nonatomic, readonly) MAILayoutManager* layoutManager;
@property(nonatomic, readonly, retain) MAITextStorage* textStorage;
#if TARGET_OS_IPHONE
-(UITextView*) ios;
#else
-(NSTextView*) mac;
#endif

@end

#if TARGET_OS_IPHONE
@interface UITextView (MAIConversion)
#else
@interface NSTextView (MAIConversion)
#endif
-(MAITextView*) mai;
@end
