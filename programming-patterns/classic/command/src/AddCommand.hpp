//
//  AddCommand.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 15/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef AddCommand_hpp
#define AddCommand_hpp

#include <stdio.h>
#include "Command.hpp"

class AddCommand : public Command {
public:
    virtual ~AddCommand() {}
    int execute();
    int undo();
};

#endif /* AddCommand_hpp */
