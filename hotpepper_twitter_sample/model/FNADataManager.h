//
//  FNADataManager.h
//  twitterSample
//
//  Created by Funami Takao on 11/11/15.
//  Copyright (c) 2011年 Recruit. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNADataManager : NSObject
+ (FNADataManager *)sharedManager;

- (NSArray *)shopList;

@end
