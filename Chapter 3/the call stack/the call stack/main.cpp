//
//  main.cpp
//  the call stack
//
//  Created by Md. Shariful Alam on 20/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

void a()
{
    std::cout << "a() called\n";
}

void b()
{
    std::cout << "b() called\n";
    a();
}

int main()
{
    a();
    b();
    
    return 0;
}

