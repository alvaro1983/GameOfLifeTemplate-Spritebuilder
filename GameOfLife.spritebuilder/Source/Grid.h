//
//  Grid.h
//  GameOfLife
//
//  Created by ARUIZ01 on 28/10/2014.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;
@end
