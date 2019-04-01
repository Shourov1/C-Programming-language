//
//  main.cpp
//  Debugger
//
//  Created by Md. Shariful Alam on 20/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

static int extracted(int x) {
    return x + 2;
}

int main()
{
    int x{ 1 };
    std::cout << x << " ";
    
    x = extracted(x);
    std::cout << x << " ";
    
    x = x + 3;
    std::cout << x << " ";
    
    return 0;
}
//For Xcode user can go throgh this link for details to know how to use breakpoint for debugging: https://medium.com/yay-its-erica/xcode-debugging-with-breakpoints-for-beginners-5b0d0a39d711
