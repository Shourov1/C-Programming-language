//
//  main.cpp
//  Quiz
//
//  Created by Md. Shariful Alam on 15/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x {0};
    std::cin >> x;
    
    std::cout << "Enter another integer: ";
    int y {0};
    std::cin >> y;
    
    std::cout << x << " + " << y << " is "  << x+y << '\n';
    std::cout << x << " - " << y << " is " << x-y << '\n';
    
    return 0;
    
}
