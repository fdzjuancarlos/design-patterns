//
//  CriticalHit.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 30/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "CriticalHit.hpp"
#include "MeleeAttack.hpp"
#include <iostream>

State* CriticalHit::handleDice(int dice){
    
    if(dice < 10){
        return new MeleeAttack();
    }else{
        std::cout << "=CHAINED CRITICAL HIT!\n";
        damageDone = dice * 2;
        return NULL;
    }
}
