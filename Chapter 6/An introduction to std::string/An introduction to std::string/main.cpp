//
//  main.cpp
//  An introduction to std::string
//
//  Created by Md. Shariful Alam on 31/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <string>
#include <iostream>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin, name); // read a full line of text into name
    
    std::cin.ignore(32767, '\n'); // ignore up to 32767 characters until a \n is removed
    
    std::cout << "Enter your age: ";
    double age {0};
    std::cin >> age; // read a full line of text into age
    
    double name_length {0};
    name_length = name.length();
    
    std::cout << "You've lived " << age / name_length << " years for each letter in your name";
    
    return 0;
}


//You've lived --- years for each letter in your name.
