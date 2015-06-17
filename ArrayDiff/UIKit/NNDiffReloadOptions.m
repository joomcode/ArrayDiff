//
//  NNDiffReloadOptions.m
//  ArrayDiff
//
//  Created by Nick Tymchenko on 08/12/14.
//  Copyright (c) 2014 Nick Tymchenko. All rights reserved.
//

#import "NNDiffReloadOptions.h"

@implementation NNDiffReloadOptions

- (instancetype)init {
    self = [super init];
    if (self) {
        _shouldUseUpdateBlockForReload = ^(NSIndexPath *_) {
            return NO;
        };
    }
    return self;
}

@end
