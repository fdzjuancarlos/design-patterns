//
//  Player.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 26/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "Player.hpp"


Player::Player(BingoMaster* _bingoMaster){
    bingoMaster = _bingoMaster;
    myNumbers = *new std::list<int>();
    
    for (int i=0; i < 20; i++) {
        myNumbers.push_front(rand() % 100);
    }
}

Player::~Player(){
    std::cout << "\nI'm leaving the Game Room!\n";
}

void Player::notify(int ball) {
    
    for (std::list<int>::const_iterator iterator = myNumbers.begin(); iterator != myNumbers.end();) {
        int toCheck = *iterator;
        if( toCheck == ball ){
            iterator = myNumbers.erase(iterator); // Careful, removing while iterating!
        }else{
            iterator++;
        }
    }
    if ( myNumbers.empty() ){
        std::cout << "\nI won!\n";
        bingoMaster->unregisterPlayer(this);
    }
}

