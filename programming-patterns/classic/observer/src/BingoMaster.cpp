//
//  BingoMaster.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 26/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "BingoMaster.hpp"
#include <string>
#include <iostream>



BingoMaster::BingoMaster(){
    listOfPlayers = (new std::list< std::unique_ptr< Observer > >());
}

void BingoMaster::registerPlayer( Observer* player){
    listOfPlayers->push_front( std::unique_ptr<Observer>(player));
}

void BingoMaster::unregisterPlayer( Observer* player){
    
    auto i = std::find_if(listOfPlayers->begin(), listOfPlayers->end(),
                          [=](const std::unique_ptr<Observer>& x) { return x.get() == player; });
    
    if (i != listOfPlayers->end())
    {
        listOfPlayers->erase(i);
    }
}

void BingoMaster::notifyNumber(int ball){
    for (auto it = listOfPlayers->begin(); it != listOfPlayers->end(); it++) {
        (*it).get()->notify(ball);
    }
}

void BingoMaster::playBingo(){
    int i=0;
    while(!listOfPlayers->empty()){
        //int number = rand() % 100;
        notifyNumber(i);
        std::cout << "\n" + std::to_string(i) << "\n";
        i++;
    }
}

