//
//  main.cpp
//  Calling functions
//
//  Created by Md. Shariful Alam on 15/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream> //for std::cout

//difinition of function doB
void doB()
{
    std::cout << "Starting doB\n";
    std::cout << "SHOUROV\n";
    std::cout << "Ending doB\n";
}

//definition odf function doPrint()
void doPrint()
{
    std::cout << "Starting doPrint\n";
    doB(); //calling the doB function in doPrint() function
    std::cout << "Ending doPrint\n";
}

//definition of function main()
int main()
{
    std::cout << "Starting main()\n";
    doPrint(); //function doPrint() called first time
    doPrint(); //function doPrint() called second time
    std::cout << "Ending main()\n";
    
    return 0;
}


//Unlike some other programming languages, in C++, functions cannot be defined inside other functions.
