//
//  Singleton.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 30/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef Singleton_hpp
#define Singleton_hpp

#include <stdio.h>
#include <iostream>

class Singleton{
    static Singleton* instance;
    Singleton() { };
public:
    
    static Singleton* getInstance();
    void sayHello();
};

#endif /* Singleton_hpp */
