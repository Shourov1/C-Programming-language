//
//  main.cpp
//  goto statements
//
//  Created by Md. Shariful Alam on 02/04/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>
#include <cmath> // for sqrt() function

int main()
{
    double x;
tryAgain: // this is a statement label
    std::cout << "Enter a non-negative number: ";
    std::cin >> x;
    
    if (x < 0.0)
    goto tryAgain; // this is the goto statement
    
    std::cout << "The sqrt of " << x << " is " << sqrt(x) << std::endl;
    return 0;
}

//Statement labels utilize a fourth kind of scope: function scope. The goto statement and its corresponding statement label must appear in the same function.

//There are some restrictions on the use of goto statements. For example, you can’t jump forward over a variable that’s initialized in the same block as the goto:

int main()
{
    goto skip; // invalid forward jump
    int x = 5;
skip:
    x += 3; // what would this even evaluate to?
    return 0;
}


//Rule: Avoid use of goto statements unless necessary
