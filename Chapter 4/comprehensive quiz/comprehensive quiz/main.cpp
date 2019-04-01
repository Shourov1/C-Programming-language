//
//  main.cpp
//  comprehensive quiz
//
//  Created by Md. Shariful Alam on 25/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double x {0};
    std::cin >> x;
    return x;
}

int getOperator()
{
    std::cout << "Enter one of the following: ";
    char op;
    std::cin >> op;
    return op;
}

void printResult(double x, char op, double y)
{
    if (op == '+')
        std::cout << x << " + " << y << " is " << x + y << '\n';
    else if (op == '-')
        std::cout << x << " - " << y << " is " << x - y << '\n';
    else if (op == '*')
        std::cout << x << " * " << y << " is " << x * y << '\n';
    else if (op == '/')
        std::cout << x << " / " << y << " is " << x / y << '\n';
}

int main()
{
    double x = getDouble();
    double y = getDouble();
    
    char op = getOperator();
    
    printResult(x, op, y);
    
    return 0;
}
