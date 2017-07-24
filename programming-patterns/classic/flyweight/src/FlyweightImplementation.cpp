//
//  FlyweightImplementation.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 24/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "FlyweightImplementation.hpp"
#include "FlyweightFactory.hpp"
#include <iostream>


void FlyweightImplementation::execute(){
    
    Tile* myWorld [20][20];
    FlyweightFactory* factory = new FlyweightFactory();
    
    for (int i=0; i < 20; i++) {
        for (int j=0; j < 20; j++) {
            myWorld[i][j] = factory->createTile(i+j > 20);
            std::cout << myWorld[i][j]->getTexture();
        }
        std::cout << "\n";
    }
    
    int objectSize = sizeof(Tile);
    int arraySize = sizeof(myWorld);
    
    std::cout << "ObjectSize: " << objectSize << "\n";
    std::cout << "ArraySize: " << arraySize << "\n";
}
