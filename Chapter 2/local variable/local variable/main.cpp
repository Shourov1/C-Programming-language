//
//  main.cpp
//  local variable
//
//  Created by Md. Shariful Alam on 16/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

void doSomething()
{
    std::cout << "Hello!\n";
}

int main()
{
    int x{ 0 }; // x's lifetime begins here
    
    doSomething(); // x is still alive during this function call
    
    return 0;
} // x's lifetime ends here

//In the above program, x’s lifetime runs from the point of definition to the end of function main. This includes the time spent during the execution of function doSomething.
