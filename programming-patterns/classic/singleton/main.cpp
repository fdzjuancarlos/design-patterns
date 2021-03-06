//
//  main.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 30/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include <stdio.h>
#include "Singleton.hpp"
#include "StaticClass.hpp"


int main(int argc, const char * argv[]) {
    
    Singleton::getInstance()->sayHello();
    StaticClass::sayHello();
    
    
    return 0;
}
