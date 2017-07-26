//
//  BingoMaster.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 26/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef BingoMaster_hpp
#define BingoMaster_hpp

#include <stdio.h>
#include <list>
#include "Observer.hpp"
#include <cstdlib>

class BingoMaster{
    
    std::list< std::unique_ptr< Observer > >* listOfPlayers;

    void notifyNumber(int ball);
    
public:
    BingoMaster();
    void registerPlayer( Observer* player);
    void unregisterPlayer( Observer* player);
    void playBingo();
    
};

#endif /* BingoMaster_hpp */
