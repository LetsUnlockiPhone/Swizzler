//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class CALayer, GTInfiniteScrollDatePickerCell, NSIndexPath, UIView;

@protocol GTInfiniteScrollDatePickerCellDataSource <NSObject>
- (BOOL)datePickerSelectsOnTapAndHold:(GTInfiniteScrollDatePickerCell *)arg1;
- (CALayer *)datePicker:(GTInfiniteScrollDatePickerCell *)arg1 tileForItemAtIndexPath:(NSIndexPath *)arg2;
- (int)numberOfRowsInDatePicker:(GTInfiniteScrollDatePickerCell *)arg1;
- (int)numberOfColumnsInDatePicker:(GTInfiniteScrollDatePickerCell *)arg1;
- (float)headerHeightForDatePicker:(GTInfiniteScrollDatePickerCell *)arg1;
- (UIView *)headerViewForDatePicker:(GTInfiniteScrollDatePickerCell *)arg1;
@end

