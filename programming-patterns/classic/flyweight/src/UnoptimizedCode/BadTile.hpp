//
//  BadTile.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 24/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef BadTile_hpp
#define BadTile_hpp

#include <stdio.h>
#include <string>


class BadTile{
    std::string freeTile;
    std::string waterTile;
    std::string loremIpsum;
    
    bool isWater;
public:
    BadTile(bool water);
    std::string getTexture();
};

#endif /* BadTile_hpp */
