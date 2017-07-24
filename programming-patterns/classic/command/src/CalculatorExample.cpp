//
//  CalculatorExample.cpp
//  programming-patterns
//
//  Created by Juan Carlos Fernández Durán on 23/07/2017.
//  Copyright © 2017 Juan Carlos Fernández Durán. All rights reserved.
//

#include "CalculatorExample.hpp"

CalculatorExample::CalculatorExample(){
    executedCommands = new stack<Command*>();
    result = 0;
}

void CalculatorExample::execute(){
    
    communicateUser("Starts interaction");
    
    bool userFinished = false;
    while(!userFinished){
        userFinished = handleInput();
    }
    
    communicateUser("User finished");
    
}

/*
 * We decouple user actions and business logic
 * with a HashMap
 */
bool CalculatorExample::handleInput(){
    map<string, Command*>* mappedCommands = obtainMappedCommands();
    string output;
    bool userFinished;
    bool undo;
    
    getline(cin,output);
    userFinished = output == "exit";
    undo = output == "undo";
    
    if(!undo && !userFinished){
        vector<string> arguments = split(output,' ');
        
        if(arguments.size() == 2 &&
           (mappedCommands->find(arguments[0])->first != "") &&
           arguments[1].find_first_not_of( "0123456789" ) == string::npos
           ){
        auto iterator =  mappedCommands->find(arguments[0]);
        int secondOperator = stoi(arguments[1]);
        
        if(iterator != mappedCommands->end()){
            iterator->second->setFirstOperator(result);
            iterator->second->setSecondOperator(secondOperator);
            result = iterator->second->execute();
            executedCommands->push(iterator->second);
        }
        }else{
            communicateUser("[operator] [number] or (undo) or (exit)");
        }
    }else if(undo){
        if(executedCommands->size() < 1){
            communicateUser("No more inputs saved");
        }else{
            result = executedCommands->top()->undo();
            executedCommands->pop();
        }
    }
    
    communicateUser("Result: " + to_string(result));

    return userFinished;
}

map<string, Command*>* CalculatorExample::obtainMappedCommands(){
    map<string, Command*>* mappedCommands = new map<string,Command*>();
    
    mappedCommands->operator[]("+") = new AddCommand();
    mappedCommands->operator[]("-") = new MinusCommand();
    
    return mappedCommands;
}


void CalculatorExample::communicateUser(string message){
    cout << message << "\n";
}

template<typename Out>
void CalculatorExample::split(const std::string &s, char delim, Out result) {
    std::stringstream ss;
    ss.str(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        *(result++) = item;
    }
}


vector<string> CalculatorExample::split(const std::string &s, char delim) {
    vector<string> elems;
    split(s, delim, back_inserter(elems));
    return elems;
}
