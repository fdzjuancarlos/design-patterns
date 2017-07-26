//
//  Player.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 26/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "Observer.hpp"
#include <list>
#include <cstdlib>
#include <iostream>
#include "BingoMaster.hpp"

class Player : public Observer{
    
    // in terms of efficiency, we should use a sorted list for a O(log(n)) find complexity
    // list is a good choice for adding/removing elements at random positions
    // a vector would need O(n) time complexity to add/remove an element at a random position
    std::list<int> myNumbers;
    
    BingoMaster* bingoMaster;
    
public:
    Player(BingoMaster* _bingoMaster);
    ~Player();
    void notify(int ball);
    
};

#endif /* Player_hpp */
