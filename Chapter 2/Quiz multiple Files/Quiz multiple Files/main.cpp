//
//  main.cpp
//  Quiz multiple Files
//
//  Created by Md. Shariful Alam on 19/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

int getInteger();

int main()
{
    int x = getInteger();
    int y = getInteger();
    
    std::cout << x << " + " << y << " is " << x + y << '\n';
    return 0;
}
