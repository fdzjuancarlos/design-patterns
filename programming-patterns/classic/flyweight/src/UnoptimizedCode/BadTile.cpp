//
//  BadTile.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 24/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "BadTile.hpp"


BadTile::BadTile(bool water) : freeTile("[ ]"), waterTile("[X]"),
loremIpsum(" Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque et molestie mi, a commodo arcu. Vestibulum at ligula eget justo commodo hendrerit. Aliquam ipsum dui, sagittis et purus sed, volutpat lacinia nulla. Suspendisse potenti. Ut eget diam porta, accumsan mauris nec, convallis sapien. Phasellus quis orci eget magna imperdiet congue. Vivamus orci leo, semper nec sapien a, lobortis vulputate diam. Nulla luctus odio justo, eu rhoncus sem fermentum ac. Donec id pellentesque nulla.Fusce lobortis lectus elit. Etiam dictum porta tortor, non laoreet lacus fringilla non. Quisque eget leo sodales quam consequat tristique ut eu erat. Curabitur vehicula quam ac felis commodo, sit amet aliquam lectus ultricies. Nulla dignissim ornare sem in pulvinar. Aliquam molestie mauris id libero gravida, ut laoreet orci viverra. Phasellus lacinia consectetur neque ac rutrum. Suspendisse potenti. Aliquam finibus viverra erat scelerisque molestie. Cras rhoncus sapien ac placerat maximus. Fusce interdum enim et odio consequat ultrices. Curabitur pretium, ex pharetra bibendum fringilla, felis ipsum volutpat quam, in fermentum orci tellus eget mauris. ")
{
    isWater = water;
}


std::string BadTile::getTexture(){
    return isWater ? waterTile : freeTile;
}
