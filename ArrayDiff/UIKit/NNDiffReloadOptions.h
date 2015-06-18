//
//  NNDiffReloadOptions.h
//  ArrayDiff
//
//  Created by Nick Tymchenko on 08/12/14.
//  Copyright (c) 2014 Nick Tymchenko. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NNDiffReloadOptions : NSObject

@property (nonatomic, copy) void (^cellUpdateBlock)(id cell, NSIndexPath *indexPath);

@property (nonatomic, copy) BOOL (^shouldUseUpdateBlockForReload)(NSIndexPath *indexPath);

@property (nonatomic, copy) void (^dataSourceUpdateBlock)();

@property (nonatomic, assign) BOOL useMoveIfPossible;

@end
