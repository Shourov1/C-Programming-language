//
//  main.cpp
//  static duration variable
//
//  Created by Md. Shariful Alam on 27/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

//The easiest way to show the difference between automatic and static duration variables is by example.

//Automatic duration (default):

#include <iostream>

void incrementAndPrint()
{
    int value = 1; // automatic duration by default
    ++value;
    std::cout << value << '\n';
} // value is destroyed here

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
    
    return 0;
}


//Static duration (using static keyword):

#include <iostream>

void incrementAndPrint()
{
    static int s_value = 1; // static duration via static keyword.  This line is only executed once.
    ++s_value;
    std::cout << s_value << '\n';
} // s_value is not destroyed here, but becomes inaccessible

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
    
    return 0;
}
