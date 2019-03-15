//
//  main.cpp
//  Function return values
//
//  Created by Md. Shariful Alam on 15/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

// int is the return type
// A return type of int means the function will return some integer value to the caller (the specific value is not specified here)
int return5()
{
    // the return statement indicates the specific value that will be returned
    return 5; // return the specific value 5 back to the caller
}

int main()
{
    std::cout << return5() << '\n'; // prints 5
    std::cout << return5() + 2 << '\n'; // prints 7
    
    return5(); // okay: the value 5 is returned, but is ignored since main() doesn't do anything with it
    
    return 0;
}

//In the third statement, function return5 is called again, resulting in the value 5 being returned back to the caller. However, function main does nothing with the return value, so nothing further happens (the return value is ignored).

 //Note: Return values will not be printed unless the caller sends them to the console via std::cout. In the last case above, the return value is not sent to std::cout, so nothing is printed.


