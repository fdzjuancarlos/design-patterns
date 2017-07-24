//
//  Tile.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 24/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef Tile_hpp
#define Tile_hpp

#include <stdio.h>
#include <string>


class Tile{
    std::string* terrain;
    std::string* water;
    std::string* loremIpsum;
    
    bool isWater;
    
public:
    Tile(std::string* _terrain, std::string* _water, std::string* _loremipsum, bool _isWater);
    std::string getTexture();
};

#endif /* Tile_hpp */
