//
//  main.cpp
//  Final_quiz_3
//
//  Created by Md. Shariful Alam on 20/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>
#include "io.hpp"

int main()
{
    int x { readNumber() };
    int y { readNumber() };
    writeAnswer(x + y); // using operator+ to pass the sum of x and y to writeAnswer()
    return 0;
}
