//
//  io.cpp
//  Final_quiz_2
//
//  Created by Md. Shariful Alam on 20/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include "io.hpp"
#include <iostream>

int readNumber()
{
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The answer is " << x << '\n';
}

