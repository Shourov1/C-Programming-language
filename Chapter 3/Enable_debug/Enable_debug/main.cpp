//
//  main.cpp
//  Enable_debug
//
//  Created by Md. Shariful Alam on 20/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

#define ENABLE_DEBUG // comment out to disable debugging

int getUserInput()
{
#ifdef ENABLE_DEBUG
    std::cerr << "getUserInput() called\n";
#endif
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;
    return x;
}

int main()
{
#ifdef ENABLE_DEBUG
    std::cerr << "main() called\n";
#endif
    int x = getUserInput();
    std::cout << "You entered: " << x;
    
    return 0;
}
