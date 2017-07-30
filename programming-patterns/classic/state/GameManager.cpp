//
//  GameManager.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 30/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "GameManager.hpp"

#include <cstdlib>
#include <string>
#include <iostream>

#include "MeleeAttack.hpp"


void GameManager::playGame(){
    
    int monsterLife = 1500;
    currentState = new MeleeAttack();
    
    
    while(monsterLife > 0){
        int dice = rand() % 21;
        std::cout << "\nRolled: " << std::to_string(dice) << "\n";
        State* newState = currentState->handleDice(dice);
        if(newState == NULL){
            monsterLife -= currentState->getDamage();
            std::cout << "-Damage: " << std::to_string(currentState->getDamage()) << "\n";
            std::cout << "-Health: " << std::to_string(monsterLife) << "\n";
        }else{
            delete currentState;
            currentState = newState;
        }

        
    }
    
    
}
