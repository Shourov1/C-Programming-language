//
//  main.cpp
//  Practice
//
//  Created by Md. Shariful Alam on 15/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//


#include <iostream>

int doubleNumber(int x)
{
    return 2 * x;
}

int main()
{
    int x{ 0 };
    std::cin >> x;
    std::cout << doubleNumber(x) << '\n';
    return 0;
}
