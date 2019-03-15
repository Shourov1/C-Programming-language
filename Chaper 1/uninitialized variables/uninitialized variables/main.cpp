//
//  main.cpp
//  uninitialized variables
//
//  Created by Md. Shariful Alam on 15/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

int main()
{
    // define an integer variable named x
    int x;// this variable is uninitialized because we haven't given it a value
    
    
    // print the value of x to the screen
    std::cout << x; // who knows what we'll get, because x is uninitialized
    
    return 0;
}
