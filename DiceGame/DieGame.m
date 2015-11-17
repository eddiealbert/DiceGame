//
//  DieGame.m
//  DiceGame
//
//  Created by User on 11/16/15.
//  Copyright (c) 2015 Lehman College. All rights reserved.
//

#import "DieGame.h"

@implementation DieGame

-(instancetype)initWithDice:(NSUInteger)number {
    self = [super init];
    
    if (self) {
        if (number < 2) {
            self = nil;
            return self;
        }
    }
    
    for (int i = 0; i < number; i++) {
        Die *die;
        die.value = 0;
        die.Rolled = NO;
    }
    
    return self;
}

-(void)roll: (Die *)die {
    die.Rolled = YES;
    die.value = arc4random_uniform(6) + 1;
}

@end
