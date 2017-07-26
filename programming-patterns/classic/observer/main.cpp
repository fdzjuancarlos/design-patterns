//
//  main.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 26/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include <stdio.h>
#include "Game.hpp"

int main(int argc, const char * argv[]) {
    
    Game* game = new Game();
    
    game->execute();
    
    return 0;
}
