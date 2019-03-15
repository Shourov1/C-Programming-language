//
//  main.cpp
//  function parameters and arguments
//
//  Created by Md. Shariful Alam on 15/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

int getValueFromUser() // this function now returns an integer value
{
    std::cout << "Enter an integer: ";
    int input{ 0 };
    std::cin >> input;
    
    return input; // added return statement to return input back to the caller
}

void printDouble(int value)
{
    std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
    // we can also use here a variable to initilize the input value by the caller
    
    printDouble(getValueFromUser());
    
    return 0;
}

//In this program, variable num is first initialized with the value entered by the user. Then, function printDouble is called, and the value of argument num is copied into the value parameter of function printDouble. Function printDouble then uses the value of parameter value.


