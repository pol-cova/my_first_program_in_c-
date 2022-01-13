//
//  main.cpp
//  my_travel_to_learn_c++
//
//  Created by Paul Contreras on 12/01/22.
//

#include <iostream>

int main(){
    
    //Declarate the variable
    
    double tempf = 0.0;
    double tempc;
    
    //Show the text to user and input
    std::cout <<"Welcome to F to C converter\n";
    std::cout <<"Please enter temperature in F grades:\n";
    std::cin >> tempf;
    
    //The equation to converter the temperature
    tempc = (tempf - 32) * 5/9;
    
    //Show the result
    std::cout <<"The temperature in C is\n" << " " << tempc << "";
    
}


