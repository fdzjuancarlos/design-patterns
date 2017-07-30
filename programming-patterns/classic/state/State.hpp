//
//  State.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 30/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef State_hpp
#define State_hpp

#include <stdio.h>

class State{
protected:
    int damageDone;
public:
    State();
    virtual State* handleDice(int dice) = 0;
    int getDamage();
};

#endif /* State_hpp */
