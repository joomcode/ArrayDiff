//
//  NNArrayDiff.h
//  ArrayDiff
//
//  Created by Nick Tymchenko on 02/04/14.
//  Copyright (c) 2014 Nick Tymchenko. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NNArrayDiffChange;

@interface NNArrayDiff : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic, copy, readonly) NSIndexSet *deleted;
@property (nonatomic, copy, readonly) NSIndexSet *inserted;
@property (nonatomic, copy, readonly) NSSet<NNArrayDiffChange *> *changed;

- (instancetype)initWithDeleted:(NSIndexSet *)deleted
                       inserted:(NSIndexSet *)inserted
                        changed:(NSSet<NNArrayDiffChange *> *)changed;

@end


@interface NNMutableArrayDiff : NNArrayDiff

@property (nonatomic, copy, readonly) NSMutableIndexSet *deleted;
@property (nonatomic, copy, readonly) NSMutableIndexSet *inserted;
@property (nonatomic, copy, readonly) NSMutableSet<NNArrayDiffChange *> *changed;

@end
