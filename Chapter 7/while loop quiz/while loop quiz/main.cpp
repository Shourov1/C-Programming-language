//
//  main.cpp
//  while loop quiz
//
//  Created by Md. Shariful Alam on 08/04/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

//Write a program that prints out the letters a through z along with their ASCII codes. Hint: to print characters as integers, you have to use a static_cast.

/*
#include <iostream>

int main()
{
    char mychar = 'a';
    while (mychar <= 'z')
    {
        std::cout << mychar  << " " << static_cast<int>(mychar) << "\n";
        ++mychar;
    }
    
    return 0;
}
*/

/*
3) Invert the nested loops example so it prints the following:

5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/

/*
#include <iostream>

// Loop between 5 and 1
int main()
{
    int outer = 5;
    while (outer >= 1)
    {
        // loop between inner and 1
        int inner = outer;
        while (inner >= 1)
        std::cout << inner-- << " ";
        
        // print a newline at the end of each row
        std::cout << "\n";
        --outer;
    }
    
    return 0;
}

 */

/*
 4) Now make the numbers print like this:
 
         1
       2 1
     3 2 1
   4 3 2 1
 5 4 3 2 1
 */


#include <iostream>

// Iterate through every number between 1 and 50


int main()
{
    // There are 5 rows, we can loop from 1 to 5
    int outer = 1;
    
    while (outer <= 5)
    {
        // Row elements appear in descending order, so start from 5 and loop through to 1
        int inner = 5;
        
        while (inner >= 1)
        {
            // The first number in any row is the same as the row number
            // So number should be printed only if it is <= the row number, space otherwise
            if (inner <= outer)
            std::cout << inner << " ";
            else
            std::cout << "  "; // extra spaces purely for formatting purpose
            
            --inner;
        }
        
        // A row has been printed, move to the next row
        std::cout << "\n";
        
        ++outer;
    }
    
    return 0;
}
