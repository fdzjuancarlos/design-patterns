//
//  Singleton.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 30/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "Singleton.hpp"


Singleton* Singleton::getInstance(){
    if(instance == NULL){
        instance = new Singleton();
    }
    return instance;
}

void Singleton::sayHello(){
    std::cout << "Hello! I'm an overused design pattern, careful!\n";
}
