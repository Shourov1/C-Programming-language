//
//  main.cpp
//  overflow examples
//
//  Created by Md. Shariful Alam on 23/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

int main()
{
    unsigned short x = 65535; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << std::endl;
    x = x + 1; // 65536 is out of our range -- we get overflow because x can't hold 17 bits
    std::cout << "x is now: " << x << std::endl;
    return 0;
}

//overflowed the variable by trying to put a number that was too big into it (65536), and the result is that our value “wrapped around” back to the beginning of the range.


