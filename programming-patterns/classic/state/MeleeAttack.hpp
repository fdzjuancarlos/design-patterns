//
//  MeleeAttack.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 30/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef MeleeAttack_hpp
#define MeleeAttack_hpp

#include <stdio.h>
#include "State.hpp"
#include "Constants.h"
#include "CriticalHit.hpp"

class MeleeAttack : public State {
    
public:
    State* handleDice(int dice);
};

#endif /* MeleeAttack_hpp */
