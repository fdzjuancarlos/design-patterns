//
//  MinusCommand.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 23/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef MinusCommand_hpp
#define MinusCommand_hpp

#include <stdio.h>

#include <stdio.h>
#include "Command.hpp"

class MinusCommand : public Command {
public:
    virtual ~MinusCommand() {}
    int execute();
    int undo();
};


#endif /* MinusCommand_hpp */
