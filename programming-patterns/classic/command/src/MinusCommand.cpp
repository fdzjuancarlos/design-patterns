//
//  MinusCommand.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 23/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "MinusCommand.hpp"



int MinusCommand::execute(){
    result = firstOperator - secondOperator;
    return result;
}

int MinusCommand::undo(){
    return firstOperator;
}
