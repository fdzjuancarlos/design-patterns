//
//  GameManager.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 30/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef GameManager_hpp
#define GameManager_hpp

#include <stdio.h>
#include "State.hpp"

class GameManager{
    State* currentState;
    
public:
    void playGame();
};

#endif /* GameManager_hpp */
