//
//  main.cpp
//  blocks
//
//  Created by Md. Shariful Alam on 26/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

// It is even possible to put blocks inside of blocks inside of blocks:
#include <iostream>

int main()
{ // block level 1
    std::cout << "Enter an integer: ";
    int value;
    std::cin >> value;
    
    if (value >  0)
    { // block level 2
        if ((value % 2) == 0)
        { // block level 3
            std::cout << value << " is positive and even" << std::endl;
        }
        else
        {
            std::cout << value << " is positive and odd" << std::endl;
        }
    }
    
    return 0;
}

//There is no practical limit to how many nested blocks you can have. However, it is generally a good idea to try to keep the number of nested blocks to at most 3 (maybe 4) blocks deep. If your function has a need for more, it’s probably time to break your function into multiple smaller functions!


