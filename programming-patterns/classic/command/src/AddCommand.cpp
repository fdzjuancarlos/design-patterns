//
//  AddCommand.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 15/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "AddCommand.hpp"
#include <iostream>

int AddCommand::execute(){
    result = firstOperator + secondOperator;

    return result;
}

int AddCommand::undo(){
    return firstOperator;
}
