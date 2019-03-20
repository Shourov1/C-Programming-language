//
//  main.cpp
//  quiz_local
//
//  Created by Md. Shariful Alam on 16/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

void doIt(int x)
{
    int y{ 4 };
    std::cout << "doIt: x = " << x << " y = " << y << '\n';
    
    x = 3;
    std::cout << "doIt: x = " << x << " y = " << y << '\n';
}

int main()
{
    int x{ 1 };
    int y{ 2 };
    
    std::cout << "main: x = " << x << " y = " << y << '\n';
    
    doIt(x);
    
    std::cout << "main: x = " << x << " y = " << y << '\n';
    
    return 0;
}
