//
//  main.cpp
//  do while statement
//
//  Created by Md. Shariful Alam on 12/04/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.


// The statement in a do-while loop always executes at least once. After the statement has been executed, the do-while loop checks the condition. If the condition is true, the path of execution jumps back to the top of the do-while loop and executes it again.

//Here is an example of using a do-while loop to display a menu to the user and wait for the user to make a valid choice:

#include <iostream>

int main()
{
    // selection must be declared outside do/while loop
    int selection;
    
    do
    {
        std::cout << "Please make a selection: \n";
        std::cout << "1) Addition\n";
        std::cout << "2) Subtraction\n";
        std::cout << "3) Multiplication\n";
        std::cout << "4) Division\n";
        std::cin >> selection;
    }
    while (selection != 1 && selection != 2 &&
           selection != 3 && selection != 4);
    
    // do something with selection here
    // such as a switch statement
    
    std::cout << "You selected option #" << selection << "\n";
    
    return 0;
}
