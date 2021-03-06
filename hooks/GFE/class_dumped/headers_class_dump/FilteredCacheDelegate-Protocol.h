//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class FilteredCache, NSArray, NSIndexSet;

@protocol FilteredCacheDelegate <NSObject>
- (void)filteredCache:(FilteredCache *)arg1 didUpdateRowsAtIndexPaths:(NSArray *)arg2;
- (void)filteredCache:(FilteredCache *)arg1 didRemoveRowsAtIndexPaths:(NSArray *)arg2;
- (void)filteredCache:(FilteredCache *)arg1 didAddRowsAtIndexPaths:(NSArray *)arg2;
- (void)filteredCache:(FilteredCache *)arg1 didRemoveSectionsAtIndexes:(NSIndexSet *)arg2;
- (void)filteredCache:(FilteredCache *)arg1 didAddSectionsAtIndexes:(NSIndexSet *)arg2;

@optional
- (void)didInitiallyLoadDataForFilteredCache:(FilteredCache *)arg1;
- (void)willUpdateFilteredCache:(FilteredCache *)arg1 withBlock:(void (^)(void))arg2;
- (void)filteredCache:(FilteredCache *)arg1 willRemoveRowsAtIndexPaths:(NSArray *)arg2;
- (void)filteredCache:(FilteredCache *)arg1 willRemoveSectionsAtIndexes:(NSIndexSet *)arg2;
@end

