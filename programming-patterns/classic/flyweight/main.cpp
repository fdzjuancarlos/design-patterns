//
//  main.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 24/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include <stdio.h>
#include "BadImplementation.hpp"
#include "FlyweightImplementation.hpp"


int main(int argc, const char * argv[]) {
    
    //BadImplementation* first = new BadImplementation();
    FlyweightImplementation* first = new FlyweightImplementation();
    
    first->execute();
    
    
    return 0;
}
