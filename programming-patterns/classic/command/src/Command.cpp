//
//  Command.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 15/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "Command.hpp"
#include <iostream>


void Command::defaultAction(){

    std::cout << "Logging try\n";

    
}

void Command::setFirstOperator(int integer){
    firstOperator = integer;
}

void Command::setSecondOperator(int integer){
    secondOperator = integer;
}
