//
//  UICollectionView+NNSectionsDiff.h
//  ArrayDiff
//
//  Created by Nick Tymchenko on 12/04/14.
//  Copyright (c) 2014 Nick Tymchenko. All rights reserved.
//

#import <ArrayDiff/NNSectionsDiff.h>
#import <ArrayDiff/NNDiffReloadOptions.h>

@import UIKit;

@interface UICollectionView (NNSectionsDiff)

- (void)reloadWithSectionsDiff:(NNSectionsDiff *)sectionsDiff;

- (void)reloadWithSectionsDiff:(NNSectionsDiff *)sectionsDiff
                       options:(NNDiffReloadOptions *)options
                    completion:(void (^)(void))completion;

@end
