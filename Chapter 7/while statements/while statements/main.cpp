//
//  main.cpp
//  while statements
//
//  Created by Md. Shariful Alam on 02/04/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

int main()
{
    int count = 0;
    while (count < 10)
    {
        std::cout << count << " ";
        ++count;
    }
    std::cout << "done!" << '\n';
    
    return 0;
}

//infinite loop example

#include <iostream>

int main()
{
    int count = 0;
    while (count < 10) // this condition will never be false
    std::cout << count << " "; // so this line will repeatedly execute
    
    return 0; // this line will never execute
}

//We can declare an intentional infinite loop like this:


while (1) // or while (true)
{
    // this loop will execute forever
}

//Rule: Always use signed integers for your loop variables.


//nested loop

#include <iostream>

// Loop between 1 and 5
int main()
{
    int outer = 1;
    while (outer <= 5)
    {
        // loop between 1 and outer
        int inner = 1;
        while (inner <= outer)
        std::cout << inner++ << " ";
        
        // print a newline at the end of each row
        std::cout << "\n";
        ++outer;
    }
    
    return 0;
}

