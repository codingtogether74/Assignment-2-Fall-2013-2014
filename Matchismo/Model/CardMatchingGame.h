//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Tatiana Kornilova on 11/7/13.
//  Copyright (c) 2013 Tatiana Kornilova. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
@interface CardMatchingGame : NSObject

-(instancetype)initWithCardCount:(NSUInteger)count
                       usingDeck:(Deck *)deck;

-(void)chooseCardAtIndex:(NSUInteger)index;
-(Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic) NSUInteger numberOfMatches;
@property (nonatomic,readonly) NSInteger score;
@property (strong,nonatomic) NSArray *matchedCards;
@property (readonly,nonatomic) NSInteger lastFlipPoints;

@end
