//
//  Observer.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 26/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef Observer_hpp
#define Observer_hpp

#include <stdio.h>

class Observer{
    
public:
    Observer();
    virtual ~Observer();
    void virtual notify(int ball) = 0;
};

#endif /* Observer_hpp */
