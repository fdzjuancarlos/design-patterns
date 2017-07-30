//
//  State.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 30/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "State.hpp"

State::State() : damageDone(-1){}

int State::getDamage(){
    return damageDone;
}
