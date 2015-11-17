//
//  Die.h
//  DiceGame
//
//  Created by User on 11/16/15.
//  Copyright (c) 2015 Lehman College. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Die : NSObject

@property (nonatomic) NSUInteger value;
@property (nonatomic) BOOL Rolled;

- (void) wasItRolled;

@end
