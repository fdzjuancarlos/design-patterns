//
//  Game.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 26/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "Game.hpp"

#include "Player.hpp"
#include "BingoMaster.hpp"


void Game::execute(){
    
    BingoMaster* master = new BingoMaster();
    
    Player* player1 = new Player(master);
    Player* player2 = new Player(master);
    
    master->registerPlayer(player1);
    master->registerPlayer(player2);
    
    master->playBingo();
    
}
