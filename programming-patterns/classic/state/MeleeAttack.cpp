//
//  MeleeAttack.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 30/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "MeleeAttack.hpp"


State* MeleeAttack::handleDice(int dice){
    if(dice >= MINIMUM_DICE_FOR_CRIT){
        return new CriticalHit();
    }
    damageDone = dice +1;
    return NULL;
}
