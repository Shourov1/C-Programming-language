//
//  main.cpp
//  boolean_quiz
//
//  Created by Md. Shariful Alam on 25/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>


bool isPrime(int x)
{
    if (x == 2)
        return true;
    else if (x == 3)
        return true;
    else if (x == 5)
        return true;
    else if (x == 7)
        return true;
    return false;
}

int main()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    
    if (isPrime(x))
        std::cout << "the digit is prime" << std::endl;
    else
        std::cout <<" the digit is not prime" << std::endl;
    
    return 0;
}
