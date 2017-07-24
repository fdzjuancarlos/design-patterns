//
//  FlyweightFactory.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 24/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef FlyweightFactory_hpp
#define FlyweightFactory_hpp

#include "Tile.hpp"
#include <stdio.h>
#include <string>

class FlyweightFactory{
    std::string* terrain;
    std::string* water;
    std::string* loremIpsum;
public:
    
    FlyweightFactory();
    Tile* createTile(bool isWater);
    
};

#endif /* FlyweightFactory_hpp */
