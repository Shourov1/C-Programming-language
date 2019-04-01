//
//  main.cpp
//  odd or even
//
//  Created by Md. Shariful Alam on 25/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>


int getTheInteger()
{
    int x{0};
    std::cout << "Enter an integer: ";
    std::cin >> x;
    return x;
}

void isEven(int x)
{
    if ((x % 2) == 0)
        std::cout << "Entered integer is Even" <<'\n';
    else
        std::cout << "Entered integer is Odd" << '\n';
}

int main()
{
    isEven(getTheInteger());
}



