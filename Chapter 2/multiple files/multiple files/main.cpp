//
//  main.cpp
//  multiple files
//
//  Created by Md. Shariful Alam on 19/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

int add(int x,int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // compile error
    return 0;
}
