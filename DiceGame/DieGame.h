//
//  DieGame.h
//  DiceGame
//
//  Created by User on 11/16/15.
//  Copyright (c) 2015 Lehman College. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Die.h"

@interface DieGame : NSObject

-(instancetype)initWithDice: (NSUInteger)number;
-(void)roll: (Die *)die;

@end
