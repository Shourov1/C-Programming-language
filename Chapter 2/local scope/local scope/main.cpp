//
//  main.cpp
//  local scope
//
//  Created by Md. Shariful Alam on 16/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.

//program demonstrating the scope of a variable named x:

#include <iostream>

// x is not in scope anywhere in this function
void doSomething()
{
    std::cout << "Hello!\n";
}

int main()
{
    // x can not be used here because it's not in scope yet
    
    int x{ 0 }; // x enters scope here and can now be used
    
    doSomething();
    
    return 0;
} // x goes out of scope here and can no longer be used


#include <iostream>

int add(int x, int y) // x and y are created and enter scope here
{
    // x and y are visible/usable within this function only
    return x + y;
} // y and x go out of scope and are destroyed here

int main()
{
    int a{ 5 }; // a is created, initialized, and enters scope here
    int b{ 6 }; // b is created, initialized, and enters scope here
    
    // a and b are usable within this function only
    std::cout << add(a, b) << '\n'; // calls function add() with x=5 and y=6
    
    return 0;
} // b and a go out of scope and are destroyed here

