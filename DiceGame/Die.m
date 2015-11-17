//
//  Die.m
//  DiceGame
//
//  Created by User on 11/16/15.
//  Copyright (c) 2015 Lehman College. All rights reserved.
//

#import "Die.h"

@implementation Die


-(void)setValue:(NSUInteger)value {
    self.value = value;
}

-(BOOL)Rolled {
    return false;
}

-(void)wasItRolled {
    if (self.Rolled != YES) {
        self.value = 0;
    }
}



@end
