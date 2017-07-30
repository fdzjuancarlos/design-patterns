//
//  main.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 30/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include <stdio.h>

#include "GameManager.hpp"

int main(int argc, const char * argv[]) {
    
    GameManager* manager = new GameManager();
    
    manager->playGame();
    
    return 0;
}
