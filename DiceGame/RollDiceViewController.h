//
//  RollDiceViewController.h
//  DiceGame
//
//  Created by User on 11/16/15.
//  Copyright (c) 2015 Lehman College. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DieGame.h"

@interface RollDiceViewController : UIViewController

@property(nonatomic, strong) DieGame *game;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *dieButtons;



@end
