//
//  Command.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 15/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef Command_hpp
#define Command_hpp

#include <stdio.h>

class Command {
protected:
    int firstOperator;
    int secondOperator;
    int result;
    
public:
    virtual ~Command() {}
    virtual int execute() = 0;
    virtual int undo() = 0;
    virtual void defaultAction();
    virtual void setFirstOperator(int integer);
    virtual void setSecondOperator(int integer);
};

#endif /* Command_hpp */
