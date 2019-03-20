//
//  main.cpp
//  forward declaration
//
//  Created by Md. Shariful Alam on 16/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//


//forward declaration of a function

#include <iostream>

int add(int x, int y, int z);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
    return 0;
}

int add(int x, int y, int z)
{
    return x + y+ z;
}
