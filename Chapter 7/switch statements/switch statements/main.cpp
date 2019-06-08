//
//  main.cpp
//  switch statements
//
//  Created by Md. Shariful Alam on 01/04/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//
#include <iostream>



bool isDigit(char c)
{
    switch (c)
    {
        case '0': // if c is 0
        case '1': // or if c is 1
        case '2': // or if c is 2
        case '3': // or if c is 3
        case '4': // or if c is 4
        case '5': // or if c is 5
        case '6': // or if c is 6
        case '7': // or if c is 7
        case '8': // or if c is 8
        case '9': // or if c is 9
            return true; // then return true
        default:
            return false;
    }
}


//A break statement (declared using the break keyword) tells the compiler that we are done with this switch (or while, do while, or for loop). After a break statement is encountered, execution continues with the statement after the end of the switch block.

//Let’s look at our last example with break statements properly inserted:

switch (2)
{
    case 1: // Does not match -- skipped
        std::cout << 1 << '\n';
        break;
    case 2: // Match!  Execution begins at the next statement
        std::cout << 2 << '\n'; // Execution begins here
        break; // Break terminates the switch statement
    case 3:
        std::cout << 3 << '\n';
        break;
    case 4:
        std::cout << 4 << '\n';
        break;
    default:
        std::cout << 5 << '\n';
        break;
        }
        // Execution resumes here
