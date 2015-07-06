#import <TargetConditionals.h>

#if TARGET_OS_IPHONE
@import UIKit;
#else
@import AppKit;
#endif

#import "MAIEnums.h"

#import "MAILayoutManagerDelegate.h"
#import "MAITextLayoutOrientationProvider.h"
#import "MAITextAttachmentContainer.h"
#import "MAITextStorageDelegate.h"
#import "MAIApplicationDelegate.h"
#import "MAICollectionViewDataSource.h"
#import "MAICollectionViewDelegate.h"
#import "MAICollectionViewDelegateFlowLayout.h"
#import "MAIGestureRecognizerDelegate.h"
#import "MAITableViewDataSource.h"
#import "MAITableViewDelegate.h"
#import "MAITextFieldDelegate.h"
#import "MAITextInput.h"
#import "MAITextViewDelegate.h"
#import "MAIToolbarDelegate.h"

@class MAIDataAsset;
@class MAILayoutXAxisAnchor;
@class MAILayoutYAxisAnchor;
@class MAILayoutDimension;
@class MAILayoutConstraint;
@class MAILayoutManager;
@class MAITextTab;
@class MAIParagraphStyle;
@class MAIShadow;
@class MAIStringDrawingContext;
@class MAITextAttachment;
@class MAITextContainer;
@class MAITextStorage;
@class MAIAccessibilityElement;
@class MAIApplication;
@class MAIBezierPath;
@class MAIButton;
@class MAICollectionView;
@class MAICollectionViewFlowLayoutInvalidationContext;
@class MAICollectionViewFlowLayout;
@class MAICollectionViewLayoutAttributes;
@class MAICollectionViewUpdateItem;
@class MAICollectionViewLayoutInvalidationContext;
@class MAICollectionViewLayout;
@class MAICollectionViewTransitionLayout;
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
@class MAILayoutGuide;
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
@class MAIStackView;
@class MAIStepper;
@class MAIStoryboard;
@class MAIStoryboardSegue;
@class MAITableViewRowAction;
@class MAITableView;
@class MAITextField;
@class MAITextView;
@class MAIToolbar;
@class MAITouch;
@class MAIView;
@class MAIViewController;
@class MAIVisualEffectView;
@class MAIWindow;

NS_ASSUME_NONNULL_BEGIN

@protocol MAIMutableParagraphStyleProtocol
-(void)addTabStop:(MAITextTab*)anObject;
-(void)removeTabStop:(MAITextTab*)anObject;
-(void)setParagraphStyle:(MAIParagraphStyle*)obj;
+(MAIParagraphStyle*)defaultParagraphStyle;
+(MAIWritingDirection)defaultWritingDirectionForLanguage:(nullable NSString*)languageName;
@property(readonly, getter=lineSpacing) CGFloat lineSpacing;
@property(readonly, getter=paragraphSpacing) CGFloat paragraphSpacing;
@property(readonly, getter=alignment) NSTextAlignment alignment;
@property(readonly, getter=firstLineHeadIndent) CGFloat firstLineHeadIndent;
@property(readonly, getter=headIndent) CGFloat headIndent;
@property(readonly, getter=tailIndent) CGFloat tailIndent;
@property(readonly, getter=lineBreakMode) NSLineBreakMode lineBreakMode;
@property(readonly, getter=minimumLineHeight) CGFloat minimumLineHeight;
@property(readonly, getter=maximumLineHeight) CGFloat maximumLineHeight;
@property(readonly, getter=baseWritingDirection) MAIWritingDirection baseWritingDirection;
@property(readonly, getter=lineHeightMultiple) CGFloat lineHeightMultiple;
@property(readonly, getter=paragraphSpacingBefore) CGFloat paragraphSpacingBefore;
@property(readonly, getter=hyphenationFactor) float hyphenationFactor;
@property(readonly, getter=tabStops) NSArray<MAITextTab*>* tabStops;
@property(readonly, getter=defaultTabInterval) CGFloat defaultTabInterval;
@property(readonly, getter=allowsDefaultTighteningForTruncation) BOOL allowsDefaultTighteningForTruncation;

@end

#if TARGET_OS_IPHONE
@interface MAIMutableParagraphStyle : NSMutableParagraphStyle<MAIMutableParagraphStyleProtocol>
#else
@interface MAIMutableParagraphStyle : NSMutableParagraphStyle<MAIMutableParagraphStyleProtocol>
#endif
@end

NS_ASSUME_NONNULL_END
