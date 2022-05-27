//
//  NNCollectionViewReloader.h
//  UIKitWorkarounds
//
//  Created by Nick Tymchenko on 15/01/16.
//  Copyright © 2016 Nick Tymchenko. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <ArrayDiff/NNCellCustomReloadBlock.h>

NS_ASSUME_NONNULL_BEGIN


@interface NNCollectionViewReloader : NSObject

@property (nonatomic, strong, readonly) UICollectionView *collectionView;

@property (nonatomic, copy, nullable) void(^didApplyOperationsHandler)(void);

- (instancetype)initWithCollectionView:(UICollectionView *)collectionView;

- (instancetype)initWithCollectionView:(UICollectionView *)collectionView
                 cellCustomReloadBlock:(nullable NNCellCustomReloadBlock)cellCustomReloadBlock NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;


- (void)performUpdates:(void (NS_NOESCAPE ^)(void))updates completion:(nullable void (^)(void))completion;

- (void)insertSections:(NSIndexSet *)sections;
- (void)deleteSections:(NSIndexSet *)sections;
- (void)reloadSections:(NSIndexSet *)sections;
- (void)moveSection:(NSInteger)section toSection:(NSInteger)newSection;

- (void)insertItemsAtIndexPaths:(NSArray<NSIndexPath *> *)indexPaths;
- (void)deleteItemsAtIndexPaths:(NSArray<NSIndexPath *> *)indexPaths;
- (void)reloadItemsAtIndexPaths:(NSArray<NSIndexPath *> *)indexPaths;
- (void)reloadItemsAtIndexPathsWithCustomBlock:(NSArray<NSIndexPath *> *)indexPaths;
- (void)moveItemAtIndexPath:(NSIndexPath *)indexPath toIndexPath:(NSIndexPath *)newIndexPath;

@end


NS_ASSUME_NONNULL_END
