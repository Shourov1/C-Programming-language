//
//  main.cpp
//  donothing
//
//  Created by Md. Shariful Alam on 15/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

void doNothing(const int &x) // Don't worry about what &x is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized
    
    doNothing(x); // make compiler think we're using this variable
    
    // print the value of x to the screen (who knows what we'll get, because x is uninitialized)
    std::cout << x <<'\n';
    
    return 0;
}
// best practice is to always initialize the variable
// undefined behavior will happen variable is used without initilization
