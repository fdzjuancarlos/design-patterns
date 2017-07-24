//
//  main.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 15/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include <stdio.h>
#include "CalculatorExample.hpp"






int main(int argc, const char * argv[]) {
    
    CalculatorExample* example = new CalculatorExample();
    
    example->execute();

    return 0;
}


