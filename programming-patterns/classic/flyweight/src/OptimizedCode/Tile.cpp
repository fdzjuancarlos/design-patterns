//
//  Tile.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 24/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "Tile.hpp"


Tile::Tile(std::string* _terrain, std::string* _water, std::string* _loremipsum, bool _isWater) :
terrain(_terrain), water(_water), loremIpsum(_loremipsum), isWater(_isWater){}


std::string Tile::getTexture(){
    return isWater ? *water : *terrain;
}
