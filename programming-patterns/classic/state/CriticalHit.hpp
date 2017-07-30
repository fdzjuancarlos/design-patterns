//
//  CriticalHit.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 30/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef CriticalHit_hpp
#define CriticalHit_hpp

#include <stdio.h>
#include "State.hpp"

class CriticalHit : public State{
    
public:
    State* handleDice(int dice);
};

#endif /* CriticalHit_hpp */
