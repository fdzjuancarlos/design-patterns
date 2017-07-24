//
//  CalculatorExample.hpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 23/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#ifndef CalculatorExample_hpp
#define CalculatorExample_hpp

#include <stdio.h>
#include <iostream>
#include <map>
#include "Command.hpp"
#include "AddCommand.hpp"
#include "MinusCommand.hpp"
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <iterator>

using namespace std;

class CalculatorExample {
    int result;
    stack<Command*>* executedCommands;
    
public:
    
    CalculatorExample();
    
    void execute();
    void communicateUser(string message);
    
    bool handleInput();
    
    map<string, Command*>* obtainMappedCommands();
    
    template<typename Out>
    void split(const std::string &s, char delim, Out result);
    
    vector<string> split(const std::string &s, char delim);
    
    
};

#endif /* CalculatorExample_hpp */
