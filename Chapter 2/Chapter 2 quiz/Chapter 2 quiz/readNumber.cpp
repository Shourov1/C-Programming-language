//
//  readNumber.cpp
//  Chapter 2 quiz
//
//  Created by Md. Shariful Alam on 20/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include "readNumber.hpp"
#include <iostream>

int readNumber()
{
    int x{0};
    std::cout << "Enter the integer: ";
    std::cin >> x;
    return x;
}
