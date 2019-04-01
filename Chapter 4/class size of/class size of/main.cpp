//
//  main.cpp
//  class size of
//
//  Created by Md. Shariful Alam on 25/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

int getClassSize(bool inBigClassroom)
{
    if (inBigClassroom)
        return 30;
    else
        return 20;
}

int main()
{
    const int classSize = getClassSize(true);
    std::cout << "The class size is: " << classSize << '\n';
    
    return 0;
}
